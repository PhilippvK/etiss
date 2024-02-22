/**
 * Generated on Thu, 22 Feb 2024 17:38:03 +0100.
 *
 * This file contains the instruction behavior models of the XISE
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// AES283XOR -------------------------------------------------------------------
static InstructionDefinition aes283xor_rd_rs1 (
	ISA32_RV32IMACFD,
	"aes283xor",
	(uint32_t) 0x00000b,
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

		cp.code() = std::string("//AES283XOR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 input = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 temp = input << 1ULL;\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((input >> 7ULL) == 1ULL)) ? ((temp ^ 283ULL)) : (temp);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "aes283xor" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// AES283XORB ------------------------------------------------------------------
static InstructionDefinition aes283xorb_rd_rs1 (
	ISA32_RV32IMACFD,
	"aes283xorb",
	(uint32_t) 0x200000b,
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

		cp.code() = std::string("//AES283XORB\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 input = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 temp = input << 1ULL;\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((input >> 8ULL) == 1ULL)) ? ((temp ^ 283ULL)) : (temp);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "aes283xorb" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REFLECT8 --------------------------------------------------------------------
static InstructionDefinition reflect8_rd_rs1 (
	ISA32_RV32IMACFD,
	"reflect8",
	(uint32_t) 0x400000b,
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

		cp.code() = std::string("//REFLECT8\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (0ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (7ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (1ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (6ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (2ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (5ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (3ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (4ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (4ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (3ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (5ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (2ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (6ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (1ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (7ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 1)) & 0x1;\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "reflect8" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REFLECT32 -------------------------------------------------------------------
static InstructionDefinition reflect32_rd_rs1 (
	ISA32_RV32IMACFD,
	"reflect32",
	(uint32_t) 0x600000b,
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

		cp.code() = std::string("//REFLECT32\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (0ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (31ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (1ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (30ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (2ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (29ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (3ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (28ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (4ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (27ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (5ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (26ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (6ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (25ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (7ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (8ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (23ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (9ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (22ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (10ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (21ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (11ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (20ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (12ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (19ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (13ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (18ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (14ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (17ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (15ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (16ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (15ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (17ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (14ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (18ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (13ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (19ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (12ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (20ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (11ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (21ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (10ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (22ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (9ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (23ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (24ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (7ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (25ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (6ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (26ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (5ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (27ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (4ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (28ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (3ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (29ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (2ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (30ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (1ULL)) & 1)) & 0x1;\n";
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (31ULL)) & 1) = ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0ULL)) & 1)) & 0x1;\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "reflect32" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SIG0 ------------------------------------------------------------------
static InstructionDefinition sha256sig0_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sig0",
	(uint32_t) 0x800000b,
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

		cp.code() = std::string("//SHA256SIG0\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 7ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 18ULL) ^ (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> 3ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sig0" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SIG1 ------------------------------------------------------------------
static InstructionDefinition sha256sig1_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sig1",
	(uint32_t) 0xa00000b,
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

		cp.code() = std::string("//SHA256SIG1\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 17ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 19ULL) ^ (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> 10ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sig1" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SUM0 ------------------------------------------------------------------
static InstructionDefinition sha256sum0_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sum0",
	(uint32_t) 0xc00000b,
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

		cp.code() = std::string("//SHA256SUM0\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 2ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 13ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 22ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sum0" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SUM1 ------------------------------------------------------------------
static InstructionDefinition sha256sum1_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sum1",
	(uint32_t) 0xe00000b,
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

		cp.code() = std::string("//SHA256SUM1\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 6ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 11ULL) ^ RV32IMACFD_rotr32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 25ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sum1" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SIG0B -----------------------------------------------------------------
static InstructionDefinition sha256sig0b_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sig0b",
	(uint32_t) 0x1000000b,
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

		cp.code() = std::string("//SHA256SIG0B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 25ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 14ULL) ^ (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> 3ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sig0b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SIG1B -----------------------------------------------------------------
static InstructionDefinition sha256sig1b_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sig1b",
	(uint32_t) 0x1200000b,
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

		cp.code() = std::string("//SHA256SIG1B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 15ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 13ULL) ^ (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> 10ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sig1b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SUM0B -----------------------------------------------------------------
static InstructionDefinition sha256sum0b_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sum0b",
	(uint32_t) 0x1400000b,
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

		cp.code() = std::string("//SHA256SUM0B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 30ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 19ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 10ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sum0b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SHA256SUM1B -----------------------------------------------------------------
static InstructionDefinition sha256sum1b_rd_rs1 (
	ISA32_RV32IMACFD,
	"sha256sum1b",
	(uint32_t) 0x1600000b,
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

		cp.code() = std::string("//SHA256SUM1B\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 26ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 21ULL) ^ RV32IMACFD_rotl32(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL], 7ULL);\n";
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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sha256sum1b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ROTL32 ----------------------------------------------------------------------
static InstructionDefinition rotl32_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"rotl32",
	(uint32_t) 0x2000000b,
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

		cp.code() = std::string("//ROTL32\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] << (((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 31)) | (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> (32ULL - (((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 31)));\n";
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
ss << "rotl32" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ROTR32 ----------------------------------------------------------------------
static InstructionDefinition rotr32_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"rotr32",
	(uint32_t) 0x2200000b,
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

		cp.code() = std::string("//ROTR32\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> (((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 31)) | (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] << (32ULL - (((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 31)));\n";
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
ss << "rotr32" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
