// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the instruction behavior models of the RV32IC
 * instruction set for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVArch.h"
#include "RV32IMACFDVFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CADDI4SPN -------------------------------------------------------------------
static InstructionDefinition caddi4spn_rd_imm (
	ISA16_RV32IMACFDV,
	"caddi4spn",
	(uint16_t) 0x00,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(4, 2);
rd += R_rd_0.read(ba) << 0;
etiss_uint16 imm = 0;
static BitArrayRange R_imm_3(5, 5);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_2(6, 6);
imm += R_imm_2.read(ba) << 2;
static BitArrayRange R_imm_6(10, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_4(12, 11);
imm += R_imm_4.read(ba) << 4;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CADDI4SPN\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 42);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 2677);\n";
if (imm) { // conditional
cp.code() += "etiss_coverage_count(1, 2678);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[2ULL] + " + std::to_string(imm) + "ULL;\n";
cp.code() += "etiss_coverage_count(9, 2689, 2683, 2682, 2680, 2681, 2688, 2686, 2685, 2687);\n";
} // conditional
else { // conditional
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2692, 2690);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CADDI4SPN\n");

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
etiss_uint16 imm = 0;
static BitArrayRange R_imm_3(5, 5);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_2(6, 6);
imm += R_imm_2.read(ba) << 2;
static BitArrayRange R_imm_6(10, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_4(12, 11);
imm += R_imm_4.read(ba) << 4;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "caddi4spn" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLW -------------------------------------------------------------------------
static InstructionDefinition clw_rd_uimm_rs1 (
	ISA16_RV32IMACFDV,
	"clw",
	(uint16_t) 0x4000,
	(uint16_t) 0xe003,
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
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 43);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2713);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 2701, 2700, 2698, 2697, 2695, 2696, 2699);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = (etiss_int32)(mem_val_0);\n";
cp.code() += "etiss_coverage_count(8, 2712, 2706, 2705, 2703, 2704, 2711, 2709, 2708);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CLW\n");

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
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clw" << " # " << ba << (" [rd=" + std::to_string(rd) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSW -------------------------------------------------------------------------
static InstructionDefinition csw_rs2_uimm_rs1 (
	ISA16_RV32IMACFDV,
	"csw",
	(uint16_t) 0xc000,
	(uint16_t) 0xe003,
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
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSW\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 44);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2734);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 load_address = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 2722, 2721, 2719, 2718, 2716, 2717, 2720);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(8, 2733, 2725, 2724, 2732, 2730, 2729, 2727, 2728);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, load_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
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

		cp.code() = std::string("//CSW\n");

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
static BitArrayRange R_uimm_6(5, 5);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 6);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_uimm_3(12, 10);
uimm += R_uimm_3.read(ba) << 3;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csw" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CADDI -----------------------------------------------------------------------
static InstructionDefinition caddi_imm_rs1 (
	ISA16_RV32IMACFDV,
	"caddi",
	(uint16_t) 0x01,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CADDI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 45);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 2735);\n";
