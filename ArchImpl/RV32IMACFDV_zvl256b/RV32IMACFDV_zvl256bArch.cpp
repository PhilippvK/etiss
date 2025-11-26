/**
 * Generated on Wed, 30 Oct 2024 10:46:47 +0100.
 *
 * This file contains the architecture class for the RV32IMACFDV_zvl256b core architecture.
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
		 are provided in RV32IMACFDV_zvl256bArchSpecificImp.h

	 8. RV32IMACFDV_zvl256bGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACFDV_zvl256bArch.h"
#include "RV32IMACFDV_zvl256bFuncs.h"

#define RV32IMACFDV_zvl256b_DEBUG_CALL 0

#define N_VREG_BYTES 32

using namespace etiss ;
using namespace etiss::instr ;

RV32IMACFDV_zvl256bArch::RV32IMACFDV_zvl256bArch(unsigned int coreno):CPUArch("RV32IMACFDV_zvl256b"), coreno_(coreno)
{
	headers_.insert("Arch/RV32IMACFDV_zvl256b/RV32IMACFDV_zvl256b.h");
}

const std::set<std::string> & RV32IMACFDV_zvl256bArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACFDV_zvl256bArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMACFDV_zvl256b() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACFDV_zvl256bArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMACFDV_zvl256b));
	RV32IMACFDV_zvl256b * RV32IMACFDV_zvl256bcpu = (RV32IMACFDV_zvl256b *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl256bcpu->ins_X[i] = 0;
		RV32IMACFDV_zvl256bcpu->X[i] = &RV32IMACFDV_zvl256bcpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		RV32IMACFDV_zvl256bcpu->ins_CSR[i] = 0;
		RV32IMACFDV_zvl256bcpu->CSR[i] = &RV32IMACFDV_zvl256bcpu->ins_CSR[i];
	}
	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl256bcpu->ins_F[i] = 0;
		RV32IMACFDV_zvl256bcpu->F[i] = &RV32IMACFDV_zvl256bcpu->ins_F[i];
	}

	RV32IMACFDV_zvl256bcpu->ZERO = 0;
	RV32IMACFDV_zvl256bcpu->RA = 0;
	RV32IMACFDV_zvl256bcpu->SP = 0;
	RV32IMACFDV_zvl256bcpu->GP = 0;
	RV32IMACFDV_zvl256bcpu->TP = 0;
	RV32IMACFDV_zvl256bcpu->T0 = 0;
	RV32IMACFDV_zvl256bcpu->T1 = 0;
	RV32IMACFDV_zvl256bcpu->T2 = 0;
	RV32IMACFDV_zvl256bcpu->S0 = 0;
	RV32IMACFDV_zvl256bcpu->S1 = 0;
	RV32IMACFDV_zvl256bcpu->A0 = 0;
	RV32IMACFDV_zvl256bcpu->A1 = 0;
	RV32IMACFDV_zvl256bcpu->A2 = 0;
	RV32IMACFDV_zvl256bcpu->A3 = 0;
	RV32IMACFDV_zvl256bcpu->A4 = 0;
	RV32IMACFDV_zvl256bcpu->A5 = 0;
	RV32IMACFDV_zvl256bcpu->A6 = 0;
	RV32IMACFDV_zvl256bcpu->A7 = 0;
	RV32IMACFDV_zvl256bcpu->S2 = 0;
	RV32IMACFDV_zvl256bcpu->S3 = 0;
	RV32IMACFDV_zvl256bcpu->S4 = 0;
	RV32IMACFDV_zvl256bcpu->S5 = 0;
	RV32IMACFDV_zvl256bcpu->S6 = 0;
	RV32IMACFDV_zvl256bcpu->S7 = 0;
	RV32IMACFDV_zvl256bcpu->S8 = 0;
	RV32IMACFDV_zvl256bcpu->S9 = 0;
	RV32IMACFDV_zvl256bcpu->S10 = 0;
	RV32IMACFDV_zvl256bcpu->S11 = 0;
	RV32IMACFDV_zvl256bcpu->T3 = 0;
	RV32IMACFDV_zvl256bcpu->T4 = 0;
	RV32IMACFDV_zvl256bcpu->T5 = 0;
	RV32IMACFDV_zvl256bcpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl256bcpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl256bcpu->RES[i] = 0;
	}
	RV32IMACFDV_zvl256bcpu->PRIV = 0;
	RV32IMACFDV_zvl256bcpu->DPC = 0;
	RV32IMACFDV_zvl256bcpu->VSTART_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VXSAT_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VXRM_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VCSR_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VL_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VTYPE_CSR = 0;
	RV32IMACFDV_zvl256bcpu->VLENB_CSR = 0;
	RV32IMACFDV_zvl256bcpu->FCSR = 0;
	RV32IMACFDV_zvl256bcpu->FFLAGS = 0;
	RV32IMACFDV_zvl256bcpu->FRM = 0;
	RV32IMACFDV_zvl256bcpu->MSTATUS = 0;
	RV32IMACFDV_zvl256bcpu->MIE = 0;
	RV32IMACFDV_zvl256bcpu->MIP = 0;
	RV32IMACFDV_zvl256bcpu->CYCLE = 0;
	RV32IMACFDV_zvl256bcpu->CYCLEH = 0;
	RV32IMACFDV_zvl256bcpu->TIME = 0;
	RV32IMACFDV_zvl256bcpu->TIMEH = 0;
	RV32IMACFDV_zvl256bcpu->INSTRET = 0;
	RV32IMACFDV_zvl256bcpu->INSTRETH = 0;
	RV32IMACFDV_zvl256bcpu->MVENDORID = 0;
	RV32IMACFDV_zvl256bcpu->MARCHID = 0;
	RV32IMACFDV_zvl256bcpu->MIMPID = 0;
	RV32IMACFDV_zvl256bcpu->MHARTID = 0;
	RV32IMACFDV_zvl256bcpu->MISA = 0;
	RV32IMACFDV_zvl256bcpu->MEDELEG = 0;
	RV32IMACFDV_zvl256bcpu->MIDELEG = 0;
	RV32IMACFDV_zvl256bcpu->MTVEC = 0;
	RV32IMACFDV_zvl256bcpu->MCOUNTEREN = 0;
	RV32IMACFDV_zvl256bcpu->MSCRATCH = 0;
	RV32IMACFDV_zvl256bcpu->MEPC = 0;
	RV32IMACFDV_zvl256bcpu->MCAUSE = 0;
	RV32IMACFDV_zvl256bcpu->MTVAL = 0;
	for (int i = 0; i < N_VREG_BYTES; ++i) {
		RV32IMACFDV_zvl256bcpu->V[i] = 0;
	}
	RV32IMACFDV_zvl256bcpu->FT0 = 0;
	RV32IMACFDV_zvl256bcpu->FT1 = 0;
	RV32IMACFDV_zvl256bcpu->FT2 = 0;
	RV32IMACFDV_zvl256bcpu->FT3 = 0;
	RV32IMACFDV_zvl256bcpu->FT4 = 0;
	RV32IMACFDV_zvl256bcpu->FT5 = 0;
	RV32IMACFDV_zvl256bcpu->FT6 = 0;
	RV32IMACFDV_zvl256bcpu->FT7 = 0;
	RV32IMACFDV_zvl256bcpu->FS0 = 0;
	RV32IMACFDV_zvl256bcpu->FS1 = 0;
	RV32IMACFDV_zvl256bcpu->FA0 = 0;
	RV32IMACFDV_zvl256bcpu->FA1 = 0;
	RV32IMACFDV_zvl256bcpu->FA2 = 0;
	RV32IMACFDV_zvl256bcpu->FA3 = 0;
	RV32IMACFDV_zvl256bcpu->FA4 = 0;
	RV32IMACFDV_zvl256bcpu->FA5 = 0;
	RV32IMACFDV_zvl256bcpu->FA6 = 0;
	RV32IMACFDV_zvl256bcpu->FA7 = 0;
	RV32IMACFDV_zvl256bcpu->FS2 = 0;
	RV32IMACFDV_zvl256bcpu->FS3 = 0;
	RV32IMACFDV_zvl256bcpu->FS4 = 0;
	RV32IMACFDV_zvl256bcpu->FS5 = 0;
	RV32IMACFDV_zvl256bcpu->FS6 = 0;
	RV32IMACFDV_zvl256bcpu->FS7 = 0;
	RV32IMACFDV_zvl256bcpu->FS8 = 0;
	RV32IMACFDV_zvl256bcpu->FS9 = 0;
	RV32IMACFDV_zvl256bcpu->FS10 = 0;
	RV32IMACFDV_zvl256bcpu->FS11 = 0;
	RV32IMACFDV_zvl256bcpu->FT8 = 0;
	RV32IMACFDV_zvl256bcpu->FT9 = 0;
	RV32IMACFDV_zvl256bcpu->FT10 = 0;
	RV32IMACFDV_zvl256bcpu->FT11 = 0;
	RV32IMACFDV_zvl256bcpu->RES_ADDR = 0;

 	RV32IMACFDV_zvl256bcpu->X[0] = &RV32IMACFDV_zvl256bcpu->ZERO;
 	RV32IMACFDV_zvl256bcpu->X[1] = &RV32IMACFDV_zvl256bcpu->RA;
 	RV32IMACFDV_zvl256bcpu->X[2] = &RV32IMACFDV_zvl256bcpu->SP;
 	RV32IMACFDV_zvl256bcpu->X[3] = &RV32IMACFDV_zvl256bcpu->GP;
 	RV32IMACFDV_zvl256bcpu->X[4] = &RV32IMACFDV_zvl256bcpu->TP;
 	RV32IMACFDV_zvl256bcpu->X[5] = &RV32IMACFDV_zvl256bcpu->T0;
 	RV32IMACFDV_zvl256bcpu->X[6] = &RV32IMACFDV_zvl256bcpu->T1;
 	RV32IMACFDV_zvl256bcpu->X[7] = &RV32IMACFDV_zvl256bcpu->T2;
 	RV32IMACFDV_zvl256bcpu->X[8] = &RV32IMACFDV_zvl256bcpu->S0;
 	RV32IMACFDV_zvl256bcpu->X[9] = &RV32IMACFDV_zvl256bcpu->S1;
 	RV32IMACFDV_zvl256bcpu->X[10] = &RV32IMACFDV_zvl256bcpu->A0;
 	RV32IMACFDV_zvl256bcpu->X[11] = &RV32IMACFDV_zvl256bcpu->A1;
 	RV32IMACFDV_zvl256bcpu->X[12] = &RV32IMACFDV_zvl256bcpu->A2;
 	RV32IMACFDV_zvl256bcpu->X[13] = &RV32IMACFDV_zvl256bcpu->A3;
 	RV32IMACFDV_zvl256bcpu->X[14] = &RV32IMACFDV_zvl256bcpu->A4;
 	RV32IMACFDV_zvl256bcpu->X[15] = &RV32IMACFDV_zvl256bcpu->A5;
 	RV32IMACFDV_zvl256bcpu->X[16] = &RV32IMACFDV_zvl256bcpu->A6;
 	RV32IMACFDV_zvl256bcpu->X[17] = &RV32IMACFDV_zvl256bcpu->A7;
 	RV32IMACFDV_zvl256bcpu->X[18] = &RV32IMACFDV_zvl256bcpu->S2;
 	RV32IMACFDV_zvl256bcpu->X[19] = &RV32IMACFDV_zvl256bcpu->S3;
 	RV32IMACFDV_zvl256bcpu->X[20] = &RV32IMACFDV_zvl256bcpu->S4;
 	RV32IMACFDV_zvl256bcpu->X[21] = &RV32IMACFDV_zvl256bcpu->S5;
 	RV32IMACFDV_zvl256bcpu->X[22] = &RV32IMACFDV_zvl256bcpu->S6;
 	RV32IMACFDV_zvl256bcpu->X[23] = &RV32IMACFDV_zvl256bcpu->S7;
 	RV32IMACFDV_zvl256bcpu->X[24] = &RV32IMACFDV_zvl256bcpu->S8;
 	RV32IMACFDV_zvl256bcpu->X[25] = &RV32IMACFDV_zvl256bcpu->S9;
 	RV32IMACFDV_zvl256bcpu->X[26] = &RV32IMACFDV_zvl256bcpu->S10;
 	RV32IMACFDV_zvl256bcpu->X[27] = &RV32IMACFDV_zvl256bcpu->S11;
 	RV32IMACFDV_zvl256bcpu->X[28] = &RV32IMACFDV_zvl256bcpu->T3;
 	RV32IMACFDV_zvl256bcpu->X[29] = &RV32IMACFDV_zvl256bcpu->T4;
 	RV32IMACFDV_zvl256bcpu->X[30] = &RV32IMACFDV_zvl256bcpu->T5;
 	RV32IMACFDV_zvl256bcpu->X[31] = &RV32IMACFDV_zvl256bcpu->T6;
 	RV32IMACFDV_zvl256bcpu->CSR[8] = &RV32IMACFDV_zvl256bcpu->VSTART_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[9] = &RV32IMACFDV_zvl256bcpu->VXSAT_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[10] = &RV32IMACFDV_zvl256bcpu->VXRM_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[15] = &RV32IMACFDV_zvl256bcpu->VCSR_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[3104] = &RV32IMACFDV_zvl256bcpu->VL_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[3105] = &RV32IMACFDV_zvl256bcpu->VTYPE_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[3106] = &RV32IMACFDV_zvl256bcpu->VLENB_CSR;
 	RV32IMACFDV_zvl256bcpu->CSR[3] = &RV32IMACFDV_zvl256bcpu->FCSR;
 	RV32IMACFDV_zvl256bcpu->CSR[1] = &RV32IMACFDV_zvl256bcpu->FFLAGS;
 	RV32IMACFDV_zvl256bcpu->CSR[2] = &RV32IMACFDV_zvl256bcpu->FRM;
 	RV32IMACFDV_zvl256bcpu->CSR[768] = &RV32IMACFDV_zvl256bcpu->MSTATUS;
 	RV32IMACFDV_zvl256bcpu->CSR[772] = &RV32IMACFDV_zvl256bcpu->MIE;
 	RV32IMACFDV_zvl256bcpu->CSR[836] = &RV32IMACFDV_zvl256bcpu->MIP;
 	RV32IMACFDV_zvl256bcpu->CSR[3072] = &RV32IMACFDV_zvl256bcpu->CYCLE;
 	RV32IMACFDV_zvl256bcpu->CSR[3200] = &RV32IMACFDV_zvl256bcpu->CYCLEH;
 	RV32IMACFDV_zvl256bcpu->CSR[3073] = &RV32IMACFDV_zvl256bcpu->TIME;
 	RV32IMACFDV_zvl256bcpu->CSR[3201] = &RV32IMACFDV_zvl256bcpu->TIMEH;
 	RV32IMACFDV_zvl256bcpu->CSR[3074] = &RV32IMACFDV_zvl256bcpu->INSTRET;
 	RV32IMACFDV_zvl256bcpu->CSR[3202] = &RV32IMACFDV_zvl256bcpu->INSTRETH;
 	RV32IMACFDV_zvl256bcpu->CSR[3857] = &RV32IMACFDV_zvl256bcpu->MVENDORID;
 	RV32IMACFDV_zvl256bcpu->CSR[3858] = &RV32IMACFDV_zvl256bcpu->MARCHID;
 	RV32IMACFDV_zvl256bcpu->CSR[3859] = &RV32IMACFDV_zvl256bcpu->MIMPID;
 	RV32IMACFDV_zvl256bcpu->CSR[3860] = &RV32IMACFDV_zvl256bcpu->MHARTID;
 	RV32IMACFDV_zvl256bcpu->CSR[769] = &RV32IMACFDV_zvl256bcpu->MISA;
 	RV32IMACFDV_zvl256bcpu->CSR[770] = &RV32IMACFDV_zvl256bcpu->MEDELEG;
 	RV32IMACFDV_zvl256bcpu->CSR[771] = &RV32IMACFDV_zvl256bcpu->MIDELEG;
 	RV32IMACFDV_zvl256bcpu->CSR[773] = &RV32IMACFDV_zvl256bcpu->MTVEC;
 	RV32IMACFDV_zvl256bcpu->CSR[774] = &RV32IMACFDV_zvl256bcpu->MCOUNTEREN;
 	RV32IMACFDV_zvl256bcpu->CSR[832] = &RV32IMACFDV_zvl256bcpu->MSCRATCH;
 	RV32IMACFDV_zvl256bcpu->CSR[833] = &RV32IMACFDV_zvl256bcpu->MEPC;
 	RV32IMACFDV_zvl256bcpu->CSR[834] = &RV32IMACFDV_zvl256bcpu->MCAUSE;
 	RV32IMACFDV_zvl256bcpu->CSR[835] = &RV32IMACFDV_zvl256bcpu->MTVAL;
 	RV32IMACFDV_zvl256bcpu->F[0] = &RV32IMACFDV_zvl256bcpu->FT0;
 	RV32IMACFDV_zvl256bcpu->F[1] = &RV32IMACFDV_zvl256bcpu->FT1;
 	RV32IMACFDV_zvl256bcpu->F[2] = &RV32IMACFDV_zvl256bcpu->FT2;
 	RV32IMACFDV_zvl256bcpu->F[3] = &RV32IMACFDV_zvl256bcpu->FT3;
 	RV32IMACFDV_zvl256bcpu->F[4] = &RV32IMACFDV_zvl256bcpu->FT4;
 	RV32IMACFDV_zvl256bcpu->F[5] = &RV32IMACFDV_zvl256bcpu->FT5;
 	RV32IMACFDV_zvl256bcpu->F[6] = &RV32IMACFDV_zvl256bcpu->FT6;
 	RV32IMACFDV_zvl256bcpu->F[7] = &RV32IMACFDV_zvl256bcpu->FT7;
 	RV32IMACFDV_zvl256bcpu->F[8] = &RV32IMACFDV_zvl256bcpu->FS0;
 	RV32IMACFDV_zvl256bcpu->F[9] = &RV32IMACFDV_zvl256bcpu->FS1;
 	RV32IMACFDV_zvl256bcpu->F[10] = &RV32IMACFDV_zvl256bcpu->FA0;
 	RV32IMACFDV_zvl256bcpu->F[11] = &RV32IMACFDV_zvl256bcpu->FA1;
 	RV32IMACFDV_zvl256bcpu->F[12] = &RV32IMACFDV_zvl256bcpu->FA2;
 	RV32IMACFDV_zvl256bcpu->F[13] = &RV32IMACFDV_zvl256bcpu->FA3;
 	RV32IMACFDV_zvl256bcpu->F[14] = &RV32IMACFDV_zvl256bcpu->FA4;
 	RV32IMACFDV_zvl256bcpu->F[15] = &RV32IMACFDV_zvl256bcpu->FA5;
 	RV32IMACFDV_zvl256bcpu->F[16] = &RV32IMACFDV_zvl256bcpu->FA6;
 	RV32IMACFDV_zvl256bcpu->F[17] = &RV32IMACFDV_zvl256bcpu->FA7;
 	RV32IMACFDV_zvl256bcpu->F[18] = &RV32IMACFDV_zvl256bcpu->FS2;
 	RV32IMACFDV_zvl256bcpu->F[19] = &RV32IMACFDV_zvl256bcpu->FS3;
 	RV32IMACFDV_zvl256bcpu->F[20] = &RV32IMACFDV_zvl256bcpu->FS4;
 	RV32IMACFDV_zvl256bcpu->F[21] = &RV32IMACFDV_zvl256bcpu->FS5;
 	RV32IMACFDV_zvl256bcpu->F[22] = &RV32IMACFDV_zvl256bcpu->FS6;
 	RV32IMACFDV_zvl256bcpu->F[23] = &RV32IMACFDV_zvl256bcpu->FS7;
 	RV32IMACFDV_zvl256bcpu->F[24] = &RV32IMACFDV_zvl256bcpu->FS8;
 	RV32IMACFDV_zvl256bcpu->F[25] = &RV32IMACFDV_zvl256bcpu->FS9;
 	RV32IMACFDV_zvl256bcpu->F[26] = &RV32IMACFDV_zvl256bcpu->FS10;
 	RV32IMACFDV_zvl256bcpu->F[27] = &RV32IMACFDV_zvl256bcpu->FS11;
 	RV32IMACFDV_zvl256bcpu->F[28] = &RV32IMACFDV_zvl256bcpu->FT8;
 	RV32IMACFDV_zvl256bcpu->F[29] = &RV32IMACFDV_zvl256bcpu->FT9;
 	RV32IMACFDV_zvl256bcpu->F[30] = &RV32IMACFDV_zvl256bcpu->FT10;
 	RV32IMACFDV_zvl256bcpu->F[31] = &RV32IMACFDV_zvl256bcpu->FT11;

   	RV32IMACFDV_zvl256bcpu->PRIV = 3ULL;
   	RV32IMACFDV_zvl256bcpu->DPC = 0LL;
  	*RV32IMACFDV_zvl256bcpu->CSR[0] = 11ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[256] = 11ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[768] = 1536ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[769] = 1075056941ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[3088] = 3ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[772] = 4294966203ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[260] = 4294964019ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[4] = 4294963473ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[3105] = 2147483648ULL;
 	*RV32IMACFDV_zvl256bcpu->CSR[3104] = 0LL;
 	*RV32IMACFDV_zvl256bcpu->CSR[3106] = N_VREG_BYTES;
   	RV32IMACFDV_zvl256bcpu->RES_ADDR = -1LL;

}

void RV32IMACFDV_zvl256bArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMACFDV_zvl256b *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACFDV_zvl256bArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACFDV_zvl256bArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMACFDV_zvl256b.h)
*/
const std::set<std::string> & RV32IMACFDV_zvl256bArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACFDV_zvl256bArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl256b/RV32IMACFDV_zvl256b.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl256b/RV32IMACFDV_zvl256bFuncs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACFDV_zvl256bArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMACFDV_zvl256b("ISA16_RV32IMACFDV_zvl256b", 16);
etiss::instr::InstructionClass ISA16_RV32IMACFDV_zvl256bClass(1, "ISA16_RV32IMACFDV_zvl256b", 16, ISA16_RV32IMACFDV_zvl256b);
etiss::instr::InstructionGroup ISA32_RV32IMACFDV_zvl256b("ISA32_RV32IMACFDV_zvl256b", 32);
etiss::instr::InstructionClass ISA32_RV32IMACFDV_zvl256bClass(1, "ISA32_RV32IMACFDV_zvl256b", 32, ISA32_RV32IMACFDV_zvl256b);

etiss::instr::InstructionCollection RV32IMACFDV_zvl256bISA("RV32IMACFDV_zvl256bISA", ISA16_RV32IMACFDV_zvl256bClass, ISA32_RV32IMACFDV_zvl256bClass);