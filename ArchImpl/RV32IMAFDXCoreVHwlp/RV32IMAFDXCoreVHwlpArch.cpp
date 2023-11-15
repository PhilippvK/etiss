/**
 * Generated on Wed, 15 Nov 2023 17:01:22 +0100.
 *
 * This file contains the architecture class for the RV32IMAFDXCoreVHwlp core architecture.
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
		 are provided in RV32IMAFDXCoreVHwlpArchSpecificImp.h

	 8. RV32IMAFDXCoreVHwlpGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMAFDXCoreVHwlpArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpFuncs.h"

#define RV32IMAFDXCoreVHwlp_DEBUG_CALL 0
using namespace etiss ;
using namespace etiss::instr ;

RV32IMAFDXCoreVHwlpArch::RV32IMAFDXCoreVHwlpArch():CPUArch("RV32IMAFDXCoreVHwlp")
{
	headers_.insert("Arch/RV32IMAFDXCoreVHwlp/RV32IMAFDXCoreVHwlp.h");
}

const std::set<std::string> & RV32IMAFDXCoreVHwlpArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMAFDXCoreVHwlpArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMAFDXCoreVHwlp() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMAFDXCoreVHwlpArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMAFDXCoreVHwlp));
	RV32IMAFDXCoreVHwlp * rv32imafdxcorevhwlpcpu = (RV32IMAFDXCoreVHwlp *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		rv32imafdxcorevhwlpcpu->ins_X[i] = 0;
		rv32imafdxcorevhwlpcpu->X[i] = &rv32imafdxcorevhwlpcpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		rv32imafdxcorevhwlpcpu->ins_CSR[i] = 0;
		rv32imafdxcorevhwlpcpu->CSR[i] = &rv32imafdxcorevhwlpcpu->ins_CSR[i];
	}

	rv32imafdxcorevhwlpcpu->ZERO = 0;
	rv32imafdxcorevhwlpcpu->RA = 0;
	rv32imafdxcorevhwlpcpu->SP = 0;
	rv32imafdxcorevhwlpcpu->GP = 0;
	rv32imafdxcorevhwlpcpu->TP = 0;
	rv32imafdxcorevhwlpcpu->T0 = 0;
	rv32imafdxcorevhwlpcpu->T1 = 0;
	rv32imafdxcorevhwlpcpu->T2 = 0;
	rv32imafdxcorevhwlpcpu->S0 = 0;
	rv32imafdxcorevhwlpcpu->S1 = 0;
	rv32imafdxcorevhwlpcpu->A0 = 0;
	rv32imafdxcorevhwlpcpu->A1 = 0;
	rv32imafdxcorevhwlpcpu->A2 = 0;
	rv32imafdxcorevhwlpcpu->A3 = 0;
	rv32imafdxcorevhwlpcpu->A4 = 0;
	rv32imafdxcorevhwlpcpu->A5 = 0;
	rv32imafdxcorevhwlpcpu->A6 = 0;
	rv32imafdxcorevhwlpcpu->A7 = 0;
	rv32imafdxcorevhwlpcpu->S2 = 0;
	rv32imafdxcorevhwlpcpu->S3 = 0;
	rv32imafdxcorevhwlpcpu->S4 = 0;
	rv32imafdxcorevhwlpcpu->S5 = 0;
	rv32imafdxcorevhwlpcpu->S6 = 0;
	rv32imafdxcorevhwlpcpu->S7 = 0;
	rv32imafdxcorevhwlpcpu->S8 = 0;
	rv32imafdxcorevhwlpcpu->S9 = 0;
	rv32imafdxcorevhwlpcpu->S10 = 0;
	rv32imafdxcorevhwlpcpu->S11 = 0;
	rv32imafdxcorevhwlpcpu->T3 = 0;
	rv32imafdxcorevhwlpcpu->T4 = 0;
	rv32imafdxcorevhwlpcpu->T5 = 0;
	rv32imafdxcorevhwlpcpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		rv32imafdxcorevhwlpcpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		rv32imafdxcorevhwlpcpu->RES[i] = 0;
	}
	rv32imafdxcorevhwlpcpu->PRIV = 0;
	rv32imafdxcorevhwlpcpu->DPC = 0;
	rv32imafdxcorevhwlpcpu->FCSR = 0;
	rv32imafdxcorevhwlpcpu->lpstart_0 = 0;
	rv32imafdxcorevhwlpcpu->lpend_0 = 0;
	rv32imafdxcorevhwlpcpu->lpcount_0 = 0;
	rv32imafdxcorevhwlpcpu->lpstart_1 = 0;
	rv32imafdxcorevhwlpcpu->lpend_1 = 0;
	rv32imafdxcorevhwlpcpu->lpcount_1 = 0;
	rv32imafdxcorevhwlpcpu->MSTATUS = 0;
	rv32imafdxcorevhwlpcpu->MIE = 0;
	rv32imafdxcorevhwlpcpu->MIP = 0;
	for (int i = 0; i < 32; ++i) {
		rv32imafdxcorevhwlpcpu->F[i] = 0;
	}
	rv32imafdxcorevhwlpcpu->RES_ADDR = 0;

 	rv32imafdxcorevhwlpcpu->X[0] = &rv32imafdxcorevhwlpcpu->ZERO;
 	rv32imafdxcorevhwlpcpu->X[1] = &rv32imafdxcorevhwlpcpu->RA;
 	rv32imafdxcorevhwlpcpu->X[2] = &rv32imafdxcorevhwlpcpu->SP;
 	rv32imafdxcorevhwlpcpu->X[3] = &rv32imafdxcorevhwlpcpu->GP;
 	rv32imafdxcorevhwlpcpu->X[4] = &rv32imafdxcorevhwlpcpu->TP;
 	rv32imafdxcorevhwlpcpu->X[5] = &rv32imafdxcorevhwlpcpu->T0;
 	rv32imafdxcorevhwlpcpu->X[6] = &rv32imafdxcorevhwlpcpu->T1;
 	rv32imafdxcorevhwlpcpu->X[7] = &rv32imafdxcorevhwlpcpu->T2;
 	rv32imafdxcorevhwlpcpu->X[8] = &rv32imafdxcorevhwlpcpu->S0;
 	rv32imafdxcorevhwlpcpu->X[9] = &rv32imafdxcorevhwlpcpu->S1;
 	rv32imafdxcorevhwlpcpu->X[10] = &rv32imafdxcorevhwlpcpu->A0;
 	rv32imafdxcorevhwlpcpu->X[11] = &rv32imafdxcorevhwlpcpu->A1;
 	rv32imafdxcorevhwlpcpu->X[12] = &rv32imafdxcorevhwlpcpu->A2;
 	rv32imafdxcorevhwlpcpu->X[13] = &rv32imafdxcorevhwlpcpu->A3;
 	rv32imafdxcorevhwlpcpu->X[14] = &rv32imafdxcorevhwlpcpu->A4;
 	rv32imafdxcorevhwlpcpu->X[15] = &rv32imafdxcorevhwlpcpu->A5;
 	rv32imafdxcorevhwlpcpu->X[16] = &rv32imafdxcorevhwlpcpu->A6;
 	rv32imafdxcorevhwlpcpu->X[17] = &rv32imafdxcorevhwlpcpu->A7;
 	rv32imafdxcorevhwlpcpu->X[18] = &rv32imafdxcorevhwlpcpu->S2;
 	rv32imafdxcorevhwlpcpu->X[19] = &rv32imafdxcorevhwlpcpu->S3;
 	rv32imafdxcorevhwlpcpu->X[20] = &rv32imafdxcorevhwlpcpu->S4;
 	rv32imafdxcorevhwlpcpu->X[21] = &rv32imafdxcorevhwlpcpu->S5;
 	rv32imafdxcorevhwlpcpu->X[22] = &rv32imafdxcorevhwlpcpu->S6;
 	rv32imafdxcorevhwlpcpu->X[23] = &rv32imafdxcorevhwlpcpu->S7;
 	rv32imafdxcorevhwlpcpu->X[24] = &rv32imafdxcorevhwlpcpu->S8;
 	rv32imafdxcorevhwlpcpu->X[25] = &rv32imafdxcorevhwlpcpu->S9;
 	rv32imafdxcorevhwlpcpu->X[26] = &rv32imafdxcorevhwlpcpu->S10;
 	rv32imafdxcorevhwlpcpu->X[27] = &rv32imafdxcorevhwlpcpu->S11;
 	rv32imafdxcorevhwlpcpu->X[28] = &rv32imafdxcorevhwlpcpu->T3;
 	rv32imafdxcorevhwlpcpu->X[29] = &rv32imafdxcorevhwlpcpu->T4;
 	rv32imafdxcorevhwlpcpu->X[30] = &rv32imafdxcorevhwlpcpu->T5;
 	rv32imafdxcorevhwlpcpu->X[31] = &rv32imafdxcorevhwlpcpu->T6;
 	rv32imafdxcorevhwlpcpu->CSR[3] = &rv32imafdxcorevhwlpcpu->FCSR;
 	rv32imafdxcorevhwlpcpu->CSR[3264] = &rv32imafdxcorevhwlpcpu->lpstart_0;
 	rv32imafdxcorevhwlpcpu->CSR[3265] = &rv32imafdxcorevhwlpcpu->lpend_0;
 	rv32imafdxcorevhwlpcpu->CSR[3266] = &rv32imafdxcorevhwlpcpu->lpcount_0;
 	rv32imafdxcorevhwlpcpu->CSR[3268] = &rv32imafdxcorevhwlpcpu->lpstart_1;
 	rv32imafdxcorevhwlpcpu->CSR[3269] = &rv32imafdxcorevhwlpcpu->lpend_1;
 	rv32imafdxcorevhwlpcpu->CSR[3270] = &rv32imafdxcorevhwlpcpu->lpcount_1;
 	rv32imafdxcorevhwlpcpu->CSR[768] = &rv32imafdxcorevhwlpcpu->MSTATUS;
 	rv32imafdxcorevhwlpcpu->CSR[772] = &rv32imafdxcorevhwlpcpu->MIE;
 	rv32imafdxcorevhwlpcpu->CSR[836] = &rv32imafdxcorevhwlpcpu->MIP;

 	rv32imafdxcorevhwlpcpu->PRIV = 3;
 	rv32imafdxcorevhwlpcpu->DPC = 0;
 	*rv32imafdxcorevhwlpcpu->CSR[0] = 11;
	*rv32imafdxcorevhwlpcpu->CSR[256] = 11;
	*rv32imafdxcorevhwlpcpu->CSR[768] = 11;
	*rv32imafdxcorevhwlpcpu->CSR[769] = 1075056941;
	*rv32imafdxcorevhwlpcpu->CSR[3088] = 3;
	*rv32imafdxcorevhwlpcpu->CSR[772] = 4294966203;
	*rv32imafdxcorevhwlpcpu->CSR[260] = 4294964019;
	*rv32imafdxcorevhwlpcpu->CSR[4] = 4294963473;
 	rv32imafdxcorevhwlpcpu->RES_ADDR = -1;
}

void RV32IMAFDXCoreVHwlpArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMAFDXCoreVHwlp *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMAFDXCoreVHwlpArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMAFDXCoreVHwlpArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMAFDXCoreVHwlp.h)
*/
const std::set<std::string> & RV32IMAFDXCoreVHwlpArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMAFDXCoreVHwlpArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAFDXCoreVHwlp/RV32IMAFDXCoreVHwlp.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAFDXCoreVHwlp/RV32IMAFDXCoreVHwlpFuncs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMAFDXCoreVHwlpArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA32_RV32IMAFDXCoreVHwlp("ISA32_RV32IMAFDXCoreVHwlp", 32);
etiss::instr::InstructionClass ISA32_RV32IMAFDXCoreVHwlpClass(1, "ISA32_RV32IMAFDXCoreVHwlp", 32, ISA32_RV32IMAFDXCoreVHwlp);

etiss::instr::InstructionCollection RV32IMAFDXCoreVHwlpISA("RV32IMAFDXCoreVHwlpISA", ISA32_RV32IMAFDXCoreVHwlpClass);