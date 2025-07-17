/**
 * Generated on Wed, 16 Jul 2025 08:32:03 +0200.
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
cp.code() += "etiss_coverage_count(1, 149);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6383);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6342);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | (((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) & 65535ULL)));\n";
cp.code() += "etiss_coverage_count(9, 6341, 6332, 6340, 6333, 6339, 6336, 6335, 6337, 6338);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 6373);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6376, 6374, 6375);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6382);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6381, 6379, 6378, 6380);\n";
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
cp.code() += "etiss_coverage_count(1, 150);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6404);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | (((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) & 65535ULL)));\n";
cp.code() += "etiss_coverage_count(9, 6393, 6384, 6392, 6385, 6391, 6388, 6387, 6389, 6390);\n";
cp.code() += "etiss_coverage_count(1, 6394);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6397, 6395, 6396);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6403);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6402, 6400, 6399, 6401);\n";
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

// CFU0_PUSH_WEIGHTS_4B_FIX ----------------------------------------------------
static InstructionDefinition cfu0_push_weights_4b_fix_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_push_weights_4b_fix",
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

		cp.code() = std::string("//CFU0_PUSH_WEIGHTS_4B_FIX\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 151);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6425);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | (((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) & 65535ULL)));\n";
cp.code() += "etiss_coverage_count(9, 6414, 6405, 6413, 6406, 6412, 6409, 6408, 6410, 6411);\n";
cp.code() += "etiss_coverage_count(1, 6415);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6418, 6416, 6417);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6424);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6423, 6421, 6420, 6422);\n";
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
ss << "cfu0_push_weights_4b_fix" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
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
cp.code() += "etiss_coverage_count(1, 152);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6454);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)(((rs1) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6434, 6428, 6427, 6433, 6432, 6429, 6430, 6431);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6443, 6437, 6436, 6442, 6441, 6438, 6439, 6440);\n";
cp.code() += "etiss_coverage_count(1, 6444);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6447, 6445, 6446);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6453);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6452, 6450, 6449, 6451);\n";
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
cp.code() += "etiss_coverage_count(1, 153);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6501);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)(((rs1) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6463, 6457, 6456, 6462, 6461, 6458, 6459, 6460);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6472, 6466, 6465, 6471, 6470, 6467, 6468, 6469);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6481, 6475, 6474, 6480, 6479, 6476, 6477, 6478);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6490, 6484, 6483, 6489, 6488, 6485, 6486, 6487);\n";
cp.code() += "etiss_coverage_count(1, 6491);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6494, 6492, 6493);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6500);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6499, 6497, 6496, 6498);\n";
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
cp.code() += "etiss_coverage_count(1, 154);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6584);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)(((rs1) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6510, 6504, 6503, 6509, 6508, 6505, 6506, 6507);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6519, 6513, 6512, 6518, 6517, 6514, 6515, 6516);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6528, 6522, 6521, 6527, 6526, 6523, 6524, 6525);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6537, 6531, 6530, 6536, 6535, 6532, 6533, 6534);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[4ULL] = " + std::to_string((etiss_int8)(((rs2) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6546, 6540, 6539, 6545, 6544, 6541, 6542, 6543);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[5ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6555, 6549, 6548, 6554, 6553, 6550, 6551, 6552);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[6ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6564, 6558, 6557, 6563, 6562, 6559, 6560, 6561);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[7ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6573, 6567, 6566, 6572, 6571, 6568, 6569, 6570);\n";
cp.code() += "etiss_coverage_count(1, 6574);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6577, 6575, 6576);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6583);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6582, 6580, 6579, 6581);\n";
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
cp.code() += "etiss_coverage_count(1, 155);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6667);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[8ULL] = " + std::to_string((etiss_int8)(((rs1) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6593, 6587, 6586, 6592, 6591, 6588, 6589, 6590);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[9ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6602, 6596, 6595, 6601, 6600, 6597, 6598, 6599);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[10ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6611, 6605, 6604, 6610, 6609, 6606, 6607, 6608);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[11ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6620, 6614, 6613, 6619, 6618, 6615, 6616, 6617);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[12ULL] = " + std::to_string((etiss_int8)(((rs2) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6629, 6623, 6622, 6628, 6627, 6624, 6625, 6626);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[13ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6638, 6632, 6631, 6637, 6636, 6633, 6634, 6635);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[14ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6647, 6641, 6640, 6646, 6645, 6642, 6643, 6644);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[15ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6656, 6650, 6649, 6655, 6654, 6651, 6652, 6653);\n";
cp.code() += "etiss_coverage_count(1, 6657);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6660, 6658, 6659);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6666);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6665, 6663, 6662, 6664);\n";
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
cp.code() += "etiss_coverage_count(1, 156);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7036);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 weight_index0 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6670, 6669);\n";
cp.code() += "etiss_uint8 weight_index1 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6673, 6672);\n";
cp.code() += "etiss_uint8 weight_index2 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6676, 6675);\n";
cp.code() += "etiss_uint8 weight_index3 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6679, 6678);\n";
cp.code() += "etiss_uint8 weight_index4 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6682, 6681);\n";
cp.code() += "etiss_uint8 weight_index5 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6685, 6684);\n";
cp.code() += "etiss_uint8 weight_index6 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6688, 6687);\n";
cp.code() += "etiss_uint8 weight_index7 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6691, 6690);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6791);\n";
cp.code() += "{ // block\n";
cp.code() += "weight_index0 = (((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6748, 6743, 6747, 6744, 6745, 6746);\n";
cp.code() += "weight_index1 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (2ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6754, 6749, 6753, 6750, 6751, 6752);\n";
cp.code() += "weight_index2 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (4ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6760, 6755, 6759, 6756, 6757, 6758);\n";
cp.code() += "weight_index3 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (6ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6766, 6761, 6765, 6762, 6763, 6764);\n";
cp.code() += "weight_index4 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (8ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6772, 6767, 6771, 6768, 6769, 6770);\n";
cp.code() += "weight_index5 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (10ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6778, 6773, 6777, 6774, 6775, 6776);\n";
cp.code() += "weight_index6 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (12ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6784, 6779, 6783, 6780, 6781, 6782);\n";
cp.code() += "weight_index7 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (14ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6790, 6785, 6789, 6786, 6787, 6788);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_int8 w0 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index0];\n";
cp.code() += "etiss_coverage_count(3, 6845, 6844, 6843);\n";
cp.code() += "etiss_int8 w1 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index1];\n";
cp.code() += "etiss_coverage_count(3, 6850, 6849, 6848);\n";
cp.code() += "etiss_int8 w2 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index2];\n";
cp.code() += "etiss_coverage_count(3, 6855, 6854, 6853);\n";
cp.code() += "etiss_int8 w3 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index3];\n";
cp.code() += "etiss_coverage_count(3, 6860, 6859, 6858);\n";
cp.code() += "etiss_int8 w4 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index4];\n";
cp.code() += "etiss_coverage_count(3, 6865, 6864, 6863);\n";
cp.code() += "etiss_int8 w5 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index5];\n";
cp.code() += "etiss_coverage_count(3, 6870, 6869, 6868);\n";
cp.code() += "etiss_int8 w6 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index6];\n";
cp.code() += "etiss_coverage_count(3, 6875, 6874, 6873);\n";
cp.code() += "etiss_int8 w7 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index7];\n";
cp.code() += "etiss_coverage_count(3, 6880, 6879, 6878);\n";
cp.code() += "etiss_int16 t0 = w0 * ((etiss_int8)((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6895, 6894, 6882, 6892, 6890, 6888, 6885, 6884, 6886, 6887, 6889, 6893);\n";
cp.code() += "etiss_int16 t1 = w1 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6910, 6909, 6897, 6907, 6905, 6903, 6900, 6899, 6901, 6902, 6904, 6908);\n";
cp.code() += "etiss_int16 t2 = w2 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6925, 6924, 6912, 6922, 6920, 6918, 6915, 6914, 6916, 6917, 6919, 6923);\n";
cp.code() += "etiss_int16 t3 = w3 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6940, 6939, 6927, 6937, 6935, 6933, 6930, 6929, 6931, 6932, 6934, 6938);\n";
cp.code() += "etiss_int16 t4 = w4 * ((etiss_int8)((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6955, 6954, 6942, 6952, 6950, 6948, 6945, 6944, 6946, 6947, 6949, 6953);\n";
cp.code() += "etiss_int16 t5 = w5 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6970, 6969, 6957, 6967, 6965, 6963, 6960, 6959, 6961, 6962, 6964, 6968);\n";
cp.code() += "etiss_int16 t6 = w6 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6985, 6984, 6972, 6982, 6980, 6978, 6975, 6974, 6976, 6977, 6979, 6983);\n";
cp.code() += "etiss_int16 t7 = w7 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 7000, 6999, 6987, 6997, 6995, 6993, 6990, 6989, 6991, 6992, 6994, 6998);\n";
cp.code() += "etiss_int64 new_acc = (((etiss_int64)(((RV32IMACFDXCFU0*)cpu)->acc + t0 + t1 + t2 + t3 + t4 + t5 + t6 + t7)) << 31) >> 31;\n";
cp.code() += "etiss_coverage_count(18, 7019, 7018, 7016, 7014, 7012, 7010, 7008, 7006, 7004, 7002, 7003, 7005, 7007, 7009, 7011, 7013, 7015, 7017);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = ((new_acc) & 4294967295ULL);\n";
cp.code() += "etiss_coverage_count(6, 7025, 7020, 7024, 7021, 7022, 7023);\n";
cp.code() += "etiss_coverage_count(1, 7026);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7029, 7027, 7028);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7035);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = new_acc;\n";
cp.code() += "etiss_coverage_count(4, 7034, 7032, 7031, 7033);\n";
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
cp.code() += "etiss_coverage_count(1, 157);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7045);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 7039, 7037, 7038);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 7044, 7042, 7041, 7043);\n";
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

// CFU0_MAC_READ_FIX -----------------------------------------------------------
static InstructionDefinition cfu0_mac_read_fix_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_mac_read_fix",
	(uint32_t) 0xa000000b,
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

		cp.code() = std::string("//CFU0_MAC_READ_FIX\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 158);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7056);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 7046);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7049, 7047, 7048);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7055);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 7054, 7052, 7051, 7053);\n";
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
ss << "cfu0_mac_read_fix" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
