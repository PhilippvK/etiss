// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 09:50:38 +0200.
 *
 * This file contains the instruction behavior models of the Zbc
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CLMULR ----------------------------------------------------------------------
static InstructionDefinition clmulr_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"clmulr",
	(uint64_t) 0xa002033,
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

		cp.code() = std::string("//CLMULR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 223);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8476);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8487, 8483, 8479, 8477, 8482, 8480, 8486, 8484);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8493, 8491, 8492);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8490, 8488, 8489);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8543);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 rs1_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8498, 8497, 8496);\n";
cp.code() += "etiss_uint32 rs2_val = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_coverage_count(3, 8503, 8502, 8501);\n";
cp.code() += "etiss_uint32 output = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 8506, 8505);\n";
etiss_uint32 i = 0LL;
cp.code() += "etiss_coverage_count(2, 8509, 8508);\n";
cp.code() += "while (i < 32ULL) {\n";
cp.code() += "etiss_coverage_count(2, 8512, 8510);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8536);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8516);\n";
cp.code() += "if ((rs2_val >> " + std::to_string(i) + "ULL) & 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 8522, 8519, 8517, 8518, 8520, 8521);\n";
cp.code() += "output = output ^ (rs1_val >> " + std::to_string((32ULL - i - 1ULL)) + "ULL);\n";
cp.code() += "etiss_coverage_count(12, 8535, 8523, 8534, 8524, 8532, 8525, 8530, 8528, 8527, 8529, 8531, 8533);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 1ULL;
cp.code() += "etiss_coverage_count(3, 8515, 8513, 8514);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = output;\n";
cp.code() += "etiss_coverage_count(4, 8542, 8540, 8539, 8541);\n";
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

		cp.code() = std::string("//CLMULR\n");

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
ss << "clmulr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
