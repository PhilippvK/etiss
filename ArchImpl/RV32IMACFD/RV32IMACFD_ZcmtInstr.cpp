// clang-format off
/**
 * Generated on Tue, 28 Apr 2026 10:04:15 +0200.
 *
 * This file contains the instruction behavior models of the Zcmt
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// CM__JT ----------------------------------------------------------------------
static InstructionDefinition cm__jt_index (
	ISA16_RV32IMACFD,
	"cm__jt",
	(uint64_t) 0xa002,
	(uint64_t) 0xfc03,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 index = 0;
static BitArrayRange R_index_0(9, 2);
index += R_index_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CM__JT\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 288);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1295);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string((etiss_uint32)((ic.current_address_ + 2))) + "ULL;\n";
cp.code() += "etiss_coverage_count(7, 1294, 1287, 1293, 1290, 1288, 1289, 1291);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 9880);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_coverage_count(1, 9843);\n";
cp.code() += "if (((((RV32IMACFD*)cpu)->JVT) & 0x3fULL) != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(6, 9849, 9847, 9844, 9845, 9846, 9848);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 9852, 9850, 9851);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 table_address = (etiss_uint32)((((RV32IMACFD*)cpu)->JVT + " + std::to_string(index * 4ULL) + "ULL));\n";
cp.code() += "etiss_coverage_count(8, 9862, 9861, 9858, 9854, 9857, 9855, 9856, 9859);\n";
cp.code() += "etiss_coverage_count(1, 9863);\n";
if (index > 31ULL) { // conditional
cp.code() += "etiss_coverage_count(3, 9866, 9864, 9865);\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[1ULL] = " + std::to_string(ic.current_address_) + "ULL;\n";
cp.code() += "etiss_coverage_count(4, 9871, 9869, 9868, 9870);\n";
} // conditional
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, table_address, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFD_translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "cpu->nextPc = mem_val_0;\n";
cp.code() += "etiss_coverage_count(6, 9879, 9872, 9878, 9876, 9874, 9875);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//CM__JT\n");

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
etiss_uint8 index = 0;
static BitArrayRange R_index_0(9, 2);
index += R_index_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cm__jt" << " # " << ba << (" [index=" + std::to_string(index) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
