/**
 * Generated on Wed, 30 Oct 2024 10:46:47 +0100.
 *
 * This file contains the architecture class for the RV32IMACFDV_zvl128b_ca core architecture.
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
		 are provided in RV32IMACFDV_zvl128b_caArchSpecificImp.h

	 8. RV32IMACFDV_zvl128b_caGDBCore.h provides the GDBCore class to support gdb flavor debugging feature, modify iy if in need.

 *********************************************************************************************************************************/

#include "RV32IMACFDV_zvl128b_caArch.h"
#include "RV32IMACFDV_zvl128b_caFuncs.h"

#define RV32IMACFDV_zvl128b_ca_DEBUG_CALL 0

#define N_VREG_BYTES 16

using namespace etiss ;
using namespace etiss::instr ;

RV32IMACFDV_zvl128b_caArch::RV32IMACFDV_zvl128b_caArch(unsigned int coreno):CPUArch("RV32IMACFDV_zvl128b_ca"), coreno_(coreno)
{
	headers_.insert("Arch/RV32IMACFDV_zvl128b_ca/RV32IMACFDV_zvl128b_ca.h");
}

const std::set<std::string> & RV32IMACFDV_zvl128b_caArch::getListenerSupportedRegisters()
{
	return listenerSupportedRegisters_;
}

ETISS_CPU * RV32IMACFDV_zvl128b_caArch::newCPU()
{
	ETISS_CPU * ret = (ETISS_CPU *) new RV32IMACFDV_zvl128b_ca() ;
	resetCPU (ret, 0);
	return ret;
}

