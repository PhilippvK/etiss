// clang-format off
/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the instruction behavior models of the RVZve32f
 * instruction set for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVArch.h"
#include "RV32IMACFDVFuncs.h"

using namespace etiss;
using namespace etiss::instr;

// VFADD_VV --------------------------------------------------------------------
static InstructionDefinition vfadd_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfadd_vv",
	(uint32_t) 0x001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFADD_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 426);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22501);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22428, 22427);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22433, 22432);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22438, 22437);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22445, 22444, 22442, 22443);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22451, 22450, 22447, 22448, 22449);\n";
cp.code() += "etiss_uint32 ret = vfadd_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 22464, 22463, 22453, 22454, 22455, 22456, 22457, 22458, 22459, 22460, 22461, 22462);\n";
cp.code() += "etiss_coverage_count(1, 22465);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22468, 22466, 22467);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22479);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22475, 22471, 22474, 22472, 22473);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22478, 22476, 22477);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22485);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22484, 22482, 22483);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22488, 22487);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22500, 22489, 22499, 22493, 22490, 22494, 22497, 22495, 22498);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFADD_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfadd_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFADD_VF --------------------------------------------------------------------
static InstructionDefinition vfadd_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfadd_vf",
	(uint32_t) 0x005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFADD_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 427);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22581);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22506, 22505);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22511, 22510);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22516, 22515);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22523, 22522, 22520, 22521);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22529, 22528, 22525, 22526, 22527);\n";
cp.code() += "etiss_uint32 ret = vfadd_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 22544, 22543, 22531, 22532, 22533, 22534, 22535, 22536, 22537, 22538, 22539, 22540, 22542);\n";
cp.code() += "etiss_coverage_count(1, 22545);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22548, 22546, 22547);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22559);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22555, 22551, 22554, 22552, 22553);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22558, 22556, 22557);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22565);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22564, 22562, 22563);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22568, 22567);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22580, 22569, 22579, 22573, 22570, 22574, 22577, 22575, 22578);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFADD_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfadd_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSUB_VV --------------------------------------------------------------------
static InstructionDefinition vfsub_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsub_vv",
	(uint32_t) 0x8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSUB_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 428);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22659);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22586, 22585);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22591, 22590);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22596, 22595);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22603, 22602, 22600, 22601);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22609, 22608, 22605, 22606, 22607);\n";
cp.code() += "etiss_uint32 ret = vfsub_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 22622, 22621, 22611, 22612, 22613, 22614, 22615, 22616, 22617, 22618, 22619, 22620);\n";
cp.code() += "etiss_coverage_count(1, 22623);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22626, 22624, 22625);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22637);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22633, 22629, 22632, 22630, 22631);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22636, 22634, 22635);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22643);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22642, 22640, 22641);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22646, 22645);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22658, 22647, 22657, 22651, 22648, 22652, 22655, 22653, 22656);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSUB_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsub_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSUB_VF --------------------------------------------------------------------
static InstructionDefinition vfsub_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsub_vf",
	(uint32_t) 0x8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSUB_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 429);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22739);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22664, 22663);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22669, 22668);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22674, 22673);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22681, 22680, 22678, 22679);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22687, 22686, 22683, 22684, 22685);\n";
cp.code() += "etiss_uint32 ret = vfsub_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 22702, 22701, 22689, 22690, 22691, 22692, 22693, 22694, 22695, 22696, 22697, 22698, 22700);\n";
cp.code() += "etiss_coverage_count(1, 22703);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22706, 22704, 22705);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22717);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22713, 22709, 22712, 22710, 22711);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22716, 22714, 22715);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22723);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22722, 22720, 22721);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22726, 22725);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22738, 22727, 22737, 22731, 22728, 22732, 22735, 22733, 22736);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSUB_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsub_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFRSUB_VF -------------------------------------------------------------------
static InstructionDefinition vfrsub_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfrsub_vf",
	(uint32_t) 0x9c005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFRSUB_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 430);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22819);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22744, 22743);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22749, 22748);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22754, 22753);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22761, 22760, 22758, 22759);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22767, 22766, 22763, 22764, 22765);\n";
cp.code() += "etiss_uint32 ret = vfrsub_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 22782, 22781, 22769, 22770, 22771, 22772, 22773, 22774, 22775, 22776, 22777, 22778, 22780);\n";
cp.code() += "etiss_coverage_count(1, 22783);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22786, 22784, 22785);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22797);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22793, 22789, 22792, 22790, 22791);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22796, 22794, 22795);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22803);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22802, 22800, 22801);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22806, 22805);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22818, 22807, 22817, 22811, 22808, 22812, 22815, 22813, 22816);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFRSUB_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfrsub_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWADD_VV -------------------------------------------------------------------
static InstructionDefinition vfwadd_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwadd_vv",
	(uint32_t) 0xc0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWADD_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 431);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22897);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22824, 22823);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22829, 22828);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22834, 22833);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22841, 22840, 22838, 22839);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22847, 22846, 22843, 22844, 22845);\n";
cp.code() += "etiss_uint32 ret = vfwadd_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 22860, 22859, 22849, 22850, 22851, 22852, 22853, 22854, 22855, 22856, 22857, 22858);\n";
cp.code() += "etiss_coverage_count(1, 22861);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22864, 22862, 22863);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22875);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22871, 22867, 22870, 22868, 22869);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22874, 22872, 22873);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22881);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22880, 22878, 22879);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22884, 22883);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22896, 22885, 22895, 22889, 22886, 22890, 22893, 22891, 22894);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWADD_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwadd_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWADD_VF -------------------------------------------------------------------
static InstructionDefinition vfwadd_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwadd_vf",
	(uint32_t) 0xc0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWADD_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 432);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 22977);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22902, 22901);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22907, 22906);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22912, 22911);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22919, 22918, 22916, 22917);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 22925, 22924, 22921, 22922, 22923);\n";
cp.code() += "etiss_uint32 ret = vfwadd_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 22940, 22939, 22927, 22928, 22929, 22930, 22931, 22932, 22933, 22934, 22935, 22936, 22938);\n";
cp.code() += "etiss_coverage_count(1, 22941);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 22944, 22942, 22943);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22955);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 22951, 22947, 22950, 22948, 22949);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 22954, 22952, 22953);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 22961);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 22960, 22958, 22959);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 22964, 22963);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 22976, 22965, 22975, 22969, 22966, 22970, 22973, 22971, 22974);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWADD_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwadd_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWSUB_VV -------------------------------------------------------------------
static InstructionDefinition vfwsub_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwsub_vv",
	(uint32_t) 0xc8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWSUB_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 433);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23055);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 22982, 22981);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 22987, 22986);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 22992, 22991);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 22999, 22998, 22996, 22997);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23005, 23004, 23001, 23002, 23003);\n";
cp.code() += "etiss_uint32 ret = vfwsub_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23018, 23017, 23007, 23008, 23009, 23010, 23011, 23012, 23013, 23014, 23015, 23016);\n";
cp.code() += "etiss_coverage_count(1, 23019);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23022, 23020, 23021);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23033);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23029, 23025, 23028, 23026, 23027);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23032, 23030, 23031);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23039);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23038, 23036, 23037);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23042, 23041);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23054, 23043, 23053, 23047, 23044, 23048, 23051, 23049, 23052);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWSUB_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwsub_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWSUB_VF -------------------------------------------------------------------
static InstructionDefinition vfwsub_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwsub_vf",
	(uint32_t) 0xc8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWSUB_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 434);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23135);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23060, 23059);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23065, 23064);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23070, 23069);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23077, 23076, 23074, 23075);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23083, 23082, 23079, 23080, 23081);\n";
cp.code() += "etiss_uint32 ret = vfwsub_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23098, 23097, 23085, 23086, 23087, 23088, 23089, 23090, 23091, 23092, 23093, 23094, 23096);\n";
cp.code() += "etiss_coverage_count(1, 23099);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23102, 23100, 23101);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23113);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23109, 23105, 23108, 23106, 23107);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23112, 23110, 23111);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23119);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23118, 23116, 23117);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23122, 23121);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23134, 23123, 23133, 23127, 23124, 23128, 23131, 23129, 23132);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWSUB_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwsub_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWADD_WV -------------------------------------------------------------------
static InstructionDefinition vfwadd_wv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwadd_wv",
	(uint32_t) 0xd0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWADD_WV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 435);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23213);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23140, 23139);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23145, 23144);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23150, 23149);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23157, 23156, 23154, 23155);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23163, 23162, 23159, 23160, 23161);\n";
cp.code() += "etiss_uint32 ret = vfwadd_wv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23176, 23175, 23165, 23166, 23167, 23168, 23169, 23170, 23171, 23172, 23173, 23174);\n";
cp.code() += "etiss_coverage_count(1, 23177);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23180, 23178, 23179);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23191);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23187, 23183, 23186, 23184, 23185);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23190, 23188, 23189);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23197);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23196, 23194, 23195);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23200, 23199);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23212, 23201, 23211, 23205, 23202, 23206, 23209, 23207, 23210);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWADD_WV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwadd_wv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWADD_WF -------------------------------------------------------------------
static InstructionDefinition vfwadd_wf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwadd_wf",
	(uint32_t) 0xd0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWADD_WF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 436);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23293);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23218, 23217);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23223, 23222);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23228, 23227);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23235, 23234, 23232, 23233);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23241, 23240, 23237, 23238, 23239);\n";
cp.code() += "etiss_uint32 ret = vfwadd_wf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23256, 23255, 23243, 23244, 23245, 23246, 23247, 23248, 23249, 23250, 23251, 23252, 23254);\n";
cp.code() += "etiss_coverage_count(1, 23257);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23260, 23258, 23259);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23271);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23267, 23263, 23266, 23264, 23265);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23270, 23268, 23269);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23277);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23276, 23274, 23275);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23280, 23279);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23292, 23281, 23291, 23285, 23282, 23286, 23289, 23287, 23290);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWADD_WF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwadd_wf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWSUB_WV -------------------------------------------------------------------
static InstructionDefinition vfwsub_wv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwsub_wv",
	(uint32_t) 0xd8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWSUB_WV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 437);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23371);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23298, 23297);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23303, 23302);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23308, 23307);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23315, 23314, 23312, 23313);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23321, 23320, 23317, 23318, 23319);\n";
cp.code() += "etiss_uint32 ret = vfwsub_wv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23334, 23333, 23323, 23324, 23325, 23326, 23327, 23328, 23329, 23330, 23331, 23332);\n";
cp.code() += "etiss_coverage_count(1, 23335);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23338, 23336, 23337);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23349);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23345, 23341, 23344, 23342, 23343);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23348, 23346, 23347);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23355);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23354, 23352, 23353);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23358, 23357);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23370, 23359, 23369, 23363, 23360, 23364, 23367, 23365, 23368);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWSUB_WV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwsub_wv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWSUB_WF -------------------------------------------------------------------
static InstructionDefinition vfwsub_wf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwsub_wf",
	(uint32_t) 0xd8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWSUB_WF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 438);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23451);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23376, 23375);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23381, 23380);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23386, 23385);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23393, 23392, 23390, 23391);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23399, 23398, 23395, 23396, 23397);\n";
cp.code() += "etiss_uint32 ret = vfwsub_wf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23414, 23413, 23401, 23402, 23403, 23404, 23405, 23406, 23407, 23408, 23409, 23410, 23412);\n";
cp.code() += "etiss_coverage_count(1, 23415);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23418, 23416, 23417);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23429);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23425, 23421, 23424, 23422, 23423);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23428, 23426, 23427);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23435);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23434, 23432, 23433);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23438, 23437);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23450, 23439, 23449, 23443, 23440, 23444, 23447, 23445, 23448);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWSUB_WF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwsub_wf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMUL_VV --------------------------------------------------------------------
static InstructionDefinition vfmul_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmul_vv",
	(uint32_t) 0x90001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMUL_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 439);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23529);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23456, 23455);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23461, 23460);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23466, 23465);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23473, 23472, 23470, 23471);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23479, 23478, 23475, 23476, 23477);\n";
