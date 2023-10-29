/**
 * Generated on Sun, 29 Oct 2023 22:27:54 +0100.
 *
 * This file contains the instruction behavior models of the XCoreVBranchImmediate
 * instruction set for the RV32IMAFDXCoreVHwlp core architecture.
 */

#include "RV32IMAFDXCoreVHwlpArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_BEQIMM -------------------------------------------------------------------
static InstructionDefinition cv_beqimm_imm_rs1_simm5 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_beqimm",
	(uint32_t) 0x00600b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_BEQIMM\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 != 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 2ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 != 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 2ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] == " + std::to_string(((etiss_int8)(((etiss_int8)simm5) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
if (imm % 4ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_BEQIMM\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception | cpu->nextPc != " + std::to_string(ic.current_address_ + 4) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_beqimm" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_BNEIMM -------------------------------------------------------------------
static InstructionDefinition cv_bneimm_imm_rs1_simm5 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_bneimm",
	(uint32_t) 0x00700b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_BNEIMM\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 != 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 2ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 != 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 2ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlp*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] != " + std::to_string(((etiss_int8)(((etiss_int8)simm5) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
if (imm % 4ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 0ULL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (3)) >> (3))) + "LL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_BNEIMM\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception | cpu->nextPc != " + std::to_string(ic.current_address_ + 4) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_11(7, 7);
imm += R_imm_11.read(ba) << 11;
static BitArrayRange R_imm_1(11, 8);
imm += R_imm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_imm_5(30, 25);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_12(31, 31);
imm += R_imm_12.read(ba) << 12;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_bneimm" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