if ((rs1 % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2741, 2738, 2736, 2739, 2740);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] + " + std::to_string(((etiss_int8)(((etiss_int8)imm) << (2)) >> (2))) + "LL;\n";
cp.code() += "etiss_coverage_count(10, 2756, 2746, 2745, 2743, 2755, 2751, 2750, 2748, 2754, 2752);\n";
} // conditional
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
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "caddi" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CNOP ------------------------------------------------------------------------
static InstructionDefinition cnop_nzimm (
	ISA16_RV32IMACFDV,
	"cnop",
	(uint16_t) 0x01,
	(uint16_t) 0xef83,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 nzimm = 0;
static BitArrayRange R_nzimm_0(6, 2);
nzimm += R_nzimm_0.read(ba) << 0;
static BitArrayRange R_nzimm_5(12, 12);
nzimm += R_nzimm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CNOP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 46);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2757);\n";
cp.code() += "{ // block\n";
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
etiss_uint8 nzimm = 0;
static BitArrayRange R_nzimm_0(6, 2);
nzimm += R_nzimm_0.read(ba) << 0;
static BitArrayRange R_nzimm_5(12, 12);
nzimm += R_nzimm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cnop" << " # " << ba << (" [nzimm=" + std::to_string(nzimm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CJAL ------------------------------------------------------------------------
static InstructionDefinition cjal_imm (
	ISA16_RV32IMACFDV,
	"cjal",
	(uint16_t) 0x2001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(5, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_7(6, 6);
imm += R_imm_7.read(ba) << 7;
static BitArrayRange R_imm_6(7, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_10(8, 8);
imm += R_imm_10.read(ba) << 10;
static BitArrayRange R_imm_8(10, 9);
imm += R_imm_8.read(ba) << 8;
static BitArrayRange R_imm_4(11, 11);
imm += R_imm_4.read(ba) << 4;
static BitArrayRange R_imm_11(12, 12);
imm += R_imm_11.read(ba) << 11;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CJAL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 47);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2772);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[1ULL] = " + std::to_string(ic.current_address_ + 2ULL) + "ULL;\n";
cp.code() += "etiss_coverage_count(6, 2764, 2760, 2759, 2763, 2761, 2762);\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 2771, 2765, 2770, 2766, 2769, 2767);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CJAL\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(5, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_7(6, 6);
imm += R_imm_7.read(ba) << 7;
static BitArrayRange R_imm_6(7, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_10(8, 8);
imm += R_imm_10.read(ba) << 10;
static BitArrayRange R_imm_8(10, 9);
imm += R_imm_8.read(ba) << 8;
static BitArrayRange R_imm_4(11, 11);
imm += R_imm_4.read(ba) << 4;
static BitArrayRange R_imm_11(12, 12);
imm += R_imm_11.read(ba) << 11;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cjal" << " # " << ba << (" [imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLI -------------------------------------------------------------------------
static InstructionDefinition cli_imm_rd (
	ISA16_RV32IMACFDV,
	"cli",
	(uint16_t) 0x4001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 48);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2789);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2773);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2779, 2776, 2774, 2777, 2778);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(((etiss_int8)(((etiss_int8)imm) << (2)) >> (2))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 2788, 2784, 2783, 2781, 2787, 2785);\n";
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
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cli" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLUI ------------------------------------------------------------------------
static InstructionDefinition clui_imm_rd (
	ISA16_RV32IMACFDV,
	"clui",
	(uint16_t) 0x6001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(6, 2);
imm += R_imm_12.read(ba) << 12;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_imm_17(12, 12);
imm += R_imm_17.read(ba) << 17;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLUI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 49);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2813);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2790);\n";
if (imm == 0LL) { // conditional
cp.code() += "etiss_coverage_count(3, 2793, 2791, 2792);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2796, 2794);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
cp.code() += "etiss_coverage_count(1, 2797);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 2803, 2800, 2798, 2801, 2802);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = " + std::to_string(((etiss_int32)(((etiss_int32)imm) << (14)) >> (14))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 2812, 2808, 2807, 2805, 2811, 2809);\n";
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

		cp.code() = std::string("//CLUI\n");

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
etiss_uint32 imm = 0;
static BitArrayRange R_imm_12(6, 2);
imm += R_imm_12.read(ba) << 12;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_imm_17(12, 12);
imm += R_imm_17.read(ba) << 17;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clui" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CADDI16SP -------------------------------------------------------------------
static InstructionDefinition caddi16sp_nzimm (
	ISA16_RV32IMACFDV,
	"caddi16sp",
	(uint16_t) 0x6101,
	(uint16_t) 0xef83,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 nzimm = 0;
static BitArrayRange R_nzimm_5(2, 2);
nzimm += R_nzimm_5.read(ba) << 5;
static BitArrayRange R_nzimm_7(4, 3);
nzimm += R_nzimm_7.read(ba) << 7;
static BitArrayRange R_nzimm_6(5, 5);
nzimm += R_nzimm_6.read(ba) << 6;
static BitArrayRange R_nzimm_4(6, 6);
nzimm += R_nzimm_4.read(ba) << 4;
static BitArrayRange R_nzimm_9(12, 12);
nzimm += R_nzimm_9.read(ba) << 9;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CADDI16SP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 50);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 2814);\n";
if (nzimm) { // conditional
cp.code() += "etiss_coverage_count(1, 2815);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[2ULL] = *((RV32IMACFDV*)cpu)->X[2ULL] + " + std::to_string(((etiss_int16)(((etiss_int16)nzimm) << (6)) >> (6))) + "LL;\n";
cp.code() += "etiss_coverage_count(8, 2826, 2818, 2817, 2825, 2821, 2820, 2824, 2822);\n";
} // conditional
else { // conditional
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2829, 2827);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CADDI16SP\n");

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
etiss_uint16 nzimm = 0;
static BitArrayRange R_nzimm_5(2, 2);
nzimm += R_nzimm_5.read(ba) << 5;
static BitArrayRange R_nzimm_7(4, 3);
nzimm += R_nzimm_7.read(ba) << 7;
static BitArrayRange R_nzimm_6(5, 5);
nzimm += R_nzimm_6.read(ba) << 6;
static BitArrayRange R_nzimm_4(6, 6);
nzimm += R_nzimm_4.read(ba) << 4;
static BitArrayRange R_nzimm_9(12, 12);
nzimm += R_nzimm_9.read(ba) << 9;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "caddi16sp" << " # " << ba << (" [nzimm=" + std::to_string(nzimm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// __reserved_clui -------------------------------------------------------------
static InstructionDefinition __reserved_clui_rd (
	ISA16_RV32IMACFDV,
	"__reserved_clui",
	(uint16_t) 0x6001,
	(uint16_t) 0xf07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//__reserved_clui\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 51);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2832, 2830);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//__reserved_clui\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "__reserved_clui" << " # " << ba << (" [rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRLI -----------------------------------------------------------------------
static InstructionDefinition csrli_shamt_rs1 (
	ISA16_RV32IMACFDV,
	"csrli",
	(uint16_t) 0x8001,
	(uint16_t) 0xfc03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(6, 2);
shamt += R_shamt_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRLI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 52);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2846);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] >> " + std::to_string(shamt) + "ULL;\n";
cp.code() += "etiss_coverage_count(11, 2845, 2837, 2836, 2834, 2835, 2844, 2842, 2841, 2839, 2840, 2843);\n";
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(6, 2);
shamt += R_shamt_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrli" << " # " << ba << (" [shamt=" + std::to_string(shamt) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSRAI -----------------------------------------------------------------------
static InstructionDefinition csrai_shamt_rs1 (
	ISA16_RV32IMACFDV,
	"csrai",
	(uint16_t) 0x8401,
	(uint16_t) 0xfc03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(6, 2);
shamt += R_shamt_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSRAI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 53);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2886);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2847);\n";
if (shamt) { // conditional
cp.code() += "etiss_coverage_count(1, 2848);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 2868);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] = ((etiss_int32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL])) >> " + std::to_string(shamt) + "ULL;\n";
cp.code() += "etiss_coverage_count(13, 2867, 2856, 2855, 2853, 2854, 2866, 2863, 2861, 2860, 2858, 2859, 2864, 2865);\n";
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
etiss_uint8 shamt = 0;
static BitArrayRange R_shamt_0(6, 2);
shamt += R_shamt_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csrai" << " # " << ba << (" [shamt=" + std::to_string(shamt) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CANDI -----------------------------------------------------------------------
static InstructionDefinition candi_imm_rs1 (
	ISA16_RV32IMACFDV,
	"candi",
	(uint16_t) 0x8801,
	(uint16_t) 0xec03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CANDI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 54);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2902);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] & " + std::to_string(((etiss_int8)(((etiss_int8)imm) << (2)) >> (2))) + "LL;\n";