cp.code() += "etiss_uint32 ret = vfmul_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23492, 23491, 23481, 23482, 23483, 23484, 23485, 23486, 23487, 23488, 23489, 23490);\n";
cp.code() += "etiss_coverage_count(1, 23493);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23496, 23494, 23495);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23507);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23503, 23499, 23502, 23500, 23501);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23506, 23504, 23505);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23513);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23512, 23510, 23511);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23516, 23515);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23528, 23517, 23527, 23521, 23518, 23522, 23525, 23523, 23526);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMUL_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmul_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMUL_VF --------------------------------------------------------------------
static InstructionDefinition vfmul_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmul_vf",
	(uint32_t) 0x90005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMUL_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 440);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23609);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23534, 23533);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23539, 23538);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23544, 23543);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23551, 23550, 23548, 23549);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23557, 23556, 23553, 23554, 23555);\n";
cp.code() += "etiss_uint32 ret = vfmul_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23572, 23571, 23559, 23560, 23561, 23562, 23563, 23564, 23565, 23566, 23567, 23568, 23570);\n";
cp.code() += "etiss_coverage_count(1, 23573);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23576, 23574, 23575);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23587);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23583, 23579, 23582, 23580, 23581);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23586, 23584, 23585);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23593);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23592, 23590, 23591);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23596, 23595);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23608, 23597, 23607, 23601, 23598, 23602, 23605, 23603, 23606);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMUL_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmul_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFDIV_VV --------------------------------------------------------------------
static InstructionDefinition vfdiv_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfdiv_vv",
	(uint32_t) 0x80001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFDIV_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 441);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23687);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23614, 23613);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23619, 23618);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23624, 23623);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23631, 23630, 23628, 23629);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23637, 23636, 23633, 23634, 23635);\n";
cp.code() += "etiss_uint32 ret = vfdiv_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23650, 23649, 23639, 23640, 23641, 23642, 23643, 23644, 23645, 23646, 23647, 23648);\n";
cp.code() += "etiss_coverage_count(1, 23651);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23654, 23652, 23653);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23665);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23661, 23657, 23660, 23658, 23659);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23664, 23662, 23663);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23671);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23670, 23668, 23669);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23674, 23673);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23686, 23675, 23685, 23679, 23676, 23680, 23683, 23681, 23684);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFDIV_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfdiv_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFDIV_VF --------------------------------------------------------------------
static InstructionDefinition vfdiv_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfdiv_vf",
	(uint32_t) 0x80005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFDIV_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 442);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23767);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23692, 23691);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23697, 23696);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23702, 23701);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23709, 23708, 23706, 23707);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23715, 23714, 23711, 23712, 23713);\n";
cp.code() += "etiss_uint32 ret = vfdiv_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23730, 23729, 23717, 23718, 23719, 23720, 23721, 23722, 23723, 23724, 23725, 23726, 23728);\n";
cp.code() += "etiss_coverage_count(1, 23731);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23734, 23732, 23733);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23745);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23741, 23737, 23740, 23738, 23739);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23744, 23742, 23743);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23751);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23750, 23748, 23749);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23754, 23753);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23766, 23755, 23765, 23759, 23756, 23760, 23763, 23761, 23764);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFDIV_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfdiv_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFRDIV_VF -------------------------------------------------------------------
static InstructionDefinition vfrdiv_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfrdiv_vf",
	(uint32_t) 0x84005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFRDIV_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 443);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23847);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23772, 23771);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23777, 23776);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23782, 23781);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23789, 23788, 23786, 23787);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23795, 23794, 23791, 23792, 23793);\n";
cp.code() += "etiss_uint32 ret = vfrdiv_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23810, 23809, 23797, 23798, 23799, 23800, 23801, 23802, 23803, 23804, 23805, 23806, 23808);\n";
cp.code() += "etiss_coverage_count(1, 23811);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23814, 23812, 23813);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23825);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23821, 23817, 23820, 23818, 23819);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23824, 23822, 23823);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23831);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23830, 23828, 23829);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23834, 23833);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23846, 23835, 23845, 23839, 23836, 23840, 23843, 23841, 23844);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFRDIV_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfrdiv_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMUL_VV -------------------------------------------------------------------
static InstructionDefinition vfwmul_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmul_vv",
	(uint32_t) 0xe0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMUL_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 444);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 23925);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23852, 23851);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23857, 23856);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23862, 23861);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23869, 23868, 23866, 23867);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23875, 23874, 23871, 23872, 23873);\n";
cp.code() += "etiss_uint32 ret = vfwmul_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 23888, 23887, 23877, 23878, 23879, 23880, 23881, 23882, 23883, 23884, 23885, 23886);\n";
cp.code() += "etiss_coverage_count(1, 23889);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23892, 23890, 23891);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23903);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23899, 23895, 23898, 23896, 23897);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23902, 23900, 23901);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23909);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23908, 23906, 23907);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23912, 23911);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 23924, 23913, 23923, 23917, 23914, 23918, 23921, 23919, 23922);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMUL_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmul_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMUL_VF -------------------------------------------------------------------
static InstructionDefinition vfwmul_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmul_vf",
	(uint32_t) 0xe0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMUL_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 445);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24005);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 23930, 23929);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 23935, 23934);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 23940, 23939);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 23947, 23946, 23944, 23945);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 23953, 23952, 23949, 23950, 23951);\n";
cp.code() += "etiss_uint32 ret = vfwmul_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 23968, 23967, 23955, 23956, 23957, 23958, 23959, 23960, 23961, 23962, 23963, 23964, 23966);\n";
cp.code() += "etiss_coverage_count(1, 23969);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 23972, 23970, 23971);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23983);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 23979, 23975, 23978, 23976, 23977);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 23982, 23980, 23981);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 23989);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 23988, 23986, 23987);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 23992, 23991);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24004, 23993, 24003, 23997, 23994, 23998, 24001, 23999, 24002);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMUL_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmul_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMACC_VV -------------------------------------------------------------------
static InstructionDefinition vfmacc_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmacc_vv",
	(uint32_t) 0xb0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMACC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 446);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24083);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24010, 24009);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24015, 24014);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24020, 24019);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24027, 24026, 24024, 24025);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24033, 24032, 24029, 24030, 24031);\n";
cp.code() += "etiss_uint32 ret = vfmacc_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24046, 24045, 24035, 24036, 24037, 24038, 24039, 24040, 24041, 24042, 24043, 24044);\n";
cp.code() += "etiss_coverage_count(1, 24047);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24050, 24048, 24049);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24061);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24057, 24053, 24056, 24054, 24055);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24060, 24058, 24059);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24067);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24066, 24064, 24065);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24070, 24069);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24082, 24071, 24081, 24075, 24072, 24076, 24079, 24077, 24080);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMACC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMACC_VF -------------------------------------------------------------------
static InstructionDefinition vfmacc_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmacc_vf",
	(uint32_t) 0xb0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMACC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 447);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24163);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24088, 24087);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24093, 24092);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24098, 24097);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24105, 24104, 24102, 24103);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24111, 24110, 24107, 24108, 24109);\n";
cp.code() += "etiss_uint32 ret = vfmacc_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24126, 24125, 24113, 24114, 24115, 24116, 24117, 24118, 24119, 24120, 24121, 24122, 24124);\n";
cp.code() += "etiss_coverage_count(1, 24127);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24130, 24128, 24129);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24141);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24137, 24133, 24136, 24134, 24135);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24140, 24138, 24139);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24147);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24146, 24144, 24145);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24150, 24149);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24162, 24151, 24161, 24155, 24152, 24156, 24159, 24157, 24160);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMACC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmacc_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMACC_VV ------------------------------------------------------------------
static InstructionDefinition vfnmacc_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmacc_vv",
	(uint32_t) 0xb4001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMACC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 448);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24241);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24168, 24167);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24173, 24172);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24178, 24177);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24185, 24184, 24182, 24183);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24191, 24190, 24187, 24188, 24189);\n";
cp.code() += "etiss_uint32 ret = vfnmacc_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24204, 24203, 24193, 24194, 24195, 24196, 24197, 24198, 24199, 24200, 24201, 24202);\n";
cp.code() += "etiss_coverage_count(1, 24205);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24208, 24206, 24207);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24219);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24215, 24211, 24214, 24212, 24213);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24218, 24216, 24217);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24225);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24224, 24222, 24223);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24228, 24227);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24240, 24229, 24239, 24233, 24230, 24234, 24237, 24235, 24238);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMACC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMACC_VF ------------------------------------------------------------------
static InstructionDefinition vfnmacc_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmacc_vf",
	(uint32_t) 0xb4005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMACC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 449);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24321);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24246, 24245);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24251, 24250);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24256, 24255);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24263, 24262, 24260, 24261);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24269, 24268, 24265, 24266, 24267);\n";
cp.code() += "etiss_uint32 ret = vfnmacc_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24284, 24283, 24271, 24272, 24273, 24274, 24275, 24276, 24277, 24278, 24279, 24280, 24282);\n";
cp.code() += "etiss_coverage_count(1, 24285);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24288, 24286, 24287);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24299);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24295, 24291, 24294, 24292, 24293);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24298, 24296, 24297);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24305);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24304, 24302, 24303);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24308, 24307);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24320, 24309, 24319, 24313, 24310, 24314, 24317, 24315, 24318);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMACC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmacc_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMSAC_VV -------------------------------------------------------------------
static InstructionDefinition vfmsac_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmsac_vv",
	(uint32_t) 0xb8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMSAC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 450);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24399);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24326, 24325);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24331, 24330);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24336, 24335);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24343, 24342, 24340, 24341);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24349, 24348, 24345, 24346, 24347);\n";
cp.code() += "etiss_uint32 ret = vfmsac_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24362, 24361, 24351, 24352, 24353, 24354, 24355, 24356, 24357, 24358, 24359, 24360);\n";
cp.code() += "etiss_coverage_count(1, 24363);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24366, 24364, 24365);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24377);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24373, 24369, 24372, 24370, 24371);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24376, 24374, 24375);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24383);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24382, 24380, 24381);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24386, 24385);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24398, 24387, 24397, 24391, 24388, 24392, 24395, 24393, 24396);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMSAC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmsac_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMSAC_VF -------------------------------------------------------------------
static InstructionDefinition vfmsac_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmsac_vf",
	(uint32_t) 0xb8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMSAC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 451);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24479);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24404, 24403);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24409, 24408);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24414, 24413);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24421, 24420, 24418, 24419);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24427, 24426, 24423, 24424, 24425);\n";
cp.code() += "etiss_uint32 ret = vfmsac_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24442, 24441, 24429, 24430, 24431, 24432, 24433, 24434, 24435, 24436, 24437, 24438, 24440);\n";
cp.code() += "etiss_coverage_count(1, 24443);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24446, 24444, 24445);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24457);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24453, 24449, 24452, 24450, 24451);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24456, 24454, 24455);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24463);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24462, 24460, 24461);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24466, 24465);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24478, 24467, 24477, 24471, 24468, 24472, 24475, 24473, 24476);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMSAC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmsac_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMSAC_VV ------------------------------------------------------------------
static InstructionDefinition vfnmsac_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmsac_vv",
	(uint32_t) 0xbc001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMSAC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 452);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24557);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24484, 24483);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24489, 24488);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24494, 24493);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24501, 24500, 24498, 24499);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24507, 24506, 24503, 24504, 24505);\n";
cp.code() += "etiss_uint32 ret = vfnmsac_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24520, 24519, 24509, 24510, 24511, 24512, 24513, 24514, 24515, 24516, 24517, 24518);\n";
cp.code() += "etiss_coverage_count(1, 24521);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24524, 24522, 24523);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24535);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24531, 24527, 24530, 24528, 24529);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24534, 24532, 24533);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24541);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24540, 24538, 24539);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24544, 24543);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24556, 24545, 24555, 24549, 24546, 24550, 24553, 24551, 24554);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMSAC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmsac_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMSAC_VF ------------------------------------------------------------------
static InstructionDefinition vfnmsac_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmsac_vf",
	(uint32_t) 0xbc005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMSAC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 453);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24637);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24562, 24561);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24567, 24566);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24572, 24571);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24579, 24578, 24576, 24577);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24585, 24584, 24581, 24582, 24583);\n";
