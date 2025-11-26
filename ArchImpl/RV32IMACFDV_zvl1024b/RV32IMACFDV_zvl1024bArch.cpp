/**
 * Generated on Wed, 30 Oct 2024 10:46:47 +0100.
 *
 * This file contains the architecture class for the RV32IMACFDV_zvl1024b core architecture.
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
		 are provided in RV32IMACFDV_zvl1024bArchSpecificImp.h

	 8. RV32IMACFDV_zvl1024bGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACFDV_zvl1024bArch.h"
#include "RV32IMACFDV_zvl1024bFuncs.h"

#define RV32IMACFDV_zvl1024b_DEBUG_CALL 0

#define N_VREG_BYTES 128

using namespace etiss ;
using namespace etiss::instr ;

RV32IMACFDV_zvl1024bArch::RV32IMACFDV_zvl1024bArch(unsigned int coreno):CPUArch("RV32IMACFDV_zvl1024b"), coreno_(coreno)
{
	headers_.insert("Arch/RV32IMACFDV_zvl1024b/RV32IMACFDV_zvl1024b.h");
}

const std::set<std::string> & RV32IMACFDV_zvl1024bArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACFDV_zvl1024bArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMACFDV_zvl1024b() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACFDV_zvl1024bArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMACFDV_zvl1024b));
	RV32IMACFDV_zvl1024b * RV32IMACFDV_zvl1024bcpu = (RV32IMACFDV_zvl1024b *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl1024bcpu->ins_X[i] = 0;
		RV32IMACFDV_zvl1024bcpu->X[i] = &RV32IMACFDV_zvl1024bcpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		RV32IMACFDV_zvl1024bcpu->ins_CSR[i] = 0;
		RV32IMACFDV_zvl1024bcpu->CSR[i] = &RV32IMACFDV_zvl1024bcpu->ins_CSR[i];
	}
	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl1024bcpu->ins_F[i] = 0;
		RV32IMACFDV_zvl1024bcpu->F[i] = &RV32IMACFDV_zvl1024bcpu->ins_F[i];
	}

	RV32IMACFDV_zvl1024bcpu->ZERO = 0;
	RV32IMACFDV_zvl1024bcpu->RA = 0;
	RV32IMACFDV_zvl1024bcpu->SP = 0;
	RV32IMACFDV_zvl1024bcpu->GP = 0;
	RV32IMACFDV_zvl1024bcpu->TP = 0;
	RV32IMACFDV_zvl1024bcpu->T0 = 0;
	RV32IMACFDV_zvl1024bcpu->T1 = 0;
	RV32IMACFDV_zvl1024bcpu->T2 = 0;
	RV32IMACFDV_zvl1024bcpu->S0 = 0;
	RV32IMACFDV_zvl1024bcpu->S1 = 0;
	RV32IMACFDV_zvl1024bcpu->A0 = 0;
	RV32IMACFDV_zvl1024bcpu->A1 = 0;
	RV32IMACFDV_zvl1024bcpu->A2 = 0;
	RV32IMACFDV_zvl1024bcpu->A3 = 0;
	RV32IMACFDV_zvl1024bcpu->A4 = 0;
	RV32IMACFDV_zvl1024bcpu->A5 = 0;
	RV32IMACFDV_zvl1024bcpu->A6 = 0;
	RV32IMACFDV_zvl1024bcpu->A7 = 0;
	RV32IMACFDV_zvl1024bcpu->S2 = 0;
	RV32IMACFDV_zvl1024bcpu->S3 = 0;
	RV32IMACFDV_zvl1024bcpu->S4 = 0;
	RV32IMACFDV_zvl1024bcpu->S5 = 0;
	RV32IMACFDV_zvl1024bcpu->S6 = 0;
	RV32IMACFDV_zvl1024bcpu->S7 = 0;
	RV32IMACFDV_zvl1024bcpu->S8 = 0;
	RV32IMACFDV_zvl1024bcpu->S9 = 0;
	RV32IMACFDV_zvl1024bcpu->S10 = 0;
	RV32IMACFDV_zvl1024bcpu->S11 = 0;
	RV32IMACFDV_zvl1024bcpu->T3 = 0;
	RV32IMACFDV_zvl1024bcpu->T4 = 0;
	RV32IMACFDV_zvl1024bcpu->T5 = 0;
	RV32IMACFDV_zvl1024bcpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl1024bcpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl1024bcpu->RES[i] = 0;
	}
	RV32IMACFDV_zvl1024bcpu->PRIV = 0;
	RV32IMACFDV_zvl1024bcpu->DPC = 0;
	RV32IMACFDV_zvl1024bcpu->VSTART_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VXSAT_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VXRM_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VCSR_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VL_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VTYPE_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->VLENB_CSR = 0;
	RV32IMACFDV_zvl1024bcpu->FCSR = 0;
	RV32IMACFDV_zvl1024bcpu->FFLAGS = 0;
	RV32IMACFDV_zvl1024bcpu->FRM = 0;
	RV32IMACFDV_zvl1024bcpu->MSTATUS = 0;
	RV32IMACFDV_zvl1024bcpu->MIE = 0;
	RV32IMACFDV_zvl1024bcpu->MIP = 0;
	RV32IMACFDV_zvl1024bcpu->CYCLE = 0;
	RV32IMACFDV_zvl1024bcpu->CYCLEH = 0;
	RV32IMACFDV_zvl1024bcpu->TIME = 0;
	RV32IMACFDV_zvl1024bcpu->TIMEH = 0;
	RV32IMACFDV_zvl1024bcpu->INSTRET = 0;
	RV32IMACFDV_zvl1024bcpu->INSTRETH = 0;
	RV32IMACFDV_zvl1024bcpu->MVENDORID = 0;
	RV32IMACFDV_zvl1024bcpu->MARCHID = 0;
	RV32IMACFDV_zvl1024bcpu->MIMPID = 0;
	RV32IMACFDV_zvl1024bcpu->MHARTID = 0;
	RV32IMACFDV_zvl1024bcpu->MISA = 0;
	RV32IMACFDV_zvl1024bcpu->MEDELEG = 0;
	RV32IMACFDV_zvl1024bcpu->MIDELEG = 0;
	RV32IMACFDV_zvl1024bcpu->MTVEC = 0;
	RV32IMACFDV_zvl1024bcpu->MCOUNTEREN = 0;
	RV32IMACFDV_zvl1024bcpu->MSCRATCH = 0;
	RV32IMACFDV_zvl1024bcpu->MEPC = 0;
	RV32IMACFDV_zvl1024bcpu->MCAUSE = 0;
	RV32IMACFDV_zvl1024bcpu->MTVAL = 0;
	for (int i = 0; i < N_VREG_BYTES; ++i) {
		RV32IMACFDV_zvl1024bcpu->V[i] = 0;
	}
	RV32IMACFDV_zvl1024bcpu->FT0 = 0;
	RV32IMACFDV_zvl1024bcpu->FT1 = 0;
	RV32IMACFDV_zvl1024bcpu->FT2 = 0;
	RV32IMACFDV_zvl1024bcpu->FT3 = 0;
	RV32IMACFDV_zvl1024bcpu->FT4 = 0;
	RV32IMACFDV_zvl1024bcpu->FT5 = 0;
	RV32IMACFDV_zvl1024bcpu->FT6 = 0;
	RV32IMACFDV_zvl1024bcpu->FT7 = 0;
	RV32IMACFDV_zvl1024bcpu->FS0 = 0;
	RV32IMACFDV_zvl1024bcpu->FS1 = 0;
	RV32IMACFDV_zvl1024bcpu->FA0 = 0;
	RV32IMACFDV_zvl1024bcpu->FA1 = 0;
	RV32IMACFDV_zvl1024bcpu->FA2 = 0;
	RV32IMACFDV_zvl1024bcpu->FA3 = 0;
	RV32IMACFDV_zvl1024bcpu->FA4 = 0;
	RV32IMACFDV_zvl1024bcpu->FA5 = 0;
	RV32IMACFDV_zvl1024bcpu->FA6 = 0;
	RV32IMACFDV_zvl1024bcpu->FA7 = 0;
	RV32IMACFDV_zvl1024bcpu->FS2 = 0;
	RV32IMACFDV_zvl1024bcpu->FS3 = 0;
	RV32IMACFDV_zvl1024bcpu->FS4 = 0;
	RV32IMACFDV_zvl1024bcpu->FS5 = 0;
	RV32IMACFDV_zvl1024bcpu->FS6 = 0;
	RV32IMACFDV_zvl1024bcpu->FS7 = 0;
	RV32IMACFDV_zvl1024bcpu->FS8 = 0;
	RV32IMACFDV_zvl1024bcpu->FS9 = 0;
	RV32IMACFDV_zvl1024bcpu->FS10 = 0;
	RV32IMACFDV_zvl1024bcpu->FS11 = 0;
	RV32IMACFDV_zvl1024bcpu->FT8 = 0;
	RV32IMACFDV_zvl1024bcpu->FT9 = 0;
	RV32IMACFDV_zvl1024bcpu->FT10 = 0;
	RV32IMACFDV_zvl1024bcpu->FT11 = 0;
	RV32IMACFDV_zvl1024bcpu->RES_ADDR = 0;

 	RV32IMACFDV_zvl1024bcpu->X[0] = &RV32IMACFDV_zvl1024bcpu->ZERO;
 	RV32IMACFDV_zvl1024bcpu->X[1] = &RV32IMACFDV_zvl1024bcpu->RA;
 	RV32IMACFDV_zvl1024bcpu->X[2] = &RV32IMACFDV_zvl1024bcpu->SP;
 	RV32IMACFDV_zvl1024bcpu->X[3] = &RV32IMACFDV_zvl1024bcpu->GP;
 	RV32IMACFDV_zvl1024bcpu->X[4] = &RV32IMACFDV_zvl1024bcpu->TP;
 	RV32IMACFDV_zvl1024bcpu->X[5] = &RV32IMACFDV_zvl1024bcpu->T0;
 	RV32IMACFDV_zvl1024bcpu->X[6] = &RV32IMACFDV_zvl1024bcpu->T1;
 	RV32IMACFDV_zvl1024bcpu->X[7] = &RV32IMACFDV_zvl1024bcpu->T2;
 	RV32IMACFDV_zvl1024bcpu->X[8] = &RV32IMACFDV_zvl1024bcpu->S0;
 	RV32IMACFDV_zvl1024bcpu->X[9] = &RV32IMACFDV_zvl1024bcpu->S1;
 	RV32IMACFDV_zvl1024bcpu->X[10] = &RV32IMACFDV_zvl1024bcpu->A0;
 	RV32IMACFDV_zvl1024bcpu->X[11] = &RV32IMACFDV_zvl1024bcpu->A1;
 	RV32IMACFDV_zvl1024bcpu->X[12] = &RV32IMACFDV_zvl1024bcpu->A2;
 	RV32IMACFDV_zvl1024bcpu->X[13] = &RV32IMACFDV_zvl1024bcpu->A3;
 	RV32IMACFDV_zvl1024bcpu->X[14] = &RV32IMACFDV_zvl1024bcpu->A4;
 	RV32IMACFDV_zvl1024bcpu->X[15] = &RV32IMACFDV_zvl1024bcpu->A5;
 	RV32IMACFDV_zvl1024bcpu->X[16] = &RV32IMACFDV_zvl1024bcpu->A6;
 	RV32IMACFDV_zvl1024bcpu->X[17] = &RV32IMACFDV_zvl1024bcpu->A7;
 	RV32IMACFDV_zvl1024bcpu->X[18] = &RV32IMACFDV_zvl1024bcpu->S2;
 	RV32IMACFDV_zvl1024bcpu->X[19] = &RV32IMACFDV_zvl1024bcpu->S3;
 	RV32IMACFDV_zvl1024bcpu->X[20] = &RV32IMACFDV_zvl1024bcpu->S4;
 	RV32IMACFDV_zvl1024bcpu->X[21] = &RV32IMACFDV_zvl1024bcpu->S5;
 	RV32IMACFDV_zvl1024bcpu->X[22] = &RV32IMACFDV_zvl1024bcpu->S6;
 	RV32IMACFDV_zvl1024bcpu->X[23] = &RV32IMACFDV_zvl1024bcpu->S7;
 	RV32IMACFDV_zvl1024bcpu->X[24] = &RV32IMACFDV_zvl1024bcpu->S8;
 	RV32IMACFDV_zvl1024bcpu->X[25] = &RV32IMACFDV_zvl1024bcpu->S9;
 	RV32IMACFDV_zvl1024bcpu->X[26] = &RV32IMACFDV_zvl1024bcpu->S10;
 	RV32IMACFDV_zvl1024bcpu->X[27] = &RV32IMACFDV_zvl1024bcpu->S11;
 	RV32IMACFDV_zvl1024bcpu->X[28] = &RV32IMACFDV_zvl1024bcpu->T3;
 	RV32IMACFDV_zvl1024bcpu->X[29] = &RV32IMACFDV_zvl1024bcpu->T4;
 	RV32IMACFDV_zvl1024bcpu->X[30] = &RV32IMACFDV_zvl1024bcpu->T5;
 	RV32IMACFDV_zvl1024bcpu->X[31] = &RV32IMACFDV_zvl1024bcpu->T6;
 	RV32IMACFDV_zvl1024bcpu->CSR[8] = &RV32IMACFDV_zvl1024bcpu->VSTART_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[9] = &RV32IMACFDV_zvl1024bcpu->VXSAT_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[10] = &RV32IMACFDV_zvl1024bcpu->VXRM_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[15] = &RV32IMACFDV_zvl1024bcpu->VCSR_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[3104] = &RV32IMACFDV_zvl1024bcpu->VL_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[3105] = &RV32IMACFDV_zvl1024bcpu->VTYPE_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[3106] = &RV32IMACFDV_zvl1024bcpu->VLENB_CSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[3] = &RV32IMACFDV_zvl1024bcpu->FCSR;
 	RV32IMACFDV_zvl1024bcpu->CSR[1] = &RV32IMACFDV_zvl1024bcpu->FFLAGS;
 	RV32IMACFDV_zvl1024bcpu->CSR[2] = &RV32IMACFDV_zvl1024bcpu->FRM;
 	RV32IMACFDV_zvl1024bcpu->CSR[768] = &RV32IMACFDV_zvl1024bcpu->MSTATUS;
 	RV32IMACFDV_zvl1024bcpu->CSR[772] = &RV32IMACFDV_zvl1024bcpu->MIE;
 	RV32IMACFDV_zvl1024bcpu->CSR[836] = &RV32IMACFDV_zvl1024bcpu->MIP;
 	RV32IMACFDV_zvl1024bcpu->CSR[3072] = &RV32IMACFDV_zvl1024bcpu->CYCLE;
 	RV32IMACFDV_zvl1024bcpu->CSR[3200] = &RV32IMACFDV_zvl1024bcpu->CYCLEH;
 	RV32IMACFDV_zvl1024bcpu->CSR[3073] = &RV32IMACFDV_zvl1024bcpu->TIME;
 	RV32IMACFDV_zvl1024bcpu->CSR[3201] = &RV32IMACFDV_zvl1024bcpu->TIMEH;
 	RV32IMACFDV_zvl1024bcpu->CSR[3074] = &RV32IMACFDV_zvl1024bcpu->INSTRET;
 	RV32IMACFDV_zvl1024bcpu->CSR[3202] = &RV32IMACFDV_zvl1024bcpu->INSTRETH;
 	RV32IMACFDV_zvl1024bcpu->CSR[3857] = &RV32IMACFDV_zvl1024bcpu->MVENDORID;
 	RV32IMACFDV_zvl1024bcpu->CSR[3858] = &RV32IMACFDV_zvl1024bcpu->MARCHID;
 	RV32IMACFDV_zvl1024bcpu->CSR[3859] = &RV32IMACFDV_zvl1024bcpu->MIMPID;
 	RV32IMACFDV_zvl1024bcpu->CSR[3860] = &RV32IMACFDV_zvl1024bcpu->MHARTID;
 	RV32IMACFDV_zvl1024bcpu->CSR[769] = &RV32IMACFDV_zvl1024bcpu->MISA;
 	RV32IMACFDV_zvl1024bcpu->CSR[770] = &RV32IMACFDV_zvl1024bcpu->MEDELEG;
 	RV32IMACFDV_zvl1024bcpu->CSR[771] = &RV32IMACFDV_zvl1024bcpu->MIDELEG;
 	RV32IMACFDV_zvl1024bcpu->CSR[773] = &RV32IMACFDV_zvl1024bcpu->MTVEC;
 	RV32IMACFDV_zvl1024bcpu->CSR[774] = &RV32IMACFDV_zvl1024bcpu->MCOUNTEREN;
 	RV32IMACFDV_zvl1024bcpu->CSR[832] = &RV32IMACFDV_zvl1024bcpu->MSCRATCH;
 	RV32IMACFDV_zvl1024bcpu->CSR[833] = &RV32IMACFDV_zvl1024bcpu->MEPC;
 	RV32IMACFDV_zvl1024bcpu->CSR[834] = &RV32IMACFDV_zvl1024bcpu->MCAUSE;
 	RV32IMACFDV_zvl1024bcpu->CSR[835] = &RV32IMACFDV_zvl1024bcpu->MTVAL;
 	RV32IMACFDV_zvl1024bcpu->F[0] = &RV32IMACFDV_zvl1024bcpu->FT0;
 	RV32IMACFDV_zvl1024bcpu->F[1] = &RV32IMACFDV_zvl1024bcpu->FT1;
 	RV32IMACFDV_zvl1024bcpu->F[2] = &RV32IMACFDV_zvl1024bcpu->FT2;
 	RV32IMACFDV_zvl1024bcpu->F[3] = &RV32IMACFDV_zvl1024bcpu->FT3;
 	RV32IMACFDV_zvl1024bcpu->F[4] = &RV32IMACFDV_zvl1024bcpu->FT4;
 	RV32IMACFDV_zvl1024bcpu->F[5] = &RV32IMACFDV_zvl1024bcpu->FT5;
 	RV32IMACFDV_zvl1024bcpu->F[6] = &RV32IMACFDV_zvl1024bcpu->FT6;
 	RV32IMACFDV_zvl1024bcpu->F[7] = &RV32IMACFDV_zvl1024bcpu->FT7;
 	RV32IMACFDV_zvl1024bcpu->F[8] = &RV32IMACFDV_zvl1024bcpu->FS0;
 	RV32IMACFDV_zvl1024bcpu->F[9] = &RV32IMACFDV_zvl1024bcpu->FS1;
 	RV32IMACFDV_zvl1024bcpu->F[10] = &RV32IMACFDV_zvl1024bcpu->FA0;
 	RV32IMACFDV_zvl1024bcpu->F[11] = &RV32IMACFDV_zvl1024bcpu->FA1;
 	RV32IMACFDV_zvl1024bcpu->F[12] = &RV32IMACFDV_zvl1024bcpu->FA2;
 	RV32IMACFDV_zvl1024bcpu->F[13] = &RV32IMACFDV_zvl1024bcpu->FA3;
 	RV32IMACFDV_zvl1024bcpu->F[14] = &RV32IMACFDV_zvl1024bcpu->FA4;
 	RV32IMACFDV_zvl1024bcpu->F[15] = &RV32IMACFDV_zvl1024bcpu->FA5;
 	RV32IMACFDV_zvl1024bcpu->F[16] = &RV32IMACFDV_zvl1024bcpu->FA6;
 	RV32IMACFDV_zvl1024bcpu->F[17] = &RV32IMACFDV_zvl1024bcpu->FA7;
 	RV32IMACFDV_zvl1024bcpu->F[18] = &RV32IMACFDV_zvl1024bcpu->FS2;
 	RV32IMACFDV_zvl1024bcpu->F[19] = &RV32IMACFDV_zvl1024bcpu->FS3;
 	RV32IMACFDV_zvl1024bcpu->F[20] = &RV32IMACFDV_zvl1024bcpu->FS4;
 	RV32IMACFDV_zvl1024bcpu->F[21] = &RV32IMACFDV_zvl1024bcpu->FS5;
 	RV32IMACFDV_zvl1024bcpu->F[22] = &RV32IMACFDV_zvl1024bcpu->FS6;
 	RV32IMACFDV_zvl1024bcpu->F[23] = &RV32IMACFDV_zvl1024bcpu->FS7;
 	RV32IMACFDV_zvl1024bcpu->F[24] = &RV32IMACFDV_zvl1024bcpu->FS8;
 	RV32IMACFDV_zvl1024bcpu->F[25] = &RV32IMACFDV_zvl1024bcpu->FS9;
 	RV32IMACFDV_zvl1024bcpu->F[26] = &RV32IMACFDV_zvl1024bcpu->FS10;
 	RV32IMACFDV_zvl1024bcpu->F[27] = &RV32IMACFDV_zvl1024bcpu->FS11;
 	RV32IMACFDV_zvl1024bcpu->F[28] = &RV32IMACFDV_zvl1024bcpu->FT8;
 	RV32IMACFDV_zvl1024bcpu->F[29] = &RV32IMACFDV_zvl1024bcpu->FT9;
 	RV32IMACFDV_zvl1024bcpu->F[30] = &RV32IMACFDV_zvl1024bcpu->FT10;
 	RV32IMACFDV_zvl1024bcpu->F[31] = &RV32IMACFDV_zvl1024bcpu->FT11;

   	RV32IMACFDV_zvl1024bcpu->PRIV = 3ULL;
   	RV32IMACFDV_zvl1024bcpu->DPC = 0LL;
  	*RV32IMACFDV_zvl1024bcpu->CSR[0] = 11ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[256] = 11ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[768] = 1536ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[769] = 1075056941ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[3088] = 3ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[772] = 4294966203ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[260] = 4294964019ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[4] = 4294963473ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[3105] = 2147483648ULL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[3104] = 0LL;
 	*RV32IMACFDV_zvl1024bcpu->CSR[3106] = N_VREG_BYTES;
   	RV32IMACFDV_zvl1024bcpu->RES_ADDR = -1LL;

}

void RV32IMACFDV_zvl1024bArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMACFDV_zvl1024b *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACFDV_zvl1024bArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACFDV_zvl1024bArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMACFDV_zvl1024b.h)
*/
const std::set<std::string> & RV32IMACFDV_zvl1024bArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACFDV_zvl1024bArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl1024b/RV32IMACFDV_zvl1024b.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl1024b/RV32IMACFDV_zvl1024bFuncs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACFDV_zvl1024bArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMACFDV_zvl1024b("ISA16_RV32IMACFDV_zvl1024b", 16);
etiss::instr::InstructionClass ISA16_RV32IMACFDV_zvl1024bClass(1, "ISA16_RV32IMACFDV_zvl1024b", 16, ISA16_RV32IMACFDV_zvl1024b);
etiss::instr::InstructionGroup ISA32_RV32IMACFDV_zvl1024b("ISA32_RV32IMACFDV_zvl1024b", 32);
etiss::instr::InstructionClass ISA32_RV32IMACFDV_zvl1024bClass(1, "ISA32_RV32IMACFDV_zvl1024b", 32, ISA32_RV32IMACFDV_zvl1024b);

etiss::instr::InstructionCollection RV32IMACFDV_zvl1024bISA("RV32IMACFDV_zvl1024bISA", ISA16_RV32IMACFDV_zvl1024bClass, ISA32_RV32IMACFDV_zvl1024bClass);