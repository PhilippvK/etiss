// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 09:50:38 +0200.
 *
 * This file contains the instruction behavior models of the Zbc_common
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CLMUL -----------------------------------------------------------------------
static InstructionDefinition clmul_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"clmul",
	(uint64_t) 0xa001033,
	(uint64_t) 0xfe00707f,
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

		cp.code() = std::string("//CLMUL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 221);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8345);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8356, 8352, 8348, 8346, 8351, 8349, 8355, 8353);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8362, 8360, 8361);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8359, 8357, 8358);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8409);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 rs1_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8367, 8366, 8365);\n";
cp.code() += "etiss_uint32 rs2_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8372, 8371, 8370);\n";
cp.code() += "etiss_uint32 output = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 8375, 8374);\n";
etiss_uint32 i = 0LL;
cp.code() += "etiss_coverage_count(2, 8378, 8377);\n";
cp.code() += "while (i <= 31ULL) {\n";
cp.code() += "etiss_coverage_count(2, 8383, 8379);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8402);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8387);\n";
cp.code() += "if ((rs2_val >> " + std::to_string(i) + "ULL) & 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 8393, 8390, 8388, 8389, 8391, 8392);\n";
cp.code() += "output = output ^ (rs1_val << " + std::to_string(i) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 8401, 8394, 8400, 8395, 8398, 8396, 8397, 8399);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 1ULL;
cp.code() += "etiss_coverage_count(3, 8386, 8384, 8385);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = output;\n";
cp.code() += "etiss_coverage_count(4, 8408, 8406, 8405, 8407);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CLMUL\n");

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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clmul" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLMULH ----------------------------------------------------------------------
static InstructionDefinition clmulh_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"clmulh",
	(uint64_t) 0xa003033,
	(uint64_t) 0xfe00707f,
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

		cp.code() = std::string("//CLMULH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 222);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8410);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8421, 8417, 8413, 8411, 8416, 8414, 8420, 8418);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8427, 8425, 8426);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8424, 8422, 8423);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8475);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 rs1_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8432, 8431, 8430);\n";
cp.code() += "etiss_uint32 rs2_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8437, 8436, 8435);\n";
cp.code() += "etiss_uint32 output = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 8440, 8439);\n";
etiss_uint32 i = 1ULL;
cp.code() += "etiss_coverage_count(2, 8443, 8442);\n";
cp.code() += "while (i < 32ULL) {\n";
cp.code() += "etiss_coverage_count(2, 8446, 8444);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8468);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8450);\n";
cp.code() += "if ((rs2_val >> " + std::to_string(i) + "ULL) & 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 8456, 8453, 8451, 8452, 8454, 8455);\n";
cp.code() += "output = output ^ (rs1_val >> " + std::to_string((32ULL - i)) + "ULL);\n";
cp.code() += "etiss_coverage_count(10, 8467, 8457, 8466, 8458, 8464, 8459, 8462, 8461, 8463, 8465);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 1ULL;
cp.code() += "etiss_coverage_count(3, 8449, 8447, 8448);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = output;\n";
cp.code() += "etiss_coverage_count(4, 8474, 8472, 8471, 8473);\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CLMULH\n");

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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clmulh" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
