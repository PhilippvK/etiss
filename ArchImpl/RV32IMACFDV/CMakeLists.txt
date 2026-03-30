# Generated on Mon, 30 Mar 2026 14:43:05 +0200.
#
# This file contains the CMake build info for the RV32IMACFDV core architecture.

PROJECT(RV32IMACFDV)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACFDVArch.cpp
	RV32IMACFDVArchLib.cpp
	RV32IMACFDVArchSpecificImp.cpp
	RV32IMACFDVFuncs.c
	RV32IMACFDVInstr.cpp
	RV32IMACFDV_RV32IInstr.cpp
	RV32IMACFDV_RV32ICInstr.cpp
	RV32IMACFDV_RV32MInstr.cpp
	RV32IMACFDV_RVZve32xInstr.cpp
	RV32IMACFDV_RVZve64xInstr.cpp
	RV32IMACFDV_RV32FInstr.cpp
	RV32IMACFDV_RVZve32fInstr.cpp
	RV32IMACFDV_RV32FCInstr.cpp
	RV32IMACFDV_RV32DInstr.cpp
	RV32IMACFDV_RV32DCInstr.cpp
	RV32IMACFDV_ZifenceiInstr.cpp
	RV32IMACFDV_tum_csrInstr.cpp
	RV32IMACFDV_tum_retInstr.cpp
	RV32IMACFDV_RV32AInstr.cpp
	RV32IMACFDV_tum_rvaInstr.cpp
	RV32IMACFDV_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

# handle gdbserver xml files
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/xml")
	add_custom_target(copy_${PROJECT_NAME}_xml ALL
		COMMAND ${CMAKE_COMMAND} -E make_directory
			"${CMAKE_CURRENT_LIST_DIR}/xml"
		COMMAND ${CMAKE_COMMAND} -E copy_directory
			"${CMAKE_CURRENT_LIST_DIR}/xml"
			"${ETISS_BINARY_DIR}/xml/${PROJECT_NAME}"
	)
	add_dependencies(${PROJECT_NAME} copy_${PROJECT_NAME}_xml)
	install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/xml/ DESTINATION xml/${PROJECT_NAME})
endif()

ETISSPluginArch(${PROJECT_NAME})