cp.code() += "etiss_uint32 ret = vfnmsac_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24600, 24599, 24587, 24588, 24589, 24590, 24591, 24592, 24593, 24594, 24595, 24596, 24598);\n";
cp.code() += "etiss_coverage_count(1, 24601);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24604, 24602, 24603);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24615);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24611, 24607, 24610, 24608, 24609);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24614, 24612, 24613);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24621);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24620, 24618, 24619);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24624, 24623);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24636, 24625, 24635, 24629, 24626, 24630, 24633, 24631, 24634);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMSAC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmsac_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMADD_VV -------------------------------------------------------------------
static InstructionDefinition vfmadd_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmadd_vv",
	(uint32_t) 0xa0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMADD_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 454);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24715);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24642, 24641);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24647, 24646);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24652, 24651);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24659, 24658, 24656, 24657);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24665, 24664, 24661, 24662, 24663);\n";
cp.code() += "etiss_uint32 ret = vfmadd_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24678, 24677, 24667, 24668, 24669, 24670, 24671, 24672, 24673, 24674, 24675, 24676);\n";
cp.code() += "etiss_coverage_count(1, 24679);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24682, 24680, 24681);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24693);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24689, 24685, 24688, 24686, 24687);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24692, 24690, 24691);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24699);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24698, 24696, 24697);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24702, 24701);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24714, 24703, 24713, 24707, 24704, 24708, 24711, 24709, 24712);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMADD_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmadd_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMADD_VF -------------------------------------------------------------------
static InstructionDefinition vfmadd_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmadd_vf",
	(uint32_t) 0xa0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMADD_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 455);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24795);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24720, 24719);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24725, 24724);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24730, 24729);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24737, 24736, 24734, 24735);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24743, 24742, 24739, 24740, 24741);\n";
cp.code() += "etiss_uint32 ret = vfmadd_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24758, 24757, 24745, 24746, 24747, 24748, 24749, 24750, 24751, 24752, 24753, 24754, 24756);\n";
cp.code() += "etiss_coverage_count(1, 24759);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24762, 24760, 24761);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24773);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24769, 24765, 24768, 24766, 24767);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24772, 24770, 24771);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24779);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24778, 24776, 24777);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24782, 24781);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24794, 24783, 24793, 24787, 24784, 24788, 24791, 24789, 24792);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMADD_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmadd_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMADD_VV ------------------------------------------------------------------
static InstructionDefinition vfnmadd_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmadd_vv",
	(uint32_t) 0xa4001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMADD_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 456);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24873);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24800, 24799);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24805, 24804);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24810, 24809);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24817, 24816, 24814, 24815);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24823, 24822, 24819, 24820, 24821);\n";
cp.code() += "etiss_uint32 ret = vfnmadd_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24836, 24835, 24825, 24826, 24827, 24828, 24829, 24830, 24831, 24832, 24833, 24834);\n";
cp.code() += "etiss_coverage_count(1, 24837);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24840, 24838, 24839);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24851);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24847, 24843, 24846, 24844, 24845);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24850, 24848, 24849);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24857);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24856, 24854, 24855);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24860, 24859);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24872, 24861, 24871, 24865, 24862, 24866, 24869, 24867, 24870);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMADD_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmadd_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMADD_VF ------------------------------------------------------------------
static InstructionDefinition vfnmadd_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmadd_vf",
	(uint32_t) 0xa4005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMADD_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 457);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 24953);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24878, 24877);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24883, 24882);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24888, 24887);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24895, 24894, 24892, 24893);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24901, 24900, 24897, 24898, 24899);\n";
cp.code() += "etiss_uint32 ret = vfnmadd_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 24916, 24915, 24903, 24904, 24905, 24906, 24907, 24908, 24909, 24910, 24911, 24912, 24914);\n";
cp.code() += "etiss_coverage_count(1, 24917);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24920, 24918, 24919);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24931);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 24927, 24923, 24926, 24924, 24925);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 24930, 24928, 24929);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 24937);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 24936, 24934, 24935);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 24940, 24939);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 24952, 24941, 24951, 24945, 24942, 24946, 24949, 24947, 24950);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMADD_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmadd_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMSUB_VV -------------------------------------------------------------------
static InstructionDefinition vfmsub_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmsub_vv",
	(uint32_t) 0xa8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMSUB_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 458);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25031);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 24958, 24957);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 24963, 24962);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 24968, 24967);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 24975, 24974, 24972, 24973);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 24981, 24980, 24977, 24978, 24979);\n";
cp.code() += "etiss_uint32 ret = vfmsub_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 24994, 24993, 24983, 24984, 24985, 24986, 24987, 24988, 24989, 24990, 24991, 24992);\n";
cp.code() += "etiss_coverage_count(1, 24995);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 24998, 24996, 24997);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25009);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25005, 25001, 25004, 25002, 25003);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25008, 25006, 25007);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25015);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25014, 25012, 25013);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25018, 25017);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25030, 25019, 25029, 25023, 25020, 25024, 25027, 25025, 25028);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMSUB_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmsub_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMSUB_VF -------------------------------------------------------------------
static InstructionDefinition vfmsub_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmsub_vf",
	(uint32_t) 0xa8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMSUB_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 459);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25111);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25036, 25035);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25041, 25040);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25046, 25045);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25053, 25052, 25050, 25051);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25059, 25058, 25055, 25056, 25057);\n";
cp.code() += "etiss_uint32 ret = vfmsub_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25074, 25073, 25061, 25062, 25063, 25064, 25065, 25066, 25067, 25068, 25069, 25070, 25072);\n";
cp.code() += "etiss_coverage_count(1, 25075);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25078, 25076, 25077);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25089);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25085, 25081, 25084, 25082, 25083);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25088, 25086, 25087);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25095);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25094, 25092, 25093);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25098, 25097);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25110, 25099, 25109, 25103, 25100, 25104, 25107, 25105, 25108);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMSUB_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmsub_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMSUB_VV ------------------------------------------------------------------
static InstructionDefinition vfnmsub_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmsub_vv",
	(uint32_t) 0xac001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMSUB_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 460);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25189);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25116, 25115);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25121, 25120);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25126, 25125);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25133, 25132, 25130, 25131);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25139, 25138, 25135, 25136, 25137);\n";
cp.code() += "etiss_uint32 ret = vfnmsub_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 25152, 25151, 25141, 25142, 25143, 25144, 25145, 25146, 25147, 25148, 25149, 25150);\n";
cp.code() += "etiss_coverage_count(1, 25153);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25156, 25154, 25155);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25167);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25163, 25159, 25162, 25160, 25161);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25166, 25164, 25165);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25173);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25172, 25170, 25171);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25176, 25175);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25188, 25177, 25187, 25181, 25178, 25182, 25185, 25183, 25186);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMSUB_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmsub_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFNMSUB_VF ------------------------------------------------------------------
static InstructionDefinition vfnmsub_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfnmsub_vf",
	(uint32_t) 0xac005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFNMSUB_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 461);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25269);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25194, 25193);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25199, 25198);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25204, 25203);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25211, 25210, 25208, 25209);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25217, 25216, 25213, 25214, 25215);\n";
cp.code() += "etiss_uint32 ret = vfnmsub_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25232, 25231, 25219, 25220, 25221, 25222, 25223, 25224, 25225, 25226, 25227, 25228, 25230);\n";
cp.code() += "etiss_coverage_count(1, 25233);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25236, 25234, 25235);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25247);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25243, 25239, 25242, 25240, 25241);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25246, 25244, 25245);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25253);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25252, 25250, 25251);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25256, 25255);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25268, 25257, 25267, 25261, 25258, 25262, 25265, 25263, 25266);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFNMSUB_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfnmsub_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMACC_VV ------------------------------------------------------------------
static InstructionDefinition vfwmacc_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmacc_vv",
	(uint32_t) 0xf0001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMACC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 462);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25347);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25274, 25273);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25279, 25278);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25284, 25283);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25291, 25290, 25288, 25289);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25297, 25296, 25293, 25294, 25295);\n";
cp.code() += "etiss_uint32 ret = vfwmacc_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 25310, 25309, 25299, 25300, 25301, 25302, 25303, 25304, 25305, 25306, 25307, 25308);\n";
cp.code() += "etiss_coverage_count(1, 25311);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25314, 25312, 25313);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25325);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25321, 25317, 25320, 25318, 25319);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25324, 25322, 25323);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25331);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25330, 25328, 25329);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25334, 25333);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25346, 25335, 25345, 25339, 25336, 25340, 25343, 25341, 25344);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMACC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMACC_VF ------------------------------------------------------------------
static InstructionDefinition vfwmacc_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmacc_vf",
	(uint32_t) 0xf0005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMACC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 463);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25427);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25352, 25351);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25357, 25356);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25362, 25361);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25369, 25368, 25366, 25367);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25375, 25374, 25371, 25372, 25373);\n";
cp.code() += "etiss_uint32 ret = vfwmacc_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25390, 25389, 25377, 25378, 25379, 25380, 25381, 25382, 25383, 25384, 25385, 25386, 25388);\n";
cp.code() += "etiss_coverage_count(1, 25391);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25394, 25392, 25393);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25405);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25401, 25397, 25400, 25398, 25399);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25404, 25402, 25403);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25411);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25410, 25408, 25409);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25414, 25413);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25426, 25415, 25425, 25419, 25416, 25420, 25423, 25421, 25424);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMACC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmacc_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWNMACC_VV -----------------------------------------------------------------
static InstructionDefinition vfwnmacc_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwnmacc_vv",
	(uint32_t) 0xf4001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWNMACC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 464);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25505);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25432, 25431);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25437, 25436);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25442, 25441);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25449, 25448, 25446, 25447);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25455, 25454, 25451, 25452, 25453);\n";
cp.code() += "etiss_uint32 ret = vfwnmacc_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 25468, 25467, 25457, 25458, 25459, 25460, 25461, 25462, 25463, 25464, 25465, 25466);\n";
cp.code() += "etiss_coverage_count(1, 25469);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25472, 25470, 25471);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25483);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25479, 25475, 25478, 25476, 25477);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25482, 25480, 25481);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25489);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25488, 25486, 25487);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25492, 25491);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25504, 25493, 25503, 25497, 25494, 25498, 25501, 25499, 25502);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWNMACC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwnmacc_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWNMACC_VF -----------------------------------------------------------------
static InstructionDefinition vfwnmacc_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwnmacc_vf",
	(uint32_t) 0xf4005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWNMACC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 465);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25585);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25510, 25509);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25515, 25514);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25520, 25519);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25527, 25526, 25524, 25525);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25533, 25532, 25529, 25530, 25531);\n";
cp.code() += "etiss_uint32 ret = vfwnmacc_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25548, 25547, 25535, 25536, 25537, 25538, 25539, 25540, 25541, 25542, 25543, 25544, 25546);\n";
cp.code() += "etiss_coverage_count(1, 25549);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25552, 25550, 25551);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25563);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25559, 25555, 25558, 25556, 25557);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25562, 25560, 25561);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25569);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25568, 25566, 25567);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25572, 25571);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25584, 25573, 25583, 25577, 25574, 25578, 25581, 25579, 25582);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWNMACC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwnmacc_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMSAC_VV ------------------------------------------------------------------
static InstructionDefinition vfwmsac_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmsac_vv",
	(uint32_t) 0xf8001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMSAC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 466);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25663);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25590, 25589);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25595, 25594);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25600, 25599);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25607, 25606, 25604, 25605);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25613, 25612, 25609, 25610, 25611);\n";
