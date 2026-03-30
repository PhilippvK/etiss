// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the instruction behavior models of the RVZve64x
 * instruction set for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVArch.h"
#include "RV32IMACFDVFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// VSOXSEG2EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg2ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg2ei64_v",
	(uint32_t) 0x2c007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG2EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 355);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20546);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20545, 20544);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg2ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG3EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg3ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg3ei64_v",
	(uint32_t) 0x4c007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG3EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 356);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20552);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20551, 20550);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg3ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG4EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg4ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg4ei64_v",
	(uint32_t) 0x6c007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG4EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 357);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20558);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20557, 20556);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg4ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG5EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg5ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg5ei64_v",
	(uint32_t) 0x8c007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG5EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 358);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20564);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20563, 20562);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg5ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG6EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg6ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg6ei64_v",
	(uint32_t) 0xac007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG6EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 359);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20570);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20569, 20568);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg6ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG7EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg7ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg7ei64_v",
	(uint32_t) 0xcc007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG7EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 360);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20576);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20575, 20574);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg7ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSOXSEG8EI64_V --------------------------------------------------------------
static InstructionDefinition vsoxseg8ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsoxseg8ei64_v",
	(uint32_t) 0xec007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSOXSEG8EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 361);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20582);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20581, 20580);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsoxseg8ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG2EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg2ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg2ei64_v",
	(uint32_t) 0x24007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG2EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 362);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20588);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20587, 20586);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg2ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG3EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg3ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg3ei64_v",
	(uint32_t) 0x44007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG3EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 363);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20594);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20593, 20592);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg3ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG4EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg4ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg4ei64_v",
	(uint32_t) 0x64007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG4EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 364);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20600);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20599, 20598);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg4ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG5EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg5ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg5ei64_v",
	(uint32_t) 0x84007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG5EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 365);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20606);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20605, 20604);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg5ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG6EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg6ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg6ei64_v",
	(uint32_t) 0xa4007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG6EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 366);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20612);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20611, 20610);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg6ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG7EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg7ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg7ei64_v",
	(uint32_t) 0xc4007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG7EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 367);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20618);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20617, 20616);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg7ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXSEG8EI64_V --------------------------------------------------------------
static InstructionDefinition vsuxseg8ei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxseg8ei64_v",
	(uint32_t) 0xe4007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXSEG8EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 368);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20624);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20623, 20622);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxseg8ei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG2EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg2ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg2ei64_v",
	(uint32_t) 0x2c007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG2EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 369);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20630);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20629, 20628);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg2ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG3EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg3ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg3ei64_v",
	(uint32_t) 0x4c007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG3EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 370);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20636);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20635, 20634);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg3ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG4EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg4ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg4ei64_v",
	(uint32_t) 0x6c007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG4EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 371);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20642);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20641, 20640);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg4ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG5EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg5ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg5ei64_v",
	(uint32_t) 0x8c007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG5EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 372);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20648);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20647, 20646);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg5ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG6EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg6ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg6ei64_v",
	(uint32_t) 0xac007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG6EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 373);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20654);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20653, 20652);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg6ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG7EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg7ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg7ei64_v",
	(uint32_t) 0xcc007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG7EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 374);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20660);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20659, 20658);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg7ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXSEG8EI64_V --------------------------------------------------------------
static InstructionDefinition vloxseg8ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxseg8ei64_v",
	(uint32_t) 0xec007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXSEG8EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 375);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20666);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20665, 20664);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxseg8ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG2EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg2ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg2ei64_v",
	(uint32_t) 0x24007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG2EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 376);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20672);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20671, 20670);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg2ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG3EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg3ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg3ei64_v",
	(uint32_t) 0x44007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG3EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 377);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20678);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20677, 20676);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg3ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG4EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg4ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg4ei64_v",
	(uint32_t) 0x64007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG4EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 378);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20684);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20683, 20682);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg4ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG5EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg5ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg5ei64_v",
	(uint32_t) 0x84007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG5EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 379);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20690);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20689, 20688);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg5ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG6EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg6ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg6ei64_v",
	(uint32_t) 0xa4007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG6EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 380);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20696);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20695, 20694);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg6ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG7EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg7ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg7ei64_v",
	(uint32_t) 0xc4007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG7EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 381);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20702);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20701, 20700);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg7ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXSEG8EI64_V --------------------------------------------------------------
