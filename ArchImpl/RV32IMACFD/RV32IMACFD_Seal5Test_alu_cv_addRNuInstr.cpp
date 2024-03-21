/**
 * Generated on Thu, 21 Mar 2024 19:52:45 +0100.
 *
 * This file contains the instruction behavior models of the Seal5Test_alu_cv_addRNu
 * instruction set for the RV32IMACFD core architecture.
 */

#include "RV32IMACFDArch.h"
#include "RV32IMACFDFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// cv_addRNu -------------------------------------------------------------------
static InstructionDefinition cv_addrnu_rd_rs1_rs2_Is3 (
	ISA32_RV32IMACFD,
	"cv_addrnu",
	(uint32_t) 0x00607b,
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//cv_addRNu\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFD*)cpu)->X[" + std::to_string(rd) + "ULL] = *((RV32IMACFD*)cpu)->X[" + std::to_string(rs1) + "ULL] + *((RV32IMACFD*)cpu)->X[" + std::to_string(rs2) + "ULL] + 2ULL ^ " + std::to_string((etiss_uint8)((Is3)) - 1ULL >> (etiss_uint8)((Is3))) + "ULL;\n";
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
etiss_uint8 rs2 = 0;
static BitArrayRange R_rs2_0(24, 20);
rs2 += R_rs2_0.read(ba) << 0;
etiss_uint8 Is3 = 0;
static BitArrayRange R_Is3_0(29, 25);
Is3 += R_Is3_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_addrnu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + " | Is3=" + std::to_string(Is3) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
