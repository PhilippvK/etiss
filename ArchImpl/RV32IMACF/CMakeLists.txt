# Generated on Wed, 15 Mar 2023 15:20:41 +0100.
#
# This file contains the CMake build info for the RV32IMACF core architecture.

PROJECT(RV32IMACF)

ADD_LIBRARY(${PROJECT_NAME} SHARED
	RV32IMACFArch.cpp
	RV32IMACFArchLib.cpp
	RV32IMACFArchSpecificImp.cpp
	RV32IMACFInstr.cpp
	RV32IMACF_RV32IInstr.cpp
	RV32IMACF_RV32ICInstr.cpp
	RV32IMACF_RV32MInstr.cpp
	RV32IMACF_RV32FInstr.cpp
	RV32IMACF_RV32FCInstr.cpp
	RV32IMACF_ZifenceiInstr.cpp
	RV32IMACF_tum_csrInstr.cpp
	RV32IMACF_tum_retInstr.cpp
	RV32IMACF_RV32AInstr.cpp
	RV32IMACF_tum_rvaInstr.cpp
)

FILE(COPY "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "${ETISS_BINARY_DIR}/include/jit/Arch/${PROJECT_NAME}")
INSTALL(FILES "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}Funcs.h" DESTINATION "include/jit/Arch/${PROJECT_NAME}")

ETISSPluginArch(${PROJECT_NAME})