static InstructionDefinition vluxseg8ei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxseg8ei64_v",
	(uint32_t) 0xe4007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXSEG8EI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 382);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20708);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20707, 20706);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxseg8ei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSUXEI64_V ------------------------------------------------------------------
static InstructionDefinition vsuxei64_v_vs3_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vsuxei64_v",
	(uint32_t) 0x4007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSUXEI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 383);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20714);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20713, 20712);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsuxei64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLUXEI64_V ------------------------------------------------------------------
static InstructionDefinition vluxei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vluxei64_v",
	(uint32_t) 0x4007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLUXEI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 384);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20720);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20719, 20718);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vluxei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLOXEI64_V ------------------------------------------------------------------
static InstructionDefinition vloxei64_v_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vloxei64_v",
	(uint32_t) 0xc007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLOXEI64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 385);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20726);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20725, 20724);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vloxei64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VL1RE64_V -------------------------------------------------------------------
static InstructionDefinition vl1re64_v_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vl1re64_v",
	(uint32_t) 0x2807007,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VL1RE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 386);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20732);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20731, 20730);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vl1re64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VL2RE64_V -------------------------------------------------------------------
static InstructionDefinition vl2re64_v_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vl2re64_v",
	(uint32_t) 0x22807007,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VL2RE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 387);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20738);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20737, 20736);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vl2re64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VL4RE64_V -------------------------------------------------------------------
static InstructionDefinition vl4re64_v_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vl4re64_v",
	(uint32_t) 0x62807007,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VL4RE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 388);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20744);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20743, 20742);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vl4re64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VL8RE64_V -------------------------------------------------------------------
static InstructionDefinition vl8re64_v_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vl8re64_v",
	(uint32_t) 0xe2807007,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VL8RE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 389);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20750);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20749, 20748);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vl8re64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLE64_V ---------------------------------------------------------------------
static InstructionDefinition vle64_v_vd_rs1_vm (
	ISA32_RV32IMACFDV,
	"vle64_v",
	(uint32_t) 0x007007,
	(uint32_t) 0xfdf0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 390);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20815);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 20755, 20754);\n";
cp.code() += "etiss_uint32 _eew = vcfg_concatEEW(0LL, 7ULL);\n";
cp.code() += "etiss_coverage_count(4, 20760, 20759, 20757, 20758);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20765, 20764);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 20770, 20769);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 20777, 20776, 20774, 20775);\n";
cp.code() += "etiss_uint32 ret = etiss_vload_encoded_unitstride(cpu, system, plugin_pointers, ((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, _eew, " + std::to_string(vd) + "ULL, _vstart, _vlen, _vl, (etiss_uint64)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(13, 20793, 20792, 20779, 20780, 20781, 20782, 20783, 20784, 20785, 20786, 20791, 20789, 20788);\n";
cp.code() += "etiss_coverage_count(1, 20794);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 20797, 20795, 20796);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 20808);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 20804, 20800, 20803, 20801, 20802);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 20807, 20805, 20806);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 20814);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 20813, 20811, 20812);\n";
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

		cp.code() = std::string("//VLE64_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vle64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLSE64_V --------------------------------------------------------------------
static InstructionDefinition vlse64_v_vd_rs1_rs2_vm (
	ISA32_RV32IMACFDV,
	"vlse64_v",
	(uint32_t) 0x8007007,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLSE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 391);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20821);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20820, 20819);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vlse64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLE64FF_V -------------------------------------------------------------------
static InstructionDefinition vle64ff_v_vd_rs1_vm (
	ISA32_RV32IMACFDV,
	"vle64ff_v",
	(uint32_t) 0x1007007,
	(uint32_t) 0xfdf0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLE64FF_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 392);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20827);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20826, 20825);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vle64ff_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSSSEGE64_V -----------------------------------------------------------------