cp.code() += "etiss_uint32 ret = vfwmsac_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 25626, 25625, 25615, 25616, 25617, 25618, 25619, 25620, 25621, 25622, 25623, 25624);\n";
cp.code() += "etiss_coverage_count(1, 25627);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25630, 25628, 25629);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25641);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25637, 25633, 25636, 25634, 25635);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25640, 25638, 25639);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25647);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25646, 25644, 25645);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25650, 25649);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25662, 25651, 25661, 25655, 25652, 25656, 25659, 25657, 25660);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMSAC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmsac_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWMSAC_VF ------------------------------------------------------------------
static InstructionDefinition vfwmsac_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwmsac_vf",
	(uint32_t) 0xf8005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWMSAC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 467);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25743);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25668, 25667);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25673, 25672);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25678, 25677);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25685, 25684, 25682, 25683);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25691, 25690, 25687, 25688, 25689);\n";
cp.code() += "etiss_uint32 ret = vfwmsac_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25706, 25705, 25693, 25694, 25695, 25696, 25697, 25698, 25699, 25700, 25701, 25702, 25704);\n";
cp.code() += "etiss_coverage_count(1, 25707);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25710, 25708, 25709);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25721);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25717, 25713, 25716, 25714, 25715);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25720, 25718, 25719);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25727);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25726, 25724, 25725);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25730, 25729);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25742, 25731, 25741, 25735, 25732, 25736, 25739, 25737, 25740);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWMSAC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwmsac_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWNMSAC_VV -----------------------------------------------------------------
static InstructionDefinition vfwnmsac_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwnmsac_vv",
	(uint32_t) 0xfc001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWNMSAC_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 468);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25821);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25748, 25747);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25753, 25752);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25758, 25757);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25765, 25764, 25762, 25763);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25771, 25770, 25767, 25768, 25769);\n";
cp.code() += "etiss_uint32 ret = vfwnmsac_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 25784, 25783, 25773, 25774, 25775, 25776, 25777, 25778, 25779, 25780, 25781, 25782);\n";
cp.code() += "etiss_coverage_count(1, 25785);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25788, 25786, 25787);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25799);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25795, 25791, 25794, 25792, 25793);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25798, 25796, 25797);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25805);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25804, 25802, 25803);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25808, 25807);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25820, 25809, 25819, 25813, 25810, 25814, 25817, 25815, 25818);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWNMSAC_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwnmsac_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWNMSAC_VF -----------------------------------------------------------------
static InstructionDefinition vfwnmsac_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwnmsac_vf",
	(uint32_t) 0xfc005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWNMSAC_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 469);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25901);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25826, 25825);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25831, 25830);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25836, 25835);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25843, 25842, 25840, 25841);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25849, 25848, 25845, 25846, 25847);\n";
cp.code() += "etiss_uint32 ret = vfwnmsac_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 25864, 25863, 25851, 25852, 25853, 25854, 25855, 25856, 25857, 25858, 25859, 25860, 25862);\n";
cp.code() += "etiss_coverage_count(1, 25865);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25868, 25866, 25867);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25879);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25875, 25871, 25874, 25872, 25873);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25878, 25876, 25877);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25885);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25884, 25882, 25883);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25888, 25887);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25900, 25889, 25899, 25893, 25890, 25894, 25897, 25895, 25898);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWNMSAC_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwnmsac_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSQRT_V --------------------------------------------------------------------
static InstructionDefinition vfsqrt_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsqrt_v",
	(uint32_t) 0x4c001057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSQRT_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 470);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 25978);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25906, 25905);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25911, 25910);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25916, 25915);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 25923, 25922, 25920, 25921);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 25929, 25928, 25925, 25926, 25927);\n";
cp.code() += "etiss_uint32 ret = vfsqrt_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 25941, 25940, 25931, 25932, 25933, 25934, 25935, 25936, 25937, 25938, 25939);\n";
cp.code() += "etiss_coverage_count(1, 25942);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 25945, 25943, 25944);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25956);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 25952, 25948, 25951, 25949, 25950);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 25955, 25953, 25954);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 25962);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 25961, 25959, 25960);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 25965, 25964);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 25977, 25966, 25976, 25970, 25967, 25971, 25974, 25972, 25975);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSQRT_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsqrt_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFRSQRT7_V ------------------------------------------------------------------
static InstructionDefinition vfrsqrt7_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfrsqrt7_v",
	(uint32_t) 0x4c021057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFRSQRT7_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 471);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26055);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 25983, 25982);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 25988, 25987);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 25993, 25992);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26000, 25999, 25997, 25998);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26006, 26005, 26002, 26003, 26004);\n";
cp.code() += "etiss_uint32 ret = vfrsqrt7_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 26018, 26017, 26008, 26009, 26010, 26011, 26012, 26013, 26014, 26015, 26016);\n";
cp.code() += "etiss_coverage_count(1, 26019);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26022, 26020, 26021);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26033);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26029, 26025, 26028, 26026, 26027);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26032, 26030, 26031);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26039);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26038, 26036, 26037);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26042, 26041);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26054, 26043, 26053, 26047, 26044, 26048, 26051, 26049, 26052);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFRSQRT7_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfrsqrt7_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFREC7_V --------------------------------------------------------------------
static InstructionDefinition vfrec7_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfrec7_v",
	(uint32_t) 0x4c029057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFREC7_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 472);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26132);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26060, 26059);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26065, 26064);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26070, 26069);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26077, 26076, 26074, 26075);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26083, 26082, 26079, 26080, 26081);\n";
cp.code() += "etiss_uint32 ret = vfrec7_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 26095, 26094, 26085, 26086, 26087, 26088, 26089, 26090, 26091, 26092, 26093);\n";
cp.code() += "etiss_coverage_count(1, 26096);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26099, 26097, 26098);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26110);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26106, 26102, 26105, 26103, 26104);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26109, 26107, 26108);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26116);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26115, 26113, 26114);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26119, 26118);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26131, 26120, 26130, 26124, 26121, 26125, 26128, 26126, 26129);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFREC7_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfrec7_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMIN_VV --------------------------------------------------------------------
static InstructionDefinition vfmin_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmin_vv",
	(uint32_t) 0x10001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMIN_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 473);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26210);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26137, 26136);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26142, 26141);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26147, 26146);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26154, 26153, 26151, 26152);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26160, 26159, 26156, 26157, 26158);\n";
cp.code() += "etiss_uint32 ret = vfmin_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26173, 26172, 26162, 26163, 26164, 26165, 26166, 26167, 26168, 26169, 26170, 26171);\n";
cp.code() += "etiss_coverage_count(1, 26174);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26177, 26175, 26176);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26188);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26184, 26180, 26183, 26181, 26182);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26187, 26185, 26186);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26194);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26193, 26191, 26192);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26197, 26196);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26209, 26198, 26208, 26202, 26199, 26203, 26206, 26204, 26207);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMIN_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmin_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMIN_VF --------------------------------------------------------------------
static InstructionDefinition vfmin_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmin_vf",
	(uint32_t) 0x10005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMIN_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 474);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26290);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26215, 26214);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26220, 26219);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26225, 26224);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26232, 26231, 26229, 26230);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26238, 26237, 26234, 26235, 26236);\n";
cp.code() += "etiss_uint32 ret = vfmin_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 26253, 26252, 26240, 26241, 26242, 26243, 26244, 26245, 26246, 26247, 26248, 26249, 26251);\n";
cp.code() += "etiss_coverage_count(1, 26254);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26257, 26255, 26256);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26268);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26264, 26260, 26263, 26261, 26262);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26267, 26265, 26266);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26274);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26273, 26271, 26272);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26277, 26276);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26289, 26278, 26288, 26282, 26279, 26283, 26286, 26284, 26287);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMIN_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmin_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMAX_VV --------------------------------------------------------------------
static InstructionDefinition vfmax_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmax_vv",
	(uint32_t) 0x18001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMAX_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 475);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26368);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26295, 26294);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26300, 26299);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26305, 26304);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26312, 26311, 26309, 26310);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26318, 26317, 26314, 26315, 26316);\n";
cp.code() += "etiss_uint32 ret = vfmax_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26331, 26330, 26320, 26321, 26322, 26323, 26324, 26325, 26326, 26327, 26328, 26329);\n";
cp.code() += "etiss_coverage_count(1, 26332);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26335, 26333, 26334);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26346);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26342, 26338, 26341, 26339, 26340);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26345, 26343, 26344);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26352);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26351, 26349, 26350);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26355, 26354);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26367, 26356, 26366, 26360, 26357, 26361, 26364, 26362, 26365);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMAX_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmax_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMAX_VF --------------------------------------------------------------------
static InstructionDefinition vfmax_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfmax_vf",
	(uint32_t) 0x18005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMAX_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 476);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26448);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26373, 26372);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26378, 26377);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26383, 26382);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26390, 26389, 26387, 26388);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26396, 26395, 26392, 26393, 26394);\n";
cp.code() += "etiss_uint32 ret = vfmax_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 26411, 26410, 26398, 26399, 26400, 26401, 26402, 26403, 26404, 26405, 26406, 26407, 26409);\n";
cp.code() += "etiss_coverage_count(1, 26412);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26415, 26413, 26414);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26426);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26422, 26418, 26421, 26419, 26420);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26425, 26423, 26424);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26432);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26431, 26429, 26430);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26435, 26434);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26447, 26436, 26446, 26440, 26437, 26441, 26444, 26442, 26445);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMAX_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmax_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJ_VV -------------------------------------------------------------------
static InstructionDefinition vfsgnj_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnj_vv",
	(uint32_t) 0x20001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJ_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 477);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26526);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26453, 26452);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26458, 26457);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26463, 26462);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26470, 26469, 26467, 26468);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26476, 26475, 26472, 26473, 26474);\n";
cp.code() += "etiss_uint32 ret = vfsgnj_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26489, 26488, 26478, 26479, 26480, 26481, 26482, 26483, 26484, 26485, 26486, 26487);\n";
cp.code() += "etiss_coverage_count(1, 26490);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26493, 26491, 26492);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26504);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26500, 26496, 26499, 26497, 26498);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26503, 26501, 26502);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26510);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26509, 26507, 26508);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26513, 26512);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26525, 26514, 26524, 26518, 26515, 26519, 26522, 26520, 26523);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJ_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnj_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJ_VF -------------------------------------------------------------------
static InstructionDefinition vfsgnj_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnj_vf",
	(uint32_t) 0x20005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJ_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 478);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26606);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26531, 26530);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26536, 26535);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26541, 26540);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26548, 26547, 26545, 26546);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26554, 26553, 26550, 26551, 26552);\n";
cp.code() += "etiss_uint32 ret = vfsgnj_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 26569, 26568, 26556, 26557, 26558, 26559, 26560, 26561, 26562, 26563, 26564, 26565, 26567);\n";
cp.code() += "etiss_coverage_count(1, 26570);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26573, 26571, 26572);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26584);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26580, 26576, 26579, 26577, 26578);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26583, 26581, 26582);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26590);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26589, 26587, 26588);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26593, 26592);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26605, 26594, 26604, 26598, 26595, 26599, 26602, 26600, 26603);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJ_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnj_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJN_VV ------------------------------------------------------------------
static InstructionDefinition vfsgnjn_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnjn_vv",
	(uint32_t) 0x24001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJN_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 479);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26684);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26611, 26610);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26616, 26615);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26621, 26620);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26628, 26627, 26625, 26626);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26634, 26633, 26630, 26631, 26632);\n";
cp.code() += "etiss_uint32 ret = vfsgnjn_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26647, 26646, 26636, 26637, 26638, 26639, 26640, 26641, 26642, 26643, 26644, 26645);\n";
cp.code() += "etiss_coverage_count(1, 26648);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26651, 26649, 26650);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26662);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26658, 26654, 26657, 26655, 26656);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26661, 26659, 26660);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26668);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26667, 26665, 26666);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26671, 26670);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26683, 26672, 26682, 26676, 26673, 26677, 26680, 26678, 26681);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJN_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnjn_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJN_VF ------------------------------------------------------------------
static InstructionDefinition vfsgnjn_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnjn_vf",
	(uint32_t) 0x24005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJN_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 480);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26764);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26689, 26688);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26694, 26693);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26699, 26698);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26706, 26705, 26703, 26704);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26712, 26711, 26708, 26709, 26710);\n";
