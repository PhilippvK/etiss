// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 13:40:21 +0200.
 *
 * This file contains the instruction behavior models of the RV32F
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// FLW -------------------------------------------------------------------------
static InstructionDefinition flw_rd_rs1_imm (
	ISA32_RV32IMACFD,
	"flw",
	(uint32_t) 0x002007,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 88);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3447);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(7, 3414, 3413, 3409, 3408, 3406, 3412, 3410);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 res = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(4, 3421, 3420, 3418, 3417);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3446);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3445, 3433, 3432, 3444, 3443, 3441);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//FLW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(31, 20);
imm += R_imm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "flw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSW -------------------------------------------------------------------------
static InstructionDefinition fsw_imm_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fsw",
	(uint32_t) 0x002027,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 89);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3468);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(7, 3458, 3457, 3453, 3452, 3450, 3456, 3454);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint32)(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(6, 3467, 3461, 3460, 3466, 3464, 3463);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//FSW\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending || cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_0(11, 7);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm_5(31, 25);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsw" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMADD_S ---------------------------------------------------------------------
static InstructionDefinition fmadd_s_rd_rm_rs1_rs2_rs3 (
	ISA32_RV32IMACFD,
	"fmadd_s",
	(uint32_t) 0x000043,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 90);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3539);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3523);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fmadd_s(unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]), unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]), unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs3) + "ULL]), 0LL, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(14, 3507, 3506, 3494, 3493, 3492, 3498, 3497, 3496, 3502, 3501, 3500, 3503, 3505, 3504);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3522, 3510, 3509, 3521, 3520, 3518);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3526, 3525);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3538, 3527, 3537, 3531, 3528, 3532, 3535, 3533, 3536);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmadd_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | rs3=" + std::to_string(rs3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMSUB_S ---------------------------------------------------------------------
static InstructionDefinition fmsub_s_rd_rm_rs1_rs2_rs3 (
	ISA32_RV32IMACFD,
	"fmsub_s",
	(uint32_t) 0x000047,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 91);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3610);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3594);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fmadd_s(unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]), unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]), unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs3) + "ULL]), 1ULL, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(14, 3578, 3577, 3565, 3564, 3563, 3569, 3568, 3567, 3573, 3572, 3571, 3574, 3576, 3575);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3593, 3581, 3580, 3592, 3591, 3589);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3597, 3596);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3609, 3598, 3608, 3602, 3599, 3603, 3606, 3604, 3607);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmsub_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | rs3=" + std::to_string(rs3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FNMADD_S --------------------------------------------------------------------
static InstructionDefinition fnmadd_s_rd_rm_rs1_rs2_rs3 (
	ISA32_RV32IMACFD,
	"fnmadd_s",
	(uint32_t) 0x00004f,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FNMADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 92);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3690);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3674);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3637, 3636, 3635, 3634);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3643, 3642, 3641, 3640);\n";
cp.code() += "etiss_uint32 frs3 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3649, 3648, 3647, 3646);\n";
cp.code() += "etiss_uint32 res = fmadd_s(frs1, frs2, frs3, 2ULL, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(8, 3658, 3657, 3651, 3652, 3653, 3654, 3656, 3655);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3673, 3661, 3660, 3672, 3671, 3669);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3677, 3676);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3689, 3678, 3688, 3682, 3679, 3683, 3686, 3684, 3687);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fnmadd_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | rs3=" + std::to_string(rs3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FNMSUB_S --------------------------------------------------------------------
static InstructionDefinition fnmsub_s_rd_rm_rs1_rs2_rs3 (
	ISA32_RV32IMACFD,
	"fnmsub_s",
	(uint32_t) 0x00004b,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FNMSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 93);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3770);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3754);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3717, 3716, 3715, 3714);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3723, 3722, 3721, 3720);\n";
cp.code() += "etiss_uint32 frs3 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3729, 3728, 3727, 3726);\n";
cp.code() += "etiss_uint32 res = fmadd_s(frs1, frs2, frs3, 3ULL, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(8, 3738, 3737, 3731, 3732, 3733, 3734, 3736, 3735);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3753, 3741, 3740, 3752, 3751, 3749);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3757, 3756);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3769, 3758, 3768, 3762, 3759, 3763, 3766, 3764, 3767);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(31, 27);
rs3 += R_rs3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fnmsub_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | rs3=" + std::to_string(rs3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FADD_S ----------------------------------------------------------------------
static InstructionDefinition fadd_s_rd_rm_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fadd_s",
	(uint32_t) 0x000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 94);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3838);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3822);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3793, 3792, 3791, 3790);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3799, 3798, 3797, 3796);\n";