static InstructionDefinition vsssege64_v_vd_rs1_rs2_vm_nf (
	ISA32_RV32IMACFDV,
	"vsssege64_v",
	(uint32_t) 0x8007027,
	(uint32_t) 0x1c00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSSSEGE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 393);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20833);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20832, 20831);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsssege64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + " | nf=" + std::to_string(nf) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSSEGE64_V ------------------------------------------------------------------
static InstructionDefinition vssege64_v_vd_rs1_vm_nf (
	ISA32_RV32IMACFDV,
	"vssege64_v",
	(uint32_t) 0x007027,
	(uint32_t) 0x1df0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSSEGE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 394);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20839);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20838, 20837);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vssege64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vm=" + std::to_string(vm) + " | nf=" + std::to_string(nf) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLSSEGE64_V -----------------------------------------------------------------
static InstructionDefinition vlssege64_v_vd_rs1_rs2_vm_nf (
	ISA32_RV32IMACFDV,
	"vlssege64_v",
	(uint32_t) 0x8007007,
	(uint32_t) 0x1c00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLSSEGE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 395);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20845);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20844, 20843);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vlssege64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + " | nf=" + std::to_string(nf) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VLSEGE64_V ------------------------------------------------------------------
static InstructionDefinition vlsege64_v_vd_rs1_vm_nf (
	ISA32_RV32IMACFDV,
	"vlsege64_v",
	(uint32_t) 0x007007,
	(uint32_t) 0x1df0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VLSEGE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 396);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20851);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20850, 20849);\n";
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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;
etiss_uint8 nf = 0;
static BitArrayRange R_nf_0(31, 29);
nf += R_nf_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vlsege64_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vm=" + std::to_string(vm) + " | nf=" + std::to_string(nf) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSE64_V ---------------------------------------------------------------------
static InstructionDefinition vse64_v_vs3_rs1_vm (
	ISA32_RV32IMACFDV,
	"vse64_v",
	(uint32_t) 0x007027,
	(uint32_t) 0xfdf0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 397);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20916);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 20856, 20855);\n";
cp.code() += "etiss_uint32 _eew = vcfg_concatEEW(0LL, 7ULL);\n";
cp.code() += "etiss_coverage_count(4, 20861, 20860, 20858, 20859);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20866, 20865);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 20871, 20870);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 20878, 20877, 20875, 20876);\n";
cp.code() += "etiss_uint32 ret = etiss_vstore_encoded_unitstride(cpu, system, plugin_pointers, ((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, _eew, " + std::to_string(vs3) + "ULL, _vstart, _vlen, _vl, (etiss_uint64)(*((RV32IMACFDV*)cpu)->X[" + std::to_string(rs1) + "ULL]));\n";
cp.code() += "etiss_coverage_count(13, 20894, 20893, 20880, 20881, 20882, 20883, 20884, 20885, 20886, 20887, 20892, 20890, 20889);\n";
cp.code() += "etiss_coverage_count(1, 20895);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 20898, 20896, 20897);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 20909);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 20905, 20901, 20904, 20902, 20903);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 20908, 20906, 20907);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 20915);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 20914, 20912, 20913);\n";
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

		cp.code() = std::string("//VSE64_V\n");

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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vse64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VSSE64_V --------------------------------------------------------------------
static InstructionDefinition vsse64_v_vs3_rs1_rs2_vm (
	ISA32_RV32IMACFDV,
	"vsse64_v",
	(uint32_t) 0x8007027,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VSSE64_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 398);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 20922);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 20921, 20920);\n";
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
etiss_uint8 vs3 = 0;
static BitArrayRange R_vs3_0(11, 7);
vs3 += R_vs3_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vsse64_v" << " # " << ba << (" [vs3=" + std::to_string(vs3) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
