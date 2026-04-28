// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 10:00:29 +0200.
 *
 * This file contains the instruction behavior models of the Zcb
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// C__LBU ----------------------------------------------------------------------
static InstructionDefinition c__lbu_rd_uimm_rs1 (
	ISA16_RV32IMACFD,
	"c__lbu",
	(uint64_t) 0x8000,
	(uint64_t) 0xfc03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
static BitArrayRange R_uimm_0(6, 6);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__LBU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 276);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9612);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 load_address = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL));\n";
cp.code() += "etiss_coverage_count(9, 9593, 9592, 9589, 9587, 9586, 9584, 9585, 9588, 9590);\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint8 res = mem_val_0;\n";
cp.code() += "etiss_coverage_count(3, 9598, 9597, 9596);\n";
cp.code() += "etiss_coverage_count(1, 9599);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 9602, 9600, 9601);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(7, 9611, 9607, 9606, 9604, 9605, 9610, 9608);\n";
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

		cp.code() = std::string("//C__LBU\n");

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
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
static BitArrayRange R_uimm_0(6, 6);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__lbu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__LHU ----------------------------------------------------------------------
static InstructionDefinition c__lhu_rd_uimm_rs1 (
	ISA16_RV32IMACFD,
	"c__lhu",
	(uint64_t) 0x8400,
	(uint64_t) 0xfc43,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__LHU\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 277);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9646);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 load_address = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL));\n";
cp.code() += "etiss_coverage_count(9, 9624, 9623, 9620, 9618, 9617, 9615, 9616, 9619, 9621);\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint16 res = mem_val_0;\n";
cp.code() += "etiss_coverage_count(5, 9632, 9631, 9629, 9627, 9628);\n";
cp.code() += "etiss_coverage_count(1, 9633);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 9636, 9634, 9635);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(7, 9645, 9641, 9640, 9638, 9639, 9644, 9642);\n";
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

		cp.code() = std::string("//C__LHU\n");

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
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__lhu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__LH -----------------------------------------------------------------------
static InstructionDefinition c__lh_rd_uimm_rs1 (
	ISA16_RV32IMACFD,
	"c__lh",
	(uint64_t) 0x8440,
	(uint64_t) 0xfc43,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__LH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 278);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9682);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 load_address = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL));\n";
cp.code() += "etiss_coverage_count(9, 9658, 9657, 9654, 9652, 9651, 9649, 9650, 9653, 9655);\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int16 res = (etiss_int16)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(6, 9668, 9667, 9665, 9663, 9661, 9662);\n";
cp.code() += "etiss_coverage_count(1, 9669);\n";
if (rd != 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 9672, 9670, 9671);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(7, 9681, 9677, 9676, 9674, 9675, 9680, 9678);\n";
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

		cp.code() = std::string("//C__LH\n");

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
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__lh" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__SB -----------------------------------------------------------------------
static InstructionDefinition c__sb_rs2_uimm_rs1 (
	ISA16_RV32IMACFD,
	"c__sb",
	(uint64_t) 0x8800,
	(uint64_t) 0xfc03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
static BitArrayRange R_uimm_0(6, 6);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__SB\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 279);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9706);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 store_address = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL));\n";
cp.code() += "etiss_coverage_count(9, 9694, 9693, 9690, 9688, 9687, 9685, 9686, 9689, 9691);\n";
cp.code() += "etiss_uint8 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint8)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(8, 9705, 9697, 9696, 9704, 9702, 9701, 9699, 9700);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 1);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
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

		cp.code() = std::string("//C__SB\n");

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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
static BitArrayRange R_uimm_0(6, 6);
uimm += R_uimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__sb" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__SH -----------------------------------------------------------------------
static InstructionDefinition c__sh_rs2_uimm_rs1 (
	ISA16_RV32IMACFD,
	"c__sh",
	(uint64_t) 0x8c00,
	(uint64_t) 0xfc43,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__SH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 280);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9733);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 store_address = (etiss_uint32)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL));\n";