cp.code() += "etiss_uint32 ret = vfsgnjn_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 26727, 26726, 26714, 26715, 26716, 26717, 26718, 26719, 26720, 26721, 26722, 26723, 26725);\n";
cp.code() += "etiss_coverage_count(1, 26728);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26731, 26729, 26730);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26742);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26738, 26734, 26737, 26735, 26736);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26741, 26739, 26740);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26748);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26747, 26745, 26746);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26751, 26750);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26763, 26752, 26762, 26756, 26753, 26757, 26760, 26758, 26761);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJN_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnjn_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJX_VV ------------------------------------------------------------------
static InstructionDefinition vfsgnjx_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnjx_vv",
	(uint32_t) 0x28001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJX_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 481);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26842);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26769, 26768);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26774, 26773);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26779, 26778);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26786, 26785, 26783, 26784);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26792, 26791, 26788, 26789, 26790);\n";
cp.code() += "etiss_uint32 ret = vfsgnjx_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26805, 26804, 26794, 26795, 26796, 26797, 26798, 26799, 26800, 26801, 26802, 26803);\n";
cp.code() += "etiss_coverage_count(1, 26806);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26809, 26807, 26808);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26820);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26816, 26812, 26815, 26813, 26814);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26819, 26817, 26818);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26826);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26825, 26823, 26824);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26829, 26828);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26841, 26830, 26840, 26834, 26831, 26835, 26838, 26836, 26839);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJX_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnjx_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSGNJX_VF ------------------------------------------------------------------
static InstructionDefinition vfsgnjx_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfsgnjx_vf",
	(uint32_t) 0x28005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSGNJX_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 482);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 26922);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26847, 26846);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26852, 26851);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26857, 26856);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26864, 26863, 26861, 26862);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26870, 26869, 26866, 26867, 26868);\n";
cp.code() += "etiss_uint32 ret = vfsgnjx_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 26885, 26884, 26872, 26873, 26874, 26875, 26876, 26877, 26878, 26879, 26880, 26881, 26883);\n";
cp.code() += "etiss_coverage_count(1, 26886);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26889, 26887, 26888);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26900);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26896, 26892, 26895, 26893, 26894);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26899, 26897, 26898);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26906);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26905, 26903, 26904);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26909, 26908);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26921, 26910, 26920, 26914, 26911, 26915, 26918, 26916, 26919);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFSGNJX_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfsgnjx_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFEQ_VV --------------------------------------------------------------------
static InstructionDefinition vmfeq_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfeq_vv",
	(uint32_t) 0x60001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFEQ_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 483);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27000);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 26927, 26926);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 26932, 26931);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 26937, 26936);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 26944, 26943, 26941, 26942);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 26950, 26949, 26946, 26947, 26948);\n";
cp.code() += "etiss_uint32 ret = vmfeq_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 26963, 26962, 26952, 26953, 26954, 26955, 26956, 26957, 26958, 26959, 26960, 26961);\n";
cp.code() += "etiss_coverage_count(1, 26964);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 26967, 26965, 26966);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26978);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 26974, 26970, 26973, 26971, 26972);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 26977, 26975, 26976);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 26984);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 26983, 26981, 26982);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 26987, 26986);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 26999, 26988, 26998, 26992, 26989, 26993, 26996, 26994, 26997);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFEQ_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfeq_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFEQ_VF --------------------------------------------------------------------
static InstructionDefinition vmfeq_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfeq_vf",
	(uint32_t) 0x60005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFEQ_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 484);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27080);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27005, 27004);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27010, 27009);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27015, 27014);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27022, 27021, 27019, 27020);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27028, 27027, 27024, 27025, 27026);\n";
cp.code() += "etiss_uint32 ret = vmfeq_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27043, 27042, 27030, 27031, 27032, 27033, 27034, 27035, 27036, 27037, 27038, 27039, 27041);\n";
cp.code() += "etiss_coverage_count(1, 27044);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27047, 27045, 27046);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27058);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27054, 27050, 27053, 27051, 27052);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27057, 27055, 27056);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27064);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27063, 27061, 27062);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27067, 27066);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27079, 27068, 27078, 27072, 27069, 27073, 27076, 27074, 27077);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFEQ_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfeq_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFNE_VV --------------------------------------------------------------------
static InstructionDefinition vmfne_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfne_vv",
	(uint32_t) 0x70001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFNE_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 485);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27158);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27085, 27084);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27090, 27089);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27095, 27094);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27102, 27101, 27099, 27100);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27108, 27107, 27104, 27105, 27106);\n";
cp.code() += "etiss_uint32 ret = vmfne_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 27121, 27120, 27110, 27111, 27112, 27113, 27114, 27115, 27116, 27117, 27118, 27119);\n";
cp.code() += "etiss_coverage_count(1, 27122);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27125, 27123, 27124);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27136);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27132, 27128, 27131, 27129, 27130);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27135, 27133, 27134);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27142);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27141, 27139, 27140);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27145, 27144);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27157, 27146, 27156, 27150, 27147, 27151, 27154, 27152, 27155);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFNE_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfne_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFNE_VF --------------------------------------------------------------------
static InstructionDefinition vmfne_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfne_vf",
	(uint32_t) 0x70005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFNE_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 486);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27238);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27163, 27162);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27168, 27167);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27173, 27172);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27180, 27179, 27177, 27178);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27186, 27185, 27182, 27183, 27184);\n";
cp.code() += "etiss_uint32 ret = vmfne_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27201, 27200, 27188, 27189, 27190, 27191, 27192, 27193, 27194, 27195, 27196, 27197, 27199);\n";
cp.code() += "etiss_coverage_count(1, 27202);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27205, 27203, 27204);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27216);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27212, 27208, 27211, 27209, 27210);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27215, 27213, 27214);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27222);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27221, 27219, 27220);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27225, 27224);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27237, 27226, 27236, 27230, 27227, 27231, 27234, 27232, 27235);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFNE_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfne_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFLT_VV --------------------------------------------------------------------
static InstructionDefinition vmflt_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmflt_vv",
	(uint32_t) 0x6c001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFLT_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 487);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27316);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27243, 27242);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27248, 27247);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27253, 27252);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27260, 27259, 27257, 27258);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27266, 27265, 27262, 27263, 27264);\n";
cp.code() += "etiss_uint32 ret = vmflt_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 27279, 27278, 27268, 27269, 27270, 27271, 27272, 27273, 27274, 27275, 27276, 27277);\n";
cp.code() += "etiss_coverage_count(1, 27280);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27283, 27281, 27282);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27294);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27290, 27286, 27289, 27287, 27288);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27293, 27291, 27292);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27300);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27299, 27297, 27298);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27303, 27302);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27315, 27304, 27314, 27308, 27305, 27309, 27312, 27310, 27313);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFLT_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmflt_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFLT_VF --------------------------------------------------------------------
static InstructionDefinition vmflt_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmflt_vf",
	(uint32_t) 0x6c005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFLT_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 488);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27396);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27321, 27320);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27326, 27325);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27331, 27330);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27338, 27337, 27335, 27336);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27344, 27343, 27340, 27341, 27342);\n";
cp.code() += "etiss_uint32 ret = vmflt_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27359, 27358, 27346, 27347, 27348, 27349, 27350, 27351, 27352, 27353, 27354, 27355, 27357);\n";
cp.code() += "etiss_coverage_count(1, 27360);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27363, 27361, 27362);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27374);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27370, 27366, 27369, 27367, 27368);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27373, 27371, 27372);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27380);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27379, 27377, 27378);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27383, 27382);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27395, 27384, 27394, 27388, 27385, 27389, 27392, 27390, 27393);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFLT_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmflt_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFLE_VV --------------------------------------------------------------------
static InstructionDefinition vmfle_vv_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfle_vv",
	(uint32_t) 0x64001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFLE_VV\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 489);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27474);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27401, 27400);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27406, 27405);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27411, 27410);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27418, 27417, 27415, 27416);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27424, 27423, 27420, 27421, 27422);\n";
cp.code() += "etiss_uint32 ret = vmfle_vv(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 27437, 27436, 27426, 27427, 27428, 27429, 27430, 27431, 27432, 27433, 27434, 27435);\n";
cp.code() += "etiss_coverage_count(1, 27438);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27441, 27439, 27440);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27452);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27448, 27444, 27447, 27445, 27446);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27451, 27449, 27450);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27458);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27457, 27455, 27456);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27461, 27460);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27473, 27462, 27472, 27466, 27463, 27467, 27470, 27468, 27471);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFLE_VV\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfle_vv" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFLE_VF --------------------------------------------------------------------
static InstructionDefinition vmfle_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfle_vf",
	(uint32_t) 0x64005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFLE_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 490);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27554);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27479, 27478);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27484, 27483);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27489, 27488);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27496, 27495, 27493, 27494);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27502, 27501, 27498, 27499, 27500);\n";
cp.code() += "etiss_uint32 ret = vmfle_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27517, 27516, 27504, 27505, 27506, 27507, 27508, 27509, 27510, 27511, 27512, 27513, 27515);\n";
cp.code() += "etiss_coverage_count(1, 27518);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27521, 27519, 27520);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27532);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27528, 27524, 27527, 27525, 27526);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27531, 27529, 27530);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27538);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27537, 27535, 27536);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27541, 27540);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27553, 27542, 27552, 27546, 27543, 27547, 27550, 27548, 27551);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFLE_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfle_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFGT_VF --------------------------------------------------------------------
static InstructionDefinition vmfgt_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfgt_vf",
	(uint32_t) 0x74005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFGT_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 491);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27634);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27559, 27558);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27564, 27563);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27569, 27568);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27576, 27575, 27573, 27574);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27582, 27581, 27578, 27579, 27580);\n";
cp.code() += "etiss_uint32 ret = vmfgt_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27597, 27596, 27584, 27585, 27586, 27587, 27588, 27589, 27590, 27591, 27592, 27593, 27595);\n";
cp.code() += "etiss_coverage_count(1, 27598);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27601, 27599, 27600);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27612);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27608, 27604, 27607, 27605, 27606);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27611, 27609, 27610);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27618);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27617, 27615, 27616);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27621, 27620);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27633, 27622, 27632, 27626, 27623, 27627, 27630, 27628, 27631);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFGT_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfgt_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VMFGE_VF --------------------------------------------------------------------
static InstructionDefinition vmfge_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vmfge_vf",
	(uint32_t) 0x7c005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VMFGE_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 492);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27714);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27639, 27638);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27644, 27643);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27649, 27648);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27656, 27655, 27653, 27654);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27662, 27661, 27658, 27659, 27660);\n";
cp.code() += "etiss_uint32 ret = vmfge_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(13, 27677, 27676, 27664, 27665, 27666, 27667, 27668, 27669, 27670, 27671, 27672, 27673, 27675);\n";
cp.code() += "etiss_coverage_count(1, 27678);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27681, 27679, 27680);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27692);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27688, 27684, 27687, 27685, 27686);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27691, 27689, 27690);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27698);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27697, 27695, 27696);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27701, 27700);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27713, 27702, 27712, 27706, 27703, 27707, 27710, 27708, 27711);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VMFGE_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vmfge_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCLASS_V -------------------------------------------------------------------
static InstructionDefinition vfclass_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfclass_v",
	(uint32_t) 0x4c081057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCLASS_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 493);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27791);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27719, 27718);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27724, 27723);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27729, 27728);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27736, 27735, 27733, 27734);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27742, 27741, 27738, 27739, 27740);\n";
