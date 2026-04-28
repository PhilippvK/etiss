// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 09:31:03 +0200.
 *
 * This file contains the instruction behavior models of the Zbb
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CLZ -------------------------------------------------------------------------
static InstructionDefinition clz_rd_rs1 (
	ISA32_RV32IMACFD,
	"clz",
	(uint64_t) 0x60001013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLZ\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 206);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7875);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 7882, 7878, 7876, 7881, 7879);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7888, 7886, 7887);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7885, 7883, 7884);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7930);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 count = 32ULL;\n";
cp.code() += "etiss_coverage_count(1, 7891);\n";
etiss_int32 i = 31ULL;
cp.code() += "etiss_coverage_count(1, 7896);\n";
cp.code() += "while (i >= 0LL) {\n";
cp.code() += "etiss_coverage_count(3, 7899, 7897, 7898);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7923);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 7903);\n";
cp.code() += "if ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(i) + "LL)) & ((1 << ((" + std::to_string(i) + "LL) - (" + std::to_string(i) + "LL) + 1)) - 1)) == 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(7, 7910, 7908, 7906, 7905, 7907, 7907, 7909);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7922);\n";
cp.code() += "{ // block\n";
cp.code() += "count = " + std::to_string((etiss_uint32)((31ULL - i))) + "ULL;\n";
cp.code() += "etiss_coverage_count(6, 7920, 7911, 7919, 7916, 7915, 7917);\n";
cp.code() += "etiss_coverage_count(1, 7921);\n";
cp.code() += "break;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i - 1ULL;
cp.code() += "etiss_coverage_count(3, 7902, 7900, 7901);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = count;\n";
cp.code() += "etiss_coverage_count(4, 7929, 7927, 7926, 7928);\n";
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

		cp.code() = std::string("//CLZ\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clz" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CPOP ------------------------------------------------------------------------
static InstructionDefinition cpop_rd_rs1 (
	ISA32_RV32IMACFD,
	"cpop",
	(uint64_t) 0x60201013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CPOP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 208);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7934);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 7941, 7937, 7935, 7940, 7938);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7947, 7945, 7946);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7944, 7942, 7943);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7978);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 bitcount = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 7950, 7949);\n";
etiss_uint32 i = 0LL;
cp.code() += "etiss_coverage_count(2, 7953, 7952);\n";
cp.code() += "while (i < 32ULL) {\n";
cp.code() += "etiss_coverage_count(2, 7956, 7954);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 7971);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 7960);\n";
cp.code() += "if ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(i) + "ULL)) & ((1 << ((" + std::to_string(i) + "ULL) - (" + std::to_string(i) + "ULL) + 1)) - 1)) == 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(7, 7967, 7965, 7963, 7962, 7964, 7964, 7966);\n";
cp.code() += "bitcount = bitcount + 1ULL;\n";
cp.code() += "etiss_coverage_count(3, 7970, 7968, 7969);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 1ULL;
cp.code() += "etiss_coverage_count(3, 7959, 7957, 7958);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = bitcount;\n";
cp.code() += "etiss_coverage_count(4, 7977, 7975, 7974, 7976);\n";
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

		cp.code() = std::string("//CPOP\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cpop" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CTZ -------------------------------------------------------------------------
static InstructionDefinition ctz_rd_rs1 (
	ISA32_RV32IMACFD,
	"ctz",
	(uint64_t) 0x60101013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CTZ\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 210);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 7982);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 7989, 7985, 7983, 7988, 7986);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 7995, 7993, 7994);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 7992, 7990, 7991);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8028);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 count = 32ULL;\n";
