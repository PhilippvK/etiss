/**
 * Generated on Sun, 29 Oct 2023 22:27:54 +0100.
 *
 * This file contains the instruction behavior models of the XCoreVBitmanip
 * instruction set for the RV32IMACFDXCoreV core architecture.
 */

#include "RV32IMACFDXCoreVArch.h"

#define ETISS_ARCH_STATIC_FN_ONLY
#include "RV32IMACFDXCoreVFuncs.h"

using namespace etiss;
using namespace etiss::instr;


// CV_EXTRACT ------------------------------------------------------------------
static InstructionDefinition cv_extract_rd_rs1_Iuimm5_Luimm5 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extract",
	(uint32_t) 0x00005b,
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
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACT\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_int32)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL] >> " + std::to_string(Iuimm5) + "ULL) & " + std::to_string(((2ULL << Luimm5) - 1ULL)) + "ULL) << " + std::to_string((31ULL - Luimm5)) + "ULL)) >> " + std::to_string((31ULL - Luimm5)) + "ULL;\n";
cp.code() += "} // block\n";
} // block
} // conditional
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extract" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Iuimm5=" + std::to_string(Iuimm5) + " | Luimm5=" + std::to_string(Luimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTU -----------------------------------------------------------------
static InstructionDefinition cv_extractu_rd_rs1_Iuimm5_Luimm5 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extractu",
	(uint32_t) 0x4000005b,
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
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//CV_EXTRACTU\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL] >> " + std::to_string(Iuimm5) + "ULL) & " + std::to_string(((2ULL << Luimm5) - 1ULL)) + "ULL));\n";
cp.code() += "} // block\n";
} // block
} // conditional
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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 Iuimm5 = 0;
static BitArrayRange R_Iuimm5_0(24, 20);
Iuimm5 += R_Iuimm5_0.read(ba) << 0;
etiss_uint8 Luimm5 = 0;
static BitArrayRange R_Luimm5_0(29, 25);
Luimm5 += R_Luimm5_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "cv_extractu" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | Iuimm5=" + std::to_string(Iuimm5) + " | Luimm5=" + std::to_string(Luimm5) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTR -----------------------------------------------------------------
static InstructionDefinition cv_extractr_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extractr",
	(uint32_t) 0x3000302b,
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

		cp.code() = std::string("//CV_EXTRACTR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_int32)((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL] >> ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (0ULL)) & 31)) & ((2ULL << ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)) - 1ULL)) << (31ULL - ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)))) >> (31ULL - ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31));\n";
cp.code() += "} // block\n";
} // block
} // conditional
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
ss << "cv_extractr" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// CV_EXTRACTUR ----------------------------------------------------------------
static InstructionDefinition cv_extractur_rd_rs1_rs2 (
	ISA32_RV32IMACFDXCoreV,
	"cv_extractur",
	(uint32_t) 0x3200302b,
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

		cp.code() = std::string("//CV_EXTRACTUR\n");

// -----------------------------------------------------------------------------
{ // block
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "{ // block\n";
if (rd != 0ULL) { // conditional
{ // block
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rd) + "ULL] = (etiss_uint32)(((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs1) + "ULL] >> ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (0ULL)) & 31)) & ((2ULL << ((((((*((RV32IMACFDXCoreV*)cpu)->X[" + std::to_string(rs2) + "ULL]) >> (0ULL)) & 4294967295)) >> (5ULL)) & 31)) - 1ULL)));\n";
cp.code() += "} // block\n";
} // block
} // conditional
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
ss << "cv_extractur" << " # " << ba << (" [rd=" + std::to_string(rd) + " | rs1=" + std::to_string(rs1) + " | rs2=" + std::to_string(rs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
