/**
 * Generated on Fri, 20 Jun 2025 08:54:36 +0200.
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
cp.code() += "etiss_coverage_count(1, 155);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7013);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint8 weight_index0 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6647, 6646);\n";
cp.code() += "etiss_uint8 weight_index1 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6650, 6649);\n";
cp.code() += "etiss_uint8 weight_index2 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6653, 6652);\n";
cp.code() += "etiss_uint8 weight_index3 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6656, 6655);\n";
cp.code() += "etiss_uint8 weight_index4 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6659, 6658);\n";
cp.code() += "etiss_uint8 weight_index5 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6662, 6661);\n";
cp.code() += "etiss_uint8 weight_index6 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6665, 6664);\n";
cp.code() += "etiss_uint8 weight_index7 = (0LL) & 0xf;\n";
cp.code() += "etiss_coverage_count(2, 6668, 6667);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 6768);\n";
cp.code() += "{ // block\n";
cp.code() += "weight_index0 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (0LL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6725, 6720, 6724, 6721, 6722, 6723);\n";
cp.code() += "weight_index1 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (2ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6731, 6726, 6730, 6727, 6728, 6729);\n";
cp.code() += "weight_index2 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (4ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6737, 6732, 6736, 6733, 6734, 6735);\n";
cp.code() += "weight_index3 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (6ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6743, 6738, 6742, 6739, 6740, 6741);\n";
cp.code() += "weight_index4 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (8ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6749, 6744, 6748, 6745, 6746, 6747);\n";
cp.code() += "weight_index5 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (10ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6755, 6750, 6754, 6751, 6752, 6753);\n";
cp.code() += "weight_index6 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (12ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6761, 6756, 6760, 6757, 6758, 6759);\n";
cp.code() += "weight_index7 = ((((((RV32IMACFDXCFU0*)cpu)->weight_code_packed) >> (14ULL)) & 3ULL)) & 0xf;\n";
cp.code() += "etiss_coverage_count(6, 6767, 6762, 6766, 6763, 6764, 6765);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_int8 w0 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index0];\n";
cp.code() += "etiss_coverage_count(3, 6822, 6821, 6820);\n";
cp.code() += "etiss_int8 w1 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index1];\n";
cp.code() += "etiss_coverage_count(3, 6827, 6826, 6825);\n";
cp.code() += "etiss_int8 w2 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index2];\n";
cp.code() += "etiss_coverage_count(3, 6832, 6831, 6830);\n";
cp.code() += "etiss_int8 w3 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index3];\n";
cp.code() += "etiss_coverage_count(3, 6837, 6836, 6835);\n";
cp.code() += "etiss_int8 w4 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index4];\n";
cp.code() += "etiss_coverage_count(3, 6842, 6841, 6840);\n";
cp.code() += "etiss_int8 w5 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index5];\n";
cp.code() += "etiss_coverage_count(3, 6847, 6846, 6845);\n";
cp.code() += "etiss_int8 w6 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index6];\n";
cp.code() += "etiss_coverage_count(3, 6852, 6851, 6850);\n";
cp.code() += "etiss_int8 w7 = ((RV32IMACFDXCFU0*)cpu)->clusters[weight_index7];\n";
cp.code() += "etiss_coverage_count(3, 6857, 6856, 6855);\n";
cp.code() += "etiss_int16 t0 = w0 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6872, 6871, 6859, 6869, 6867, 6865, 6862, 6861, 6863, 6864, 6866, 6870);\n";
cp.code() += "etiss_int16 t1 = w1 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6887, 6886, 6874, 6884, 6882, 6880, 6877, 6876, 6878, 6879, 6881, 6885);\n";
cp.code() += "etiss_int16 t2 = w2 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6902, 6901, 6889, 6899, 6897, 6895, 6892, 6891, 6893, 6894, 6896, 6900);\n";
cp.code() += "etiss_int16 t3 = w3 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6917, 6916, 6904, 6914, 6912, 6910, 6907, 6906, 6908, 6909, 6911, 6915);\n";
cp.code() += "etiss_int16 t4 = w4 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0LL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6932, 6931, 6919, 6929, 6927, 6925, 6922, 6921, 6923, 6924, 6926, 6930);\n";
cp.code() += "etiss_int16 t5 = w5 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (8ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6947, 6946, 6934, 6944, 6942, 6940, 6937, 6936, 6938, 6939, 6941, 6945);\n";
cp.code() += "etiss_int16 t6 = w6 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (16ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6962, 6961, 6949, 6959, 6957, 6955, 6952, 6951, 6953, 6954, 6956, 6960);\n";
cp.code() += "etiss_int16 t7 = w7 * ((etiss_int8)(((((*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (24ULL)) & 255ULL))) + 128LL);\n";
cp.code() += "etiss_coverage_count(12, 6977, 6976, 6964, 6974, 6972, 6970, 6967, 6966, 6968, 6969, 6971, 6975);\n";
cp.code() += "etiss_int64 new_acc = (((RV32IMACFDXCFU0*)cpu)->acc + t0 + t1 + t2 + t3 + t4 + t5 + t6 + t7) & 0x1ffffffff;\n";
cp.code() += "etiss_coverage_count(18, 6996, 6995, 6993, 6991, 6989, 6987, 6985, 6983, 6981, 6979, 6980, 6982, 6984, 6986, 6988, 6990, 6992, 6994);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = (((new_acc) >> (0LL)) & 4294967295ULL);\n";
cp.code() += "etiss_coverage_count(6, 7002, 6997, 7001, 6998, 6999, 7000);\n";
cp.code() += "etiss_coverage_count(1, 7003);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7006, 7004, 7005);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7012);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd) + "ULL] = new_acc;\n";
cp.code() += "etiss_coverage_count(4, 7011, 7009, 7008, 7010);\n";
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
cp.code() += "etiss_coverage_count(1, 156);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7017);\n";
cp.code() += "{ // block\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->acc = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 7016, 7014, 7015);\n";
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
