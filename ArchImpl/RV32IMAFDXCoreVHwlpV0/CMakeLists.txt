# Generated on Fri, 17 Nov 2023 19:46:42 +0100.
#
# This file contains the CMake build info for the RV32IMAFDXCoreVHwlpV0 core architecture.

PROJECT(RV32IMAFDXCoreVHwlpV0)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMAFDXCoreVHwlpV0Arch.cpp
	RV32IMAFDXCoreVHwlpV0ArchLib.cpp
	RV32IMAFDXCoreVHwlpV0ArchSpecificImp.cpp
	RV32IMAFDXCoreVHwlpV0Instr.cpp
	RV32IMAFDXCoreVHwlpV0_RV32IInstr.cpp
	RV32IMAFDXCoreVHwlpV0_RV32MInstr.cpp
	RV32IMAFDXCoreVHwlpV0_RV32FInstr.cpp
	RV32IMAFDXCoreVHwlpV0_RV32DInstr.cpp
	RV32IMAFDXCoreVHwlpV0_ZifenceiInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVSimdInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVBitmanipInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVAluInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVBranchImmediateInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVMemInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVMacInstr.cpp
	RV32IMAFDXCoreVHwlpV0_XCoreVHwlpV0Instr.cpp
	RV32IMAFDXCoreVHwlpV0_tum_csrInstr.cpp
	RV32IMAFDXCoreVHwlpV0_tum_retInstr.cpp
	RV32IMAFDXCoreVHwlpV0_RV32AInstr.cpp
	RV32IMAFDXCoreVHwlpV0_tum_rvaInstr.cpp
	RV32IMAFDXCoreVHwlpV0_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})