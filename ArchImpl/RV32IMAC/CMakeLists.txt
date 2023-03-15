# Generated on Wed, 15 Mar 2023 15:20:41 +0100.
#
# This file contains the CMake build info for the RV32IMAC core architecture.

PROJECT(RV32IMAC)

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACArch.cpp
	RV32IMACArchLib.cpp
	RV32IMACArchSpecificImp.cpp
	RV32IMACInstr.cpp
	RV32IMAC_RV32IInstr.cpp
	RV32IMAC_RV32ICInstr.cpp
	RV32IMAC_RV32MInstr.cpp
	RV32IMAC_ZifenceiInstr.cpp
	RV32IMAC_tum_csrInstr.cpp
	RV32IMAC_tum_retInstr.cpp
	RV32IMAC_RV32AInstr.cpp
	RV32IMAC_tum_rvaInstr.cpp
)

FILE(COPY "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}")
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})