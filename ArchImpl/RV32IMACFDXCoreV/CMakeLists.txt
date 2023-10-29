# Generated on Sun, 29 Oct 2023 22:27:54 +0100.
#
# This file contains the CMake build info for the RV32IMACFDXCoreV core architecture.

PROJECT(RV32IMACFDXCoreV)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACFDXCoreVArch.cpp
	RV32IMACFDXCoreVArchLib.cpp
	RV32IMACFDXCoreVArchSpecificImp.cpp
	RV32IMACFDXCoreVInstr.cpp
	RV32IMACFDXCoreV_RV32IInstr.cpp
	RV32IMACFDXCoreV_RV32ICInstr.cpp
	RV32IMACFDXCoreV_RV32MInstr.cpp
	RV32IMACFDXCoreV_RV32FInstr.cpp
	RV32IMACFDXCoreV_RV32FCInstr.cpp
	RV32IMACFDXCoreV_RV32DInstr.cpp
	RV32IMACFDXCoreV_RV32DCInstr.cpp
	RV32IMACFDXCoreV_ZifenceiInstr.cpp
	RV32IMACFDXCoreV_XCoreVSimdInstr.cpp
	RV32IMACFDXCoreV_XCoreVBitmanipInstr.cpp
	RV32IMACFDXCoreV_XCoreVAluInstr.cpp
	RV32IMACFDXCoreV_XCoreVBranchImmediateInstr.cpp
	RV32IMACFDXCoreV_XCoreVMemInstr.cpp
	RV32IMACFDXCoreV_XCoreVMacInstr.cpp
	RV32IMACFDXCoreV_tum_csrInstr.cpp
	RV32IMACFDXCoreV_tum_retInstr.cpp
	RV32IMACFDXCoreV_RV32AInstr.cpp
	RV32IMACFDXCoreV_tum_rvaInstr.cpp
	RV32IMACFDXCoreV_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})