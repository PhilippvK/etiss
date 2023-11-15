/**
 * Generated on Wed, 15 Nov 2023 17:01:22 +0100.
 *
 * This file contains the instruction behavior models of the XCoreVBitmanip
 * instruction set for the RV32IMAFDXCoreVHwlp core architecture.
 */

#include "RV32IMAFDXCoreVHwlpArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_EXTRACT ------------------------------------------------------------------
static InstructionDefinition cv_extract_rd_rs1_Iuimm5_Luimm5 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_extract",
	(uint32_t) 0x00005b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACT\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
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
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
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
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_int32)((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] >> " + std::to_string(Iuimm5) + "ULL) & " + std::to_string(((2ULL << Luimm5) - 1ULL)) + "ULL) << " + std::to_string((31ULL - Luimm5)) + "ULL)) >> " + std::to_string((31ULL - Luimm5)) + "ULL;\n";
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

		cp.code() = std::string("//CV_EXTRACT\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extract" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Iuimm5=" + std::to_string(Iuimm5) + " | Luimm5=" + std::to_string(Luimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTU -----------------------------------------------------------------
static InstructionDefinition cv_extractu_rd_rs1_Iuimm5_Luimm5 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_extractu",
	(uint32_t) 0x4000005b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTU\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
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
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
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
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] >> " + std::to_string(Iuimm5) + "ULL) & " + std::to_string(((2ULL << Luimm5) - 1ULL)) + "ULL));\n";
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

		cp.code() = std::string("//CV_EXTRACTU\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extractu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Iuimm5=" + std::to_string(Iuimm5) + " | Luimm5=" + std::to_string(Luimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTR -----------------------------------------------------------------
static InstructionDefinition cv_extractr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_extractr",
	(uint32_t) 0x3000302b,
	(uint32_t) 0xfe00707f,
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
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
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
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
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_int32)((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] >> ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (0ULL)) & 31)) & ((2ULL << ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)) - 1ULL)) << (31ULL - ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)))) >> (31ULL - ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31));\n";
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

		cp.code() = std::string("//CV_EXTRACTR\n");

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
ss << "cv_extractr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTUR ----------------------------------------------------------------
static InstructionDefinition cv_extractur_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_extractur",
	(uint32_t) 0x3200302b,
	(uint32_t) 0xfe00707f,
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTUR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 > 1ULL) { // conditional\n";
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
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 > 1ULL) { // conditional\n";
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
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] >> ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (0ULL)) & 31)) & ((2ULL << ((((((*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)) - 1ULL)));\n";
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

		cp.code() = std::string("//CV_EXTRACTUR\n");

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
ss << "cv_extractur" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
