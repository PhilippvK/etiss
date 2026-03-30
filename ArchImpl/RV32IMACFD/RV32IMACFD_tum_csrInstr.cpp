// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 13:40:21 +0200.
 *
 * This file contains the instruction behavior models of the tum_csr
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CSRRW -----------------------------------------------------------------------
static InstructionDefinition csrrw_rd_rs1_csr (
	ISA32_RV32IMACFD,
	"csrrw",
	(uint32_t) 0x001073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 153);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3246);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3219, 3218, 3217, 3215);\n";
cp.code() += "etiss_coverage_count(1, 3220);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3226, 3223, 3221, 3224, 3225);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3241);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3230, 3229, 3228);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrs1);\n";
cp.code() += "etiss_coverage_count(3, 3233, 3231, 3232);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3240, 3238, 3237, 3235, 3239);\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "etiss_coverage_count(1, 3245);\n";
cp.code() += "{ // block\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrs1);\n";
cp.code() += "etiss_coverage_count(3, 3244, 3242, 3243);\n";
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
	ISA32_RV32IMACFD,
	"csrrs",
	(uint32_t) 0x002073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 154);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3281);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3250, 3249, 3248);\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3257, 3256, 3255, 3253);\n";
cp.code() += "etiss_coverage_count(1, 3258);\n";
if (rs1 != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3261, 3259, 3260);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd | xrs1);\n";
cp.code() += "etiss_coverage_count(5, 3266, 3262, 3265, 3263, 3264);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3267);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3273, 3270, 3268, 3271, 3272);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3280, 3278, 3277, 3275, 3279);\n";
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
	ISA32_RV32IMACFD,
	"csrrc",
	(uint32_t) 0x003073,
	(uint32_t) 0x00707f,
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
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRC\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 155);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3317);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3285, 3284, 3283);\n";
cp.code() += "etiss_uint32 xrs1 = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3292, 3291, 3290, 3288);\n";
cp.code() += "etiss_coverage_count(1, 3293);\n";
if (rs1 != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3296, 3294, 3295);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd & ~(xrs1));\n";
cp.code() += "etiss_coverage_count(6, 3302, 3297, 3301, 3298, 3300, 3299);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3303);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3309, 3306, 3304, 3307, 3308);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3316, 3314, 3313, 3311, 3315);\n";
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
	ISA32_RV32IMACFD,
	"csrrwi",
	(uint32_t) 0x005073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRWI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 156);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3341);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3321, 3320, 3319);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, " + std::to_string((etiss_uint32)(zimm)) + "ULL);\n";
cp.code() += "etiss_coverage_count(4, 3326, 3322, 3325, 3323);\n";
cp.code() += "etiss_coverage_count(1, 3327);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3333, 3330, 3328, 3331, 3332);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3340, 3338, 3337, 3335, 3339);\n";
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
	ISA32_RV32IMACFD,
	"csrrsi",
	(uint32_t) 0x006073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRSI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 157);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3371);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3345, 3344, 3343);\n";
cp.code() += "etiss_coverage_count(1, 3346);\n";
if (zimm != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3349, 3347, 3348);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd | " + std::to_string((etiss_uint32)(zimm)) + "ULL);\n";
cp.code() += "etiss_coverage_count(6, 3356, 3350, 3355, 3351, 3354, 3352);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3357);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3363, 3360, 3358, 3361, 3362);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3370, 3368, 3367, 3365, 3369);\n";
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
	ISA32_RV32IMACFD,
	"csrrci",
	(uint32_t) 0x007073,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 zimm = 0;
static BitArrayRange R_zimm_0(19, 15);
zimm += R_zimm_0.read(ba) << 0;
etiss_uint16 csr = 0;
static BitArrayRange R_csr_0(31, 20);
csr += R_csr_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRRCI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 158);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3403);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 xrd = RV32IMACFD_csr_read(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL);\n";
cp.code() += "etiss_coverage_count(3, 3375, 3374, 3373);\n";
cp.code() += "etiss_coverage_count(1, 3376);\n";
if (zimm != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 3379, 3377, 3378);\n";
cp.code() += "RV32IMACFD_csr_write(cpu, system, plugin_pointers, " + std::to_string(csr) + "ULL, xrd & " + std::to_string(~(((etiss_uint32)(zimm)))) + "ULL);\n";
cp.code() += "etiss_coverage_count(8, 3388, 3380, 3387, 3381, 3386, 3384, 3382, 3385);\n";
} // conditional
cp.code() += "etiss_coverage_count(1, 3389);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3395, 3392, 3390, 3393, 3394);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = xrd;\n";
cp.code() += "etiss_coverage_count(5, 3402, 3400, 3399, 3397, 3401);\n";
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
// clang-format on
