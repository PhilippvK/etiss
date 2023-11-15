/**
 * Generated on Wed, 15 Nov 2023 17:24:25 +0100.
 *
 * This file contains the instruction behavior models of the XCoreVMem
 * instruction set for the RV32IMAFDXCoreVHwlp core architecture.
 */

#include "RV32IMAFDXCoreVHwlpArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_LB_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_lb_ri_inc_rd_rs1_imm12 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lb_ri_inc",
	(uint32_t) 0x00000b,
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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_LB_ri_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int8 res = (etiss_int8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LB_ri_inc\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_lb_ri_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm12=" + std::to_string(imm12) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LBU_ri_inc ---------------------------------------------------------------
static InstructionDefinition cv_lbu_ri_inc_rd_rs1_imm12 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lbu_ri_inc",
	(uint32_t) 0x00400b,
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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_LBU_ri_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint8 res = (etiss_uint8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LBU_ri_inc\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_lbu_ri_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm12=" + std::to_string(imm12) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LH_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_lh_ri_inc_rd_rs1_imm12 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lh_ri_inc",
	(uint32_t) 0x00100b,
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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_LH_ri_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int16 res = (etiss_int16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LH_ri_inc\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_lh_ri_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm12=" + std::to_string(imm12) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LHU_ri_inc ---------------------------------------------------------------
static InstructionDefinition cv_lhu_ri_inc_rd_rs1_imm12 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lhu_ri_inc",
	(uint32_t) 0x00500b,
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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_LHU_ri_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint16 res = (etiss_uint16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LHU_ri_inc\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_lhu_ri_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm12=" + std::to_string(imm12) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LW_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_lw_ri_inc_rd_rs1_imm12 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lw_ri_inc",
	(uint32_t) 0x00200b,
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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_LW_ri_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int32 res = (etiss_int32)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LW_ri_inc\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(31, 20);
imm12 += R_imm12_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_lw_ri_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm12=" + std::to_string(imm12) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LB_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_lb_rr_inc_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lb_rr_inc",
	(uint32_t) 0x00302b,
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

		cp.code() = std::string("//CV_LB_rr_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int8 res = (etiss_int8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LB_rr_inc\n");

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
ss << "cv_lb_rr_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LBU_rr_inc ---------------------------------------------------------------
static InstructionDefinition cv_lbu_rr_inc_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lbu_rr_inc",
	(uint32_t) 0x1000302b,
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

		cp.code() = std::string("//CV_LBU_rr_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint8 res = (etiss_uint8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LBU_rr_inc\n");

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
ss << "cv_lbu_rr_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LH_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_lh_rr_inc_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lh_rr_inc",
	(uint32_t) 0x200302b,
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

		cp.code() = std::string("//CV_LH_rr_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int16 res = (etiss_int16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LH_rr_inc\n");

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
ss << "cv_lh_rr_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LHU_rr_inc ---------------------------------------------------------------
static InstructionDefinition cv_lhu_rr_inc_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lhu_rr_inc",
	(uint32_t) 0x1200302b,
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

		cp.code() = std::string("//CV_LHU_rr_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint16 res = (etiss_uint16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LHU_rr_inc\n");

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
ss << "cv_lhu_rr_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LW_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_lw_rr_inc_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lw_rr_inc",
	(uint32_t) 0x400302b,
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

		cp.code() = std::string("//CV_LW_rr_inc\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int32 res = (etiss_int32)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
} // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_LW_rr_inc\n");

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
ss << "cv_lw_rr_inc" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LB_rr --------------------------------------------------------------------
static InstructionDefinition cv_lb_rr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lb_rr",
	(uint32_t) 0x800302b,
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

		cp.code() = std::string("//CV_LB_rr\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int8 res = (etiss_int8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//CV_LB_rr\n");

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
ss << "cv_lb_rr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LBU_rr -------------------------------------------------------------------
static InstructionDefinition cv_lbu_rr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lbu_rr",
	(uint32_t) 0x1800302b,
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

		cp.code() = std::string("//CV_LBU_rr\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint8 res = (etiss_uint8)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//CV_LBU_rr\n");

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
ss << "cv_lbu_rr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LH_rr --------------------------------------------------------------------
static InstructionDefinition cv_lh_rr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lh_rr",
	(uint32_t) 0xa00302b,
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

		cp.code() = std::string("//CV_LH_rr\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int16 res = (etiss_int16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//CV_LH_rr\n");

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
ss << "cv_lh_rr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LHU_rr -------------------------------------------------------------------
static InstructionDefinition cv_lhu_rr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lhu_rr",
	(uint32_t) 0x1a00302b,
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

		cp.code() = std::string("//CV_LHU_rr\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint16 res = (etiss_uint16)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//CV_LHU_rr\n");

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
ss << "cv_lhu_rr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_LW_rr --------------------------------------------------------------------
static InstructionDefinition cv_lw_rr_rd_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_lw_rr",
	(uint32_t) 0xc00302b,
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

		cp.code() = std::string("//CV_LW_rr\n");

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
cp.code() += "etiss_uint32 load_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int32 res = (etiss_int32)(mem_val_0);\n";
if (rd != 0ULL) { // conditional
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(res);\n";
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

		cp.code() = std::string("//CV_LW_rr\n");

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
ss << "cv_lw_rr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SB_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_sb_ri_inc_imm12_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sb_ri_inc",
	(uint32_t) 0x00002b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SB_ri_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int8)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SB_ri_inc\n");

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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sb_ri_inc" << " # " << ba << (" [imm12=" + std::to_string(imm12) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SH_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_sh_ri_inc_imm12_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sh_ri_inc",
	(uint32_t) 0x00102b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SH_ri_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int16)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SH_ri_inc\n");

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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sh_ri_inc" << " # " << ba << (" [imm12=" + std::to_string(imm12) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SW_ri_inc ----------------------------------------------------------------
static InstructionDefinition cv_sw_ri_inc_imm12_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sw_ri_inc",
	(uint32_t) 0x00202b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SW_ri_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)imm12) << (4)) >> (4))) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SW_ri_inc\n");

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
etiss_uint16 imm12 = 0;
static BitArrayRange R_imm12_0(11, 7);
imm12 += R_imm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
static BitArrayRange R_imm12_5(31, 25);
imm12 += R_imm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sw_ri_inc" << " # " << ba << (" [imm12=" + std::to_string(imm12) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SB_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_sb_rr_inc_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sb_rr_inc",
	(uint32_t) 0x2000302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SB_rr_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int8)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SB_rr_inc\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sb_rr_inc" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SH_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_sh_rr_inc_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sh_rr_inc",
	(uint32_t) 0x2200302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SH_rr_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int16)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SH_rr_inc\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sh_rr_inc" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SW_rr_inc ----------------------------------------------------------------