cp.code() += "etiss_coverage_count(1, 7998);\n";
etiss_uint32 i = 0LL;
cp.code() += "etiss_coverage_count(2, 8001, 8000);\n";
cp.code() += "while (i < 32ULL) {\n";
cp.code() += "etiss_coverage_count(2, 8004, 8002);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8021);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8008);\n";
cp.code() += "if ((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(i) + "ULL)) & ((1 << ((" + std::to_string(i) + "ULL) - (" + std::to_string(i) + "ULL) + 1)) - 1)) == 1ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(7, 8015, 8013, 8011, 8010, 8012, 8012, 8014);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8020);\n";
cp.code() += "{ // block\n";
cp.code() += "count = " + std::to_string(i) + "ULL;\n";
cp.code() += "etiss_coverage_count(3, 8018, 8016, 8017);\n";
cp.code() += "etiss_coverage_count(1, 8019);\n";
cp.code() += "break;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 1ULL;
cp.code() += "etiss_coverage_count(3, 8007, 8005, 8006);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = count;\n";
cp.code() += "etiss_coverage_count(4, 8027, 8025, 8024, 8026);\n";
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

		cp.code() = std::string("//CTZ\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "ctz" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MAX -------------------------------------------------------------------------
static InstructionDefinition max_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"max",
	(uint64_t) 0xa006033,
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

		cp.code() = std::string("//MAX\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 212);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8032);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8043, 8039, 8035, 8033, 8038, 8036, 8042, 8040);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8049, 8047, 8048);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8046, 8044, 8045);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8072);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) > (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(15, 8071, 8052, 8051, 8070, 8063, 8057, 8055, 8054, 8062, 8060, 8059, 8066, 8065, 8069, 8068);\n";
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

		cp.code() = std::string("//MAX\n");

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
ss << "max" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MAXU ------------------------------------------------------------------------
static InstructionDefinition maxu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"maxu",
	(uint64_t) 0xa007033,
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

		cp.code() = std::string("//MAXU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 213);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8073);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8084, 8080, 8076, 8074, 8079, 8077, 8083, 8081);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8090, 8088, 8089);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8087, 8085, 8086);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8109);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] > *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 8108, 8093, 8092, 8107, 8100, 8096, 8095, 8099, 8098, 8103, 8102, 8106, 8105);\n";
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

		cp.code() = std::string("//MAXU\n");

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
ss << "maxu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MIN -------------------------------------------------------------------------
static InstructionDefinition min_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"min",
	(uint64_t) 0xa004033,
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

		cp.code() = std::string("//MIN\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 214);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8110);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8121, 8117, 8113, 8111, 8116, 8114, 8120, 8118);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8127, 8125, 8126);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8124, 8122, 8123);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8150);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) < (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(15, 8149, 8130, 8129, 8148, 8141, 8135, 8133, 8132, 8140, 8138, 8137, 8144, 8143, 8147, 8146);\n";
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

		cp.code() = std::string("//MIN\n");

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
ss << "min" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MINU ------------------------------------------------------------------------
static InstructionDefinition minu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"minu",
	(uint64_t) 0xa005033,
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

		cp.code() = std::string("//MINU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 215);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8151);\n";
if (rd >= 32ULL || rs1 >= 32ULL || rs2 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(8, 8162, 8158, 8154, 8152, 8157, 8155, 8161, 8159);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8168, 8166, 8167);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8165, 8163, 8164);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8187);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] < *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 8186, 8171, 8170, 8185, 8178, 8174, 8173, 8177, 8176, 8181, 8180, 8184, 8183);\n";
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

		cp.code() = std::string("//MINU\n");

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
ss << "minu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ORC__B ----------------------------------------------------------------------
static InstructionDefinition orc__b_rd_rs1 (
	ISA32_RV32IMACFD,
	"orc__b",
	(uint64_t) 0x28705013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ORC__B\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 216);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8188);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8195, 8191, 8189, 8194, 8192);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8201, 8199, 8200);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8198, 8196, 8197);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8239);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 output = 0LL;\n";
cp.code() += "etiss_coverage_count(2, 8204, 8203);\n";
etiss_uint32 i = 0LL;
cp.code() += "etiss_coverage_count(2, 8207, 8206);\n";
cp.code() += "while (i < 32ULL) {\n";
cp.code() += "etiss_coverage_count(2, 8210, 8208);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8232);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 8214);\n";
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] & " + std::to_string((255ULL << i)) + "ULL) { // conditional\n";
cp.code() += "etiss_coverage_count(7, 8224, 8217, 8216, 8222, 8218, 8221, 8223);\n";
cp.code() += "output = output | " + std::to_string(255ULL << i) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 8231, 8225, 8230, 8226, 8229);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
i = i + 8ULL;
cp.code() += "etiss_coverage_count(3, 8213, 8211, 8212);\n";
cp.code() += "}\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = output;\n";
cp.code() += "etiss_coverage_count(4, 8238, 8236, 8235, 8237);\n";
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

		cp.code() = std::string("//ORC__B\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "orc__b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SEXT__B ---------------------------------------------------------------------
static InstructionDefinition sext__b_rd_rs1 (
	ISA32_RV32IMACFD,
	"sext__b",
	(uint64_t) 0x60401013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SEXT__B\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 217);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8240);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8247, 8243, 8241, 8246, 8244);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8253, 8251, 8252);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8250, 8248, 8249);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8269);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((etiss_int32)((etiss_int8)((etiss_uint8)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))));\n";
cp.code() += "etiss_coverage_count(9, 8268, 8256, 8255, 8267, 8265, 8263, 8261, 8259, 8258);\n";
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

		cp.code() = std::string("//SEXT__B\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sext__b" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SEXT__H ---------------------------------------------------------------------
static InstructionDefinition sext__h_rd_rs1 (
	ISA32_RV32IMACFD,
	"sext__h",
	(uint64_t) 0x60501013,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SEXT__H\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 218);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8270);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8277, 8273, 8271, 8276, 8274);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8283, 8281, 8282);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8280, 8278, 8279);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8299);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((etiss_int32)((etiss_int16)((etiss_uint16)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))));\n";
cp.code() += "etiss_coverage_count(9, 8298, 8286, 8285, 8297, 8295, 8293, 8291, 8289, 8288);\n";
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

		cp.code() = std::string("//SEXT__H\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "sext__h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// ZEXT__H ---------------------------------------------------------------------
static InstructionDefinition zext__h_rd_rs1 (
	ISA32_RV32IMACFD,
	"zext__h",
	(uint64_t) 0x8004033,
	(uint64_t) 0xfff0707f,
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

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ZEXT__H\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 219);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1226);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 4))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1225, 1218, 1224, 1221, 1219, 1220, 1222);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 8303);\n";
if (rd >= 32ULL || rs1 >= 32ULL) { // conditional
cp.code() += "etiss_coverage_count(5, 8310, 8306, 8304, 8309, 8307);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 8316, 8314, 8315);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
 else if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 8313, 8311, 8312);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 8326);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint16)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]);\n";
cp.code() += "etiss_coverage_count(6, 8325, 8319, 8318, 8324, 8322, 8321);\n";
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

		cp.code() = std::string("//ZEXT__H\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "zext__h" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