cp.code() += "etiss_uint32 res = fadd_s(frs1, frs2, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3806, 3805, 3801, 3802, 3804, 3803);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3821, 3809, 3808, 3820, 3819, 3817);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3825, 3824);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3837, 3826, 3836, 3830, 3827, 3831, 3834, 3832, 3835);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fadd_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSUB_S ----------------------------------------------------------------------
static InstructionDefinition fsub_s_rd_rm_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fsub_s",
	(uint32_t) 0x8000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 95);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3906);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3890);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3861, 3860, 3859, 3858);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3867, 3866, 3865, 3864);\n";
cp.code() += "etiss_uint32 res = fsub_s(frs1, frs2, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3874, 3873, 3869, 3870, 3872, 3871);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3889, 3877, 3876, 3888, 3887, 3885);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3893, 3892);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3905, 3894, 3904, 3898, 3895, 3899, 3902, 3900, 3903);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsub_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMUL_S ----------------------------------------------------------------------
static InstructionDefinition fmul_s_rd_rm_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fmul_s",
	(uint32_t) 0x10000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMUL_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 96);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3974);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3958);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3929, 3928, 3927, 3926);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3935, 3934, 3933, 3932);\n";
cp.code() += "etiss_uint32 res = fmul_s(frs1, frs2, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3942, 3941, 3937, 3938, 3940, 3939);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3957, 3945, 3944, 3956, 3955, 3953);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3961, 3960);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3973, 3962, 3972, 3966, 3963, 3967, 3970, 3968, 3971);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmul_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FDIV_S ----------------------------------------------------------------------
static InstructionDefinition fdiv_s_rd_rm_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fdiv_s",
	(uint32_t) 0x18000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FDIV_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 97);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4042);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4026);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3997, 3996, 3995, 3994);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4003, 4002, 4001, 4000);\n";
cp.code() += "etiss_uint32 res = fdiv_s(frs1, frs2, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 4010, 4009, 4005, 4006, 4008, 4007);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4025, 4013, 4012, 4024, 4023, 4021);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4029, 4028);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4041, 4030, 4040, 4034, 4031, 4035, 4038, 4036, 4039);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fdiv_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSQRT_S ---------------------------------------------------------------------
static InstructionDefinition fsqrt_s_rd_rm_rs1 (
	ISA32_RV32IMACFD,
	"fsqrt_s",
	(uint32_t) 0x58000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSQRT_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 98);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4100);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4084);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4062, 4061, 4060, 4059);\n";
cp.code() += "etiss_uint32 res = fsqrt_s(frs1, RV32IMACFD_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(5, 4068, 4067, 4064, 4066, 4065);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4083, 4071, 4070, 4082, 4081, 4079);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4087, 4086);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4099, 4088, 4098, 4092, 4089, 4093, 4096, 4094, 4097);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsqrt_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSGNJ_S ---------------------------------------------------------------------
static InstructionDefinition fsgnj_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fsgnj_s",
	(uint32_t) 0x20000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJ_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 99);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4159);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4158);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4127, 4126, 4125, 4124);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4133, 4132, 4131, 4130);\n";
cp.code() += "etiss_uint32 res = ((((((frs2) >> (31ULL)) & 0x1ULL)) << 31) | (((frs1) & 0x7fffffffULL)));\n";
cp.code() += "etiss_coverage_count(10, 4144, 4143, 4138, 4135, 4136, 4137, 4142, 4139, 4140, 4141);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4157, 4147, 4146, 4156, 4155, 4153);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsgnj_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSGNJN_S --------------------------------------------------------------------
static InstructionDefinition fsgnjn_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fsgnjn_s",
	(uint32_t) 0x20001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJN_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 100);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4220);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4219);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4187, 4186, 4185, 4184);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4193, 4192, 4191, 4190);\n";
