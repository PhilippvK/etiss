# Generated on Wed, 15 Nov 2023 17:24:25 +0100.
#
# This file contains the CMake build info for the RV32IMAFDXCoreVHwlp core architecture.

PROJECT(RV32IMAFDXCoreVHwlp)

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH "\$ORIGIN/../../include/jit/etiss/jit")

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMAFDXCoreVHwlpArch.cpp
	RV32IMAFDXCoreVHwlpArchLib.cpp
	RV32IMAFDXCoreVHwlpArchSpecificImp.cpp
	RV32IMAFDXCoreVHwlpInstr.cpp
	RV32IMAFDXCoreVHwlp_RV32IInstr.cpp
	RV32IMAFDXCoreVHwlp_RV32MInstr.cpp
	RV32IMAFDXCoreVHwlp_RV32FInstr.cpp
	RV32IMAFDXCoreVHwlp_RV32DInstr.cpp
	RV32IMAFDXCoreVHwlp_ZifenceiInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVSimdInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVBitmanipInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVAluInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVBranchImmediateInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVMemInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVMacInstr.cpp
	RV32IMAFDXCoreVHwlp_XCoreVHwlpInstr.cpp
	RV32IMAFDXCoreVHwlp_tum_csrInstr.cpp
	RV32IMAFDXCoreVHwlp_tum_retInstr.cpp
	RV32IMAFDXCoreVHwlp_RV32AInstr.cpp
	RV32IMAFDXCoreVHwlp_tum_rvaInstr.cpp
	RV32IMAFDXCoreVHwlp_tum_semihostingInstr.cpp
)

add_custom_command(
	TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy
		"${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h"
		"${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}"
)
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})