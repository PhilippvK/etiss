/**
 * Generated on Thu, 21 Mar 2024 19:52:45 +0100.
 *
 * This file contains the instruction behavior models of the Seal5Test_alu_cv_maxi12_16
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// cv_maxi12_16 ----------------------------------------------------------------
static InstructionDefinition cv_maxi12_16_rd_rs1_imm5 (
	ISA32_RV32IMACFD,
	"cv_maxi12_16",
	(uint32_t) 0x00307b,
	(uint32_t) 0x00707f,
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
etiss_uint16 imm5 = 0;
static BitArrayRange R_imm5_0(31, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//cv_maxi12_16\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = ((etiss_int16)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL])) > " + std::to_string(((etiss_int16)(((etiss_int16)(imm5)) << (4)) >> (4))) + "LL) ? ((etiss_int16)((*((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL]))) : (" + std::to_string(((etiss_int16)(((etiss_int16)(imm5)) << (4)) >> (4))) + "LL);\n";
cp.code() += "} // block\n";
} // block
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint16 imm5 = 0;
static BitArrayRange R_imm5_0(31, 20);
imm5 += R_imm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_maxi12_16" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | imm5=" + std::to_string(imm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
