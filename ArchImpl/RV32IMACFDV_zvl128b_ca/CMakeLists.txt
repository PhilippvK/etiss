# Generated on Thu, 07 Aug 2025 14:17:26 +0000.
#
# This file contains the CMake build info for the RV32IMACFDV_zvl128b_ca core architecture.
PROJECT(RV32IMACFDV_zvl128b_ca)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACFDV_zvl128b_caArch.cpp
	RV32IMACFDV_zvl128b_caArchLib.cpp
	RV32IMACFDV_zvl128b_caArchSpecificImp.cpp
	RV32IMACFDV_zvl128b_caFuncs.c
	RV32IMACFDV_zvl128b_caInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32IInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32ICInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32MInstr.cpp
	RV32IMACFDV_zvl128b_ca_RVZve32xInstr.cpp
	RV32IMACFDV_zvl128b_ca_RVZve64xInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32FInstr.cpp
	RV32IMACFDV_zvl128b_ca_RVZve32fInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32FCInstr.cpp
	RV32IMACFDV_zvl128b_ca_ZifenceiInstr.cpp
	RV32IMACFDV_zvl128b_ca_tum_csrInstr.cpp
	RV32IMACFDV_zvl128b_ca_tum_retInstr.cpp
	RV32IMACFDV_zvl128b_ca_RV32AInstr.cpp
	RV32IMACFDV_zvl128b_ca_tum_rvaInstr.cpp
	RV32IMACFDV_zvl128b_ca_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})