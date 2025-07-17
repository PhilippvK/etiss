/**
 * Generated on Wed, 16 Jul 2025 08:32:03 +0200.
 *
 * This file contains the instruction behavior models of the RV32F
 * instruction set for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Arch.h"
#include "RV32IMACFDXCFU0Funcs.h"

using namespace etiss;
using namespace etiss::instr;


// FLW -------------------------------------------------------------------------
static InstructionDefinition flw_rd_rs1_imm (
	ISA32_RV32IMACFDXCFU0,
	"flw",
	(uint32_t) 0x002007,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 88);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3400);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(7, 3367, 3366, 3362, 3361, 3359, 3365, 3363);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 res = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(4, 3374, 3373, 3371, 3370);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3399);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3398, 3386, 3385, 3397, 3396, 3394);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsw",
	(uint32_t) 0x002027,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 89);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3421);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(7, 3411, 3410, 3406, 3405, 3403, 3409, 3407);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint32)(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(6, 3420, 3414, 3413, 3419, 3417, 3416);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmadd_s",
	(uint32_t) 0x000043,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 90);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3492);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3476);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fmadd_s(unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]), unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]), unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs3) + "ULL]), 0LL, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(14, 3460, 3459, 3447, 3446, 3445, 3451, 3450, 3449, 3455, 3454, 3453, 3456, 3458, 3457);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3475, 3463, 3462, 3474, 3473, 3471);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3479, 3478);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3491, 3480, 3490, 3484, 3481, 3485, 3488, 3486, 3489);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmsub_s",
	(uint32_t) 0x000047,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 91);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3563);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3547);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fmadd_s(unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]), unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]), unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs3) + "ULL]), 1ULL, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(14, 3531, 3530, 3518, 3517, 3516, 3522, 3521, 3520, 3526, 3525, 3524, 3527, 3529, 3528);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3546, 3534, 3533, 3545, 3544, 3542);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3550, 3549);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3562, 3551, 3561, 3555, 3552, 3556, 3559, 3557, 3560);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fnmadd_s",
	(uint32_t) 0x00004f,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FNMADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 92);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3643);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3627);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3590, 3589, 3588, 3587);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3596, 3595, 3594, 3593);\n";
cp.code() += "etiss_uint32 frs3 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3602, 3601, 3600, 3599);\n";
cp.code() += "etiss_uint32 res = fmadd_s(frs1, frs2, frs3, 2ULL, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(8, 3611, 3610, 3604, 3605, 3606, 3607, 3609, 3608);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3626, 3614, 3613, 3625, 3624, 3622);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3630, 3629);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3642, 3631, 3641, 3635, 3632, 3636, 3639, 3637, 3640);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fnmsub_s",
	(uint32_t) 0x00004b,
	(uint32_t) 0x600007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FNMSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 93);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3723);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3707);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3670, 3669, 3668, 3667);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3676, 3675, 3674, 3673);\n";
cp.code() += "etiss_uint32 frs3 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3682, 3681, 3680, 3679);\n";
cp.code() += "etiss_uint32 res = fmadd_s(frs1, frs2, frs3, 3ULL, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(8, 3691, 3690, 3684, 3685, 3686, 3687, 3689, 3688);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3706, 3694, 3693, 3705, 3704, 3702);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3710, 3709);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3722, 3711, 3721, 3715, 3712, 3716, 3719, 3717, 3720);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fadd_s",
	(uint32_t) 0x000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FADD_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 94);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3791);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3775);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3746, 3745, 3744, 3743);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3752, 3751, 3750, 3749);\n";
cp.code() += "etiss_uint32 res = fadd_s(frs1, frs2, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3759, 3758, 3754, 3755, 3757, 3756);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3774, 3762, 3761, 3773, 3772, 3770);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3778, 3777);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3790, 3779, 3789, 3783, 3780, 3784, 3787, 3785, 3788);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsub_s",
	(uint32_t) 0x8000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSUB_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 95);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3859);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3843);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3814, 3813, 3812, 3811);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3820, 3819, 3818, 3817);\n";
cp.code() += "etiss_uint32 res = fsub_s(frs1, frs2, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3827, 3826, 3822, 3823, 3825, 3824);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3842, 3830, 3829, 3841, 3840, 3838);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3846, 3845);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3858, 3847, 3857, 3851, 3848, 3852, 3855, 3853, 3856);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmul_s",
	(uint32_t) 0x10000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMUL_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 96);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3927);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3911);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3882, 3881, 3880, 3879);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3888, 3887, 3886, 3885);\n";
cp.code() += "etiss_uint32 res = fmul_s(frs1, frs2, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3895, 3894, 3890, 3891, 3893, 3892);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3910, 3898, 3897, 3909, 3908, 3906);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3914, 3913);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3926, 3915, 3925, 3919, 3916, 3920, 3923, 3921, 3924);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fdiv_s",
	(uint32_t) 0x18000053,
	(uint32_t) 0xfe00007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FDIV_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 97);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3995);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3979);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3950, 3949, 3948, 3947);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 3956, 3955, 3954, 3953);\n";
cp.code() += "etiss_uint32 res = fdiv_s(frs1, frs2, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(6, 3963, 3962, 3958, 3959, 3961, 3960);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 3978, 3966, 3965, 3977, 3976, 3974);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 3982, 3981);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 3994, 3983, 3993, 3987, 3984, 3988, 3991, 3989, 3992);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsqrt_s",
	(uint32_t) 0x58000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSQRT_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 98);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4053);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4037);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4015, 4014, 4013, 4012);\n";
cp.code() += "etiss_uint32 res = fsqrt_s(frs1, RV32IMACFDXCFU0_get_rm(cpu, system, plugin_pointers, " + std::to_string(rm) + "ULL));\n";
cp.code() += "etiss_coverage_count(5, 4021, 4020, 4017, 4019, 4018);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4036, 4024, 4023, 4035, 4034, 4032);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4040, 4039);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4052, 4041, 4051, 4045, 4042, 4046, 4049, 4047, 4050);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsgnj_s",
	(uint32_t) 0x20000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJ_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 99);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4112);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4111);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4080, 4079, 4078, 4077);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4086, 4085, 4084, 4083);\n";
cp.code() += "etiss_uint32 res = ((((((frs2) >> (31ULL)) & 1ULL)) << 31) | (((frs1) & 2147483647ULL)));\n";
cp.code() += "etiss_coverage_count(10, 4097, 4096, 4091, 4088, 4089, 4090, 4095, 4092, 4093, 4094);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4110, 4100, 4099, 4109, 4108, 4106);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsgnjn_s",
	(uint32_t) 0x20001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJN_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 100);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4173);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4172);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4140, 4139, 4138, 4137);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4146, 4145, 4144, 4143);\n";
cp.code() += "etiss_uint32 res = (((~((((frs2) >> (31ULL)) & 1ULL))) << 31) | (((frs1) & 2147483647ULL)));\n";
cp.code() += "etiss_coverage_count(11, 4158, 4157, 4152, 4151, 4148, 4149, 4150, 4156, 4153, 4154, 4155);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4171, 4161, 4160, 4170, 4169, 4167);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fsgnjx_s",
	(uint32_t) 0x20002053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FSGNJX_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 101);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4228);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4227);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4197, 4196, 4195, 4194);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4203, 4202, 4201, 4200);\n";
cp.code() += "etiss_uint32 res = frs1 ^ (frs2 & 2147483648ULL);\n";
cp.code() += "etiss_coverage_count(7, 4211, 4210, 4205, 4208, 4206, 4207, 4209);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4226, 4214, 4213, 4225, 4224, 4222);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmin_s",
	(uint32_t) 0x28000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMIN_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 102);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4294);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4278);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4250, 4249, 4248, 4247);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4256, 4255, 4254, 4253);\n";
cp.code() += "etiss_uint32 res = fsel_s(frs1, frs2, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 4262, 4261, 4258, 4259, 4260);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4277, 4265, 4264, 4276, 4275, 4273);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4281, 4280);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4293, 4282, 4292, 4286, 4283, 4287, 4290, 4288, 4291);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmax_s",
	(uint32_t) 0x28001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMAX_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 103);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4360);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4344);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4316, 4315, 4314, 4313);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4322, 4321, 4320, 4319);\n";
cp.code() += "etiss_uint32 res = fsel_s(frs1, frs2, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 4328, 4327, 4324, 4325, 4326);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4343, 4331, 4330, 4342, 4341, 4339);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4347, 4346);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4359, 4348, 4358, 4352, 4349, 4353, 4356, 4354, 4357);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fcvt_w_s",
	(uint32_t) 0xc0000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_W_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 104);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4418);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4363, 4362);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4388);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4381, 4380, 4379, 4378);\n";
cp.code() += "res = fcvt_s(frs1, 0LL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 4387, 4382, 4386, 4383, 4384, 4385);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4389);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4395, 4392, 4390, 4393, 4394);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4402, 4400, 4399, 4397, 4401);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4405, 4404);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4417, 4406, 4416, 4410, 4407, 4411, 4414, 4412, 4415);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fcvt_wu_s",
	(uint32_t) 0xc0100053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_WU_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 105);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4479);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4421, 4420);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4446);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4439, 4438, 4437, 4436);\n";
cp.code() += "res = fcvt_s(frs1, 1ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 4445, 4440, 4444, 4441, 4442, 4443);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4447);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4453, 4450, 4448, 4451, 4452);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((etiss_int32)(res));\n";
cp.code() += "etiss_coverage_count(7, 4463, 4458, 4457, 4455, 4462, 4460, 4459);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4466, 4465);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4478, 4467, 4477, 4471, 4468, 4472, 4475, 4473, 4476);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"feq_s",
	(uint32_t) 0xa0002053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FEQ_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 106);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4545);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4482, 4481);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4515);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4502, 4501, 4500, 4499);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4508, 4507, 4506, 4505);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 0LL);\n";
cp.code() += "etiss_coverage_count(6, 4514, 4509, 4513, 4510, 4511, 4512);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4516);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4522, 4519, 4517, 4520, 4521);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4529, 4527, 4526, 4524, 4528);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4532, 4531);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4544, 4533, 4543, 4537, 4534, 4538, 4541, 4539, 4542);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"flt_s",
	(uint32_t) 0xa0001053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLT_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 107);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4611);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4548, 4547);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4581);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4568, 4567, 4566, 4565);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4574, 4573, 4572, 4571);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 2ULL);\n";
cp.code() += "etiss_coverage_count(6, 4580, 4575, 4579, 4576, 4577, 4578);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4582);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4588, 4585, 4583, 4586, 4587);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4595, 4593, 4592, 4590, 4594);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4598, 4597);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4610, 4599, 4609, 4603, 4600, 4604, 4607, 4605, 4608);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fle_s",
	(uint32_t) 0xa0000053,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FLE_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 108);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4677);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4614, 4613);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4647);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 frs1 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4634, 4633, 4632, 4631);\n";
cp.code() += "etiss_uint32 frs2 = unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(4, 4640, 4639, 4638, 4637);\n";
cp.code() += "res = fcmp_s(frs1, frs2, 1ULL);\n";
cp.code() += "etiss_coverage_count(6, 4646, 4641, 4645, 4642, 4643, 4644);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 4648);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4654, 4651, 4649, 4652, 4653);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4661, 4659, 4658, 4656, 4660);\n";
} // conditional
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 4664, 4663);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->FCSR = (((RV32IMACFDXCFU0*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 4676, 4665, 4675, 4669, 4666, 4670, 4673, 4671, 4674);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fclass_s",
	(uint32_t) 0xe0001053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCLASS_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 109);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4712);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 4680, 4679);\n";
cp.code() += "res = fclass_s(unbox_s(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(6, 4697, 4691, 4696, 4695, 4694, 4693);\n";
cp.code() += "etiss_coverage_count(1, 4698);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4704, 4701, 4699, 4702, 4703);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = res;\n";
cp.code() += "etiss_coverage_count(5, 4711, 4709, 4708, 4706, 4710);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fcvt_s_w",
	(uint32_t) 0xd0000053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_S_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 110);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4757);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4756);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fcvt_s((etiss_uint32)(*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]), 2ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 4740, 4739, 4736, 4735, 4734, 4732, 4737, 4738);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4755, 4743, 4742, 4754, 4753, 4751);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fcvt_s_wu",
	(uint32_t) 0xd0100053,
	(uint32_t) 0xfff0007f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

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

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FCVT_S_WU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 111);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4802);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4801);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 res = fcvt_s((etiss_uint32)(*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]), 3ULL, " + std::to_string(rm) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 4785, 4784, 4781, 4780, 4779, 4777, 4782, 4783);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(res);\n";
cp.code() += "etiss_coverage_count(6, 4800, 4788, 4787, 4799, 4798, 4796);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmv_x_w",
	(uint32_t) 0xe0000053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMV_X_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 112);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4823);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 4803);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 4809, 4806, 4804, 4807, 4808);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((etiss_int32)(((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(8, 4822, 4814, 4813, 4811, 4821, 4819, 4817, 4816);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"fmv_w_x",
	(uint32_t) 0xf0000053,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//FMV_W_X\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 113);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 4857);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 4856);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->F[" + std::to_string(rd) + "ULL] = -4294967296LL | (etiss_uint64)(*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(8, 4855, 4839, 4838, 4854, 4853, 4851, 4850, 4848);\n";
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