void RV32IMACFDV_zvl128b_caArch::resetCPU(ETISS_CPU * cpu,etiss::uint64 * startpointer)
{
	memset (cpu, 0, sizeof(RV32IMACFDV_zvl128b_ca));
	RV32IMACFDV_zvl128b_ca * RV32IMACFDV_zvl128b_cacpu = (RV32IMACFDV_zvl128b_ca *) cpu;

	if (startpointer) cpu->instructionPointer = *startpointer & ~((etiss::uint64)0x1);
	else cpu->instructionPointer = 0x0;   //  reference to manual
	cpu->nextPc = cpu->instructionPointer;
	cpu->mode = 1;
	cpu->cpuTime_ps = 0;
	cpu->cpuCycleTime_ps = 31250;


	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl128b_cacpu->ins_X[i] = 0;
		RV32IMACFDV_zvl128b_cacpu->X[i] = &RV32IMACFDV_zvl128b_cacpu->ins_X[i];
	}
	for (int i = 0; i < 4096; ++i) {
		RV32IMACFDV_zvl128b_cacpu->ins_CSR[i] = 0;
		RV32IMACFDV_zvl128b_cacpu->CSR[i] = &RV32IMACFDV_zvl128b_cacpu->ins_CSR[i];
	}
	for (int i = 0; i < 32; ++i) {
		RV32IMACFDV_zvl128b_cacpu->ins_F[i] = 0;
		RV32IMACFDV_zvl128b_cacpu->F[i] = &RV32IMACFDV_zvl128b_cacpu->ins_F[i];
	}

	RV32IMACFDV_zvl128b_cacpu->ZERO = 0;
	RV32IMACFDV_zvl128b_cacpu->RA = 0;
	RV32IMACFDV_zvl128b_cacpu->SP = 0;
	RV32IMACFDV_zvl128b_cacpu->GP = 0;
	RV32IMACFDV_zvl128b_cacpu->TP = 0;
	RV32IMACFDV_zvl128b_cacpu->T0 = 0;
	RV32IMACFDV_zvl128b_cacpu->T1 = 0;
	RV32IMACFDV_zvl128b_cacpu->T2 = 0;
	RV32IMACFDV_zvl128b_cacpu->S0 = 0;
	RV32IMACFDV_zvl128b_cacpu->S1 = 0;
	RV32IMACFDV_zvl128b_cacpu->A0 = 0;
	RV32IMACFDV_zvl128b_cacpu->A1 = 0;
	RV32IMACFDV_zvl128b_cacpu->A2 = 0;
	RV32IMACFDV_zvl128b_cacpu->A3 = 0;
	RV32IMACFDV_zvl128b_cacpu->A4 = 0;
	RV32IMACFDV_zvl128b_cacpu->A5 = 0;
	RV32IMACFDV_zvl128b_cacpu->A6 = 0;
	RV32IMACFDV_zvl128b_cacpu->A7 = 0;
	RV32IMACFDV_zvl128b_cacpu->S2 = 0;
	RV32IMACFDV_zvl128b_cacpu->S3 = 0;
	RV32IMACFDV_zvl128b_cacpu->S4 = 0;
	RV32IMACFDV_zvl128b_cacpu->S5 = 0;
	RV32IMACFDV_zvl128b_cacpu->S6 = 0;
	RV32IMACFDV_zvl128b_cacpu->S7 = 0;
	RV32IMACFDV_zvl128b_cacpu->S8 = 0;
	RV32IMACFDV_zvl128b_cacpu->S9 = 0;
	RV32IMACFDV_zvl128b_cacpu->S10 = 0;
	RV32IMACFDV_zvl128b_cacpu->S11 = 0;
	RV32IMACFDV_zvl128b_cacpu->T3 = 0;
	RV32IMACFDV_zvl128b_cacpu->T4 = 0;
	RV32IMACFDV_zvl128b_cacpu->T5 = 0;
	RV32IMACFDV_zvl128b_cacpu->T6 = 0;
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl128b_cacpu->FENCE[i] = 0;
	}
	for (int i = 0; i < 8; ++i) {
		RV32IMACFDV_zvl128b_cacpu->RES[i] = 0;
	}
	RV32IMACFDV_zvl128b_cacpu->PRIV = 0;
	RV32IMACFDV_zvl128b_cacpu->DPC = 0;
	RV32IMACFDV_zvl128b_cacpu->VSTART_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VXSAT_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VXRM_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VCSR_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VL_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VTYPE_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->VLENB_CSR = 0;
	RV32IMACFDV_zvl128b_cacpu->FCSR = 0;
	RV32IMACFDV_zvl128b_cacpu->FFLAGS = 0;
	RV32IMACFDV_zvl128b_cacpu->FRM = 0;
	RV32IMACFDV_zvl128b_cacpu->MSTATUS = 0;
	RV32IMACFDV_zvl128b_cacpu->MIE = 0;
	RV32IMACFDV_zvl128b_cacpu->MIP = 0;
	RV32IMACFDV_zvl128b_cacpu->CYCLE = 0;
	RV32IMACFDV_zvl128b_cacpu->CYCLEH = 0;
	RV32IMACFDV_zvl128b_cacpu->TIME = 0;
	RV32IMACFDV_zvl128b_cacpu->TIMEH = 0;
	RV32IMACFDV_zvl128b_cacpu->INSTRET = 0;
	RV32IMACFDV_zvl128b_cacpu->INSTRETH = 0;
	RV32IMACFDV_zvl128b_cacpu->MVENDORID = 0;
	RV32IMACFDV_zvl128b_cacpu->MARCHID = 0;
	RV32IMACFDV_zvl128b_cacpu->MIMPID = 0;
	RV32IMACFDV_zvl128b_cacpu->MHARTID = 0;
	RV32IMACFDV_zvl128b_cacpu->MISA = 0;
	RV32IMACFDV_zvl128b_cacpu->MEDELEG = 0;
	RV32IMACFDV_zvl128b_cacpu->MIDELEG = 0;
	RV32IMACFDV_zvl128b_cacpu->MTVEC = 0;
	RV32IMACFDV_zvl128b_cacpu->MCOUNTEREN = 0;
	RV32IMACFDV_zvl128b_cacpu->MSCRATCH = 0;
	RV32IMACFDV_zvl128b_cacpu->MEPC = 0;
	RV32IMACFDV_zvl128b_cacpu->MCAUSE = 0;
	RV32IMACFDV_zvl128b_cacpu->MTVAL = 0;
	for (int i = 0; i < N_VREG_BYTES; ++i) {
		RV32IMACFDV_zvl128b_cacpu->V[i] = 0;
	}
	RV32IMACFDV_zvl128b_cacpu->FT0 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT1 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT2 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT3 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT4 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT5 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT6 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT7 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS0 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS1 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA0 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA1 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA2 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA3 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA4 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA5 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA6 = 0;
	RV32IMACFDV_zvl128b_cacpu->FA7 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS2 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS3 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS4 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS5 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS6 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS7 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS8 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS9 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS10 = 0;
	RV32IMACFDV_zvl128b_cacpu->FS11 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT8 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT9 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT10 = 0;
	RV32IMACFDV_zvl128b_cacpu->FT11 = 0;
	RV32IMACFDV_zvl128b_cacpu->RES_ADDR = 0;

 	RV32IMACFDV_zvl128b_cacpu->X[0] = &RV32IMACFDV_zvl128b_cacpu->ZERO;
 	RV32IMACFDV_zvl128b_cacpu->X[1] = &RV32IMACFDV_zvl128b_cacpu->RA;
 	RV32IMACFDV_zvl128b_cacpu->X[2] = &RV32IMACFDV_zvl128b_cacpu->SP;
 	RV32IMACFDV_zvl128b_cacpu->X[3] = &RV32IMACFDV_zvl128b_cacpu->GP;
 	RV32IMACFDV_zvl128b_cacpu->X[4] = &RV32IMACFDV_zvl128b_cacpu->TP;
 	RV32IMACFDV_zvl128b_cacpu->X[5] = &RV32IMACFDV_zvl128b_cacpu->T0;
 	RV32IMACFDV_zvl128b_cacpu->X[6] = &RV32IMACFDV_zvl128b_cacpu->T1;
 	RV32IMACFDV_zvl128b_cacpu->X[7] = &RV32IMACFDV_zvl128b_cacpu->T2;
 	RV32IMACFDV_zvl128b_cacpu->X[8] = &RV32IMACFDV_zvl128b_cacpu->S0;
 	RV32IMACFDV_zvl128b_cacpu->X[9] = &RV32IMACFDV_zvl128b_cacpu->S1;
 	RV32IMACFDV_zvl128b_cacpu->X[10] = &RV32IMACFDV_zvl128b_cacpu->A0;
 	RV32IMACFDV_zvl128b_cacpu->X[11] = &RV32IMACFDV_zvl128b_cacpu->A1;
 	RV32IMACFDV_zvl128b_cacpu->X[12] = &RV32IMACFDV_zvl128b_cacpu->A2;
 	RV32IMACFDV_zvl128b_cacpu->X[13] = &RV32IMACFDV_zvl128b_cacpu->A3;
 	RV32IMACFDV_zvl128b_cacpu->X[14] = &RV32IMACFDV_zvl128b_cacpu->A4;
 	RV32IMACFDV_zvl128b_cacpu->X[15] = &RV32IMACFDV_zvl128b_cacpu->A5;
 	RV32IMACFDV_zvl128b_cacpu->X[16] = &RV32IMACFDV_zvl128b_cacpu->A6;
 	RV32IMACFDV_zvl128b_cacpu->X[17] = &RV32IMACFDV_zvl128b_cacpu->A7;
 	RV32IMACFDV_zvl128b_cacpu->X[18] = &RV32IMACFDV_zvl128b_cacpu->S2;
 	RV32IMACFDV_zvl128b_cacpu->X[19] = &RV32IMACFDV_zvl128b_cacpu->S3;
 	RV32IMACFDV_zvl128b_cacpu->X[20] = &RV32IMACFDV_zvl128b_cacpu->S4;
 	RV32IMACFDV_zvl128b_cacpu->X[21] = &RV32IMACFDV_zvl128b_cacpu->S5;
 	RV32IMACFDV_zvl128b_cacpu->X[22] = &RV32IMACFDV_zvl128b_cacpu->S6;
 	RV32IMACFDV_zvl128b_cacpu->X[23] = &RV32IMACFDV_zvl128b_cacpu->S7;
 	RV32IMACFDV_zvl128b_cacpu->X[24] = &RV32IMACFDV_zvl128b_cacpu->S8;
 	RV32IMACFDV_zvl128b_cacpu->X[25] = &RV32IMACFDV_zvl128b_cacpu->S9;
 	RV32IMACFDV_zvl128b_cacpu->X[26] = &RV32IMACFDV_zvl128b_cacpu->S10;
 	RV32IMACFDV_zvl128b_cacpu->X[27] = &RV32IMACFDV_zvl128b_cacpu->S11;
 	RV32IMACFDV_zvl128b_cacpu->X[28] = &RV32IMACFDV_zvl128b_cacpu->T3;
 	RV32IMACFDV_zvl128b_cacpu->X[29] = &RV32IMACFDV_zvl128b_cacpu->T4;
 	RV32IMACFDV_zvl128b_cacpu->X[30] = &RV32IMACFDV_zvl128b_cacpu->T5;
 	RV32IMACFDV_zvl128b_cacpu->X[31] = &RV32IMACFDV_zvl128b_cacpu->T6;
 	RV32IMACFDV_zvl128b_cacpu->CSR[8] = &RV32IMACFDV_zvl128b_cacpu->VSTART_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[9] = &RV32IMACFDV_zvl128b_cacpu->VXSAT_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[10] = &RV32IMACFDV_zvl128b_cacpu->VXRM_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[15] = &RV32IMACFDV_zvl128b_cacpu->VCSR_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3104] = &RV32IMACFDV_zvl128b_cacpu->VL_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3105] = &RV32IMACFDV_zvl128b_cacpu->VTYPE_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3106] = &RV32IMACFDV_zvl128b_cacpu->VLENB_CSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3] = &RV32IMACFDV_zvl128b_cacpu->FCSR;
 	RV32IMACFDV_zvl128b_cacpu->CSR[1] = &RV32IMACFDV_zvl128b_cacpu->FFLAGS;
 	RV32IMACFDV_zvl128b_cacpu->CSR[2] = &RV32IMACFDV_zvl128b_cacpu->FRM;
 	RV32IMACFDV_zvl128b_cacpu->CSR[768] = &RV32IMACFDV_zvl128b_cacpu->MSTATUS;
 	RV32IMACFDV_zvl128b_cacpu->CSR[772] = &RV32IMACFDV_zvl128b_cacpu->MIE;
 	RV32IMACFDV_zvl128b_cacpu->CSR[836] = &RV32IMACFDV_zvl128b_cacpu->MIP;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3072] = &RV32IMACFDV_zvl128b_cacpu->CYCLE;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3200] = &RV32IMACFDV_zvl128b_cacpu->CYCLEH;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3073] = &RV32IMACFDV_zvl128b_cacpu->TIME;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3201] = &RV32IMACFDV_zvl128b_cacpu->TIMEH;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3074] = &RV32IMACFDV_zvl128b_cacpu->INSTRET;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3202] = &RV32IMACFDV_zvl128b_cacpu->INSTRETH;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3857] = &RV32IMACFDV_zvl128b_cacpu->MVENDORID;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3858] = &RV32IMACFDV_zvl128b_cacpu->MARCHID;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3859] = &RV32IMACFDV_zvl128b_cacpu->MIMPID;
 	RV32IMACFDV_zvl128b_cacpu->CSR[3860] = &RV32IMACFDV_zvl128b_cacpu->MHARTID;
 	RV32IMACFDV_zvl128b_cacpu->CSR[769] = &RV32IMACFDV_zvl128b_cacpu->MISA;
 	RV32IMACFDV_zvl128b_cacpu->CSR[770] = &RV32IMACFDV_zvl128b_cacpu->MEDELEG;
 	RV32IMACFDV_zvl128b_cacpu->CSR[771] = &RV32IMACFDV_zvl128b_cacpu->MIDELEG;
 	RV32IMACFDV_zvl128b_cacpu->CSR[773] = &RV32IMACFDV_zvl128b_cacpu->MTVEC;
 	RV32IMACFDV_zvl128b_cacpu->CSR[774] = &RV32IMACFDV_zvl128b_cacpu->MCOUNTEREN;
 	RV32IMACFDV_zvl128b_cacpu->CSR[832] = &RV32IMACFDV_zvl128b_cacpu->MSCRATCH;
 	RV32IMACFDV_zvl128b_cacpu->CSR[833] = &RV32IMACFDV_zvl128b_cacpu->MEPC;
 	RV32IMACFDV_zvl128b_cacpu->CSR[834] = &RV32IMACFDV_zvl128b_cacpu->MCAUSE;
 	RV32IMACFDV_zvl128b_cacpu->CSR[835] = &RV32IMACFDV_zvl128b_cacpu->MTVAL;
 	RV32IMACFDV_zvl128b_cacpu->F[0] = &RV32IMACFDV_zvl128b_cacpu->FT0;
 	RV32IMACFDV_zvl128b_cacpu->F[1] = &RV32IMACFDV_zvl128b_cacpu->FT1;
 	RV32IMACFDV_zvl128b_cacpu->F[2] = &RV32IMACFDV_zvl128b_cacpu->FT2;
 	RV32IMACFDV_zvl128b_cacpu->F[3] = &RV32IMACFDV_zvl128b_cacpu->FT3;
 	RV32IMACFDV_zvl128b_cacpu->F[4] = &RV32IMACFDV_zvl128b_cacpu->FT4;
 	RV32IMACFDV_zvl128b_cacpu->F[5] = &RV32IMACFDV_zvl128b_cacpu->FT5;
 	RV32IMACFDV_zvl128b_cacpu->F[6] = &RV32IMACFDV_zvl128b_cacpu->FT6;
 	RV32IMACFDV_zvl128b_cacpu->F[7] = &RV32IMACFDV_zvl128b_cacpu->FT7;
 	RV32IMACFDV_zvl128b_cacpu->F[8] = &RV32IMACFDV_zvl128b_cacpu->FS0;
 	RV32IMACFDV_zvl128b_cacpu->F[9] = &RV32IMACFDV_zvl128b_cacpu->FS1;
 	RV32IMACFDV_zvl128b_cacpu->F[10] = &RV32IMACFDV_zvl128b_cacpu->FA0;
 	RV32IMACFDV_zvl128b_cacpu->F[11] = &RV32IMACFDV_zvl128b_cacpu->FA1;
 	RV32IMACFDV_zvl128b_cacpu->F[12] = &RV32IMACFDV_zvl128b_cacpu->FA2;
 	RV32IMACFDV_zvl128b_cacpu->F[13] = &RV32IMACFDV_zvl128b_cacpu->FA3;
 	RV32IMACFDV_zvl128b_cacpu->F[14] = &RV32IMACFDV_zvl128b_cacpu->FA4;
 	RV32IMACFDV_zvl128b_cacpu->F[15] = &RV32IMACFDV_zvl128b_cacpu->FA5;
 	RV32IMACFDV_zvl128b_cacpu->F[16] = &RV32IMACFDV_zvl128b_cacpu->FA6;
 	RV32IMACFDV_zvl128b_cacpu->F[17] = &RV32IMACFDV_zvl128b_cacpu->FA7;
 	RV32IMACFDV_zvl128b_cacpu->F[18] = &RV32IMACFDV_zvl128b_cacpu->FS2;
 	RV32IMACFDV_zvl128b_cacpu->F[19] = &RV32IMACFDV_zvl128b_cacpu->FS3;
 	RV32IMACFDV_zvl128b_cacpu->F[20] = &RV32IMACFDV_zvl128b_cacpu->FS4;
 	RV32IMACFDV_zvl128b_cacpu->F[21] = &RV32IMACFDV_zvl128b_cacpu->FS5;
 	RV32IMACFDV_zvl128b_cacpu->F[22] = &RV32IMACFDV_zvl128b_cacpu->FS6;
 	RV32IMACFDV_zvl128b_cacpu->F[23] = &RV32IMACFDV_zvl128b_cacpu->FS7;
 	RV32IMACFDV_zvl128b_cacpu->F[24] = &RV32IMACFDV_zvl128b_cacpu->FS8;
 	RV32IMACFDV_zvl128b_cacpu->F[25] = &RV32IMACFDV_zvl128b_cacpu->FS9;
 	RV32IMACFDV_zvl128b_cacpu->F[26] = &RV32IMACFDV_zvl128b_cacpu->FS10;
 	RV32IMACFDV_zvl128b_cacpu->F[27] = &RV32IMACFDV_zvl128b_cacpu->FS11;
 	RV32IMACFDV_zvl128b_cacpu->F[28] = &RV32IMACFDV_zvl128b_cacpu->FT8;
 	RV32IMACFDV_zvl128b_cacpu->F[29] = &RV32IMACFDV_zvl128b_cacpu->FT9;
 	RV32IMACFDV_zvl128b_cacpu->F[30] = &RV32IMACFDV_zvl128b_cacpu->FT10;
 	RV32IMACFDV_zvl128b_cacpu->F[31] = &RV32IMACFDV_zvl128b_cacpu->FT11;

   	RV32IMACFDV_zvl128b_cacpu->PRIV = 3ULL;
   	RV32IMACFDV_zvl128b_cacpu->DPC = 0LL;
  	*RV32IMACFDV_zvl128b_cacpu->CSR[0] = 11ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[256] = 11ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[768] = 1536ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[769] = 1075056941ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[3088] = 3ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[772] = 4294966203ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[260] = 4294964019ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[4] = 4294963473ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[3105] = 2147483648ULL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[3104] = 0LL;
 	*RV32IMACFDV_zvl128b_cacpu->CSR[3106] = N_VREG_BYTES;
   	RV32IMACFDV_zvl128b_cacpu->RES_ADDR = -1LL;

}

