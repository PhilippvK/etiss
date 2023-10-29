/**
 * Generated on Sun, 29 Oct 2023 22:27:54 +0100.
 *
 * This file contains the architecture class for the RV32IMACFDXCoreV core architecture.
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
		 are provided in RV32IMACFDXCoreVArchSpecificImp.h

	 8. RV32IMACFDXCoreVGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

#define RV32IMACFDXCoreV_DEBUG_CALL 0
using namespace etiss ;
using namespace etiss::instr ;

RV32IMACFDXCoreVArch::RV32IMACFDXCoreVArch():CPUArch("RV32IMACFDXCoreV")
{
	headers_.insert("Arch/RV32IMACFDXCoreV/RV32IMACFDXCoreV.h");
}

const std::set<std::string> & RV32IMACFDXCoreVArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACFDXCoreVArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMACFDXCoreV() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACFDXCoreVArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMACFDXCoreV));
	RV32IMACFDXCoreV * rv32imacfdxcorevcpu = (RV32IMACFDXCoreV *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		rv32imacfdxcorevcpu->ins_X[i] = 0;
		rv32imacfdxcorevcpu->X[i] = &rv32imacfdxcorevcpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		rv32imacfdxcorevcpu->ins_CSR[i] = 0;
		rv32imacfdxcorevcpu->CSR[i] = &rv32imacfdxcorevcpu->ins_CSR[i];
	}

	rv32imacfdxcorevcpu->ZERO = 0;
	rv32imacfdxcorevcpu->RA = 0;
	rv32imacfdxcorevcpu->SP = 0;
	rv32imacfdxcorevcpu->GP = 0;
	rv32imacfdxcorevcpu->TP = 0;
	rv32imacfdxcorevcpu->T0 = 0;
	rv32imacfdxcorevcpu->T1 = 0;
	rv32imacfdxcorevcpu->T2 = 0;
	rv32imacfdxcorevcpu->S0 = 0;
	rv32imacfdxcorevcpu->S1 = 0;
	rv32imacfdxcorevcpu->A0 = 0;
	rv32imacfdxcorevcpu->A1 = 0;
	rv32imacfdxcorevcpu->A2 = 0;
	rv32imacfdxcorevcpu->A3 = 0;
	rv32imacfdxcorevcpu->A4 = 0;
	rv32imacfdxcorevcpu->A5 = 0;
	rv32imacfdxcorevcpu->A6 = 0;
	rv32imacfdxcorevcpu->A7 = 0;
	rv32imacfdxcorevcpu->S2 = 0;
	rv32imacfdxcorevcpu->S3 = 0;
	rv32imacfdxcorevcpu->S4 = 0;
	rv32imacfdxcorevcpu->S5 = 0;
	rv32imacfdxcorevcpu->S6 = 0;
	rv32imacfdxcorevcpu->S7 = 0;
	rv32imacfdxcorevcpu->S8 = 0;
	rv32imacfdxcorevcpu->S9 = 0;
	rv32imacfdxcorevcpu->S10 = 0;
	rv32imacfdxcorevcpu->S11 = 0;
	rv32imacfdxcorevcpu->T3 = 0;
	rv32imacfdxcorevcpu->T4 = 0;
	rv32imacfdxcorevcpu->T5 = 0;
	rv32imacfdxcorevcpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		rv32imacfdxcorevcpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		rv32imacfdxcorevcpu->RES[i] = 0;
	}
	rv32imacfdxcorevcpu->PRIV = 0;
	rv32imacfdxcorevcpu->DPC = 0;
	rv32imacfdxcorevcpu->FCSR = 0;
	rv32imacfdxcorevcpu->MSTATUS = 0;
	rv32imacfdxcorevcpu->MIE = 0;
	rv32imacfdxcorevcpu->MIP = 0;
	for (int i = 0; i < 32; ++i) {
		rv32imacfdxcorevcpu->F[i] = 0;
	}
	rv32imacfdxcorevcpu->RES_ADDR = 0;

 	rv32imacfdxcorevcpu->X[0] = &rv32imacfdxcorevcpu->ZERO;
 	rv32imacfdxcorevcpu->X[1] = &rv32imacfdxcorevcpu->RA;
 	rv32imacfdxcorevcpu->X[2] = &rv32imacfdxcorevcpu->SP;
 	rv32imacfdxcorevcpu->X[3] = &rv32imacfdxcorevcpu->GP;
 	rv32imacfdxcorevcpu->X[4] = &rv32imacfdxcorevcpu->TP;
 	rv32imacfdxcorevcpu->X[5] = &rv32imacfdxcorevcpu->T0;
 	rv32imacfdxcorevcpu->X[6] = &rv32imacfdxcorevcpu->T1;
 	rv32imacfdxcorevcpu->X[7] = &rv32imacfdxcorevcpu->T2;
 	rv32imacfdxcorevcpu->X[8] = &rv32imacfdxcorevcpu->S0;
 	rv32imacfdxcorevcpu->X[9] = &rv32imacfdxcorevcpu->S1;
 	rv32imacfdxcorevcpu->X[10] = &rv32imacfdxcorevcpu->A0;
 	rv32imacfdxcorevcpu->X[11] = &rv32imacfdxcorevcpu->A1;
 	rv32imacfdxcorevcpu->X[12] = &rv32imacfdxcorevcpu->A2;
 	rv32imacfdxcorevcpu->X[13] = &rv32imacfdxcorevcpu->A3;
 	rv32imacfdxcorevcpu->X[14] = &rv32imacfdxcorevcpu->A4;
 	rv32imacfdxcorevcpu->X[15] = &rv32imacfdxcorevcpu->A5;
 	rv32imacfdxcorevcpu->X[16] = &rv32imacfdxcorevcpu->A6;
 	rv32imacfdxcorevcpu->X[17] = &rv32imacfdxcorevcpu->A7;
 	rv32imacfdxcorevcpu->X[18] = &rv32imacfdxcorevcpu->S2;
 	rv32imacfdxcorevcpu->X[19] = &rv32imacfdxcorevcpu->S3;
 	rv32imacfdxcorevcpu->X[20] = &rv32imacfdxcorevcpu->S4;
 	rv32imacfdxcorevcpu->X[21] = &rv32imacfdxcorevcpu->S5;
 	rv32imacfdxcorevcpu->X[22] = &rv32imacfdxcorevcpu->S6;
 	rv32imacfdxcorevcpu->X[23] = &rv32imacfdxcorevcpu->S7;
 	rv32imacfdxcorevcpu->X[24] = &rv32imacfdxcorevcpu->S8;
 	rv32imacfdxcorevcpu->X[25] = &rv32imacfdxcorevcpu->S9;
 	rv32imacfdxcorevcpu->X[26] = &rv32imacfdxcorevcpu->S10;
 	rv32imacfdxcorevcpu->X[27] = &rv32imacfdxcorevcpu->S11;
 	rv32imacfdxcorevcpu->X[28] = &rv32imacfdxcorevcpu->T3;
 	rv32imacfdxcorevcpu->X[29] = &rv32imacfdxcorevcpu->T4;
 	rv32imacfdxcorevcpu->X[30] = &rv32imacfdxcorevcpu->T5;
 	rv32imacfdxcorevcpu->X[31] = &rv32imacfdxcorevcpu->T6;
 	rv32imacfdxcorevcpu->CSR[3] = &rv32imacfdxcorevcpu->FCSR;
 	rv32imacfdxcorevcpu->CSR[768] = &rv32imacfdxcorevcpu->MSTATUS;
 	rv32imacfdxcorevcpu->CSR[772] = &rv32imacfdxcorevcpu->MIE;
 	rv32imacfdxcorevcpu->CSR[836] = &rv32imacfdxcorevcpu->MIP;

 	rv32imacfdxcorevcpu->PRIV = 3;
 	rv32imacfdxcorevcpu->DPC = 0;
 	*rv32imacfdxcorevcpu->CSR[0] = 11;
	*rv32imacfdxcorevcpu->CSR[256] = 11;
	*rv32imacfdxcorevcpu->CSR[768] = 11;
	*rv32imacfdxcorevcpu->CSR[769] = 1075056941;
	*rv32imacfdxcorevcpu->CSR[3088] = 3;
	*rv32imacfdxcorevcpu->CSR[772] = 4294966203;
	*rv32imacfdxcorevcpu->CSR[260] = 4294964019;
	*rv32imacfdxcorevcpu->CSR[4] = 4294963473;
 	rv32imacfdxcorevcpu->RES_ADDR = -1;
}

void RV32IMACFDXCoreVArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMACFDXCoreV *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACFDXCoreVArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACFDXCoreVArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMACFDXCoreV.h)
*/
const std::set<std::string> & RV32IMACFDXCoreVArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACFDXCoreVArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDXCoreV/RV32IMACFDXCoreV.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDXCoreV/RV32IMACFDXCoreVFuncs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACFDXCoreVArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMACFDXCoreV("ISA16_RV32IMACFDXCoreV", 16);
etiss::instr::InstructionClass ISA16_RV32IMACFDXCoreVClass(1, "ISA16_RV32IMACFDXCoreV", 16, ISA16_RV32IMACFDXCoreV);
etiss::instr::InstructionGroup ISA32_RV32IMACFDXCoreV("ISA32_RV32IMACFDXCoreV", 32);
etiss::instr::InstructionClass ISA32_RV32IMACFDXCoreVClass(1, "ISA32_RV32IMACFDXCoreV", 32, ISA32_RV32IMACFDXCoreV);

etiss::instr::InstructionCollection RV32IMACFDXCoreVISA("RV32IMACFDXCoreVISA", ISA16_RV32IMACFDXCoreVClass, ISA32_RV32IMACFDXCoreVClass);