/**
 * Generated on Sun, 29 Oct 2023 22:27:54 +0100.
 *
 * This file contains the instruction behavior models of the tum_semihosting
 * instruction set for the RV32IMAFDXCoreVHwlp core architecture.
 */

#include "RV32IMAFDXCoreVHwlpArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMAFDXCoreVHwlpFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// EBREAK ----------------------------------------------------------------------
static InstructionDefinition ebreak_ (
	ISA32_RV32IMAFDXCoreVHwlp,
	"ebreak",
	(uint32_t) 0x100073,
	(uint32_t) 0xffffffff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//EBREAK\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_0 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_0 != 1ULL) { // conditional\n";
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
cp.code() += "if (" + std::to_string(ic.current_address_) + "ULL == ((RV32IMAFDXCoreVHwlp*)cpu)->lpend_1 && ((RV32IMAFDXCoreVHwlp*)cpu)->lpcount_1 != 1ULL) { // conditional\n";
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
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "if (etiss_semihost_enabled()) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 mem_val_0;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ - 4ULL) + "ULL, (etiss_uint8*)&mem_val_0, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 pre = (etiss_uint32)(mem_val_0);\n";
cp.code() += "etiss_uint32 mem_val_1;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 0ULL) + "ULL, (etiss_uint8*)&mem_val_1, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 ebreak = (etiss_uint32)(mem_val_1);\n";
cp.code() += "etiss_uint32 mem_val_2;\n";
cp.code() += "cpu->exception |= (*(system->dread))(system->handle, cpu, " + std::to_string(ic.current_address_ + 4ULL) + "ULL, (etiss_uint8*)&mem_val_2, 4);\n";
cp.code() += "if (cpu->exception) { // conditional\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "translate_exc_code(cpu, system, plugin_pointers, cpu->exception);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 post = (etiss_uint32)(mem_val_2);\n";
cp.code() += "if (pre == 32509971ULL && ebreak == 1048691ULL && post == 1081102355ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 operation = *((RV32IMAFDXCoreVHwlp*)cpu)->X[10ULL];\n";
cp.code() += "etiss_uint32 parameter = *((RV32IMAFDXCoreVHwlp*)cpu)->X[11ULL];\n";
cp.code() += "*((RV32IMAFDXCoreVHwlp*)cpu)->X[10ULL] = (etiss_int32)(etiss_semihost(cpu, system, plugin_pointers, 32ULL, operation, parameter));\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 3LL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "{ // block\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "raise(cpu, system, plugin_pointers, 0ULL, 3LL);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
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

		cp.code() = std::string("//EBREAK\n");

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

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "ebreak" << " # " << ba << (" []");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