cp.code() += "etiss_uint32 res = (((~((((frs2) >> (31ULL)) & 0x1ULL))) << 31) | (((frs1) & 0x7fffffffULL)));\n";
cp.code() += "etiss_coverage_count(11, 4205, 4204, 4199, 4198, 4195, 4196, 4197, 4203, 4200, 4201, 4202);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4218, 4208, 4207, 4217, 4216, 4214);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsgnjn_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FSGNJX_S --------------------------------------------------------------------
static InstructionDefinition fsgnjx_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fsgnjx_s",
	(uint32_t) 0x20002053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJX_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 101);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4275);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4274);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4244, 4243, 4242, 4241);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4250, 4249, 4248, 4247);\n";
cp.code() += "etiss_uint32 res = frs1 ^ (frs2 & 2147483648ULL);\n";
cp.code() += "etiss_coverage_count(7, 4258, 4257, 4252, 4255, 4253, 4254, 4256);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4273, 4261, 4260, 4272, 4271, 4269);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fsgnjx_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMIN_S ----------------------------------------------------------------------
static InstructionDefinition fmin_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fmin_s",
	(uint32_t) 0x28000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMIN_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 102);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4341);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4325);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4297, 4296, 4295, 4294);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4303, 4302, 4301, 4300);\n";
cp.code() += "etiss_uint32 res = fsel_s(frs1, frs2, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 4309, 4308, 4305, 4306, 4307);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4324, 4312, 4311, 4323, 4322, 4320);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4328, 4327);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4340, 4329, 4339, 4333, 4330, 4334, 4337, 4335, 4338);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmin_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMAX_S ----------------------------------------------------------------------
static InstructionDefinition fmax_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fmax_s",
	(uint32_t) 0x28001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMAX_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 103);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4407);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4391);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4363, 4362, 4361, 4360);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4369, 4368, 4367, 4366);\n";
cp.code() += "etiss_uint32 res = fsel_s(frs1, frs2, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 4375, 4374, 4371, 4372, 4373);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4390, 4378, 4377, 4389, 4388, 4386);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4394, 4393);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4406, 4395, 4405, 4399, 4396, 4400, 4403, 4401, 4404);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmax_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FCVT_W_S --------------------------------------------------------------------
static InstructionDefinition fcvt_w_s_rd_rm_rs1 (
	ISA32_RV32IMACFD,
	"fcvt_w_s",
	(uint32_t) 0xc0000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_W_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 104);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4465);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4410, 4409);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4435);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4428, 4427, 4426, 4425);\n";
cp.code() += "res = fcvt_s(frs1, 0LL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 4434, 4429, 4433, 4430, 4431, 4432);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4436);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4442, 4439, 4437, 4440, 4441);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4449, 4447, 4446, 4444, 4448);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4452, 4451);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4464, 4453, 4463, 4457, 4454, 4458, 4461, 4459, 4462);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fcvt_w_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FCVT_WU_S -------------------------------------------------------------------
static InstructionDefinition fcvt_wu_s_rd_rm_rs1 (
	ISA32_RV32IMACFD,
	"fcvt_wu_s",
	(uint32_t) 0xc0100053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_WU_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 105);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4526);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4468, 4467);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4493);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4486, 4485, 4484, 4483);\n";
cp.code() += "res = fcvt_s(frs1, 1ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 4492, 4487, 4491, 4488, 4489, 4490);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4494);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4500, 4497, 4495, 4498, 4499);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((etiss_int32)(res));\n";
cp.code() += "etiss_coverage_count(7, 4510, 4505, 4504, 4502, 4509, 4507, 4506);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4513, 4512);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4525, 4514, 4524, 4518, 4515, 4519, 4522, 4520, 4523);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fcvt_wu_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FEQ_S -----------------------------------------------------------------------
static InstructionDefinition feq_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"feq_s",
	(uint32_t) 0xa0002053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FEQ_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 106);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4592);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4529, 4528);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4562);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4549, 4548, 4547, 4546);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4555, 4554, 4553, 4552);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 0LL);\n";
