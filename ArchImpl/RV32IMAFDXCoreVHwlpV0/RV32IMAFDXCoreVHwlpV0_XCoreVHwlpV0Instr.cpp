/**
 * Generated on Fri, 17 Nov 2023 19:46:42 +0100.
 *
 * This file contains the instruction behavior models of the XCoreVHwlpV0
 * instruction set for the RV32IMAFDXCoreVHwlpV0 core architecture.
 */

#include "RV32IMAFDXCoreVHwlpV0Arch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpV0Funcs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_STARTI -------------------------------------------------------------------
static InstructionDefinition cv_starti_L_rs1_uimmL (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_starti",
	(uint32_t) 0x00402b,
	(uint32_t) 0x007f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_STARTI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_STARTI\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_starti" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + " | uimmL=" + std::to_string(uimmL) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_START --------------------------------------------------------------------
static InstructionDefinition cv_start_L_rs1 (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_start",
	(uint32_t) 0x00412b,
	(uint32_t) 0xfff07f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_START\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_START\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_start" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_ENDI ---------------------------------------------------------------------
static InstructionDefinition cv_endi_L_rs1_uimmL (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_endi",
	(uint32_t) 0x00422b,
	(uint32_t) 0x007f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_ENDI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_ENDI\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_endi" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + " | uimmL=" + std::to_string(uimmL) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_END ----------------------------------------------------------------------
static InstructionDefinition cv_end_L_rs1 (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_end",
	(uint32_t) 0x00432b,
	(uint32_t) 0xfff07f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_END\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_END\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_end" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_COUNTI -------------------------------------------------------------------
static InstructionDefinition cv_counti_L_uimmL (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_counti",
	(uint32_t) 0x00442b,
	(uint32_t) 0x0fff7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_COUNTI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = " + std::to_string((etiss_uint32)(uimmL)) + "ULL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = " + std::to_string((etiss_uint32)(uimmL)) + "ULL;\n";
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_COUNTI\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_counti" << " # " << ba << (" [L=" + std::to_string(L) + " | uimmL=" + std::to_string(uimmL) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_COUNT --------------------------------------------------------------------
static InstructionDefinition cv_count_L_rs1 (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_count",
	(uint32_t) 0x00452b,
	(uint32_t) 0xfff07f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_COUNT\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
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
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_COUNT\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_count" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SETUPI -------------------------------------------------------------------
static InstructionDefinition cv_setupi_L_uimmS_uimmL (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_setupi",
	(uint32_t) 0x00462b,
	(uint32_t) 0x007f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 uimmS = 0;
static BitArrayRange R_uimmS_0(19, 15);
uimmS += R_uimmS_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SETUPI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + 4ULL))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmS << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = " + std::to_string((etiss_uint32)(uimmL)) + "ULL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + 4ULL))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmS << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = " + std::to_string((etiss_uint32)(uimmL)) + "ULL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 0ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 < ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 + 8ULL) { // conditional\n";
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

		cp.code() = std::string("//CV_SETUPI\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 uimmS = 0;
static BitArrayRange R_uimmS_0(19, 15);
uimmS += R_uimmS_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_setupi" << " # " << ba << (" [L=" + std::to_string(L) + " | uimmS=" + std::to_string(uimmS) + " | uimmL=" + std::to_string(uimmL) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SETUP --------------------------------------------------------------------
static InstructionDefinition cv_setup_L_rs1_uimmL (
	ISA32_RV32IMAFDXCoreVHwlpV0,
	"cv_setup",
	(uint32_t) 0x00472b,
	(uint32_t) 0x007f7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SETUP\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 - ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 < 8ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0;\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 - 1ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (L == 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + 4ULL))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_0 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpstart_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + 4ULL))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 % 4ULL) { // conditional\n";
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
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 = " + std::to_string((etiss_uint32)((ic.current_address_ + (uimmL << 2ULL)))) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 = *((RV32IMAFDXCoreVHwlpV0*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "} // block\n";
} // block
} // conditional
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpcount_1 > 0ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_1 < ((RV32IMAFDXCoreVHwlpV0*)cpu)->lpend_0 + 8ULL) { // conditional\n";
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

		cp.code() = std::string("//CV_SETUP\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->return_pending | cpu->exception) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 L = 0;
static BitArrayRange R_L_0(7, 7);
L += R_L_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 uimmL = 0;
static BitArrayRange R_uimmL_0(31, 20);
uimmL += R_uimmL_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_setup" << " # " << ba << (" [L=" + std::to_string(L) + " | rs1=" + std::to_string(rs1) + " | uimmL=" + std::to_string(uimmL) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