void RV32IMACFDV_zvl128b_caArch::deleteCPU(ETISS_CPU *cpu)
{
	delete (RV32IMACFDV_zvl128b_ca *) cpu ;
}

/**
	@return 8 (jump instruction + instruction of delay slot)
*/
unsigned RV32IMACFDV_zvl128b_caArch::getMaximumInstructionSizeInBytes()
{
	return 8;
}

/**
	@return 2
*/
unsigned RV32IMACFDV_zvl128b_caArch::getInstructionSizeInBytes()
{
	return 2;
}

/**
	@brief required headers (RV32IMACFDV_zvl128b_ca.h)
*/
const std::set<std::string> & RV32IMACFDV_zvl128b_caArch::getHeaders() const
{
	return headers_ ;
}

void RV32IMACFDV_zvl128b_caArch::initCodeBlock(etiss::CodeBlock & cb) const
{
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl128b_ca/RV32IMACFDV_zvl128b_ca.h\"\n");
	cb.fileglobalCode().insert("#include \"Arch/RV32IMACFDV_zvl128b_ca/RV32IMACFDV_zvl128b_caFuncs.h\"\n");
	cb.functionglobalCode().insert("cpu->exception = 0;\n");
	cb.functionglobalCode().insert("cpu->return_pending = 0;\n");
	cb.functionglobalCode().insert("etiss_uint32 mem_ret_code = 0;\n");
}

etiss::plugin::gdb::GDBCore & RV32IMACFDV_zvl128b_caArch::getGDBCore()
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

etiss::instr::InstructionGroup ISA16_RV32IMACFDV_zvl128b_ca("ISA16_RV32IMACFDV_zvl128b_ca", 16);
etiss::instr::InstructionClass ISA16_RV32IMACFDV_zvl128b_caClass(1, "ISA16_RV32IMACFDV_zvl128b_ca", 16, ISA16_RV32IMACFDV_zvl128b_ca);
etiss::instr::InstructionGroup ISA32_RV32IMACFDV_zvl128b_ca("ISA32_RV32IMACFDV_zvl128b_ca", 32);
etiss::instr::InstructionClass ISA32_RV32IMACFDV_zvl128b_caClass(1, "ISA32_RV32IMACFDV_zvl128b_ca", 32, ISA32_RV32IMACFDV_zvl128b_ca);

etiss::instr::InstructionCollection RV32IMACFDV_zvl128b_caISA("RV32IMACFDV_zvl128b_caISA", ISA16_RV32IMACFDV_zvl128b_caClass, ISA32_RV32IMACFDV_zvl128b_caClass);