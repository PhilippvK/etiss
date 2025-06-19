/**
 * Generated on Thu, 19 Jun 2025 20:06:23 +0200.
 *
 * This file contains the instruction behavior models of the tum_ret
 * instruction set for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Arch.h"
#include "RV32IMACFDXCFU0Funcs.h"

using namespace etiss;
using namespace etiss::instr;


// ECALL -----------------------------------------------------------------------
static InstructionDefinition ecall_ (
	ISA32_RV32IMACFDXCFU0,
	"ecall",
	(uint32_t) 0x000073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//ECALL\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 176);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2139);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 8LL + ((RV32IMACFDXCFU0*)cpu)->PRIV);\n";
cp.code() += "etiss_coverage_count(4, 2138, 2134, 2137, 2136);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"mret",
	(uint32_t) 0x30200073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MRET\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 174);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2273);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2212);\n";
cp.code() += "if (((RV32IMACFDXCFU0*)cpu)->PRIV < 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2215, 2213);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2218, 2216);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDXCFU0*)cpu)->CSR[833LL];\n";
cp.code() += "etiss_coverage_count(3, 2223, 2219, 2222);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL);\n";
cp.code() += "etiss_coverage_count(2, 2227, 2226);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDXCFU0_get_field(s, 6144LL);\n";
cp.code() += "etiss_coverage_count(3, 2232, 2231, 2229);\n";
cp.code() += "etiss_coverage_count(1, 2233);\n";
cp.code() += "if (prev_prv != 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2236, 2234);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 131072LL, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 2242, 2237, 2241, 2238, 2240);\n";
cp.code() += "} // conditional\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 8LL, RV32IMACFDXCFU0_get_field(s, 128LL));\n";
cp.code() += "etiss_coverage_count(6, 2250, 2243, 2249, 2244, 2248, 2246);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 128LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 2256, 2251, 2255, 2252, 2254);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 6144LL, (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 85ULL)) ? (0LL) : (3LL));\n";
cp.code() += "etiss_coverage_count(7, 2266, 2257, 2265, 2258, 2264, 2261, 2260);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 2269, 2268);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->PRIV = (prev_prv) & 0x7;\n";
cp.code() += "etiss_coverage_count(3, 2272, 2270, 2271);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"wfi",
	(uint32_t) 0x10500073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//WFI\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 177);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2274);\n";
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
	ISA32_RV32IMACFDXCFU0,
	"sret",
	(uint32_t) 0x10200073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//SRET\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 175);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1117);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1116, 1112, 1115, 1113, 1114);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6703);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 6649);\n";
cp.code() += "if (((RV32IMACFDXCFU0*)cpu)->PRIV < ((RV32IMACFDXCFU0_get_field(RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL), 4194304LL)) ? (3LL) : (1LL))) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 6659, 6650, 6657, 6654, 6652, 6658);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 6662, 6660);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDXCFU0*)cpu)->CSR[321LL];\n";
cp.code() += "etiss_coverage_count(3, 6667, 6663, 6666);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL);\n";
cp.code() += "etiss_coverage_count(2, 6671, 6670);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDXCFU0_get_field(s, 256LL);\n";
cp.code() += "etiss_coverage_count(3, 6676, 6675, 6673);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 2LL, RV32IMACFDXCFU0_get_field(s, 32LL));\n";
cp.code() += "etiss_coverage_count(6, 6684, 6677, 6683, 6678, 6682, 6680);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 32LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 6690, 6685, 6689, 6686, 6688);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 256LL, 0LL);\n";
cp.code() += "etiss_coverage_count(4, 6696, 6691, 6695, 6692);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 6699, 6698);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->PRIV = (prev_prv) & 0x7;\n";
cp.code() += "etiss_coverage_count(3, 6702, 6700, 6701);\n";
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