cp.code() += "etiss_coverage_count(12, 2901, 2891, 2890, 2888, 2889, 2900, 2896, 2895, 2893, 2894, 2899, 2897);\n";
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
etiss_uint8 imm = 0;
static BitArrayRange R_imm_0(6, 2);
imm += R_imm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_5(12, 12);
imm += R_imm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "candi" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSUB ------------------------------------------------------------------------
static InstructionDefinition csub_rs2_rd (
	ISA16_RV32IMACFDV,
	"csub",
	(uint16_t) 0x8c01,
	(uint16_t) 0xfc63,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSUB\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 55);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2920);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] - *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(14, 2919, 2907, 2906, 2904, 2905, 2918, 2912, 2911, 2909, 2910, 2917, 2916, 2914, 2915);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "csub" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CXOR ------------------------------------------------------------------------
static InstructionDefinition cxor_rs2_rd (
	ISA16_RV32IMACFDV,
	"cxor",
	(uint16_t) 0x8c21,
	(uint16_t) 0xfc63,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CXOR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 56);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2938);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] ^ *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(14, 2937, 2925, 2924, 2922, 2923, 2936, 2930, 2929, 2927, 2928, 2935, 2934, 2932, 2933);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cxor" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// COR -------------------------------------------------------------------------
static InstructionDefinition cor_rs2_rd (
	ISA16_RV32IMACFDV,
	"cor",
	(uint16_t) 0x8c41,
	(uint16_t) 0xfc63,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//COR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 57);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2956);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] | *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(14, 2955, 2943, 2942, 2940, 2941, 2954, 2948, 2947, 2945, 2946, 2953, 2952, 2950, 2951);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cor" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CAND ------------------------------------------------------------------------
static InstructionDefinition cand_rs2_rd (
	ISA16_RV32IMACFDV,
	"cand",
	(uint16_t) 0x8c61,
	(uint16_t) 0xfc63,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(4, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CAND\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 58);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2974);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rd + 8ULL) + "ULL] & *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 + 8ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(14, 2973, 2961, 2960, 2958, 2959, 2972, 2966, 2965, 2963, 2964, 2971, 2970, 2968, 2969);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(9, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cand" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CJ --------------------------------------------------------------------------
