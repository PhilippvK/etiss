/**
 * Generated on Wed, 15 Nov 2023 16:34:15 +0100.
 *
 * This file contains the library interface for the RV32IMAFDXCoreVHwlp core architecture.
 */

// define a name for this library. this will be used to avoid name clashes with other libraries. in this example the library is named "X".
// IMPORTANT this name MUST match the library name: e.g. X -> libX.so

#define ETISS_LIBNAME RV32IMAFDXCoreVHwlp
#include "etiss/helper/CPUArchLibrary.h" // defines the following functions
#include "RV32IMAFDXCoreVHwlpArch.h"
extern "C" {

	ETISS_LIBRARYIF_VERSION_FUNC_IMPL

	ETISS_PLUGIN_EXPORT unsigned RV32IMAFDXCoreVHwlp_countCPUArch()
	{
//TODO
		return 1; // number of cpu architectures provided
	}
	ETISS_PLUGIN_EXPORT const char * RV32IMAFDXCoreVHwlp_nameCPUArch(unsigned index)
	{
//TODO
		switch (index)
		{
		case 0:
			return "RV32IMAFDXCoreVHwlp";
		default:
			return "";
		}
	}
	ETISS_PLUGIN_EXPORT etiss::CPUArch* RV32IMAFDXCoreVHwlp_createCPUArch(unsigned index,std::map<std::string,std::string> options)
	{
//TODO
		switch (index)
		{
		case 0:
			return new RV32IMAFDXCoreVHwlpArch();
		default:
			return 0;
		}
	}
	ETISS_PLUGIN_EXPORT void RV32IMAFDXCoreVHwlp_deleteCPUArch(etiss::CPUArch* arch)
	{
		delete arch;
	}
}