cp.code() += "etiss_coverage_count(6, 4561, 4556, 4560, 4557, 4558, 4559);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4563);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4569, 4566, 4564, 4567, 4568);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4576, 4574, 4573, 4571, 4575);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4579, 4578);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4591, 4580, 4590, 4584, 4581, 4585, 4588, 4586, 4589);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "feq_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FLT_S -----------------------------------------------------------------------
static InstructionDefinition flt_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"flt_s",
	(uint32_t) 0xa0001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLT_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 107);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4658);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4595, 4594);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4628);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4615, 4614, 4613, 4612);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4621, 4620, 4619, 4618);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 2ULL);\n";
cp.code() += "etiss_coverage_count(6, 4627, 4622, 4626, 4623, 4624, 4625);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4629);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4635, 4632, 4630, 4633, 4634);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4642, 4640, 4639, 4637, 4641);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4645, 4644);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4657, 4646, 4656, 4650, 4647, 4651, 4654, 4652, 4655);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "flt_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FLE_S -----------------------------------------------------------------------
static InstructionDefinition fle_s_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"fle_s",
	(uint32_t) 0xa0000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLE_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 108);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4724);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4661, 4660);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4694);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4681, 4680, 4679, 4678);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4687, 4686, 4685, 4684);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 1ULL);\n";
cp.code() += "etiss_coverage_count(6, 4693, 4688, 4692, 4689, 4690, 4691);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4695);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4701, 4698, 4696, 4699, 4700);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4708, 4706, 4705, 4703, 4707);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4711, 4710);\n";
cp.code() += "((RV32IMACFD*)cpu)->FCSR = (((RV32IMACFD*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4723, 4712, 4722, 4716, 4713, 4717, 4720, 4718, 4721);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fle_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FCLASS_S --------------------------------------------------------------------
static InstructionDefinition fclass_s_rd_rs1 (
	ISA32_RV32IMACFD,
	"fclass_s",
	(uint32_t) 0xe0001053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCLASS_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 109);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4759);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4727, 4726);\n";
cp.code() += "res = fclass_s(unbox_s(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(6, 4744, 4738, 4743, 4742, 4741, 4740);\n";
cp.code() += "etiss_coverage_count(1, 4745);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4751, 4748, 4746, 4749, 4750);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4758, 4756, 4755, 4753, 4757);\n";
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fclass_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FCVT_S_W --------------------------------------------------------------------
static InstructionDefinition fcvt_s_w_rd_rm_rs1 (
	ISA32_RV32IMACFD,
	"fcvt_s_w",
	(uint32_t) 0xd0000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_S_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 110);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4804);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4803);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fcvt_s((etiss_uint32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]), 2ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 4787, 4786, 4783, 4782, 4781, 4779, 4784, 4785);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4802, 4790, 4789, 4801, 4800, 4798);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fcvt_s_w" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FCVT_S_WU -------------------------------------------------------------------
static InstructionDefinition fcvt_s_wu_rd_rm_rs1 (
	ISA32_RV32IMACFD,
	"fcvt_s_wu",
	(uint32_t) 0xd0100053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_S_WU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 111);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4849);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4848);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fcvt_s((etiss_uint32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]), 3ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 4832, 4831, 4828, 4827, 4826, 4824, 4829, 4830);\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4847, 4835, 4834, 4846, 4845, 4843);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rm = 0;
static BitArrayRange R_rm_0(14, 12);
rm += R_rm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fcvt_s_wu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rm=" + std::to_string(rm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMV_X_W ---------------------------------------------------------------------
static InstructionDefinition fmv_x_w_rd_rs1 (
	ISA32_RV32IMACFD,
	"fmv_x_w",
	(uint32_t) 0xe0000053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMV_X_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 112);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4870);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 4850);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4856, 4853, 4851, 4854, 4855);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((etiss_int32)(*((RV32IMACFD*)cpu)->F[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(8, 4869, 4861, 4860, 4858, 4868, 4866, 4864, 4863);\n";
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmv_x_w" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// FMV_W_X ---------------------------------------------------------------------
static InstructionDefinition fmv_w_x_rd_rs1 (
	ISA32_RV32IMACFD,
	"fmv_w_x",
	(uint32_t) 0xf0000053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMV_W_X\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 113);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4904);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4903);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(8, 4902, 4886, 4885, 4901, 4900, 4898, 4897, 4895);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "fmv_w_x" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
