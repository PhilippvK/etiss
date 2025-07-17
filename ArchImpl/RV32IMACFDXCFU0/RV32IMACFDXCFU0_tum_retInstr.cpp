/**
 * Generated on Wed, 16 Jul 2025 08:32:03 +0200.
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
cp.code() += "etiss_coverage_count(1, 178);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2141);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 8LL + ((RV32IMACFDXCFU0*)cpu)->PRIV);\n";
cp.code() += "etiss_coverage_count(4, 2140, 2136, 2139, 2138);\n";
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
cp.code() += "etiss_coverage_count(1, 176);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2275);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2214);\n";
cp.code() += "if (((RV32IMACFDXCFU0*)cpu)->PRIV < 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2217, 2215);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2220, 2218);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDXCFU0*)cpu)->CSR[833LL];\n";
cp.code() += "etiss_coverage_count(3, 2225, 2221, 2224);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL);\n";
cp.code() += "etiss_coverage_count(2, 2229, 2228);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDXCFU0_get_field(s, 6144LL);\n";
cp.code() += "etiss_coverage_count(3, 2234, 2233, 2231);\n";
cp.code() += "etiss_coverage_count(1, 2235);\n";
cp.code() += "if (prev_prv != 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2238, 2236);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 131072LL, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 2244, 2239, 2243, 2240, 2242);\n";
cp.code() += "} // conditional\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 8LL, RV32IMACFDXCFU0_get_field(s, 128LL));\n";
cp.code() += "etiss_coverage_count(6, 2252, 2245, 2251, 2246, 2250, 2248);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 128LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 2258, 2253, 2257, 2254, 2256);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 6144LL, (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 85ULL)) ? (0LL) : (3LL));\n";
cp.code() += "etiss_coverage_count(7, 2268, 2259, 2267, 2260, 2266, 2263, 2262);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 2271, 2270);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->PRIV = (prev_prv) & 0x7;\n";
cp.code() += "etiss_coverage_count(3, 2274, 2272, 2273);\n";
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
cp.code() += "etiss_coverage_count(1, 179);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2276);\n";
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
cp.code() += "etiss_coverage_count(1, 177);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1119);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1118, 1114, 1117, 1115, 1116);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 7111);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 7057);\n";
cp.code() += "if (((RV32IMACFDXCFU0*)cpu)->PRIV < ((RV32IMACFDXCFU0_get_field(RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL), 4194304LL)) ? (3LL) : (1LL))) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 7067, 7058, 7065, 7062, 7060, 7066);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 7070, 7068);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV32IMACFDXCFU0*)cpu)->CSR[321LL];\n";
cp.code() += "etiss_coverage_count(3, 7075, 7071, 7074);\n";
cp.code() += "etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL);\n";
cp.code() += "etiss_coverage_count(2, 7079, 7078);\n";
cp.code() += "etiss_uint32 prev_prv = RV32IMACFDXCFU0_get_field(s, 256LL);\n";
cp.code() += "etiss_coverage_count(3, 7084, 7083, 7081);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 2LL, RV32IMACFDXCFU0_get_field(s, 32LL));\n";
cp.code() += "etiss_coverage_count(6, 7092, 7085, 7091, 7086, 7090, 7088);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 32LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 7098, 7093, 7097, 7094, 7096);\n";
cp.code() += "s = RV32IMACFDXCFU0_set_field(s, 256LL, 0LL);\n";
cp.code() += "etiss_coverage_count(4, 7104, 7099, 7103, 7100);\n";
cp.code() += "RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 7107, 7106);\n";
cp.code() += "((RV32IMACFDXCFU0*)cpu)->PRIV = (prev_prv) & 0x7;\n";
cp.code() += "etiss_coverage_count(3, 7110, 7108, 7109);\n";
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