static InstructionDefinition cv_sw_rr_inc_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sw_rr_inc",
	(uint32_t) 0x2400302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SW_rr_inc\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL]);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CV_SW_rr_inc\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sw_rr_inc" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SB_rr --------------------------------------------------------------------
static InstructionDefinition cv_sb_rr_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sb_rr",
	(uint32_t) 0x2800302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SB_rr\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL];\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int8)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
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

		cp.code() = std::string("//CV_SB_rr\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sb_rr" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SH_rr --------------------------------------------------------------------
static InstructionDefinition cv_sh_rr_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sh_rr",
	(uint32_t) 0x2a00302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SH_rr\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL];\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int16)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
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

		cp.code() = std::string("//CV_SH_rr\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sh_rr" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_SW_rr --------------------------------------------------------------------
static InstructionDefinition cv_sw_rr_rs3_rs1_rs2 (
	ISA32_RV32IMAFDXCoreVHwlp,
	"cv_sw_rr",
	(uint32_t) 0x2c00302b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_SW_rr\n");

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
cp.code() += "etiss_uint32 store_address = *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs3) + "ULL];\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMAFDXCoreVHwlp*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
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

		cp.code() = std::string("//CV_SW_rr\n");

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
etiss_uint8 rs3 = 0;
static BitArrayRange R_rs3_0(11, 7);
rs3 += R_rs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_sw_rr" << " # " << ba << (" [rs3=" + std::to_string(rs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
