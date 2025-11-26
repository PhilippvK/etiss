# Generated on Thu, 07 Aug 2025 14:17:26 +0000.
#
# This file contains the CMake build info for the RV32IMACFDV_zvl256b core architecture.
PROJECT(RV32IMACFDV_zvl256b)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACFDV_zvl256bArch.cpp
	RV32IMACFDV_zvl256bArchLib.cpp
	RV32IMACFDV_zvl256bArchSpecificImp.cpp
	RV32IMACFDV_zvl256bFuncs.c
	RV32IMACFDV_zvl256bInstr.cpp
	RV32IMACFDV_zvl256b_RV32IInstr.cpp
	RV32IMACFDV_zvl256b_RV32ICInstr.cpp
	RV32IMACFDV_zvl256b_RV32MInstr.cpp
	RV32IMACFDV_zvl256b_RVZve32xInstr.cpp
	RV32IMACFDV_zvl256b_RVZve64xInstr.cpp
	RV32IMACFDV_zvl256b_RV32FInstr.cpp
	RV32IMACFDV_zvl256b_RVZve32fInstr.cpp
	RV32IMACFDV_zvl256b_RV32FCInstr.cpp
	RV32IMACFDV_zvl256b_ZifenceiInstr.cpp
	RV32IMACFDV_zvl256b_tum_csrInstr.cpp
	RV32IMACFDV_zvl256b_tum_retInstr.cpp
	RV32IMACFDV_zvl256b_RV32AInstr.cpp
	RV32IMACFDV_zvl256b_tum_rvaInstr.cpp
	RV32IMACFDV_zvl256b_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})