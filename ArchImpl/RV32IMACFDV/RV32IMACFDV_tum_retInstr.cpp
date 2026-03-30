// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the instruction behavior models of the tum_ret
 * instruction set for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVArch.h"
#include "RV32IMACFDVFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// ECALL -----------------------------------------------------------------------
static InstructionDefinition ecall_ (
	ISA32_RV32IMACFDV,
	"ecall",
	(uint32_t) 0x000073,
	(uint32_t) 0xffffffff,
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

		cp.code() = std::string("//ECALL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 581);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2541);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 8LL + ((RV32IMACFDV*)cpu)->PRIV);\n";
cp.code() += "etiss_coverage_count(4, 2540, 2536, 2539, 2538);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//ECALL\n");

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
ss << "ecall" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MRET ------------------------------------------------------------------------
static InstructionDefinition mret_ (
	ISA32_RV32IMACFDV,
	"mret",
	(uint32_t) 0x30200073,
	(uint32_t) 0xffffffff,
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

		cp.code() = std::string("//MRET\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 579);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2675);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2614);\n";
cp.code() += "if (((RV32IMACFDV*)cpu)->PRIV < 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2617, 2615);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2620, 2618);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDV*)cpu)->CSR[833LL];\n";
cp.code() += "etiss_coverage_count(3, 2625, 2621, 2624);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 768LL);\n";
cp.code() += "etiss_coverage_count(2, 2629, 2628);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDV_get_field(s, 6144LL);\n";
cp.code() += "etiss_coverage_count(3, 2634, 2633, 2631);\n";
cp.code() += "etiss_coverage_count(1, 2635);\n";
cp.code() += "if (prev_prv != 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2638, 2636);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 131072LL, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 2644, 2639, 2643, 2640, 2642);\n";
cp.code() += "} // conditional\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 8LL, RV32IMACFDV_get_field(s, 128LL));\n";
cp.code() += "etiss_coverage_count(6, 2652, 2645, 2651, 2646, 2650, 2648);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 128LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 2658, 2653, 2657, 2654, 2656);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 6144LL, (RV32IMACFDV_extension_enabled(cpu, system, plugin_pointers, 85ULL)) ? (0LL) : (3LL));\n";
cp.code() += "etiss_coverage_count(7, 2668, 2659, 2667, 2660, 2666, 2663, 2662);\n";
cp.code() += "RV32IMACFDV_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 2671, 2670);\n";
cp.code() += "((RV32IMACFDV*)cpu)->PRIV = (prev_prv) & 0x7ULL;\n";
cp.code() += "etiss_coverage_count(3, 2674, 2672, 2673);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//MRET\n");

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
ss << "mret" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// WFI -------------------------------------------------------------------------
static InstructionDefinition wfi_ (
	ISA32_RV32IMACFDV,
	"wfi",
	(uint32_t) 0x10500073,
	(uint32_t) 0xffffffff,
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

		cp.code() = std::string("//WFI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 582);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2676);\n";
cp.code() += "{ // block\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//WFI\n");

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
ss << "wfi" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// SRET ------------------------------------------------------------------------
static InstructionDefinition sret_ (
	ISA32_RV32IMACFDV,
	"sret",
	(uint32_t) 0x10200073,
	(uint32_t) 0xffffffff,
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

		cp.code() = std::string("//SRET\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 580);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 31755);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 31701);\n";
cp.code() += "if (((RV32IMACFDV*)cpu)->PRIV < ((RV32IMACFDV_get_field(RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 768LL), 4194304LL)) ? (3LL) : (1LL))) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 31711, 31702, 31709, 31706, 31704, 31710);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 31714, 31712);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDV*)cpu)->CSR[321LL];\n";
cp.code() += "etiss_coverage_count(3, 31719, 31715, 31718);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 256LL);\n";
cp.code() += "etiss_coverage_count(2, 31723, 31722);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDV_get_field(s, 256LL);\n";
cp.code() += "etiss_coverage_count(3, 31728, 31727, 31725);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 2LL, RV32IMACFDV_get_field(s, 32LL));\n";
cp.code() += "etiss_coverage_count(6, 31736, 31729, 31735, 31730, 31734, 31732);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 32LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 31742, 31737, 31741, 31738, 31740);\n";
cp.code() += "s = RV32IMACFDV_set_field(s, 256LL, 0LL);\n";
cp.code() += "etiss_coverage_count(4, 31748, 31743, 31747, 31744);\n";
cp.code() += "RV32IMACFDV_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 31751, 31750);\n";
cp.code() += "((RV32IMACFDV*)cpu)->PRIV = (prev_prv) & 0x7ULL;\n";
cp.code() += "etiss_coverage_count(3, 31754, 31752, 31753);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//SRET\n");

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
ss << "sret" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
