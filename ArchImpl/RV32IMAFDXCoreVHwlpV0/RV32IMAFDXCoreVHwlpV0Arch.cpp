/**
 * Generated on Fri, 17 Nov 2023 19:17:42 +0100.
 *
 * This file contains the architecture class for the RV32IMAFDXCoreVHwlpV0 core architecture.
 */

/*********************************************************************************************************************************

* Modification guidelines:

	 1. The initial value of SP register should be initialized by ctr0.S/board.S. If not, it could be initialized
		 through utility class etiss::VirtualStruct::Field.

	 2. Debug mode print out all assignment results. GDB in 8 is prefered.

	 3. Manually copy the content in bracket ["return ETISS_RETURNCODE_CPUFINISHED; \n"] to terminating instruction,
		 otherwise the emulation can not be ended.

	 4. If subset of encoding error occurs, it means the format of the encoding in the input model was not appropriate

	 5. If the PC register points to wrong address, please notice that some assembly may cause branch operation
		 implicitly such as "MOV Rd Rn" in ARMv6-M

	 6. If a variable is the result of dynamic slicing such as, var_1 = var_2<Hshift-1..Lshift-2>, the size would be
		 calculated during process (if possible), otherwise it is assumed to be the register size. Problems may occur when
		 var_1 encounters bit manipulation such as "~" due to bit expansion. To change the nml model with explicit slicing
		 e.g var_1 = val_2<3..0> or avoid bit manipulation for dynamic sliced variable. Otherwise, you have to manually
		 correct it.

	 7. Implementation dependent functionalities such as exception handling should be manully added. Corresponding interfaces
		 are provided in RV32IMAFDXCoreVHwlpV0ArchSpecificImp.h

	 8. RV32IMAFDXCoreVHwlpV0GDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMAFDXCoreVHwlpV0Arch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpV0Funcs.h"

#define RV32IMAFDXCoreVHwlpV0_DEBUG_CALL 0
using namespace etiss ;
using namespace etiss::instr ;

RV32IMAFDXCoreVHwlpV0Arch::RV32IMAFDXCoreVHwlpV0Arch():CPUArch("RV32IMAFDXCoreVHwlpV0")
{
	headers_.insert("Arch/RV32IMAFDXCoreVHwlpV0/RV32IMAFDXCoreVHwlpV0.h");
}

const std::set<std::string> & RV32IMAFDXCoreVHwlpV0Arch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMAFDXCoreVHwlpV0Arch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMAFDXCoreVHwlpV0() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMAFDXCoreVHwlpV0Arch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMAFDXCoreVHwlpV0));
	RV32IMAFDXCoreVHwlpV0 * rv32imafdxcorevhwlpv0cpu = (RV32IMAFDXCoreVHwlpV0 *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		rv32imafdxcorevhwlpv0cpu->ins_X[i] = 0;
		rv32imafdxcorevhwlpv0cpu->X[i] = &rv32imafdxcorevhwlpv0cpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		rv32imafdxcorevhwlpv0cpu->ins_CSR[i] = 0;
		rv32imafdxcorevhwlpv0cpu->CSR[i] = &rv32imafdxcorevhwlpv0cpu->ins_CSR[i];
	}

	rv32imafdxcorevhwlpv0cpu->ZERO = 0;
	rv32imafdxcorevhwlpv0cpu->RA = 0;
	rv32imafdxcorevhwlpv0cpu->SP = 0;
	rv32imafdxcorevhwlpv0cpu->GP = 0;
	rv32imafdxcorevhwlpv0cpu->TP = 0;
	rv32imafdxcorevhwlpv0cpu->T0 = 0;
	rv32imafdxcorevhwlpv0cpu->T1 = 0;
	rv32imafdxcorevhwlpv0cpu->T2 = 0;
	rv32imafdxcorevhwlpv0cpu->S0 = 0;
	rv32imafdxcorevhwlpv0cpu->S1 = 0;
	rv32imafdxcorevhwlpv0cpu->A0 = 0;
	rv32imafdxcorevhwlpv0cpu->A1 = 0;
	rv32imafdxcorevhwlpv0cpu->A2 = 0;
	rv32imafdxcorevhwlpv0cpu->A3 = 0;
	rv32imafdxcorevhwlpv0cpu->A4 = 0;
	rv32imafdxcorevhwlpv0cpu->A5 = 0;
	rv32imafdxcorevhwlpv0cpu->A6 = 0;
	rv32imafdxcorevhwlpv0cpu->A7 = 0;
	rv32imafdxcorevhwlpv0cpu->S2 = 0;
	rv32imafdxcorevhwlpv0cpu->S3 = 0;
	rv32imafdxcorevhwlpv0cpu->S4 = 0;
	rv32imafdxcorevhwlpv0cpu->S5 = 0;
	rv32imafdxcorevhwlpv0cpu->S6 = 0;
	rv32imafdxcorevhwlpv0cpu->S7 = 0;
	rv32imafdxcorevhwlpv0cpu->S8 = 0;
	rv32imafdxcorevhwlpv0cpu->S9 = 0;
	rv32imafdxcorevhwlpv0cpu->S10 = 0;
	rv32imafdxcorevhwlpv0cpu->S11 = 0;
	rv32imafdxcorevhwlpv0cpu->T3 = 0;
	rv32imafdxcorevhwlpv0cpu->T4 = 0;
	rv32imafdxcorevhwlpv0cpu->T5 = 0;
	rv32imafdxcorevhwlpv0cpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		rv32imafdxcorevhwlpv0cpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		rv32imafdxcorevhwlpv0cpu->RES[i] = 0;
	}
	rv32imafdxcorevhwlpv0cpu->PRIV = 0;
	rv32imafdxcorevhwlpv0cpu->DPC = 0;
	rv32imafdxcorevhwlpv0cpu->FCSR = 0;
	rv32imafdxcorevhwlpv0cpu->lpstart_0 = 0;
	rv32imafdxcorevhwlpv0cpu->lpend_0 = 0;
	rv32imafdxcorevhwlpv0cpu->lpcount_0 = 0;
	rv32imafdxcorevhwlpv0cpu->lpstart_1 = 0;
	rv32imafdxcorevhwlpv0cpu->lpend_1 = 0;
	rv32imafdxcorevhwlpv0cpu->lpcount_1 = 0;
	rv32imafdxcorevhwlpv0cpu->MSTATUS = 0;
	rv32imafdxcorevhwlpv0cpu->MIE = 0;
	rv32imafdxcorevhwlpv0cpu->MIP = 0;
	for (int i = 0; i < 32; ++i) {
		rv32imafdxcorevhwlpv0cpu->F[i] = 0;
	}
	rv32imafdxcorevhwlpv0cpu->RES_ADDR = 0;

 	rv32imafdxcorevhwlpv0cpu->X[0] = &rv32imafdxcorevhwlpv0cpu->ZERO;
 	rv32imafdxcorevhwlpv0cpu->X[1] = &rv32imafdxcorevhwlpv0cpu->RA;
 	rv32imafdxcorevhwlpv0cpu->X[2] = &rv32imafdxcorevhwlpv0cpu->SP;
 	rv32imafdxcorevhwlpv0cpu->X[3] = &rv32imafdxcorevhwlpv0cpu->GP;
 	rv32imafdxcorevhwlpv0cpu->X[4] = &rv32imafdxcorevhwlpv0cpu->TP;
 	rv32imafdxcorevhwlpv0cpu->X[5] = &rv32imafdxcorevhwlpv0cpu->T0;
 	rv32imafdxcorevhwlpv0cpu->X[6] = &rv32imafdxcorevhwlpv0cpu->T1;
 	rv32imafdxcorevhwlpv0cpu->X[7] = &rv32imafdxcorevhwlpv0cpu->T2;
 	rv32imafdxcorevhwlpv0cpu->X[8] = &rv32imafdxcorevhwlpv0cpu->S0;
 	rv32imafdxcorevhwlpv0cpu->X[9] = &rv32imafdxcorevhwlpv0cpu->S1;
 	rv32imafdxcorevhwlpv0cpu->X[10] = &rv32imafdxcorevhwlpv0cpu->A0;
 	rv32imafdxcorevhwlpv0cpu->X[11] = &rv32imafdxcorevhwlpv0cpu->A1;
 	rv32imafdxcorevhwlpv0cpu->X[12] = &rv32imafdxcorevhwlpv0cpu->A2;
 	rv32imafdxcorevhwlpv0cpu->X[13] = &rv32imafdxcorevhwlpv0cpu->A3;
 	rv32imafdxcorevhwlpv0cpu->X[14] = &rv32imafdxcorevhwlpv0cpu->A4;
 	rv32imafdxcorevhwlpv0cpu->X[15] = &rv32imafdxcorevhwlpv0cpu->A5;
 	rv32imafdxcorevhwlpv0cpu->X[16] = &rv32imafdxcorevhwlpv0cpu->A6;
 	rv32imafdxcorevhwlpv0cpu->X[17] = &rv32imafdxcorevhwlpv0cpu->A7;
 	rv32imafdxcorevhwlpv0cpu->X[18] = &rv32imafdxcorevhwlpv0cpu->S2;
 	rv32imafdxcorevhwlpv0cpu->X[19] = &rv32imafdxcorevhwlpv0cpu->S3;
 	rv32imafdxcorevhwlpv0cpu->X[20] = &rv32imafdxcorevhwlpv0cpu->S4;
 	rv32imafdxcorevhwlpv0cpu->X[21] = &rv32imafdxcorevhwlpv0cpu->S5;
 	rv32imafdxcorevhwlpv0cpu->X[22] = &rv32imafdxcorevhwlpv0cpu->S6;
 	rv32imafdxcorevhwlpv0cpu->X[23] = &rv32imafdxcorevhwlpv0cpu->S7;
 	rv32imafdxcorevhwlpv0cpu->X[24] = &rv32imafdxcorevhwlpv0cpu->S8;
 	rv32imafdxcorevhwlpv0cpu->X[25] = &rv32imafdxcorevhwlpv0cpu->S9;
 	rv32imafdxcorevhwlpv0cpu->X[26] = &rv32imafdxcorevhwlpv0cpu->S10;
 	rv32imafdxcorevhwlpv0cpu->X[27] = &rv32imafdxcorevhwlpv0cpu->S11;
 	rv32imafdxcorevhwlpv0cpu->X[28] = &rv32imafdxcorevhwlpv0cpu->T3;
 	rv32imafdxcorevhwlpv0cpu->X[29] = &rv32imafdxcorevhwlpv0cpu->T4;
 	rv32imafdxcorevhwlpv0cpu->X[30] = &rv32imafdxcorevhwlpv0cpu->T5;
 	rv32imafdxcorevhwlpv0cpu->X[31] = &rv32imafdxcorevhwlpv0cpu->T6;
 	rv32imafdxcorevhwlpv0cpu->CSR[3] = &rv32imafdxcorevhwlpv0cpu->FCSR;
 	rv32imafdxcorevhwlpv0cpu->CSR[3264] = &rv32imafdxcorevhwlpv0cpu->lpstart_0;
 	rv32imafdxcorevhwlpv0cpu->CSR[3265] = &rv32imafdxcorevhwlpv0cpu->lpend_0;
 	rv32imafdxcorevhwlpv0cpu->CSR[3266] = &rv32imafdxcorevhwlpv0cpu->lpcount_0;
 	rv32imafdxcorevhwlpv0cpu->CSR[3268] = &rv32imafdxcorevhwlpv0cpu->lpstart_1;
 	rv32imafdxcorevhwlpv0cpu->CSR[3269] = &rv32imafdxcorevhwlpv0cpu->lpend_1;
 	rv32imafdxcorevhwlpv0cpu->CSR[3270] = &rv32imafdxcorevhwlpv0cpu->lpcount_1;
 	rv32imafdxcorevhwlpv0cpu->CSR[768] = &rv32imafdxcorevhwlpv0cpu->MSTATUS;
 	rv32imafdxcorevhwlpv0cpu->CSR[772] = &rv32imafdxcorevhwlpv0cpu->MIE;
 	rv32imafdxcorevhwlpv0cpu->CSR[836] = &rv32imafdxcorevhwlpv0cpu->MIP;

 	rv32imafdxcorevhwlpv0cpu->PRIV = 3;
 	rv32imafdxcorevhwlpv0cpu->DPC = 0;
 	*rv32imafdxcorevhwlpv0cpu->CSR[0] = 11;
	*rv32imafdxcorevhwlpv0cpu->CSR[256] = 11;
	*rv32imafdxcorevhwlpv0cpu->CSR[768] = 11;
	*rv32imafdxcorevhwlpv0cpu->CSR[769] = 1075056941;
	*rv32imafdxcorevhwlpv0cpu->CSR[3088] = 3;
	*rv32imafdxcorevhwlpv0cpu->CSR[772] = 4294966203;
	*rv32imafdxcorevhwlpv0cpu->CSR[260] = 4294964019;
	*rv32imafdxcorevhwlpv0cpu->CSR[4] = 4294963473;
 	rv32imafdxcorevhwlpv0cpu->RES_ADDR = -1;
}

void RV32IMAFDXCoreVHwlpV0Arch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMAFDXCoreVHwlpV0 *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMAFDXCoreVHwlpV0Arch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMAFDXCoreVHwlpV0Arch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMAFDXCoreVHwlpV0.h)
*/
const std::set<std::string> & RV32IMAFDXCoreVHwlpV0Arch::getHeaders() const
{
	return headers_ ;
}