cp.code() += "etiss_uint32 ret = vfclass_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 27754, 27753, 27744, 27745, 27746, 27747, 27748, 27749, 27750, 27751, 27752);\n";
cp.code() += "etiss_coverage_count(1, 27755);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27758, 27756, 27757);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27769);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27765, 27761, 27764, 27762, 27763);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27768, 27766, 27767);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27775);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27774, 27772, 27773);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27778, 27777);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27790, 27779, 27789, 27783, 27780, 27784, 27787, 27785, 27788);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCLASS_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfclass_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMERGE_VFM -----------------------------------------------------------------
static InstructionDefinition vfmerge_vfm_vd_rs1_vs2 (
	ISA32_RV32IMACFDV,
	"vfmerge_vfm",
	(uint32_t) 0x5c005057,
	(uint32_t) 0xfe00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMERGE_VFM\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 494);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27863);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27796, 27795);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27801, 27800);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27806, 27805);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27813, 27812, 27810, 27811);\n";
cp.code() += "etiss_uint32 ret = vfmerge_vfm(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(11, 27826, 27825, 27815, 27816, 27817, 27818, 27819, 27820, 27821, 27822, 27823);\n";
cp.code() += "etiss_coverage_count(1, 27827);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27830, 27828, 27829);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27841);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27837, 27833, 27836, 27834, 27835);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27840, 27838, 27839);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27847);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27846, 27844, 27845);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27850, 27849);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27862, 27851, 27861, 27855, 27852, 27856, 27859, 27857, 27860);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMERGE_VFM\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmerge_vfm" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMV_V_F --------------------------------------------------------------------
static InstructionDefinition vfmv_v_f_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vfmv_v_f",
	(uint32_t) 0x5e005057,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMV_V_F\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 495);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 27934);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27868, 27867);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27873, 27872);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27878, 27877);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27885, 27884, 27882, 27883);\n";
cp.code() += "etiss_uint32 ret = vfmv_v_f(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vd) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(10, 27897, 27896, 27887, 27888, 27889, 27890, 27891, 27892, 27893, 27894);\n";
cp.code() += "etiss_coverage_count(1, 27898);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27901, 27899, 27900);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27912);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27908, 27904, 27907, 27905, 27906);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27911, 27909, 27910);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27918);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27917, 27915, 27916);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27921, 27920);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 27933, 27922, 27932, 27926, 27923, 27927, 27930, 27928, 27931);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFMV_V_F\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmv_v_f" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_XU_F_V ----------------------------------------------------------------
static InstructionDefinition vfcvt_xu_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_xu_f_v",
	(uint32_t) 0x48001057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_XU_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 496);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28011);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 27939, 27938);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 27944, 27943);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 27949, 27948);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 27956, 27955, 27953, 27954);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 27962, 27961, 27958, 27959, 27960);\n";
cp.code() += "etiss_uint32 ret = vfcvt_xu_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 27974, 27973, 27964, 27965, 27966, 27967, 27968, 27969, 27970, 27971, 27972);\n";
cp.code() += "etiss_coverage_count(1, 27975);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 27978, 27976, 27977);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27989);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 27985, 27981, 27984, 27982, 27983);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 27988, 27986, 27987);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 27995);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 27994, 27992, 27993);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 27998, 27997);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28010, 27999, 28009, 28003, 28000, 28004, 28007, 28005, 28008);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_XU_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_xu_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_X_F_V -----------------------------------------------------------------
static InstructionDefinition vfcvt_x_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_x_f_v",
	(uint32_t) 0x48009057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_X_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 497);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28088);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28016, 28015);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28021, 28020);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28026, 28025);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28033, 28032, 28030, 28031);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28039, 28038, 28035, 28036, 28037);\n";
cp.code() += "etiss_uint32 ret = vfcvt_x_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28051, 28050, 28041, 28042, 28043, 28044, 28045, 28046, 28047, 28048, 28049);\n";
cp.code() += "etiss_coverage_count(1, 28052);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28055, 28053, 28054);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28066);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28062, 28058, 28061, 28059, 28060);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28065, 28063, 28064);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28072);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28071, 28069, 28070);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28075, 28074);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28087, 28076, 28086, 28080, 28077, 28081, 28084, 28082, 28085);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_X_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_x_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_RTZ_XU_F_V ------------------------------------------------------------
static InstructionDefinition vfcvt_rtz_xu_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_rtz_xu_f_v",
	(uint32_t) 0x48031057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_RTZ_XU_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 498);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28165);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28093, 28092);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28098, 28097);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28103, 28102);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28110, 28109, 28107, 28108);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28116, 28115, 28112, 28113, 28114);\n";
cp.code() += "etiss_uint32 ret = vfcvt_rtz_xu_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28128, 28127, 28118, 28119, 28120, 28121, 28122, 28123, 28124, 28125, 28126);\n";
cp.code() += "etiss_coverage_count(1, 28129);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28132, 28130, 28131);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28143);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28139, 28135, 28138, 28136, 28137);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28142, 28140, 28141);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28149);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28148, 28146, 28147);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28152, 28151);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28164, 28153, 28163, 28157, 28154, 28158, 28161, 28159, 28162);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_RTZ_XU_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_rtz_xu_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_RTZ_X_F_V -------------------------------------------------------------
static InstructionDefinition vfcvt_rtz_x_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_rtz_x_f_v",
	(uint32_t) 0x48039057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_RTZ_X_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 499);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28242);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28170, 28169);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28175, 28174);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28180, 28179);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28187, 28186, 28184, 28185);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28193, 28192, 28189, 28190, 28191);\n";
cp.code() += "etiss_uint32 ret = vfcvt_rtz_x_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28205, 28204, 28195, 28196, 28197, 28198, 28199, 28200, 28201, 28202, 28203);\n";
cp.code() += "etiss_coverage_count(1, 28206);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28209, 28207, 28208);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28220);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28216, 28212, 28215, 28213, 28214);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28219, 28217, 28218);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28226);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28225, 28223, 28224);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28229, 28228);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28241, 28230, 28240, 28234, 28231, 28235, 28238, 28236, 28239);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_RTZ_X_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_rtz_x_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_F_XU_V ----------------------------------------------------------------
static InstructionDefinition vfcvt_f_xu_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_f_xu_v",
	(uint32_t) 0x48011057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_F_XU_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 500);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28319);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28247, 28246);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28252, 28251);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28257, 28256);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28264, 28263, 28261, 28262);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28270, 28269, 28266, 28267, 28268);\n";
cp.code() += "etiss_uint32 ret = vfcvt_f_xu_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28282, 28281, 28272, 28273, 28274, 28275, 28276, 28277, 28278, 28279, 28280);\n";
cp.code() += "etiss_coverage_count(1, 28283);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28286, 28284, 28285);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28297);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28293, 28289, 28292, 28290, 28291);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28296, 28294, 28295);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28303);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28302, 28300, 28301);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28306, 28305);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28318, 28307, 28317, 28311, 28308, 28312, 28315, 28313, 28316);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_F_XU_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_f_xu_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFCVT_F_X_V -----------------------------------------------------------------
static InstructionDefinition vfcvt_f_x_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfcvt_f_x_v",
	(uint32_t) 0x48019057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFCVT_F_X_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 501);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28396);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28324, 28323);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28329, 28328);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28334, 28333);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28341, 28340, 28338, 28339);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28347, 28346, 28343, 28344, 28345);\n";
cp.code() += "etiss_uint32 ret = vfcvt_f_x_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28359, 28358, 28349, 28350, 28351, 28352, 28353, 28354, 28355, 28356, 28357);\n";
cp.code() += "etiss_coverage_count(1, 28360);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28363, 28361, 28362);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28374);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28370, 28366, 28369, 28367, 28368);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28373, 28371, 28372);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28380);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28379, 28377, 28378);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28383, 28382);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28395, 28384, 28394, 28388, 28385, 28389, 28392, 28390, 28393);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFCVT_F_X_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfcvt_f_x_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_XU_F_V ---------------------------------------------------------------
static InstructionDefinition vfwcvt_xu_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_xu_f_v",
	(uint32_t) 0x48041057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_XU_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 502);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28473);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28401, 28400);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28406, 28405);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28411, 28410);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28418, 28417, 28415, 28416);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28424, 28423, 28420, 28421, 28422);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_xu_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28436, 28435, 28426, 28427, 28428, 28429, 28430, 28431, 28432, 28433, 28434);\n";
cp.code() += "etiss_coverage_count(1, 28437);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28440, 28438, 28439);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28451);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28447, 28443, 28446, 28444, 28445);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28450, 28448, 28449);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28457);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28456, 28454, 28455);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28460, 28459);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28472, 28461, 28471, 28465, 28462, 28466, 28469, 28467, 28470);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_XU_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_xu_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_X_F_V ----------------------------------------------------------------
static InstructionDefinition vfwcvt_x_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_x_f_v",
	(uint32_t) 0x48049057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_X_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 503);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28550);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28478, 28477);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28483, 28482);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28488, 28487);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28495, 28494, 28492, 28493);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28501, 28500, 28497, 28498, 28499);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_x_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28513, 28512, 28503, 28504, 28505, 28506, 28507, 28508, 28509, 28510, 28511);\n";
cp.code() += "etiss_coverage_count(1, 28514);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28517, 28515, 28516);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28528);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28524, 28520, 28523, 28521, 28522);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28527, 28525, 28526);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28534);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28533, 28531, 28532);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28537, 28536);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28549, 28538, 28548, 28542, 28539, 28543, 28546, 28544, 28547);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_X_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_x_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_RTZ_XU_F_V -----------------------------------------------------------
static InstructionDefinition vfwcvt_rtz_xu_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_rtz_xu_f_v",
	(uint32_t) 0x48071057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_RTZ_XU_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 504);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28627);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28555, 28554);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28560, 28559);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28565, 28564);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28572, 28571, 28569, 28570);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28578, 28577, 28574, 28575, 28576);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_rtz_xu_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28590, 28589, 28580, 28581, 28582, 28583, 28584, 28585, 28586, 28587, 28588);\n";
cp.code() += "etiss_coverage_count(1, 28591);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28594, 28592, 28593);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28605);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28601, 28597, 28600, 28598, 28599);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28604, 28602, 28603);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28611);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28610, 28608, 28609);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28614, 28613);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28626, 28615, 28625, 28619, 28616, 28620, 28623, 28621, 28624);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_RTZ_XU_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_rtz_xu_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_RTZ_X_F_V ------------------------------------------------------------
static InstructionDefinition vfwcvt_rtz_x_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_rtz_x_f_v",
	(uint32_t) 0x48079057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_RTZ_X_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 505);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28704);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28632, 28631);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28637, 28636);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28642, 28641);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28649, 28648, 28646, 28647);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28655, 28654, 28651, 28652, 28653);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_rtz_x_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28667, 28666, 28657, 28658, 28659, 28660, 28661, 28662, 28663, 28664, 28665);\n";
cp.code() += "etiss_coverage_count(1, 28668);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28671, 28669, 28670);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28682);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28678, 28674, 28677, 28675, 28676);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28681, 28679, 28680);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28688);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28687, 28685, 28686);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28691, 28690);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28703, 28692, 28702, 28696, 28693, 28697, 28700, 28698, 28701);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_RTZ_X_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_rtz_x_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_F_XU_V ---------------------------------------------------------------
static InstructionDefinition vfwcvt_f_xu_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_f_xu_v",
	(uint32_t) 0x48051057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_F_XU_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 506);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28781);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28709, 28708);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28714, 28713);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28719, 28718);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28726, 28725, 28723, 28724);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28732, 28731, 28728, 28729, 28730);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_f_xu_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28744, 28743, 28734, 28735, 28736, 28737, 28738, 28739, 28740, 28741, 28742);\n";
cp.code() += "etiss_coverage_count(1, 28745);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28748, 28746, 28747);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28759);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28755, 28751, 28754, 28752, 28753);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28758, 28756, 28757);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28765);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28764, 28762, 28763);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28768, 28767);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28780, 28769, 28779, 28773, 28770, 28774, 28777, 28775, 28778);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_F_XU_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_f_xu_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_F_X_V ----------------------------------------------------------------
static InstructionDefinition vfwcvt_f_x_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_f_x_v",
	(uint32_t) 0x48059057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_F_X_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 507);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28858);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28786, 28785);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28791, 28790);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28796, 28795);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28803, 28802, 28800, 28801);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28809, 28808, 28805, 28806, 28807);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_f_x_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28821, 28820, 28811, 28812, 28813, 28814, 28815, 28816, 28817, 28818, 28819);\n";
