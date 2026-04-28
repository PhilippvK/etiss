// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 09:13:44 +0200.
 *
 * This file contains the instruction behavior models of the Zba
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// SH1ADD ----------------------------------------------------------------------
static InstructionDefinition sh1add_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"sh1add",
	(uint64_t) 0x20002033,
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

		cp.code() = std::string("//SH1ADD\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 185);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1197);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1196, 1189, 1195, 1192, 1190, 1191, 1193);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7430);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 7441, 7437, 7433, 7431, 7436, 7434, 7440, 7438);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7447, 7445, 7446);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7444, 7442, 7443);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7465);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] + (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] << 1ULL)));\n";
cp.code() += "etiss_coverage_count(13, 7464, 7450, 7449, 7463, 7460, 7453, 7452, 7458, 7456, 7455, 7457, 7459, 7461);\n";
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

		cp.code() = std::string("//SH1ADD\n");

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
ss << "sh1add" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SH2ADD ----------------------------------------------------------------------
static InstructionDefinition sh2add_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"sh2add",
	(uint64_t) 0x20004033,
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

		cp.code() = std::string("//SH2ADD\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 187);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1197);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1196, 1189, 1195, 1192, 1190, 1191, 1193);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7469);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 7480, 7476, 7472, 7470, 7475, 7473, 7479, 7477);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7486, 7484, 7485);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7483, 7481, 7482);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7504);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] + (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] << 2ULL)));\n";
cp.code() += "etiss_coverage_count(13, 7503, 7489, 7488, 7502, 7499, 7492, 7491, 7497, 7495, 7494, 7496, 7498, 7500);\n";
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

		cp.code() = std::string("//SH2ADD\n");

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
ss << "sh2add" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SH3ADD ----------------------------------------------------------------------
static InstructionDefinition sh3add_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"sh3add",
	(uint64_t) 0x20006033,
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

		cp.code() = std::string("//SH3ADD\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 189);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1197);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1196, 1189, 1195, 1192, 1190, 1191, 1193);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7508);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 7519, 7515, 7511, 7509, 7514, 7512, 7518, 7516);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7525, 7523, 7524);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7522, 7520, 7521);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7543);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] + (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] << 3ULL)));\n";
cp.code() += "etiss_coverage_count(13, 7542, 7528, 7527, 7541, 7538, 7531, 7530, 7536, 7534, 7533, 7535, 7537, 7539);\n";
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

		cp.code() = std::string("//SH3ADD\n");

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
ss << "sh3add" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