static InstructionDefinition cj_imm (
	ISA16_RV32IMACFDV,
	"cj",
	(uint16_t) 0xa001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(5, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_7(6, 6);
imm += R_imm_7.read(ba) << 7;
static BitArrayRange R_imm_6(7, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_10(8, 8);
imm += R_imm_10.read(ba) << 10;
static BitArrayRange R_imm_8(10, 9);
imm += R_imm_8.read(ba) << 8;
static BitArrayRange R_imm_4(11, 11);
imm += R_imm_4.read(ba) << 4;
static BitArrayRange R_imm_11(12, 12);
imm += R_imm_11.read(ba) << 11;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CJ\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 59);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (4)) >> (4))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 2981, 2975, 2980, 2976, 2979, 2977);\n";
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CJ\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(5, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_7(6, 6);
imm += R_imm_7.read(ba) << 7;
static BitArrayRange R_imm_6(7, 7);
imm += R_imm_6.read(ba) << 6;
static BitArrayRange R_imm_10(8, 8);
imm += R_imm_10.read(ba) << 10;
static BitArrayRange R_imm_8(10, 9);
imm += R_imm_8.read(ba) << 8;
static BitArrayRange R_imm_4(11, 11);
imm += R_imm_4.read(ba) << 4;
static BitArrayRange R_imm_11(12, 12);
imm += R_imm_11.read(ba) << 11;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cj" << " # " << ba << (" [imm=" + std::to_string(imm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CBEQZ -----------------------------------------------------------------------
static InstructionDefinition cbeqz_imm_rs1 (
	ISA16_RV32IMACFDV,
	"cbeqz",
	(uint16_t) 0xc001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(4, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_6(6, 5);
imm += R_imm_6.read(ba) << 6;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_3(11, 10);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_8(12, 12);
imm += R_imm_8.read(ba) << 8;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CBEQZ\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 60);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 2982);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] == 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 2989, 2987, 2986, 2984, 2985, 2988);\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (7)) >> (7))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 2996, 2990, 2995, 2991, 2994, 2992);\n";
cp.code() += "} // conditional\n";
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CBEQZ\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->nextPc != " + std::to_string(ic.current_address_ + 2) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(4, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_6(6, 5);
imm += R_imm_6.read(ba) << 6;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_3(11, 10);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_8(12, 12);
imm += R_imm_8.read(ba) << 8;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cbeqz" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CBNEZ -----------------------------------------------------------------------
static InstructionDefinition cbnez_imm_rs1 (
	ISA16_RV32IMACFDV,
	"cbnez",
	(uint16_t) 0xe001,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(4, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_6(6, 5);
imm += R_imm_6.read(ba) << 6;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_3(11, 10);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_8(12, 12);
imm += R_imm_8.read(ba) << 8;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CBNEZ\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 61);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 2997);\n";
cp.code() += "if (*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 + 8ULL) + "ULL] != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 3004, 3002, 3001, 2999, 3000, 3003);\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + ((etiss_int16)(((etiss_int16)imm) << (7)) >> (7))) + "LL;\n";
cp.code() += "etiss_coverage_count(6, 3011, 3005, 3010, 3006, 3009, 3007);\n";
cp.code() += "} // conditional\n";
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CBNEZ\n");