cp.code() += "etiss_coverage_count(1, 28822);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28825, 28823, 28824);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28836);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28832, 28828, 28831, 28829, 28830);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28835, 28833, 28834);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28842);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28841, 28839, 28840);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28845, 28844);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28857, 28846, 28856, 28850, 28847, 28851, 28854, 28852, 28855);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_F_X_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_f_x_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWCVT_F_F_V ----------------------------------------------------------------
static InstructionDefinition vfwcvt_f_f_v_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwcvt_f_f_v",
	(uint32_t) 0x48061057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWCVT_F_F_V\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 508);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 28935);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28863, 28862);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28868, 28867);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28873, 28872);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28880, 28879, 28877, 28878);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28886, 28885, 28882, 28883, 28884);\n";
cp.code() += "etiss_uint32 ret = vfwcvt_f_f_v(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28898, 28897, 28888, 28889, 28890, 28891, 28892, 28893, 28894, 28895, 28896);\n";
cp.code() += "etiss_coverage_count(1, 28899);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28902, 28900, 28901);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28913);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28909, 28905, 28908, 28906, 28907);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28912, 28910, 28911);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28919);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28918, 28916, 28917);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28922, 28921);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 28934, 28923, 28933, 28927, 28924, 28928, 28931, 28929, 28932);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWCVT_F_F_V\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwcvt_f_f_v" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_XU_F_W ---------------------------------------------------------------
static InstructionDefinition vnfcvt_xu_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_xu_f_w",
	(uint32_t) 0x48081057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_XU_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 509);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29012);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 28940, 28939);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 28945, 28944);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 28950, 28949);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 28957, 28956, 28954, 28955);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 28963, 28962, 28959, 28960, 28961);\n";
cp.code() += "etiss_uint32 ret = vfncvt_xu_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 28975, 28974, 28965, 28966, 28967, 28968, 28969, 28970, 28971, 28972, 28973);\n";
cp.code() += "etiss_coverage_count(1, 28976);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 28979, 28977, 28978);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28990);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 28986, 28982, 28985, 28983, 28984);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 28989, 28987, 28988);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 28996);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 28995, 28993, 28994);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 28999, 28998);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29011, 29000, 29010, 29004, 29001, 29005, 29008, 29006, 29009);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_XU_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_xu_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_X_F_W ----------------------------------------------------------------
static InstructionDefinition vnfcvt_x_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_x_f_w",
	(uint32_t) 0x48089057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_X_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 510);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29089);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29017, 29016);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29022, 29021);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29027, 29026);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29034, 29033, 29031, 29032);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29040, 29039, 29036, 29037, 29038);\n";
cp.code() += "etiss_uint32 ret = vfncvt_x_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29052, 29051, 29042, 29043, 29044, 29045, 29046, 29047, 29048, 29049, 29050);\n";
cp.code() += "etiss_coverage_count(1, 29053);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29056, 29054, 29055);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29067);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29063, 29059, 29062, 29060, 29061);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29066, 29064, 29065);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29073);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29072, 29070, 29071);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29076, 29075);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29088, 29077, 29087, 29081, 29078, 29082, 29085, 29083, 29086);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_X_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_x_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_RTZ_XU_F_W -----------------------------------------------------------
static InstructionDefinition vnfcvt_rtz_xu_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_rtz_xu_f_w",
	(uint32_t) 0x480b1057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_RTZ_XU_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 511);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29166);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29094, 29093);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29099, 29098);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29104, 29103);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29111, 29110, 29108, 29109);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29117, 29116, 29113, 29114, 29115);\n";
cp.code() += "etiss_uint32 ret = vfncvt_rtz_xu_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29129, 29128, 29119, 29120, 29121, 29122, 29123, 29124, 29125, 29126, 29127);\n";
cp.code() += "etiss_coverage_count(1, 29130);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29133, 29131, 29132);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29144);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29140, 29136, 29139, 29137, 29138);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29143, 29141, 29142);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29150);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29149, 29147, 29148);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29153, 29152);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29165, 29154, 29164, 29158, 29155, 29159, 29162, 29160, 29163);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_RTZ_XU_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_rtz_xu_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_RTZ_X_F_W ------------------------------------------------------------
static InstructionDefinition vnfcvt_rtz_x_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_rtz_x_f_w",
	(uint32_t) 0x480b9057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_RTZ_X_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 512);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29243);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29171, 29170);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29176, 29175);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29181, 29180);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29188, 29187, 29185, 29186);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29194, 29193, 29190, 29191, 29192);\n";
cp.code() += "etiss_uint32 ret = vfncvt_rtz_x_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29206, 29205, 29196, 29197, 29198, 29199, 29200, 29201, 29202, 29203, 29204);\n";
cp.code() += "etiss_coverage_count(1, 29207);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29210, 29208, 29209);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29221);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29217, 29213, 29216, 29214, 29215);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29220, 29218, 29219);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29227);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29226, 29224, 29225);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29230, 29229);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29242, 29231, 29241, 29235, 29232, 29236, 29239, 29237, 29240);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_RTZ_X_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_rtz_x_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_F_XU_W ---------------------------------------------------------------
static InstructionDefinition vnfcvt_f_xu_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_f_xu_w",
	(uint32_t) 0x48091057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_F_XU_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 513);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29320);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29248, 29247);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29253, 29252);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29258, 29257);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29265, 29264, 29262, 29263);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29271, 29270, 29267, 29268, 29269);\n";
cp.code() += "etiss_uint32 ret = vfncvt_f_xu_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29283, 29282, 29273, 29274, 29275, 29276, 29277, 29278, 29279, 29280, 29281);\n";
cp.code() += "etiss_coverage_count(1, 29284);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29287, 29285, 29286);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29298);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29294, 29290, 29293, 29291, 29292);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29297, 29295, 29296);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29304);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29303, 29301, 29302);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29307, 29306);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29319, 29308, 29318, 29312, 29309, 29313, 29316, 29314, 29317);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_F_XU_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_f_xu_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_F_X_W ----------------------------------------------------------------
static InstructionDefinition vnfcvt_f_x_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_f_x_w",
	(uint32_t) 0x48099057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_F_X_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 514);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29397);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29325, 29324);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29330, 29329);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29335, 29334);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29342, 29341, 29339, 29340);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29348, 29347, 29344, 29345, 29346);\n";
cp.code() += "etiss_uint32 ret = vfncvt_f_x_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29360, 29359, 29350, 29351, 29352, 29353, 29354, 29355, 29356, 29357, 29358);\n";
cp.code() += "etiss_coverage_count(1, 29361);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29364, 29362, 29363);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29375);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29371, 29367, 29370, 29368, 29369);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29374, 29372, 29373);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29381);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29380, 29378, 29379);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29384, 29383);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29396, 29385, 29395, 29389, 29386, 29390, 29393, 29391, 29394);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_F_X_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_f_x_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_F_F_W ----------------------------------------------------------------
static InstructionDefinition vnfcvt_f_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_f_f_w",
	(uint32_t) 0x480a1057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_F_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 515);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29474);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29402, 29401);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29407, 29406);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29412, 29411);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29419, 29418, 29416, 29417);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29425, 29424, 29421, 29422, 29423);\n";
cp.code() += "etiss_uint32 ret = vfncvt_f_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29437, 29436, 29427, 29428, 29429, 29430, 29431, 29432, 29433, 29434, 29435);\n";
cp.code() += "etiss_coverage_count(1, 29438);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29441, 29439, 29440);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29452);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29448, 29444, 29447, 29445, 29446);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29451, 29449, 29450);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29458);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29457, 29455, 29456);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29461, 29460);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29473, 29462, 29472, 29466, 29463, 29467, 29470, 29468, 29471);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_F_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_f_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VNFCVT_ROD_F_F_W ------------------------------------------------------------
static InstructionDefinition vnfcvt_rod_f_f_w_vd_vs2_vm (
	ISA32_RV32IMACFDV,
	"vnfcvt_rod_f_f_w",
	(uint32_t) 0x480a9057,
	(uint32_t) 0xfc0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VNFCVT_ROD_F_F_W\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 516);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29551);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29479, 29478);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29484, 29483);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29489, 29488);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29496, 29495, 29493, 29494);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29502, 29501, 29498, 29499, 29500);\n";
cp.code() += "etiss_uint32 ret = vfncvt_rod_f_f_w(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(11, 29514, 29513, 29504, 29505, 29506, 29507, 29508, 29509, 29510, 29511, 29512);\n";
cp.code() += "etiss_coverage_count(1, 29515);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29518, 29516, 29517);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29529);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29525, 29521, 29524, 29522, 29523);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29528, 29526, 29527);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29535);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29534, 29532, 29533);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29538, 29537);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29550, 29539, 29549, 29543, 29540, 29544, 29547, 29545, 29548);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VNFCVT_ROD_F_F_W\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vnfcvt_rod_f_f_w" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFREDOSUM_VS ----------------------------------------------------------------
static InstructionDefinition vfredosum_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfredosum_vs",
	(uint32_t) 0xc001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFREDOSUM_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 517);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29629);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29556, 29555);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29561, 29560);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29566, 29565);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29573, 29572, 29570, 29571);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29579, 29578, 29575, 29576, 29577);\n";
cp.code() += "etiss_uint32 ret = vfredosum_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29592, 29591, 29581, 29582, 29583, 29584, 29585, 29586, 29587, 29588, 29589, 29590);\n";
cp.code() += "etiss_coverage_count(1, 29593);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29596, 29594, 29595);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29607);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29603, 29599, 29602, 29600, 29601);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29606, 29604, 29605);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29613);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29612, 29610, 29611);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29616, 29615);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29628, 29617, 29627, 29621, 29618, 29622, 29625, 29623, 29626);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFREDOSUM_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfredosum_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFREDUSUM_VS ----------------------------------------------------------------
static InstructionDefinition vfredusum_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfredusum_vs",
	(uint32_t) 0x4001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFREDUSUM_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 518);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29707);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29634, 29633);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29639, 29638);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29644, 29643);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29651, 29650, 29648, 29649);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29657, 29656, 29653, 29654, 29655);\n";
cp.code() += "etiss_uint32 ret = vfredusum_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29670, 29669, 29659, 29660, 29661, 29662, 29663, 29664, 29665, 29666, 29667, 29668);\n";
cp.code() += "etiss_coverage_count(1, 29671);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29674, 29672, 29673);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29685);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29681, 29677, 29680, 29678, 29679);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29684, 29682, 29683);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29691);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29690, 29688, 29689);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29694, 29693);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29706, 29695, 29705, 29699, 29696, 29700, 29703, 29701, 29704);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFREDUSUM_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfredusum_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFREDMAX_VS -----------------------------------------------------------------
static InstructionDefinition vfredmax_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfredmax_vs",
	(uint32_t) 0x1c001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFREDMAX_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 519);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29785);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29712, 29711);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29717, 29716);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29722, 29721);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29729, 29728, 29726, 29727);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29735, 29734, 29731, 29732, 29733);\n";
cp.code() += "etiss_uint32 ret = vfredmax_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29748, 29747, 29737, 29738, 29739, 29740, 29741, 29742, 29743, 29744, 29745, 29746);\n";
cp.code() += "etiss_coverage_count(1, 29749);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29752, 29750, 29751);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29763);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29759, 29755, 29758, 29756, 29757);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29762, 29760, 29761);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29769);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29768, 29766, 29767);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29772, 29771);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29784, 29773, 29783, 29777, 29774, 29778, 29781, 29779, 29782);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFREDMAX_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfredmax_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFREDMIN_VS -----------------------------------------------------------------
static InstructionDefinition vfredmin_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfredmin_vs",
	(uint32_t) 0x14001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFREDMIN_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 520);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29863);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29790, 29789);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29795, 29794);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29800, 29799);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29807, 29806, 29804, 29805);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29813, 29812, 29809, 29810, 29811);\n";
