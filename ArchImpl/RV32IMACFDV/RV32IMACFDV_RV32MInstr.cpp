// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the instruction behavior models of the RV32M
 * instruction set for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVArch.h"
#include "RV32IMACFDVFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// MUL -------------------------------------------------------------------------
static InstructionDefinition mul_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"mul",
	(uint32_t) 0x2000033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//MUL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 72);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3196);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3160);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3166, 3163, 3161, 3164, 3165);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3195);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_int64)((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]));\n";
cp.code() += "etiss_coverage_count(12, 3185, 3184, 3175, 3173, 3172, 3171, 3169, 3183, 3181, 3180, 3179, 3177);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(6, 3194, 3190, 3189, 3187, 3193, 3191);\n";
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
ss << "mul" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULH ------------------------------------------------------------------------
static InstructionDefinition mulh_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"mulh",
	(uint32_t) 0x2001033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//MULH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 73);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3236);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3197);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3203, 3200, 3198, 3201, 3202);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3235);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_int64)((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]));\n";
cp.code() += "etiss_coverage_count(12, 3222, 3221, 3212, 3210, 3209, 3208, 3206, 3220, 3218, 3217, 3216, 3214);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 3234, 3227, 3226, 3224, 3233, 3230, 3228, 3231);\n";
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
ss << "mulh" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULHSU ----------------------------------------------------------------------
static InstructionDefinition mulhsu_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"mulhsu",
	(uint32_t) 0x2002033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//MULHSU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 74);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3275);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3237);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3243, 3240, 3238, 3241, 3242);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3274);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int64)((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL])) * (etiss_uint64)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(11, 3261, 3260, 3252, 3250, 3249, 3248, 3246, 3259, 3257, 3256, 3254);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 3273, 3266, 3265, 3263, 3272, 3269, 3267, 3270);\n";
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
ss << "mulhsu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MULHU -----------------------------------------------------------------------
static InstructionDefinition mulhu_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"mulhu",
	(uint32_t) 0x2003033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//MULHU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 75);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3313);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3276);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3282, 3279, 3277, 3280, 3281);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3312);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint64 res = (etiss_uint64)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) * (etiss_uint64)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(10, 3299, 3298, 3290, 3288, 3287, 3285, 3297, 3295, 3294, 3292);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_uint32)((res >> 32ULL));\n";
cp.code() += "etiss_coverage_count(8, 3311, 3304, 3303, 3301, 3310, 3307, 3305, 3308);\n";
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
ss << "mulhu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIV -------------------------------------------------------------------------
static InstructionDefinition div_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"div",
	(uint32_t) 0x2004033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//DIV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 76);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3394);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3314);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3320, 3317, 3315, 3318, 3319);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3393);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3321);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3328, 3326, 3325, 3323, 3327);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3384);\n";
cp.code() += "{ // block\n";
etiss_uint32 MMIN = 2147483648ULL;
cp.code() += "etiss_coverage_count(1, 3336);\n";
cp.code() += "etiss_coverage_count(1, 3337);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == " + std::to_string(MMIN) + "ULL && (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) == -1LL) { // conditional\n";
cp.code() += "etiss_coverage_count(11, 3355, 3344, 3342, 3341, 3339, 3343, 3354, 3351, 3349, 3348, 3346);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(MMIN) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 3362, 3360, 3359, 3357, 3361);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) / (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 3383, 3367, 3366, 3364, 3382, 3374, 3372, 3371, 3369, 3381, 3379, 3378, 3376);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = -1LL;\n";
cp.code() += "etiss_coverage_count(4, 3392, 3389, 3388, 3386);\n";
cp.code() += "} // conditional\n";
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
ss << "div" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DIVU ------------------------------------------------------------------------
static InstructionDefinition divu_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"divu",
	(uint32_t) 0x2005033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//DIVU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 77);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3436);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3395);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3401, 3398, 3396, 3399, 3400);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3435);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3402);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3409, 3407, 3406, 3404, 3408);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] / *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(11, 3426, 3414, 3413, 3411, 3425, 3419, 3418, 3416, 3424, 3423, 3421);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = -1LL;\n";
cp.code() += "etiss_coverage_count(4, 3434, 3431, 3430, 3428);\n";
cp.code() += "} // conditional\n";
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
ss << "divu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REM -------------------------------------------------------------------------
static InstructionDefinition rem_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"rem",
	(uint32_t) 0x2006033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//REM\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 78);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3520);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3437);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3443, 3440, 3438, 3441, 3442);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3519);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3444);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3451, 3449, 3448, 3446, 3450);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3507);\n";
cp.code() += "{ // block\n";
etiss_uint32 MMIN = 2147483648ULL;
cp.code() += "etiss_coverage_count(1, 3459);\n";
cp.code() += "etiss_coverage_count(1, 3460);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == " + std::to_string(MMIN) + "ULL && (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]) == -1LL) { // conditional\n";
cp.code() += "etiss_coverage_count(11, 3478, 3467, 3465, 3464, 3462, 3466, 3477, 3474, 3472, 3471, 3469);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(5, 3485, 3483, 3482, 3480, 3484);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL]) % (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(13, 3506, 3490, 3489, 3487, 3505, 3497, 3495, 3494, 3492, 3504, 3502, 3501, 3499);\n";
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(7, 3518, 3512, 3511, 3509, 3517, 3516, 3514);\n";
cp.code() += "} // conditional\n";
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
ss << "rem" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// REMU ------------------------------------------------------------------------
static InstructionDefinition remu_rd_rs1_rs2 (
	ISA32_RV32IMACFDV,
	"remu",
	(uint32_t) 0x2007033,
	(uint32_t) 0xfe00707f,
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

		cp.code() = std::string("//REMU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 79);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3565);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3521);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3527, 3524, 3522, 3525, 3526);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3564);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3528);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(5, 3535, 3533, 3532, 3530, 3534);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] % *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(11, 3552, 3540, 3539, 3537, 3551, 3545, 3544, 3542, 3550, 3549, 3547);\n";
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(7, 3563, 3557, 3556, 3554, 3562, 3561, 3559);\n";
cp.code() += "} // conditional\n";
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
ss << "remu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
