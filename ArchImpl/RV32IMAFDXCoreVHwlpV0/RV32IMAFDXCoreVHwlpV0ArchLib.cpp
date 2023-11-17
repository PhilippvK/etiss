/**
 * Generated on Fri, 17 Nov 2023 19:46:42 +0100.
 *
 * This file contains the library interface for the RV32IMAFDXCoreVHwlpV0 core architecture.
 */

// define a name for this library. this will be used to avoid name clashes with other libraries. in this example the library is named "X".
// IMPORTANT this name MUST match the library name: e.g. X -> libX.so

#define ETISS_LIBNAME RV32IMAFDXCoreVHwlpV0
#include "etiss/helper/CPUArchLibrary.h" // defines the following functions
#include "RV32IMAFDXCoreVHwlpV0Arch.h"
extern "C" {

	ETISS_LIBRARYIF_VERSION_FUNC_IMPL

	ETISS_PLUGIN_EXPORT unsigned RV32IMAFDXCoreVHwlpV0_countCPUArch()
	{
//TODO
		return 1; // number of cpu architectures provided
	}
	ETISS_PLUGIN_EXPORT const char * RV32IMAFDXCoreVHwlpV0_nameCPUArch(unsigned index)
	{
//TODO
		switch (index)
		{
		case 0:
			return "RV32IMAFDXCoreVHwlpV0";
		default:
			return "";
		}
	}
	ETISS_PLUGIN_EXPORT etiss::CPUArch* RV32IMAFDXCoreVHwlpV0_createCPUArch(unsigned index,std::map<std::string,std::string> options)
	{
//TODO
		switch (index)
		{
		case 0:
			return new RV32IMAFDXCoreVHwlpV0Arch();
		default:
			return 0;
		}
	}
	ETISS_PLUGIN_EXPORT void RV32IMAFDXCoreVHwlpV0_deleteCPUArch(etiss::CPUArch* arch)
	{
		delete arch;
	}
}
