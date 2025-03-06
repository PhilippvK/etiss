/**
 * Generated on Thu, 06 Mar 2025 16:05:02 +0100.
 *
 * This file contains the instruction behavior models of the ScalarEfficiencyRV32
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// BEQI ------------------------------------------------------------------------
static InstructionDefinition beqi_simm12_rs1_simm5 (
	ISA32_RV32IMACFD,
	"beqi",
	(uint32_t) 0x00007b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BEQI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] == " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "beqi" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BNEI ------------------------------------------------------------------------
static InstructionDefinition bnei_simm12_rs1_simm5 (
	ISA32_RV32IMACFD,
	"bnei",
	(uint32_t) 0x00107b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BNEI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] != " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bnei" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BLTI ------------------------------------------------------------------------
static InstructionDefinition blti_simm12_rs1_simm5 (
	ISA32_RV32IMACFD,
	"blti",
	(uint32_t) 0x00207b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BLTI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if ((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))) < " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "blti" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BLTUI -----------------------------------------------------------------------
static InstructionDefinition bltui_simm12_rs1_uimm5 (
	ISA32_RV32IMACFD,
	"bltui",
	(uint32_t) 0x00307b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BLTUI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] < " + std::to_string((etiss_uint8)((uimm5))) + "ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bltui" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BGEI ------------------------------------------------------------------------
static InstructionDefinition bgei_simm12_rs1_simm5 (
	ISA32_RV32IMACFD,
	"bgei",
	(uint32_t) 0x00407b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BGEI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if ((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))) >= " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bgei" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BGEUI -----------------------------------------------------------------------
static InstructionDefinition bgeui_simm12_rs1_uimm5 (
	ISA32_RV32IMACFD,
	"bgeui",
	(uint32_t) 0x00507b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BGEUI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] >= " + std::to_string((etiss_uint8)((uimm5))) + "ULL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int16)(((etiss_int16)(simm12)) << (4)) >> (4)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint16 simm12 = 0;
static BitArrayRange R_simm12_0(11, 7);
simm12 += R_simm12_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;
static BitArrayRange R_simm12_5(31, 25);
simm12 += R_simm12_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bgeui" << " # " << ba << (" [simm12=" + std::to_string(simm12) + " | rs1=" + std::to_string(rs1) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BEQZ_FAR --------------------------------------------------------------------
static InstructionDefinition beqz_far_simm17_rs1 (
	ISA32_RV32IMACFD,
	"beqz_far",
	(uint32_t) 0x00607b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BEQZ_FAR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] == 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int32)(((etiss_int32)(simm17)) << (15)) >> (15)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "beqz_far" << " # " << ba << (" [simm17=" + std::to_string(simm17) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BNEZ_FAR --------------------------------------------------------------------
static InstructionDefinition bnez_far_simm17_rs1 (
	ISA32_RV32IMACFD,
	"bnez_far",
	(uint32_t) 0x00707b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BNEZ_FAR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] != 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int32)(((etiss_int32)(simm17)) << (15)) >> (15)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bnez_far" << " # " << ba << (" [simm17=" + std::to_string(simm17) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BLTZ_FAR --------------------------------------------------------------------
static InstructionDefinition bltz_far_simm17_rs1 (
	ISA32_RV32IMACFD,
	"bltz_far",
	(uint32_t) 0x00005b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BLTZ_FAR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if ((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))) < 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int32)(((etiss_int32)(simm17)) << (15)) >> (15)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bltz_far" << " # " << ba << (" [simm17=" + std::to_string(simm17) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BGEZ_FAR --------------------------------------------------------------------
static InstructionDefinition bgez_far_simm17_rs1 (
	ISA32_RV32IMACFD,
	"bgez_far",
	(uint32_t) 0x00105b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BGEZ_FAR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "if ((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))) >= 0LL) { // conditional\n";
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + (((etiss_int32)(((etiss_int32)(simm17)) << (15)) >> (15)) << 1ULL)) + "LL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
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
etiss_uint32 simm17 = 0;
static BitArrayRange R_simm17_0(11, 7);
simm17 += R_simm17_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
static BitArrayRange R_simm17_5(31, 20);
simm17 += R_simm17_5.read(ba) << 5;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "bgez_far" << " # " << ba << (" [simm17=" + std::to_string(simm17) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSELEQZ ---------------------------------------------------------------------
static InstructionDefinition cseleqz_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cseleqz",
	(uint32_t) 0x00205b,
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

		cp.code() = std::string("//CSELEQZ\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == 0LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
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
ss << "cseleqz" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSELNEZ ---------------------------------------------------------------------
static InstructionDefinition cselnez_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cselnez",
	(uint32_t) 0x200205b,
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

		cp.code() = std::string("//CSELNEZ\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] != 0LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
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
ss << "cselnez" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSELLTZ ---------------------------------------------------------------------
static InstructionDefinition cselltz_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cselltz",
	(uint32_t) 0x400205b,
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

		cp.code() = std::string("//CSELLTZ\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) < 0LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
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
ss << "cselltz" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSELGEZ ---------------------------------------------------------------------
static InstructionDefinition cselgez_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cselgez",
	(uint32_t) 0x600205b,
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

		cp.code() = std::string("//CSELGEZ\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) >= 0LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]);\n";
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
ss << "cselgez" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CSELEQZI --------------------------------------------------------------------
static InstructionDefinition cseleqzi_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cseleqzi",
	(uint32_t) 0x800205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CSELEQZI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == 0LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (" + std::to_string((etiss_uint8)((imm5))) + "ULL);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cseleqzi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVEQ ----------------------------------------------------------------------
static InstructionDefinition cmoveq_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmoveq",
	(uint32_t) 0xa00205b,
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

		cp.code() = std::string("//CMOVEQ\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmoveq" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVNE ----------------------------------------------------------------------
static InstructionDefinition cmovne_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmovne",
	(uint32_t) 0xc00205b,
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

		cp.code() = std::string("//CMOVNE\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] != *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmovne" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLT ----------------------------------------------------------------------
static InstructionDefinition cmovlt_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmovlt",
	(uint32_t) 0xe00205b,
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

		cp.code() = std::string("//CMOVLT\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) < (etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))))) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmovlt" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLTU ---------------------------------------------------------------------
static InstructionDefinition cmovltu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmovltu",
	(uint32_t) 0x1000205b,
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

		cp.code() = std::string("//CMOVLTU\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] < *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmovltu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGE ----------------------------------------------------------------------
static InstructionDefinition cmovge_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmovge",
	(uint32_t) 0x1200205b,
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

		cp.code() = std::string("//CMOVGE\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) >= (etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))))) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmovge" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGEU ---------------------------------------------------------------------
static InstructionDefinition cmovgeu_rd_rs1_rs2 (
	ISA32_RV32IMACFD,
	"cmovgeu",
	(uint32_t) 0x1400205b,
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

		cp.code() = std::string("//CMOVGEU\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] >= *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
ss << "cmovgeu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVEQ_RI -------------------------------------------------------------------
static InstructionDefinition cmoveq_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmoveq_ri",
	(uint32_t) 0x1600205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVEQ_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmoveq_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVNE_RI -------------------------------------------------------------------
static InstructionDefinition cmovne_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovne_ri",
	(uint32_t) 0x1800205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVNE_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] != *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovne_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLT_RI -------------------------------------------------------------------
static InstructionDefinition cmovlt_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovlt_ri",
	(uint32_t) 0x1a00205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLT_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) < (etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))))) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovlt_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLTU_RI ------------------------------------------------------------------
static InstructionDefinition cmovltu_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovltu_ri",
	(uint32_t) 0x1c00205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLTU_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] < *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovltu_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGE_RI -------------------------------------------------------------------
static InstructionDefinition cmovge_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovge_ri",
	(uint32_t) 0x1e00205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGE_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) >= (etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))))) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovge_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGEU_RI ------------------------------------------------------------------
static InstructionDefinition cmovgeu_ri_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovgeu_ri",
	(uint32_t) 0x2000205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGEU_RI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] >= *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) ? (" + std::to_string((etiss_uint8)((imm5))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovgeu_ri" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVEQ_IR -------------------------------------------------------------------
static InstructionDefinition cmoveq_ir_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmoveq_ir",
	(uint32_t) 0x2200205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVEQ_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == " + std::to_string((etiss_uint8)((imm5))) + "ULL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmoveq_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVNE_IR -------------------------------------------------------------------
static InstructionDefinition cmovne_ir_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cmovne_ir",
	(uint32_t) 0x2400205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVNE_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] != " + std::to_string((etiss_uint8)((imm5))) + "ULL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovne_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLT_IR -------------------------------------------------------------------
static InstructionDefinition cmovlt_ir_rd_rs1_simm5 (
	ISA32_RV32IMACFD,
	"cmovlt_ir",
	(uint32_t) 0x2600205b,
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
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLT_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) < " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovlt_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLTU_IR ------------------------------------------------------------------
static InstructionDefinition cmovltu_ir_rd_rs1_uimm5 (
	ISA32_RV32IMACFD,
	"cmovltu_ir",
	(uint32_t) 0x2800205b,
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
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLTU_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] < " + std::to_string((etiss_uint8)((uimm5))) + "ULL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovltu_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGE_IR -------------------------------------------------------------------
static InstructionDefinition cmovge_ir_rd_rs1_simm5 (
	ISA32_RV32IMACFD,
	"cmovge_ir",
	(uint32_t) 0x2a00205b,
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
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGE_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) >= " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovge_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGEU_IR ------------------------------------------------------------------
static InstructionDefinition cmovgeu_ir_rd_rs1_uimm5 (
	ISA32_RV32IMACFD,
	"cmovgeu_ir",
	(uint32_t) 0x2c00205b,
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
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGEU_IR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] >= " + std::to_string((etiss_uint8)((uimm5))) + "ULL)) ? (*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovgeu_ir" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVEQ_II -------------------------------------------------------------------
static InstructionDefinition cmoveq_ii_rd_imm5_imm5_2 (
	ISA32_RV32IMACFD,
	"cmoveq_ii",
	(uint32_t) 0x2e00205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(24, 20);
imm5_2 += R_imm5_2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVEQ_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] == " + std::to_string((etiss_uint8)((imm5))) + "ULL)) ? (" + std::to_string((etiss_uint8)(((etiss_uint8)((imm5_2))))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(24, 20);
imm5_2 += R_imm5_2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmoveq_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5=" + std::to_string(imm5) + " | imm5_2=" + std::to_string(imm5_2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVNE_II -------------------------------------------------------------------
static InstructionDefinition cmovne_ii_rd_imm5_imm5_2 (
	ISA32_RV32IMACFD,
	"cmovne_ii",
	(uint32_t) 0x3000205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(24, 20);
imm5_2 += R_imm5_2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVNE_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] != " + std::to_string((etiss_uint8)((imm5))) + "ULL)) ? (" + std::to_string((etiss_uint8)(((etiss_uint8)((imm5_2))))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(24, 20);
imm5_2 += R_imm5_2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovne_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5=" + std::to_string(imm5) + " | imm5_2=" + std::to_string(imm5_2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLT_II -------------------------------------------------------------------
static InstructionDefinition cmovlt_ii_rd_imm5_2_simm5 (
	ISA32_RV32IMACFD,
	"cmovlt_ii",
	(uint32_t) 0x3200205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLT_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) < " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL)) ? (" + std::to_string((etiss_uint8)((imm5_2))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovlt_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5_2=" + std::to_string(imm5_2) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVLTU_II ------------------------------------------------------------------
static InstructionDefinition cmovltu_ii_rd_imm5_2_uimm5 (
	ISA32_RV32IMACFD,
	"cmovltu_ii",
	(uint32_t) 0x3400205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVLTU_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] < " + std::to_string((etiss_uint8)((uimm5))) + "ULL)) ? (" + std::to_string((etiss_uint8)((imm5_2))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovltu_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5_2=" + std::to_string(imm5_2) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGE_II -------------------------------------------------------------------
static InstructionDefinition cmovge_ii_rd_imm5_2_simm5 (
	ISA32_RV32IMACFD,
	"cmovge_ii",
	(uint32_t) 0x3600205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGE_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (((etiss_int32)(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]))) >= " + std::to_string(((etiss_int8)(((etiss_int8)(simm5)) << (3)) >> (3))) + "LL)) ? (" + std::to_string((etiss_uint8)((imm5_2))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 simm5 = 0;
static BitArrayRange R_simm5_0(24, 20);
simm5 += R_simm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovge_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5_2=" + std::to_string(imm5_2) + " | simm5=" + std::to_string(simm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CMOVGEU_II ------------------------------------------------------------------
static InstructionDefinition cmovgeu_ii_rd_imm5_2_uimm5 (
	ISA32_RV32IMACFD,
	"cmovgeu_ii",
	(uint32_t) 0x3800205b,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CMOVGEU_II\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] >= " + std::to_string((etiss_uint8)((uimm5))) + "ULL)) ? (" + std::to_string((etiss_uint8)((imm5_2))) + "ULL) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5_2 = 0;
static BitArrayRange R_imm5_2_0(19, 15);
imm5_2 += R_imm5_2_0.read(ba) << 0;
etiss_uint8 uimm5 = 0;
static BitArrayRange R_uimm5_0(24, 20);
uimm5 += R_uimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cmovgeu_ii" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5_2=" + std::to_string(imm5_2) + " | uimm5=" + std::to_string(uimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MPYADDI ---------------------------------------------------------------------
static InstructionDefinition mpyaddi_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"mpyaddi",
	(uint32_t) 0x3a00205b,
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
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MPYADDI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] + *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] * " + std::to_string((etiss_uint8)((imm5))) + "ULL;\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(24, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mpyaddi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MVP0 ------------------------------------------------------------------------
static InstructionDefinition mvp0_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mvp0",
	(uint32_t) 0x3c00205b,
	(uint32_t) 0xfe007fff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MVP0\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[10ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[11ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
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
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mvp0" << " # " << ba << (" [rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// MVP2 ------------------------------------------------------------------------
static InstructionDefinition mvp2_rs1_rs2 (
	ISA32_RV32IMACFD,
	"mvp2",
	(uint32_t) 0x3e00205b,
	(uint32_t) 0xfe007fff,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//MVP2\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[12ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL];\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[13ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL];\n";
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
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "mvp2" << " # " << ba << (" [rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CLO -------------------------------------------------------------------------
static InstructionDefinition clo_rd_rs1 (
	ISA32_RV32IMACFD,
	"clo",
	(uint32_t) 0x4000205b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CLO\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = clo_xlen(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "clo" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CTO -------------------------------------------------------------------------
static InstructionDefinition cto_rd_rs1 (
	ISA32_RV32IMACFD,
	"cto",
	(uint32_t) 0x4200205b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CTO\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = cto_xlen(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cto" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// BREV32 ----------------------------------------------------------------------
static InstructionDefinition brev32_rd_rs1 (
	ISA32_RV32IMACFD,
	"brev32",
	(uint32_t) 0x4400205b,
	(uint32_t) 0xfff0707f,
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

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//BREV32\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = brev_xlen(*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]);\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "brev32" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// LI16 ------------------------------------------------------------------------
static InstructionDefinition li16_rd_imm16_n (
	ISA32_RV32IMACFD,
	"li16",
	(uint32_t) 0x00305b,
	(uint32_t) 0x00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint16 imm16 = 0;
static BitArrayRange R_imm16_0(30, 15);
imm16 += R_imm16_0.read(ba) << 0;
etiss_uint8 n = 0;
static BitArrayRange R_n_0(31, 31);
n += R_n_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//LI16\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((" + std::to_string((n == 0LL)) + "LL) ? (*((RV32IMACFD*)cpu)->X[0LL]) : (*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL])) | " + std::to_string((imm16 << (n * 16ULL))) + "ULL;\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint16 imm16 = 0;
static BitArrayRange R_imm16_0(30, 15);
imm16 += R_imm16_0.read(ba) << 0;
etiss_uint8 n = 0;
static BitArrayRange R_n_0(31, 31);
n += R_n_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "li16" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm16=" + std::to_string(imm16) + " | n=" + std::to_string(n) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// EXTS ------------------------------------------------------------------------
static InstructionDefinition exts_rd_rs1_width5_shamt5 (
	ISA32_RV32IMACFD,
	"exts",
	(uint32_t) 0x00405b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//EXTS\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_int32)((((etiss_int32)((((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(shamt5) + "ULL)) & ((1 << ((" + std::to_string(width5 + shamt5) + "ULL) - (" + std::to_string(shamt5) + "ULL) + 1)) - 1))))))));\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "exts" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | width5=" + std::to_string(width5) + " | shamt5=" + std::to_string(shamt5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// EXTU ------------------------------------------------------------------------
static InstructionDefinition extu_rd_rs1_width5_shamt5 (
	ISA32_RV32IMACFD,
	"extu",
	(uint32_t) 0x4000405b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//EXTU\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)((((etiss_uint32)((((((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (" + std::to_string(shamt5) + "ULL)) & ((1 << ((" + std::to_string(width5 + shamt5) + "ULL) - (" + std::to_string(shamt5) + "ULL) + 1)) - 1))))))));\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "extu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | width5=" + std::to_string(width5) + " | shamt5=" + std::to_string(shamt5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// INSB ------------------------------------------------------------------------
static InstructionDefinition insb_rd_rs1_width5_shamt5 (
	ISA32_RV32IMACFD,
	"insb",
	(uint32_t) 0x8000405b,
	(uint32_t) 0xc000707f,
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
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//INSB\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (" + std::to_string(shamt5) + "ULL)) & ((1 << ((" + std::to_string(width5 + shamt5) + "ULL) - (" + std::to_string(shamt5) + "ULL) + 1)) - 1)) = (((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]) >> (0LL)) & ((1 << ((" + std::to_string(width5 - 1ULL) + "ULL) - (0LL) + 1)) - 1));\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "insb" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | width5=" + std::to_string(width5) + " | shamt5=" + std::to_string(shamt5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// INSBI -----------------------------------------------------------------------
static InstructionDefinition insbi_rd_imm5_width5_shamt5 (
	ISA32_RV32IMACFD,
	"insbi",
	(uint32_t) 0xc000405b,
	(uint32_t) 0xc000707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//INSBI\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
cp.code() += "(((*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL]) >> (" + std::to_string(shamt5) + "ULL)) & ((1 << ((" + std::to_string(width5 + shamt5) + "ULL) - (" + std::to_string(shamt5) + "ULL) + 1)) - 1)) = " + std::to_string((((imm5) >> (0LL)) & ((1 << ((width5 - 1ULL) - (0LL) + 1)) - 1))) + "ULL;\n";
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 imm5 = 0;
static BitArrayRange R_imm5_0(19, 15);
imm5 += R_imm5_0.read(ba) << 0;
etiss_uint8 width5 = 0;
static BitArrayRange R_width5_0(24, 20);
width5 += R_width5_0.read(ba) << 0;
etiss_uint8 shamt5 = 0;
static BitArrayRange R_shamt5_0(29, 25);
shamt5 += R_shamt5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "insbi" << " # " << ba << (" [rd=" + std::to_string(rd) + " | imm5=" + std::to_string(imm5) + " | width5=" + std::to_string(width5) + " | shamt5=" + std::to_string(shamt5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
