/**
 * Generated on Wed, 15 Mar 2023 15:20:41 +0100.
 *
 * This file contains the architecture class for the RV32IMAC core architecture.
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
		 are provided in RV32IMACArchSpecificImp.h

	 8. RV32IMACGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFuncs.h"

#define RV32IMAC_DEBUG_CALL 0
using namespace etiss ;
using namespace etiss::instr ;

RV32IMACArch::RV32IMACArch():CPUArch("RV32IMAC")
{
	headers_.insert("Arch/RV32IMAC/RV32IMAC.h");
}

const std::set<std::string> & RV32IMACArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMAC() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMAC));
	RV32IMAC * rv32imaccpu = (RV32IMAC *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		rv32imaccpu->ins_X[i] = 0;
		rv32imaccpu->X[i] = &rv32imaccpu->ins_X[i];
	}

	rv32imaccpu->ZERO = 0;
	rv32imaccpu->RA = 0;
	rv32imaccpu->SP = 0;
	rv32imaccpu->GP = 0;
	rv32imaccpu->TP = 0;
	rv32imaccpu->T0 = 0;
	rv32imaccpu->T1 = 0;
	rv32imaccpu->T2 = 0;
	rv32imaccpu->S0 = 0;
	rv32imaccpu->S1 = 0;
	rv32imaccpu->A0 = 0;
	rv32imaccpu->A1 = 0;
	rv32imaccpu->A2 = 0;
	rv32imaccpu->A3 = 0;
	rv32imaccpu->A4 = 0;
	rv32imaccpu->A5 = 0;
	rv32imaccpu->A6 = 0;
	rv32imaccpu->A7 = 0;
	rv32imaccpu->S2 = 0;
	rv32imaccpu->S3 = 0;
	rv32imaccpu->S4 = 0;
	rv32imaccpu->S5 = 0;
	rv32imaccpu->S6 = 0;
	rv32imaccpu->S7 = 0;
	rv32imaccpu->S8 = 0;
	rv32imaccpu->S9 = 0;
	rv32imaccpu->S10 = 0;
	rv32imaccpu->S11 = 0;
	rv32imaccpu->T3 = 0;
	rv32imaccpu->T4 = 0;
	rv32imaccpu->T5 = 0;
	rv32imaccpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		rv32imaccpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		rv32imaccpu->RES[i] = 0;
	}
	rv32imaccpu->PRIV = 0;
	rv32imaccpu->DPC = 0;
	for (int i = 0; i < 4096; ++i) {
		rv32imaccpu->CSR[i] = 0;
	}
	rv32imaccpu->RES_ADDR = 0;

 	rv32imaccpu->X[0] = &rv32imaccpu->ZERO;
 	rv32imaccpu->X[1] = &rv32imaccpu->RA;
 	rv32imaccpu->X[2] = &rv32imaccpu->SP;
 	rv32imaccpu->X[3] = &rv32imaccpu->GP;
 	rv32imaccpu->X[4] = &rv32imaccpu->TP;
 	rv32imaccpu->X[5] = &rv32imaccpu->T0;
 	rv32imaccpu->X[6] = &rv32imaccpu->T1;
 	rv32imaccpu->X[7] = &rv32imaccpu->T2;
 	rv32imaccpu->X[8] = &rv32imaccpu->S0;
 	rv32imaccpu->X[9] = &rv32imaccpu->S1;
 	rv32imaccpu->X[10] = &rv32imaccpu->A0;
 	rv32imaccpu->X[11] = &rv32imaccpu->A1;
 	rv32imaccpu->X[12] = &rv32imaccpu->A2;
 	rv32imaccpu->X[13] = &rv32imaccpu->A3;
 	rv32imaccpu->X[14] = &rv32imaccpu->A4;
 	rv32imaccpu->X[15] = &rv32imaccpu->A5;
 	rv32imaccpu->X[16] = &rv32imaccpu->A6;
 	rv32imaccpu->X[17] = &rv32imaccpu->A7;
 	rv32imaccpu->X[18] = &rv32imaccpu->S2;
 	rv32imaccpu->X[19] = &rv32imaccpu->S3;
 	rv32imaccpu->X[20] = &rv32imaccpu->S4;
 	rv32imaccpu->X[21] = &rv32imaccpu->S5;
 	rv32imaccpu->X[22] = &rv32imaccpu->S6;
 	rv32imaccpu->X[23] = &rv32imaccpu->S7;
 	rv32imaccpu->X[24] = &rv32imaccpu->S8;
 	rv32imaccpu->X[25] = &rv32imaccpu->S9;
 	rv32imaccpu->X[26] = &rv32imaccpu->S10;
 	rv32imaccpu->X[27] = &rv32imaccpu->S11;
 	rv32imaccpu->X[28] = &rv32imaccpu->T3;
 	rv32imaccpu->X[29] = &rv32imaccpu->T4;
 	rv32imaccpu->X[30] = &rv32imaccpu->T5;
 	rv32imaccpu->X[31] = &rv32imaccpu->T6;

 	rv32imaccpu->PRIV = 3;
 	rv32imaccpu->DPC = 0;
 	rv32imaccpu->CSR[0] = 11;
	rv32imaccpu->CSR[256] = 11;
	rv32imaccpu->CSR[768] = 11;
	rv32imaccpu->CSR[769] = 1075056941;
	rv32imaccpu->CSR[3088] = 3;
	rv32imaccpu->CSR[772] = 4294966203;
	rv32imaccpu->CSR[260] = 4294964019;
	rv32imaccpu->CSR[4] = 4294963473;
 	rv32imaccpu->RES_ADDR = -1;
}

void RV32IMACArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMAC *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMAC.h)
*/
const std::set<std::string> & RV32IMACArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAC/RV32IMAC.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMAC/RV32IMACFuncs.h\"\n");
	cb.functionglobalCode().insert("((RV32IMAC*)cpu)->exception = 0;\n");
	cb.functionglobalCode().insert("((RV32IMAC*)cpu)->exception_pending = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMAC("ISA16_RV32IMAC", 16);
etiss::instr::InstructionClass ISA16_RV32IMACClass(1, "ISA16_RV32IMAC", 16, ISA16_RV32IMAC);
etiss::instr::InstructionGroup ISA32_RV32IMAC("ISA32_RV32IMAC", 32);
etiss::instr::InstructionClass ISA32_RV32IMACClass(1, "ISA32_RV32IMAC", 32, ISA32_RV32IMAC);

etiss::instr::InstructionCollection RV32IMACISA("RV32IMACISA", ISA16_RV32IMACClass, ISA32_RV32IMACClass);