void RV32IMAFDXCoreVHwlpV0Arch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAFDXCoreVHwlpV0/RV32IMAFDXCoreVHwlpV0.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAFDXCoreVHwlpV0/RV32IMAFDXCoreVHwlpV0Funcs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMAFDXCoreVHwlpV0Arch::getGDBCore()
{
	return gdbcore_;
}

const char * const reg_name[] =
{
	"X0",
	"X1",
	"X2",
	"X3",
	"X4",
	"X5",
	"X6",
	"X7",
	"X8",
	"X9",
	"X10",
	"X11",
	"X12",
	"X13",
	"X14",
	"X15",
	"X16",
	"X17",
	"X18",
	"X19",
	"X20",
	"X21",
	"X22",
	"X23",
	"X24",
	"X25",
	"X26",
	"X27",
	"X28",
	"X29",
	"X30",
	"X31",
};

etiss::instr::InstructionGroup ISA32_RV32IMAFDXCoreVHwlpV0("ISA32_RV32IMAFDXCoreVHwlpV0", 32);
etiss::instr::InstructionClass ISA32_RV32IMAFDXCoreVHwlpV0Class(1, "ISA32_RV32IMAFDXCoreVHwlpV0", 32, ISA32_RV32IMAFDXCoreVHwlpV0);

etiss::instr::InstructionCollection RV32IMAFDXCoreVHwlpV0ISA("RV32IMAFDXCoreVHwlpV0ISA", ISA32_RV32IMAFDXCoreVHwlpV0Class);