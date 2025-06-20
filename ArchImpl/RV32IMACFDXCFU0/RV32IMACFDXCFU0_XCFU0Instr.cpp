/**
 * Generated on Fri, 20 Jun 2025 09:12:50 +0200.
 *
 * This file contains the instruction behavior models of the XCFU0
 * instruction set for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Arch.h"
#include "RV32IMACFDXCFU0Funcs.h"

using namespace etiss;
using namespace etiss::instr;


// CFU0_PUSH_WEIGHTS -----------------------------------------------------------
static InstructionDefinition cfu0_push_weights_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_push_weights",
	(uint32_t) 0x00000b,
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

		cp.code() = std::string("//CFU0_PUSH_WEIGHTS\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | ((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 65535ULL)));\n";
cp.code() += "} // block\n";
} // block
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_push_weights" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_PUSH_WEIGHTS_4B --------------------------------------------------------
static InstructionDefinition cfu0_push_weights_4b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_push_weights_4b",
	(uint32_t) 0x1000000b,
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

		cp.code() = std::string("//CFU0_PUSH_WEIGHTS_4B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | ((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 65535ULL)));\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_push_weights_4b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_SET_CODEBOOK_2B --------------------------------------------------------
static InstructionDefinition cfu0_set_codebook_2b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_set_codebook_2b",
	(uint32_t) 0x4000000b,
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

		cp.code() = std::string("//CFU0_SET_CODEBOOK_2B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_set_codebook_2b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_SET_CODEBOOK_4B --------------------------------------------------------
static InstructionDefinition cfu0_set_codebook_4b_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_set_codebook_4b",
	(uint32_t) 0x5000000b,
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

		cp.code() = std::string("//CFU0_SET_CODEBOOK_4B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_set_codebook_4b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_SET_CODEBOOK_16B_LO ----------------------------------------------------
static InstructionDefinition cfu0_set_codebook_16b_lo_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_set_codebook_16b_lo",
	(uint32_t) 0x7000000b,
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

		cp.code() = std::string("//CFU0_SET_CODEBOOK_16B_LO\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[4ULL] = " + std::to_string((etiss_int8)((((rs2) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[5ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[6ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[7ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_set_codebook_16b_lo" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_SET_CODEBOOK_16B_HI ----------------------------------------------------
static InstructionDefinition cfu0_set_codebook_16b_hi_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_set_codebook_16b_hi",
	(uint32_t) 0x6000000b,
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

		cp.code() = std::string("//CFU0_SET_CODEBOOK_16B_HI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[8ULL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[9ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[10ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[11ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[12ULL] = " + std::to_string((etiss_int8)((((rs2) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[13ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[14ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[15ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_set_codebook_16b_hi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_ALU_MAC ----------------------------------------------------------------
static InstructionDefinition cfu0_alu_mac_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_alu_mac",
	(uint32_t) 0x8000000b,
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

		cp.code() = std::string("//CFU0_ALU_MAC\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 weight_index0 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index1 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index2 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index3 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index4 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index5 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index6 = (0LL) & 0xf;\n";
cp.code() += "etiss_uint8 weight_index7 = (0LL) & 0xf;\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "weight_index0 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (0LL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index1 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (2ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index2 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (4ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index3 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (6ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index4 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (8ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index5 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (10ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index6 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (12ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "weight_index7 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (14ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_int8 w0 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index0];\n";
cp.code() += "etiss_int8 w1 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index1];\n";
cp.code() += "etiss_int8 w2 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index2];\n";
cp.code() += "etiss_int8 w3 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index3];\n";
cp.code() += "etiss_int8 w4 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index4];\n";
cp.code() += "etiss_int8 w5 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index5];\n";
cp.code() += "etiss_int8 w6 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index6];\n";
cp.code() += "etiss_int8 w7 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index7];\n";
cp.code() += "etiss_int16 t0 = w0 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t1 = w1 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t2 = w2 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t3 = w3 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t4 = w4 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0LL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t5 = w5 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t6 = w6 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int16 t7 = w7 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_int64 new_acc = (((RV32IMACFDXCFU0*)cpu)->acc + t0 + t1 + t2 + t3 + t4 + t5 + t6 + t7) & 0x1ffffffff;\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = (((new_acc) >> (0LL)) & 4294967295ULL);\n";
if (rd != 0LL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = new_acc;\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cfu0_alu_mac" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CFU0_ALU_RST ----------------------------------------------------------------
static InstructionDefinition cfu0_alu_rst_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_alu_rst",
	(uint32_t) 0x9000000b,
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

		cp.code() = std::string("//CFU0_ALU_RST\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = 0LL;\n";
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
ss << "cfu0_alu_rst" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
