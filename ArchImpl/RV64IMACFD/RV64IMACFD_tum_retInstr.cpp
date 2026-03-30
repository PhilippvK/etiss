// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 13:40:21 +0200.
 *
 * This file contains the instruction behavior models of the tum_ret
 * instruction set for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDArch.h"
#include "RV64IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// ECALL -----------------------------------------------------------------------
static InstructionDefinition ecall_ (
	ISA32_RV64IMACFD,
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
cp.code() += "etiss_coverage_count(1, 168);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2188);\n";
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 8LL + ((RV64IMACFD*)cpu)->PRIV);\n";
cp.code() += "etiss_coverage_count(4, 2187, 2183, 2186, 2185);\n";
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
	ISA32_RV64IMACFD,
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
cp.code() += "etiss_coverage_count(1, 166);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2322);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 2261);\n";
cp.code() += "if (((RV64IMACFD*)cpu)->PRIV < 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2264, 2262);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 2267, 2265);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV64IMACFD*)cpu)->CSR[833LL];\n";
cp.code() += "etiss_coverage_count(3, 2272, 2268, 2271);\n";
cp.code() += "etiss_uint64 s = RV64IMACFD_csr_read(cpu, system, plugin_pointers, 768LL);\n";
cp.code() += "etiss_coverage_count(2, 2276, 2275);\n";
cp.code() += "etiss_uint64 prev_prv = RV64IMACFD_get_field(s, 6144LL);\n";
cp.code() += "etiss_coverage_count(3, 2281, 2280, 2278);\n";
cp.code() += "etiss_coverage_count(1, 2282);\n";
cp.code() += "if (prev_prv != 3LL) { // conditional\n";
cp.code() += "etiss_coverage_count(2, 2285, 2283);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 131072LL, 0LL);\n";
cp.code() += "etiss_coverage_count(5, 2291, 2286, 2290, 2287, 2289);\n";
cp.code() += "} // conditional\n";
cp.code() += "s = RV64IMACFD_set_field(s, 8LL, RV64IMACFD_get_field(s, 128LL));\n";
cp.code() += "etiss_coverage_count(6, 2299, 2292, 2298, 2293, 2297, 2295);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 128LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 2305, 2300, 2304, 2301, 2303);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 6144LL, (RV64IMACFD_extension_enabled(cpu, system, plugin_pointers, 85ULL)) ? (0LL) : (3LL));\n";
cp.code() += "etiss_coverage_count(7, 2315, 2306, 2314, 2307, 2313, 2310, 2309);\n";
cp.code() += "RV64IMACFD_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 2318, 2317);\n";
cp.code() += "((RV64IMACFD*)cpu)->PRIV = (prev_prv) & 0x7ULL;\n";
cp.code() += "etiss_coverage_count(3, 2321, 2319, 2320);\n";
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
	ISA32_RV64IMACFD,
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
cp.code() += "etiss_coverage_count(1, 169);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 2323);\n";
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
	ISA32_RV64IMACFD,
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
cp.code() += "etiss_coverage_count(1, 167);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1166);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1165, 1161, 1164, 1162, 1163);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 6412);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 6358);\n";
cp.code() += "if (((RV64IMACFD*)cpu)->PRIV < ((RV64IMACFD_get_field(RV64IMACFD_csr_read(cpu, system, plugin_pointers, 768LL), 4194304LL)) ? (3LL) : (1LL))) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 6368, 6359, 6366, 6363, 6361, 6367);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2LL);\n";
cp.code() += "etiss_coverage_count(2, 6371, 6369);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = *((RV64IMACFD*)cpu)->CSR[321LL];\n";
cp.code() += "etiss_coverage_count(3, 6376, 6372, 6375);\n";
cp.code() += "etiss_uint64 s = RV64IMACFD_csr_read(cpu, system, plugin_pointers, 256LL);\n";
cp.code() += "etiss_coverage_count(2, 6380, 6379);\n";
cp.code() += "etiss_uint64 prev_prv = RV64IMACFD_get_field(s, 256LL);\n";
cp.code() += "etiss_coverage_count(3, 6385, 6384, 6382);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 2LL, RV64IMACFD_get_field(s, 32LL));\n";
cp.code() += "etiss_coverage_count(6, 6393, 6386, 6392, 6387, 6391, 6389);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 32LL, 1ULL);\n";
cp.code() += "etiss_coverage_count(5, 6399, 6394, 6398, 6395, 6397);\n";
cp.code() += "s = RV64IMACFD_set_field(s, 256LL, 0LL);\n";
cp.code() += "etiss_coverage_count(4, 6405, 6400, 6404, 6401);\n";
cp.code() += "RV64IMACFD_csr_write(cpu, system, plugin_pointers, 768LL, s);\n";
cp.code() += "etiss_coverage_count(2, 6408, 6407);\n";
cp.code() += "((RV64IMACFD*)cpu)->PRIV = (prev_prv) & 0x7ULL;\n";
cp.code() += "etiss_coverage_count(3, 6411, 6409, 6410);\n";
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