cp.code() += "etiss_uint32 ret = vfredmin_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29826, 29825, 29815, 29816, 29817, 29818, 29819, 29820, 29821, 29822, 29823, 29824);\n";
cp.code() += "etiss_coverage_count(1, 29827);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29830, 29828, 29829);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29841);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29837, 29833, 29836, 29834, 29835);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29840, 29838, 29839);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29847);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29846, 29844, 29845);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29850, 29849);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29862, 29851, 29861, 29855, 29852, 29856, 29859, 29857, 29860);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFREDMIN_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfredmin_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWREDOSUM_VS ---------------------------------------------------------------
static InstructionDefinition vfwredosum_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwredosum_vs",
	(uint32_t) 0xcc001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWREDOSUM_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 521);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 29941);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29868, 29867);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29873, 29872);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29878, 29877);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29885, 29884, 29882, 29883);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29891, 29890, 29887, 29888, 29889);\n";
cp.code() += "etiss_uint32 ret = vfwredosum_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29904, 29903, 29893, 29894, 29895, 29896, 29897, 29898, 29899, 29900, 29901, 29902);\n";
cp.code() += "etiss_coverage_count(1, 29905);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29908, 29906, 29907);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29919);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29915, 29911, 29914, 29912, 29913);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29918, 29916, 29917);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29925);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 29924, 29922, 29923);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 29928, 29927);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 29940, 29929, 29939, 29933, 29930, 29934, 29937, 29935, 29938);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWREDOSUM_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwredosum_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFWREDUSUM_VS ---------------------------------------------------------------
static InstructionDefinition vfwredusum_vs_vd_vs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfwredusum_vs",
	(uint32_t) 0xc4001057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFWREDUSUM_VS\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 522);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 30019);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 29946, 29945);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 29951, 29950);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 29956, 29955);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 29963, 29962, 29960, 29961);\n";
cp.code() += "etiss_uint32 _rounding_mode = (((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL);\n";
cp.code() += "etiss_coverage_count(5, 29969, 29968, 29965, 29966, 29967);\n";
cp.code() += "etiss_uint32 ret = vfwredusum_vs(((RV32IMACFDV*)cpu)->V, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs1) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, _rounding_mode);\n";
cp.code() += "etiss_coverage_count(12, 29982, 29981, 29971, 29972, 29973, 29974, 29975, 29976, 29977, 29978, 29979, 29980);\n";
cp.code() += "etiss_coverage_count(1, 29983);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 29986, 29984, 29985);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 29997);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 29993, 29989, 29992, 29990, 29991);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 29996, 29994, 29995);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30003);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 30002, 30000, 30001);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "etiss_uint32 flags = fget_flags();\n";
cp.code() += "etiss_coverage_count(2, 30006, 30005);\n";
cp.code() += "((RV32IMACFDV*)cpu)->FCSR = (((RV32IMACFDV*)cpu)->FCSR & -32LL) | (flags & 31ULL);\n";
cp.code() += "etiss_coverage_count(9, 30018, 30007, 30017, 30011, 30008, 30012, 30015, 30013, 30016);\n";
cp.code() += "} // block\n";
} // block
cp.code() += "instr_exit_" + std::to_string(ic.current_address_) + ":\n";
cp.code() += "cpu->instructionPointer = cpu->nextPc;\n";
// -----------------------------------------------------------------------------
		cp.getAffectedRegisters().add("instructionPointer", 32);
	}
	{
		CodePart & cp = cs.append(CodePart::APPENDEDRETURNINGREQUIRED);

		cp.code() = std::string("//VFWREDUSUM_VS\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 vs1 = 0;
static BitArrayRange R_vs1_0(19, 15);
vs1 += R_vs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfwredusum_vs" << " # " << ba << (" [vd=" + std::to_string(vd) + " | vs1=" + std::to_string(vs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMV_F_S --------------------------------------------------------------------
static InstructionDefinition vfmv_f_s_rd_vs2 (
	ISA32_RV32IMACFDV,
	"vfmv_f_s",
	(uint32_t) 0x42001057,
	(uint32_t) 0xfe0ff07f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMV_F_S\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 523);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 30075);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 30024, 30023);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 30029, 30028);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 30034, 30033);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 30041, 30040, 30038, 30039);\n";
cp.code() += "etiss_uint32 ret = vfmv_f_s(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(rd) + "ULL, " + std::to_string(vs2) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(10, 30053, 30052, 30043, 30044, 30045, 30046, 30047, 30048, 30049, 30050);\n";
cp.code() += "etiss_coverage_count(1, 30054);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 30057, 30055, 30056);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30068);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 30064, 30060, 30063, 30061, 30062);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 30067, 30065, 30066);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30074);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 30073, 30071, 30072);\n";
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

		cp.code() = std::string("//VFMV_F_S\n");

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
etiss_uint8 rd = 0;
static BitArrayRange R_rd_0(11, 7);
rd += R_rd_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmv_f_s" << " # " << ba << (" [rd=" + std::to_string(rd) + " | vs2=" + std::to_string(vs2) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFMV_S_F --------------------------------------------------------------------
static InstructionDefinition vfmv_s_f_vd_rs1 (
	ISA32_RV32IMACFDV,
	"vfmv_s_f",
	(uint32_t) 0x42005057,
	(uint32_t) 0xfff0707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFMV_S_F\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 524);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 30131);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 30080, 30079);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 30085, 30084);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 30090, 30089);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 30097, 30096, 30094, 30095);\n";
cp.code() += "etiss_uint32 ret = vfmv_s_f(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vd) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(10, 30109, 30108, 30099, 30100, 30101, 30102, 30103, 30104, 30105, 30106);\n";
cp.code() += "etiss_coverage_count(1, 30110);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 30113, 30111, 30112);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30124);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 30120, 30116, 30119, 30117, 30118);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 30123, 30121, 30122);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30130);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 30129, 30127, 30128);\n";
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

		cp.code() = std::string("//VFMV_S_F\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfmv_s_f" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSLIDE1UP_VX ---------------------------------------------------------------
static InstructionDefinition vfslide1up_vx_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfslide1up_vx",
	(uint32_t) 0x38005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSLIDE1UP_VX\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 525);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 30189);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 30136, 30135);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 30141, 30140);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 30146, 30145);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 30153, 30152, 30150, 30151);\n";
cp.code() += "etiss_uint32 ret = vfslide1up_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(12, 30167, 30166, 30155, 30156, 30157, 30158, 30159, 30160, 30161, 30162, 30163, 30164);\n";
cp.code() += "etiss_coverage_count(1, 30168);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 30171, 30169, 30170);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30182);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 30178, 30174, 30177, 30175, 30176);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 30181, 30179, 30180);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30188);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 30187, 30185, 30186);\n";
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

		cp.code() = std::string("//VFSLIDE1UP_VX\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfslide1up_vx" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);

// VFSLIDE1DOWN_VF -------------------------------------------------------------
static InstructionDefinition vfslide1down_vf_vd_rs1_vs2_vm (
	ISA32_RV32IMACFDV,
	"vfslide1down_vf",
	(uint32_t) 0x3c005057,
	(uint32_t) 0xfc00707f,
	[] (BitArray & ba,etiss::CodeSet & cs,InstructionContext & ic)
	{

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// NOLINTBEGIN(clang-diagnostic-unused-but-set-variable)
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// NOLINTEND(clang-diagnostic-unused-but-set-variable)
// -----------------------------------------------------------------------------

	{
		CodePart & cp = cs.append(CodePart::INITIALREQUIRED);

		cp.code() = std::string("//VFSLIDE1DOWN_VF\n");

// -----------------------------------------------------------------------------
cp.code() += "etiss_coverage_count(1, 526);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 1519);\n";
cp.code() += "{ // block\n";
cp.code() += "cpu->nextPc = " + std::to_string(ic.current_address_ + 4) + "ULL;\n";
cp.code() += "etiss_coverage_count(5, 1518, 1514, 1517, 1515, 1516);\n";
cp.code() += "} // block\n";
} // block
{ // block
cp.code() += "etiss_coverage_count(1, 30247);\n";
cp.code() += "{ // block\n";
cp.code() += "etiss_uint32 _vtype = *((RV32IMACFDV*)cpu)->CSR[3105ULL];\n";
cp.code() += "etiss_coverage_count(2, 30194, 30193);\n";
cp.code() += "etiss_uint32 _vstart = *((RV32IMACFDV*)cpu)->CSR[8ULL];\n";
cp.code() += "etiss_coverage_count(2, 30199, 30198);\n";
cp.code() += "etiss_uint32 _vl = *((RV32IMACFDV*)cpu)->CSR[3104ULL];\n";
cp.code() += "etiss_coverage_count(2, 30204, 30203);\n";
cp.code() += "etiss_uint32 _vlen = *((RV32IMACFDV*)cpu)->CSR[3106ULL] * 8ULL;\n";
cp.code() += "etiss_coverage_count(4, 30211, 30210, 30208, 30209);\n";
cp.code() += "etiss_uint32 ret = vfslide1down_vf(((RV32IMACFDV*)cpu)->V, *((RV32IMACFDV*)cpu)->F, _vtype, " + std::to_string(vm) + "ULL, " + std::to_string(vd) + "ULL, " + std::to_string(vs2) + "ULL, " + std::to_string(rs1) + "ULL, _vstart, _vlen, _vl, 64ULL);\n";
cp.code() += "etiss_coverage_count(12, 30225, 30224, 30213, 30214, 30215, 30216, 30217, 30218, 30219, 30220, 30221, 30222);\n";
cp.code() += "etiss_coverage_count(1, 30226);\n";
cp.code() += "if (ret != 0LL) { // conditional\n";
cp.code() += "etiss_coverage_count(3, 30229, 30227, 30228);\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30240);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = ret >> 8ULL;\n";
cp.code() += "etiss_coverage_count(5, 30236, 30232, 30235, 30233, 30234);\n";
{ // procedure
cp.code() += "{ // procedure\n";
cp.code() += "RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2ULL);\n";
cp.code() += "etiss_coverage_count(3, 30239, 30237, 30238);\n";
cp.code() += "goto instr_exit_" + std::to_string(ic.current_address_) + ";\n";
cp.code() += "} // procedure\n";
} // procedure
cp.code() += "} // block\n";
} // block
cp.code() += "} // conditional\n";
cp.code() += "else { // conditional\n";
{ // block
cp.code() += "etiss_coverage_count(1, 30246);\n";
cp.code() += "{ // block\n";
cp.code() += "*((RV32IMACFDV*)cpu)->CSR[8ULL] = 0LL;\n";
cp.code() += "etiss_coverage_count(3, 30245, 30243, 30244);\n";
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

		cp.code() = std::string("//VFSLIDE1DOWN_VF\n");

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
etiss_uint8 vd = 0;
static BitArrayRange R_vd_0(11, 7);
vd += R_vd_0.read(ba) << 0;
etiss_uint8 rs1 = 0;
static BitArrayRange R_rs1_0(19, 15);
rs1 += R_rs1_0.read(ba) << 0;
etiss_uint8 vs2 = 0;
static BitArrayRange R_vs2_0(24, 20);
vs2 += R_vs2_0.read(ba) << 0;
etiss_uint8 vm = 0;
static BitArrayRange R_vm_0(25, 25);
vm += R_vm_0.read(ba) << 0;

// -----------------------------------------------------------------------------

		std::stringstream ss;
// -----------------------------------------------------------------------------
ss << "vfslide1down_vf" << " # " << ba << (" [vd=" + std::to_string(vd) + " | rs1=" + std::to_string(rs1) + " | vs2=" + std::to_string(vs2) + " | vm=" + std::to_string(vm) + "]");
// -----------------------------------------------------------------------------
		return ss.str();
	}
);
// clang-format on
