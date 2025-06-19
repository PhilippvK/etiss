/**
 * Generated on Thu, 19 Jun 2025 20:06:23 +0200.
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
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6381);\n";
cp.code() += "{ // block\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6340);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | ((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 65535ULL)));\n";
cp.code() += "etiss_coverage_count(9, 6339, 6330, 6338, 6331, 6337, 6334, 6333, 6335, 6336);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 6371);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6374, 6372, 6373);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6380);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6379, 6377, 6376, 6378);\n";
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
static InstructionDefinition cfu0_push_weights_4b_rd_rs1 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_push_weights_4b",
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

		cp.code() = std::string("//CFU0_PUSH_WEIGHTS_4B\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 150);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6402);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->weight_code_packed = (((0LL) << 16) | ((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 65535ULL)));\n";
cp.code() += "etiss_coverage_count(9, 6391, 6382, 6390, 6383, 6389, 6386, 6385, 6387, 6388);\n";
cp.code() += "etiss_coverage_count(1, 6392);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6395, 6393, 6394);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6401);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6400, 6398, 6397, 6399);\n";
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
ss << "cfu0_push_weights_4b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
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
cp.code() += "etiss_coverage_count(1, 151);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6431);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6411, 6405, 6404, 6410, 6409, 6406, 6407, 6408);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6420, 6414, 6413, 6419, 6418, 6415, 6416, 6417);\n";
cp.code() += "etiss_coverage_count(1, 6421);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6424, 6422, 6423);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6430);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6429, 6427, 6426, 6428);\n";
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
cp.code() += "etiss_coverage_count(1, 152);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6478);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6440, 6434, 6433, 6439, 6438, 6435, 6436, 6437);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6449, 6443, 6442, 6448, 6447, 6444, 6445, 6446);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6458, 6452, 6451, 6457, 6456, 6453, 6454, 6455);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6467, 6461, 6460, 6466, 6465, 6462, 6463, 6464);\n";
cp.code() += "etiss_coverage_count(1, 6468);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6471, 6469, 6470);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6477);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6476, 6474, 6473, 6475);\n";
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
cp.code() += "etiss_coverage_count(1, 153);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6561);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[0LL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6487, 6481, 6480, 6486, 6485, 6482, 6483, 6484);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[1ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6496, 6490, 6489, 6495, 6494, 6491, 6492, 6493);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[2ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6505, 6499, 6498, 6504, 6503, 6500, 6501, 6502);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[3ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6514, 6508, 6507, 6513, 6512, 6509, 6510, 6511);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[4ULL] = " + std::to_string((etiss_int8)((((rs2) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6523, 6517, 6516, 6522, 6521, 6518, 6519, 6520);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[5ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6532, 6526, 6525, 6531, 6530, 6527, 6528, 6529);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[6ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6541, 6535, 6534, 6540, 6539, 6536, 6537, 6538);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[7ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6550, 6544, 6543, 6549, 6548, 6545, 6546, 6547);\n";
cp.code() += "etiss_coverage_count(1, 6551);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6554, 6552, 6553);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6560);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6559, 6557, 6556, 6558);\n";
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
cp.code() += "etiss_coverage_count(1, 154);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6644);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[8ULL] = " + std::to_string((etiss_int8)((((rs1) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6570, 6564, 6563, 6569, 6568, 6565, 6566, 6567);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[9ULL] = " + std::to_string((etiss_int8)((((rs1) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6579, 6573, 6572, 6578, 6577, 6574, 6575, 6576);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[10ULL] = " + std::to_string((etiss_int8)((((rs1) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6588, 6582, 6581, 6587, 6586, 6583, 6584, 6585);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[11ULL] = " + std::to_string((etiss_int8)((((rs1) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6597, 6591, 6590, 6596, 6595, 6592, 6593, 6594);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[12ULL] = " + std::to_string((etiss_int8)((((rs2) >> (0LL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6606, 6600, 6599, 6605, 6604, 6601, 6602, 6603);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[13ULL] = " + std::to_string((etiss_int8)((((rs2) >> (8ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6615, 6609, 6608, 6614, 6613, 6610, 6611, 6612);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[14ULL] = " + std::to_string((etiss_int8)((((rs2) >> (16ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6624, 6618, 6617, 6623, 6622, 6619, 6620, 6621);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->clusters[15ULL] = " + std::to_string((etiss_int8)((((rs2) >> (24ULL)) & 255ULL))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 6633, 6627, 6626, 6632, 6631, 6628, 6629, 6630);\n";
cp.code() += "etiss_coverage_count(1, 6634);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 6637, 6635, 6636);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6643);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = ((RV32IMACFDXCFU0*)cpu)->acc;\n";
cp.code() += "etiss_coverage_count(4, 6642, 6640, 6639, 6641);\n";
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

// CFU0_ALU_RST ----------------------------------------------------------------
static InstructionDefinition cfu0_alu_rst_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCFU0,
	"cfu0_alu_rst",
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

		cp.code() = std::string("//CFU0_ALU_RST\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 156);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6648);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 6647, 6645, 6646);\n";
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
