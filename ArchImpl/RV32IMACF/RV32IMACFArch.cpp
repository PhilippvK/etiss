/**
 * Generated on Wed, 15 Mar 2023 15:20:41 +0100.
 *
 * This file contains the architecture class for the RV32IMACF core architecture.
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
		 are provided in RV32IMACFArchSpecificImp.h

	 8. RV32IMACFGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACFArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFFuncs.h"

#define RV32IMACF_DEBUG_CALL 0
using namespace etiss ;
using namespace etiss::instr ;

RV32IMACFArch::RV32IMACFArch():CPUArch("RV32IMACF")
{
	headers_.insert("Arch/RV32IMACF/RV32IMACF.h");
}

const std::set<std::string> & RV32IMACFArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACFArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMACF() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACFArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMACF));
	RV32IMACF * rv32imacfcpu = (RV32IMACF *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		rv32imacfcpu->ins_X[i] = 0;
		rv32imacfcpu->X[i] = &rv32imacfcpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		rv32imacfcpu->ins_CSR[i] = 0;
		rv32imacfcpu->CSR[i] = &rv32imacfcpu->ins_CSR[i];
	}

	rv32imacfcpu->ZERO = 0;
	rv32imacfcpu->RA = 0;
	rv32imacfcpu->SP = 0;
	rv32imacfcpu->GP = 0;
	rv32imacfcpu->TP = 0;
	rv32imacfcpu->T0 = 0;
	rv32imacfcpu->T1 = 0;
	rv32imacfcpu->T2 = 0;
	rv32imacfcpu->S0 = 0;
	rv32imacfcpu->S1 = 0;
	rv32imacfcpu->A0 = 0;
	rv32imacfcpu->A1 = 0;
	rv32imacfcpu->A2 = 0;
	rv32imacfcpu->A3 = 0;
	rv32imacfcpu->A4 = 0;
	rv32imacfcpu->A5 = 0;
	rv32imacfcpu->A6 = 0;
	rv32imacfcpu->A7 = 0;
	rv32imacfcpu->S2 = 0;
	rv32imacfcpu->S3 = 0;
	rv32imacfcpu->S4 = 0;
	rv32imacfcpu->S5 = 0;
	rv32imacfcpu->S6 = 0;
	rv32imacfcpu->S7 = 0;
	rv32imacfcpu->S8 = 0;
	rv32imacfcpu->S9 = 0;
	rv32imacfcpu->S10 = 0;
	rv32imacfcpu->S11 = 0;
	rv32imacfcpu->T3 = 0;
	rv32imacfcpu->T4 = 0;
	rv32imacfcpu->T5 = 0;
	rv32imacfcpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		rv32imacfcpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		rv32imacfcpu->RES[i] = 0;
	}
	rv32imacfcpu->PRIV = 0;
	rv32imacfcpu->DPC = 0;
	rv32imacfcpu->FCSR = 0;
	for (int i = 0; i < 32; ++i) {
		rv32imacfcpu->F[i] = 0;
	}
	rv32imacfcpu->RES_ADDR = 0;

 	rv32imacfcpu->X[0] = &rv32imacfcpu->ZERO;
 	rv32imacfcpu->X[1] = &rv32imacfcpu->RA;
 	rv32imacfcpu->X[2] = &rv32imacfcpu->SP;
 	rv32imacfcpu->X[3] = &rv32imacfcpu->GP;
 	rv32imacfcpu->X[4] = &rv32imacfcpu->TP;
 	rv32imacfcpu->X[5] = &rv32imacfcpu->T0;
 	rv32imacfcpu->X[6] = &rv32imacfcpu->T1;
 	rv32imacfcpu->X[7] = &rv32imacfcpu->T2;
 	rv32imacfcpu->X[8] = &rv32imacfcpu->S0;
 	rv32imacfcpu->X[9] = &rv32imacfcpu->S1;
 	rv32imacfcpu->X[10] = &rv32imacfcpu->A0;
 	rv32imacfcpu->X[11] = &rv32imacfcpu->A1;
 	rv32imacfcpu->X[12] = &rv32imacfcpu->A2;
 	rv32imacfcpu->X[13] = &rv32imacfcpu->A3;
 	rv32imacfcpu->X[14] = &rv32imacfcpu->A4;
 	rv32imacfcpu->X[15] = &rv32imacfcpu->A5;
 	rv32imacfcpu->X[16] = &rv32imacfcpu->A6;
 	rv32imacfcpu->X[17] = &rv32imacfcpu->A7;
 	rv32imacfcpu->X[18] = &rv32imacfcpu->S2;
 	rv32imacfcpu->X[19] = &rv32imacfcpu->S3;
 	rv32imacfcpu->X[20] = &rv32imacfcpu->S4;
 	rv32imacfcpu->X[21] = &rv32imacfcpu->S5;
 	rv32imacfcpu->X[22] = &rv32imacfcpu->S6;
 	rv32imacfcpu->X[23] = &rv32imacfcpu->S7;
 	rv32imacfcpu->X[24] = &rv32imacfcpu->S8;
 	rv32imacfcpu->X[25] = &rv32imacfcpu->S9;
 	rv32imacfcpu->X[26] = &rv32imacfcpu->S10;
 	rv32imacfcpu->X[27] = &rv32imacfcpu->S11;
 	rv32imacfcpu->X[28] = &rv32imacfcpu->T3;
 	rv32imacfcpu->X[29] = &rv32imacfcpu->T4;
 	rv32imacfcpu->X[30] = &rv32imacfcpu->T5;
 	rv32imacfcpu->X[31] = &rv32imacfcpu->T6;
 	rv32imacfcpu->CSR[3] = &rv32imacfcpu->FCSR;

 	rv32imacfcpu->PRIV = 3;
 	rv32imacfcpu->DPC = 0;
 	*rv32imacfcpu->CSR[0] = 11;
	*rv32imacfcpu->CSR[256] = 11;
	*rv32imacfcpu->CSR[768] = 11;
	*rv32imacfcpu->CSR[769] = 1075056941;
	*rv32imacfcpu->CSR[3088] = 3;
	*rv32imacfcpu->CSR[772] = 4294966203;
	*rv32imacfcpu->CSR[260] = 4294964019;
	*rv32imacfcpu->CSR[4] = 4294963473;
 	rv32imacfcpu->RES_ADDR = -1;
}

void RV32IMACFArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMACF *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACFArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACFArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMACF.h)
*/
const std::set<std::string> & RV32IMACFArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACFArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACF/RV32IMACF.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACF/RV32IMACFFuncs.h\"\n");
	cb.functionglobalCode().insert("((RV32IMACF*)cpu)->exception = 0;\n");
	cb.functionglobalCode().insert("((RV32IMACF*)cpu)->exception_pending = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACFArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMACF("ISA16_RV32IMACF", 16);
etiss::instr::InstructionClass ISA16_RV32IMACFClass(1, "ISA16_RV32IMACF", 16, ISA16_RV32IMACF);
etiss::instr::InstructionGroup ISA32_RV32IMACF("ISA32_RV32IMACF", 32);
etiss::instr::InstructionClass ISA32_RV32IMACFClass(1, "ISA32_RV32IMACF", 32, ISA32_RV32IMACF);

etiss::instr::InstructionCollection RV32IMACFISA("RV32IMACFISA", ISA16_RV32IMACFClass, ISA32_RV32IMACFClass);