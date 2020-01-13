SET(PULPINO_TOOLCHAIN_DIR ${CMAKE_CURRENT_LIST_DIR})

MACRO(ADD_LIBRARY_PULPINO TARGET_NAME)
    SET(VP_SUB_DIR ${VP_DIR}/target_sw/riscv/baremetal)
    SET(PULPINO_LIB ${VP_SUB_DIR}/pulpino/sw)
    SET(PULPINO_INCLUDES ${PULPINO_LIB}/libs/ ${PULPINO_LIB}/libs/sys_lib/inc)
    SET(ARGS "${ARGN}")
    SET(SRC_FILES ${ARGS})
    ADD_LIBRARY(${TARGET_NAME} ${SRC_FILES})
    TARGET_INCLUDE_DIRECTORIES(${TARGET_NAME} PUBLIC ${PULPINO_INCLUDES})
    TARGET_COMPILE_OPTIONS(${TARGET_NAME} PUBLIC
        $<$<COMPILE_LANGUAGE:CXX>:-std=c++17>
        $<$<COMPILE_LANGUAGE:C>:-std=gnu99>
    )
ENDMACRO()

MACRO(ADD_EXECUTABLE_PULPINO_INTERNAL TARGET_NAME ADD_PLATFORM_FILES)
    SET(PULPINO_LIB ${PULPINO_TOOLCHAIN_DIR}/pulpino/sw)
    SET(PULPINO_LIB_TUMEDA ${PULPINO_TOOLCHAIN_DIR}/pulpino_tumeda)
    set(PULPINO_INCLUDES
        ${PULPINO_LIB}/libs
        ${PULPINO_LIB}/libs/sys_lib/inc
        ${PULPINO_LIB}/libs/string_lib/inc
    )

    # to forbid cmake running a RISCV program on host for initial compiler-probe
    SET(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

    SET(CMAKE_EXE_LINKER_FLAGS
        "${CMAKE_EXE_LINKER_FLAGS} -nostartfiles \
        -L ${PULPINO_LIB}/ref/ \
        -T ${PULPINO_LIB_TUMEDA}/link.ld"
    )

    SET(CMAKE_TOOLCHAIN_FILE
        "${PULPINO_LIB_TUMEDA}/toolchain.cmake"
    )

    PROJECT(${TARGET_NAME} LANGUAGES C CXX ASM)

    IF("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
        ADD_DEFINITIONS(-DDEBUG_SYSTEM)
    ENDIF()

    IF(NOT PULPINO_RAM_START)
        SET(PULPINO_RAM_START 0x80000)
    ENDIF()
    IF(NOT PULPINO_RAM_SIZE)
        SET(PULPINO_RAM_SIZE 0x80000)
    ENDIF()
    SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Xlinker --defsym=PULPINO_RAM_START=${PULPINO_RAM_START}")
    SET(CMAKE_EXE_LINKER_FLAGE "${CMAKE_EXE_LINKER_FLAGS} -Xlinker --defsym=PULPINO_RAM_SIZE=${PULPINO_RAM_SIZE}")
    MATH(EXPR DD_ARG_SKIP "${PULPINO_RAM_START}" OUTPUT_FORMAT DECIMAL)

    SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    SET(ARGS "${ARGN}")
    SET(SRC_FILES ${ARGS})
    IF(${ADD_PLATFORM_FILES})
        LIST(APPEND SRC_FILES
            ${PULPINO_LIB_TUMEDA}/crt0.riscv.S
            ${PULPINO_LIB_TUMEDA}/syscalls.c
            ${PULPINO_LIB}/libs/sys_lib/src/uart.c
            ${PULPINO_LIB}/libs/sys_lib/src/int.c
            ${PULPINO_LIB}/libs/sys_lib/src/exceptions.c
            ${PULPINO_LIB}/libs/sys_lib/src/i2c.c
            ${PULPINO_LIB}/libs/sys_lib/src/gpio.c
            ${PULPINO_LIB}/libs/sys_lib/src/spi.c
            ${PULPINO_LIB}/libs/sys_lib/src/timer.c
        )
    ENDIF()

    ADD_EXECUTABLE(${TARGET_NAME} ${SRC_FILES})
    TARGET_INCLUDE_DIRECTORIES(${TARGET_NAME} PUBLIC ${PULPINO_INCLUDES})
    TARGET_COMPILE_OPTIONS(${TARGET_NAME} PUBLIC
        $<$<COMPILE_LANGUAGE:CXX>:-std=c++17>
        $<$<COMPILE_LANGUAGE:C>:-std=gnu99>
    )
    IF(NOT CMAKE_OBJCOPY)
        # CMake does not set this on first invocation, because the toolchain file is included
        # in the CMakeLists.txt when it should be given as cmdline argument.
        STRING(REGEX REPLACE "gcc$" "objcopy" CMAKE_OBJCOPY ${CMAKE_C_COMPILER})
    ENDIF()
    IF(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
        SET(DD_CMD ${PULPINO_TOOLCHAIN_DIR}/../../../../bin/copy_binary.exe)
    ELSE()
        SET(DD_CMD dd)
    ENDIF()
    ADD_CUSTOM_COMMAND(TARGET ${TARGET_NAME} POST_BUILD
        COMMAND ${CMAKE_OBJCOPY}
            ARGS -O binary ${TARGET_NAME} ${TARGET_NAME}.bin
        COMMAND ${DD_CMD}
            ARGS bs=1 count=524288 if=${TARGET_NAME}.bin of=${TARGET_NAME}.rom
        COMMAND ${DD_CMD}
            ARGS bs=1 skip=${DD_ARG_SKIP} if=${TARGET_NAME}.bin of=${TARGET_NAME}.ram
        WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    )
    SET_PROPERTY(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES
        "${TARGET_NAME}.bin"
        "${TARGET_NAME}.ram"
        "${TARGET_NAME}.rom"
    )
ENDMACRO()

MACRO(ADD_EXECUTABLE_PULPINO TARGET_NAME)
    ADD_EXECUTABLE_PULPINO_INTERNAL(${TARGET_NAME} ON ${ARGN})
ENDMACRO()

MACRO(ADD_EXECUTABLE_PULPINO_RAW TARGET_NAME)
    ADD_EXECUTABLE_PULPINO_INTERNAL(${TARGET_NAME} OFF ${ARGN})
ENDMACRO()