/**
 * Generated on Wed, 16 Jul 2025 08:32:03 +0200.
 *
 * This file contains the instruction behavior models of the tum_csr
 * instruction set for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Arch.h"
#include "RV32IMACFDXCFU0Funcs.h"

using namespace etiss;
using namespace etiss::instr;


// CSRRW -----------------------------------------------------------------------
static InstructionDefinition csrrw_rd_rs1_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrw",
	(uint32_t) 0x001073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 163);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3199);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3172, 3171, 3170, 3168);\n";
cp.code() += "etiss_coverage_count(1, 3173);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3179, 3176, 3174, 3177, 3178);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3194);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3183, 3182, 3181);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrs1);\n";
cp.code() += "etiss_coverage_count(3, 3186, 3184, 3185);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3193, 3191, 3190, 3188, 3192);\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "etiss_coverage_count(1, 3198);\n";
cp.code() += "{ // block\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrs1);\n";
cp.code() += "etiss_coverage_count(3, 3197, 3195, 3196);\n";
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRRS -----------------------------------------------------------------------
static InstructionDefinition csrrs_rd_rs1_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrs",
	(uint32_t) 0x002073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 164);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3234);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3203, 3202, 3201);\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3210, 3209, 3208, 3206);\n";
cp.code() += "etiss_coverage_count(1, 3211);\n";
if (rs1 != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3214, 3212, 3213);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd | xrs1);\n";
cp.code() += "etiss_coverage_count(5, 3219, 3215, 3218, 3216, 3217);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3220);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3226, 3223, 3221, 3224, 3225);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3233, 3231, 3230, 3228, 3232);\n";
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrs" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRRC -----------------------------------------------------------------------
static InstructionDefinition csrrc_rd_rs1_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrc",
	(uint32_t) 0x003073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRC\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 165);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3270);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3238, 3237, 3236);\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3245, 3244, 3243, 3241);\n";
cp.code() += "etiss_coverage_count(1, 3246);\n";
if (rs1 != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3249, 3247, 3248);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd & ~(xrs1));\n";
cp.code() += "etiss_coverage_count(6, 3255, 3250, 3254, 3251, 3253, 3252);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3256);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3262, 3259, 3257, 3260, 3261);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3269, 3267, 3266, 3264, 3268);\n";
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRRWI ----------------------------------------------------------------------
static InstructionDefinition csrrwi_rd_zimm_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrwi",
	(uint32_t) 0x005073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRWI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 166);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3294);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3274, 3273, 3272);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, " + std::to_string((etiss_uint32)(zimm)) + "ULL);\n";
cp.code() += "etiss_coverage_count(4, 3279, 3275, 3278, 3276);\n";
cp.code() += "etiss_coverage_count(1, 3280);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3286, 3283, 3281, 3284, 3285);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3293, 3291, 3290, 3288, 3292);\n";
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
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrwi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | zimm=" + std::to_string(zimm) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRRSI ----------------------------------------------------------------------
static InstructionDefinition csrrsi_rd_zimm_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrsi",
	(uint32_t) 0x006073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRSI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 167);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3324);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3298, 3297, 3296);\n";
cp.code() += "etiss_coverage_count(1, 3299);\n";
if (zimm != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3302, 3300, 3301);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd | " + std::to_string((etiss_uint32)(zimm)) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 3309, 3303, 3308, 3304, 3307, 3305);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3310);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3316, 3313, 3311, 3314, 3315);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3323, 3321, 3320, 3318, 3322);\n";
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
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrsi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | zimm=" + std::to_string(zimm) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRRCI ----------------------------------------------------------------------
static InstructionDefinition csrrci_rd_zimm_csr (
	ISA32_RV32IMACFDXCFU0,
	"csrrci",
	(uint32_t) 0x007073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRCI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 168);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3356);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3328, 3327, 3326);\n";
cp.code() += "etiss_coverage_count(1, 3329);\n";
if (zimm != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3332, 3330, 3331);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd & " + std::to_string(~(((etiss_uint32)(zimm)))) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 3341, 3333, 3340, 3334, 3339, 3337, 3335, 3338);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3342);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3348, 3345, 3343, 3346, 3347);\n";
cp.code() += "*((RV32IMACFDXCFU0*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3355, 3353, 3352, 3350, 3354);\n";
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
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrrci" << " # " << ba << (" [rd=" + std::to_string(rd) + " | zimm=" + std::to_string(zimm) + " | csr=" + std::to_string(csr) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
