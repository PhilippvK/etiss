// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 09:50:38 +0200.
 *
 * This file contains the instruction behavior models of the Zbs
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// BCLR ------------------------------------------------------------------------
static InstructionDefinition bclr_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"bclr",
	(uint64_t) 0x48001033,
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

		cp.code() = std::string("//BCLR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 224);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8544);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8555, 8551, 8547, 8545, 8550, 8548, 8554, 8552);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8561, 8559, 8560);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8558, 8556, 8557);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8589);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 index = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] & 31ULL;\n";
cp.code() += "etiss_coverage_count(4, 8573, 8572, 8565, 8564);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] & ~((1ULL << index));\n";
cp.code() += "etiss_coverage_count(11, 8588, 8576, 8575, 8587, 8579, 8578, 8586, 8584, 8580, 8583, 8585);\n";
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

		cp.code() = std::string("//BCLR\n");

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
ss << "bclr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BCLRI -----------------------------------------------------------------------
static InstructionDefinition bclri_rd_rs1_shamt (
	ISA32_RV32IMACFD,
	"bclri",
	(uint64_t) 0x48001013,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BCLRI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 225);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8593);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8600, 8596, 8594, 8599, 8597);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8606, 8604, 8605);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8603, 8601, 8602);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8632);\n";
cp.code() += "{ // block\n";
etiss_uint8 index = (shamt & 31ULL) & 0x1fULL;
cp.code() += "etiss_coverage_count(3, 8616, 8615, 8608);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] & " + std::to_string(~((1ULL << index))) + "ULL;\n";
cp.code() += "etiss_coverage_count(11, 8631, 8619, 8618, 8630, 8622, 8621, 8629, 8627, 8623, 8626, 8628);\n";
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

		cp.code() = std::string("//BCLRI\n");

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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bclri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BEXT ------------------------------------------------------------------------
static InstructionDefinition bext_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"bext",
	(uint64_t) 0x48005033,
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

		cp.code() = std::string("//BEXT\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 227);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8636);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8647, 8643, 8639, 8637, 8642, 8640, 8646, 8644);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8653, 8651, 8652);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8650, 8648, 8649);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8678);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 index = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] & 31ULL;\n";
cp.code() += "etiss_coverage_count(4, 8665, 8664, 8657, 8656);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> index) & 1ULL;\n";
cp.code() += "etiss_coverage_count(10, 8677, 8668, 8667, 8676, 8673, 8671, 8670, 8672, 8674, 8675);\n";
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

		cp.code() = std::string("//BEXT\n");

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
ss << "bext" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BEXTI -----------------------------------------------------------------------
static InstructionDefinition bexti_rd_rs1_shamt (
	ISA32_RV32IMACFD,
	"bexti",
	(uint64_t) 0x48005013,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BEXTI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 228);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8682);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8689, 8685, 8683, 8688, 8686);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8695, 8693, 8694);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8692, 8690, 8691);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8718);\n";
cp.code() += "{ // block\n";
etiss_uint8 index = (shamt & 31ULL) & 0x1fULL;
cp.code() += "etiss_coverage_count(3, 8705, 8704, 8697);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >> " + std::to_string(index) + "ULL) & 1ULL;\n";
cp.code() += "etiss_coverage_count(10, 8717, 8708, 8707, 8716, 8713, 8711, 8710, 8712, 8714, 8715);\n";
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

		cp.code() = std::string("//BEXTI\n");

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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bexti" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BINV ------------------------------------------------------------------------
static InstructionDefinition binv_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"binv",
	(uint64_t) 0x68001033,
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

		cp.code() = std::string("//BINV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 230);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8722);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8733, 8729, 8725, 8723, 8728, 8726, 8732, 8730);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8739, 8737, 8738);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8736, 8734, 8735);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8766);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 index = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] & 31ULL;\n";
cp.code() += "etiss_coverage_count(4, 8751, 8750, 8743, 8742);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] ^ (1ULL << index);\n";
cp.code() += "etiss_coverage_count(10, 8765, 8754, 8753, 8764, 8757, 8756, 8762, 8758, 8761, 8763);\n";
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

		cp.code() = std::string("//BINV\n");

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
ss << "binv" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BINVI -----------------------------------------------------------------------
static InstructionDefinition binvi_rd_rs1_shamt (
	ISA32_RV32IMACFD,
	"binvi",
	(uint64_t) 0x68001013,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BINVI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 231);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8770);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8777, 8773, 8771, 8776, 8774);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8783, 8781, 8782);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8780, 8778, 8779);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8808);\n";
cp.code() += "{ // block\n";
etiss_uint8 index = (shamt & 31ULL) & 0x1fULL;
cp.code() += "etiss_coverage_count(3, 8793, 8792, 8785);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] ^ " + std::to_string((1ULL << index)) + "ULL;\n";
cp.code() += "etiss_coverage_count(10, 8807, 8796, 8795, 8806, 8799, 8798, 8804, 8800, 8803, 8805);\n";
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

		cp.code() = std::string("//BINVI\n");

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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "binvi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BSET ------------------------------------------------------------------------
static InstructionDefinition bset_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"bset",
	(uint64_t) 0x28001033,
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

		cp.code() = std::string("//BSET\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 233);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8812);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8823, 8819, 8815, 8813, 8818, 8816, 8822, 8820);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8829, 8827, 8828);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8826, 8824, 8825);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8856);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 index = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] & 31ULL;\n";
cp.code() += "etiss_coverage_count(4, 8841, 8840, 8833, 8832);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] | (1ULL << index);\n";
cp.code() += "etiss_coverage_count(10, 8855, 8844, 8843, 8854, 8847, 8846, 8852, 8848, 8851, 8853);\n";
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

		cp.code() = std::string("//BSET\n");

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
ss << "bset" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BSETI -----------------------------------------------------------------------
static InstructionDefinition bseti_rd_rs1_shamt (
	ISA32_RV32IMACFD,
	"bseti",
	(uint64_t) 0x28001013,
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BSETI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 234);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1241);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1240, 1233, 1239, 1236, 1234, 1235, 1237);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8860);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8867, 8863, 8861, 8866, 8864);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8873, 8871, 8872);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8870, 8868, 8869);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8898);\n";
cp.code() += "{ // block\n";
etiss_uint8 index = (shamt & 31ULL) & 0x1fULL;
cp.code() += "etiss_coverage_count(3, 8883, 8882, 8875);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] | " + std::to_string((1ULL << index)) + "ULL;\n";
cp.code() += "etiss_coverage_count(10, 8897, 8886, 8885, 8896, 8889, 8888, 8894, 8890, 8893, 8895);\n";
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

		cp.code() = std::string("//BSETI\n");

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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(24, 20);
shamt += R_shamt_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bseti" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | shamt=" + std::to_string(shamt) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