// -----------------------------------------------------------------------------
cp.code() += "if (cpu->nextPc != " + std::to_string(ic.current_address_ + 2) + "ULL) return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint16 imm = 0;
static BitArrayRange R_imm_5(2, 2);
imm += R_imm_5.read(ba) << 5;
static BitArrayRange R_imm_1(4, 3);
imm += R_imm_1.read(ba) << 1;
static BitArrayRange R_imm_6(6, 5);
imm += R_imm_6.read(ba) << 6;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(9, 7);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_imm_3(11, 10);
imm += R_imm_3.read(ba) << 3;
static BitArrayRange R_imm_8(12, 12);
imm += R_imm_8.read(ba) << 8;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cbnez" << " # " << ba << (" [imm=" + std::to_string(imm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSLLI -----------------------------------------------------------------------
static InstructionDefinition cslli_nzuimm_rs1 (
	ISA16_RV32IMACFDV,
	"cslli",
	(uint16_t) 0x02,
	(uint16_t) 0xf003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 nzuimm = 0;
static BitArrayRange R_nzuimm_0(6, 2);
nzuimm += R_nzuimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSLLI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 62);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 3012);\n";
if (nzuimm) { // conditional
cp.code() += "etiss_coverage_count(1, 3013);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] << " + std::to_string(nzuimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(9, 3026, 3018, 3017, 3015, 3025, 3023, 3022, 3020, 3024);\n";
} // conditional
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
etiss_uint8 nzuimm = 0;
static BitArrayRange R_nzuimm_0(6, 2);
nzuimm += R_nzuimm_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cslli" << " # " << ba << (" [nzuimm=" + std::to_string(nzuimm) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLWSP -----------------------------------------------------------------------
static InstructionDefinition clwsp_uimm_rd (
	ISA16_RV32IMACFDV,
	"clwsp",
	(uint16_t) 0x4002,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(3, 2);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 4);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_uimm_5(12, 12);
uimm += R_uimm_5.read(ba) << 5;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 63);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3053);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 3027);\n";
if (rd % 32ULL) { // conditional
cp.code() += "etiss_coverage_count(2, 3030, 3028);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 3049);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, *((RV32IMACFDV*)cpu)->X[2ULL] + " + std::to_string(uimm) + "ULL, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_int32 res = mem_val_0;\n";
cp.code() += "etiss_coverage_count(6, 3039, 3038, 3037, 3035, 3034, 3036);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = (etiss_int32)(res);\n";
cp.code() += "etiss_coverage_count(6, 3048, 3044, 3043, 3041, 3047, 3045);\n";
cp.code() += "} // block\n";
} // block
} // conditional
else { // conditional
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 3052, 3050, 3051);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
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

		cp.code() = std::string("//CLWSP\n");

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
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(3, 2);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(6, 4);
uimm += R_uimm_2.read(ba) << 2;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
static BitArrayRange R_uimm_5(12, 12);
uimm += R_uimm_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clwsp" << " # " << ba << (" [uimm=" + std::to_string(uimm) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMV -------------------------------------------------------------------------
static InstructionDefinition cmv_rs2_rd (
	ISA16_RV32IMACFDV,
	"cmv",
	(uint16_t) 0x8002,
	(uint16_t) 0xf003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 64);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 3054);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3060, 3057, 3055, 3058, 3059);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(7, 3071, 3065, 3064, 3062, 3070, 3069, 3067);\n";
} // conditional
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
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmv" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CJR -------------------------------------------------------------------------
static InstructionDefinition cjr_rs1 (
	ISA16_RV32IMACFDV,
	"cjr",
	(uint16_t) 0x8002,
	(uint16_t) 0xf07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CJR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 65);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 3072);\n";