cp.code() += "etiss_coverage_count(9, 9718, 9717, 9714, 9712, 9711, 9709, 9710, 9713, 9715);\n";
cp.code() += "etiss_uint16 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint16)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(10, 9732, 9724, 9722, 9720, 9721, 9731, 9729, 9728, 9726, 9727);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, store_address, (etiss_uint8*)&mem_val_0, 2);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
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

		cp.code() = std::string("//C__SH\n");

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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_1(5, 5);
uimm += R_uimm_1.read(ba) << 1;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__sh" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__ZEXTB --------------------------------------------------------------------
static InstructionDefinition c__zextb_rsd (
	ISA16_RV32IMACFD,
	"c__zextb",
	(uint64_t) 0x9c61,
	(uint64_t) 0xfc7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__ZEXTB\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 281);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]) & 0xffULL);\n";
cp.code() += "etiss_coverage_count(12, 9747, 9738, 9737, 9735, 9736, 9746, 9743, 9742, 9740, 9741, 9744, 9745);\n";
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
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__zextb" << " # " << ba << (" [rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__SEXTB --------------------------------------------------------------------
static InstructionDefinition c__sextb_rsd (
	ISA16_RV32IMACFD,
	"c__sextb",
	(uint64_t) 0x9c65,
	(uint64_t) 0xfc7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__SEXTB\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 282);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = (etiss_uint32)((etiss_int8)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]) & 0xffULL)));\n";
cp.code() += "etiss_coverage_count(14, 9765, 9752, 9751, 9749, 9750, 9764, 9762, 9760, 9757, 9756, 9754, 9755, 9758, 9759);\n";
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
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__sextb" << " # " << ba << (" [rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__ZEXTH --------------------------------------------------------------------
static InstructionDefinition c__zexth_rsd (
	ISA16_RV32IMACFD,
	"c__zexth",
	(uint64_t) 0x9c69,
	(uint64_t) 0xfc7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__ZEXTH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 283);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]) & 0xffffULL);\n";
cp.code() += "etiss_coverage_count(12, 9779, 9770, 9769, 9767, 9768, 9778, 9775, 9774, 9772, 9773, 9776, 9777);\n";
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
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__zexth" << " # " << ba << (" [rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__SEXTH --------------------------------------------------------------------
static InstructionDefinition c__sexth_rsd (
	ISA16_RV32IMACFD,
	"c__sexth",
	(uint64_t) 0x9c6d,
	(uint64_t) 0xfc7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__SEXTH\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 284);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = (etiss_uint32)((etiss_int16)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]) & 0xffffULL)));\n";
cp.code() += "etiss_coverage_count(14, 9797, 9784, 9783, 9781, 9782, 9796, 9794, 9792, 9789, 9788, 9786, 9787, 9790, 9791);\n";
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
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__sexth" << " # " << ba << (" [rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__NOT ----------------------------------------------------------------------
static InstructionDefinition c__not_rsd (
	ISA16_RV32IMACFD,
	"c__not",
	(uint64_t) 0x9c75,
	(uint64_t) 0xfc7f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__NOT\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 286);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = ~(*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(10, 9812, 9805, 9804, 9802, 9803, 9811, 9810, 9809, 9807, 9808);\n";
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
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__not" << " # " << ba << (" [rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// C__MUL ----------------------------------------------------------------------
static InstructionDefinition c__mul_rs2_rsd (
	ISA16_RV32IMACFD,
	"c__mul",
	(uint64_t) 0x9c41,
	(uint64_t) 0xfc63,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//C__MUL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 287);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1293);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1292, 1285, 1291, 1288, 1286, 1287, 1289);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9837);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_int64 res = (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL]) * (etiss_int32)(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(12, 9827, 9826, 9819, 9818, 9817, 9815, 9816, 9825, 9824, 9823, 9821, 9822);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rsd + 8ULL) + "ULL] = (etiss_uint32)(res);\n";
cp.code() += "etiss_coverage_count(7, 9836, 9832, 9831, 9829, 9830, 9835, 9833);\n";
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rsd = 0;
static BitArrayRange R_rsd_0(9, 7);
rsd += R_rsd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "c__mul" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rsd=" + std::to_string(rsd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