if (rs1) { // conditional
cp.code() += "etiss_coverage_count(1, 3073);\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL] & -2LL;\n";
cp.code() += "etiss_coverage_count(6, 3083, 3074, 3082, 3079, 3078, 3076);\n";
} // conditional
else { // conditional
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 3086, 3084, 3085);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
} // conditional
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CJR\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cjr" << " # " << ba << (" [rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// __reserved_cmv --------------------------------------------------------------
static InstructionDefinition __reserved_cmv_ (
	ISA16_RV32IMACFDV,
	"__reserved_cmv",
	(uint16_t) 0x8002,
	(uint16_t) 0xffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//__reserved_cmv\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 66);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 3089, 3087, 3088);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//__reserved_cmv\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "__reserved_cmv" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CADD ------------------------------------------------------------------------
static InstructionDefinition cadd_rs2_rd (
	ISA16_RV32IMACFDV,
	"cadd",
	(uint16_t) 0x9002,
	(uint16_t) 0xf003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CADD\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 67);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "etiss_coverage_count(1, 3090);\n";
if ((rd % 32ULL) != 0LL) { // conditional
cp.code() += "etiss_coverage_count(5, 3096, 3093, 3091, 3094, 3095);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rd % 32ULL) + "ULL] + *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(11, 3113, 3101, 3100, 3098, 3112, 3106, 3105, 3103, 3111, 3110, 3108);\n";
} // conditional
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
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cadd" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | rd=" + std::to_string(rd) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CJALR -----------------------------------------------------------------------
static InstructionDefinition cjalr_rs1 (
	ISA16_RV32IMACFDV,
	"cjalr",
	(uint16_t) 0x9002,
	(uint16_t) 0xf07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CJALR\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 68);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3134);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 new_pc = *((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1 % 32ULL) + "ULL];\n";
cp.code() += "etiss_coverage_count(4, 3120, 3119, 3118, 3116);\n";
cp.code() += "*((RV32IMACFDV*)cpu)->X[1ULL] = " + std::to_string(ic.current_address_ + 2ULL) + "ULL;\n";
cp.code() += "etiss_coverage_count(6, 3127, 3123, 3122, 3126, 3124, 3125);\n";
cp.code() += "cpu->nextPc = new_pc & -2LL;\n";
cp.code() += "etiss_coverage_count(4, 3133, 3128, 3132, 3129);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CJALR\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(11, 7);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cjalr" << " # " << ba << (" [rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CEBREAK ---------------------------------------------------------------------
static InstructionDefinition cebreak_ (
	ISA16_RV32IMACFDV,
	"cebreak",
	(uint16_t) 0x9002,
	(uint16_t) 0xffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CEBREAK\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 69);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 3LL);\n";
cp.code() += "etiss_coverage_count(2, 3137, 3135);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CEBREAK\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cebreak" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSWSP -----------------------------------------------------------------------
static InstructionDefinition cswsp_rs2_uimm (
	ISA16_RV32IMACFDV,
	"cswsp",
	(uint16_t) 0xc002,
	(uint16_t) 0xe003,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(8, 7);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(12, 9);
uimm += R_uimm_2.read(ba) << 2;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSWSP\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 70);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 3156);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 offs = *((RV32IMACFDV*)cpu)->X[2ULL] + " + std::to_string(uimm) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 3144, 3143, 3141, 3140, 3142);\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "mem_val_0 = (etiss_uint32)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs2 % 32ULL) + "ULL]);\n";
cp.code() += "etiss_coverage_count(7, 3155, 3147, 3146, 3154, 3152, 3151, 3149);\n";
cp.code() += "cpu->exception |= (*(system->dwrite))(system->handle, cpu, offs, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
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

		cp.code() = std::string("//CSWSP\n");

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
static BitArrayRange R_rs2_0(6, 2);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 uimm = 0;
static BitArrayRange R_uimm_6(8, 7);
uimm += R_uimm_6.read(ba) << 6;
static BitArrayRange R_uimm_2(12, 9);
uimm += R_uimm_2.read(ba) << 2;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cswsp" << " # " << ba << (" [rs2=" + std::to_string(rs2) + " | uimm=" + std::to_string(uimm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// DII -------------------------------------------------------------------------
static InstructionDefinition dii_ (
	ISA16_RV32IMACFDV,
	"dii",
	(uint16_t) 0x00,
	(uint16_t) 0xffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//DII\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 71);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 2) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 3159, 3157);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//DII\n");

// -----------------------------------------------------------------------------
cp.code() += "return cpu->exception;\n";
// -----------------------------------------------------------------------------
	}

		return true;
	},
	0,
	[] (BitArray & ba, Instruction & instr)
	{
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "dii" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
