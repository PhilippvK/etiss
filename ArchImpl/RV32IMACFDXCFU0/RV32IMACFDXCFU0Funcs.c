/**
 * Generated on Wed, 16 Jul 2025 08:32:03 +0200.
 *
 * This file contains the function implementations for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Funcs.h"

etiss_uint8 RV32IMACFDXCFU0_extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension)
{
etiss_coverage_count(1, 80);
{ // block
etiss_coverage_count(1, 207);
etiss_coverage_count(1, 206);
return (*((RV32IMACFDXCFU0*)cpu)->CSR[769LL] >> (extension - 65ULL)) & 1ULL;
etiss_coverage_count(9, 205, 202, 197, 200, 198, 199, 201, 203, 204);
} // block
}

etiss_uint8 RV32IMACFDXCFU0_get_rm(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8 rm)
{
etiss_coverage_count(1, 87);
{ // block
etiss_coverage_count(1, 227);
etiss_coverage_count(1, 208);
if (rm == 7ULL) { // conditional
etiss_coverage_count(3, 211, 209, 210);
rm = ((((((RV32IMACFDXCFU0*)cpu)->FCSR) >> (5ULL)) & 7ULL)) & 0x7;
etiss_coverage_count(6, 217, 212, 216, 213, 214, 215);
} // conditional
etiss_coverage_count(1, 218);
if (rm > 4ULL) { // conditional
etiss_coverage_count(3, 221, 219, 220);
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);
etiss_coverage_count(2, 224, 222);
} // conditional
etiss_coverage_count(1, 226);
return rm;
etiss_coverage_count(1, 225);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_sstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 159);
{ // block
etiss_coverage_count(1, 300);
etiss_uint32 mask = 0LL;
etiss_coverage_count(2, 230, 229);
etiss_coverage_count(1, 231);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 83ULL)) { // conditional
etiss_coverage_count(2, 233, 232);
{ // block
etiss_coverage_count(1, 297);
mask = mask | 5767458ULL;
etiss_coverage_count(2, 249, 234);
etiss_coverage_count(1, 250);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 86ULL)) { // conditional
etiss_coverage_count(2, 252, 251);
mask = mask | 1536LL;
etiss_coverage_count(2, 255, 253);
} // conditional
etiss_coverage_count(1, 256);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 70ULL)) { // conditional
etiss_coverage_count(2, 258, 257);
mask = mask | 24576LL;
etiss_coverage_count(2, 261, 259);
} // conditional
etiss_coverage_count(1, 262);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 88ULL)) { // conditional
etiss_coverage_count(2, 264, 263);
mask = mask | 98304LL;
etiss_coverage_count(2, 267, 265);
} // conditional
etiss_coverage_count(1, 268);
if ((RV32IMACFDXCFU0_get_field(*((RV32IMACFDXCFU0*)cpu)->CSR[384LL], 2147483648ULL))) { // conditional
etiss_coverage_count(3, 278, 274, 280);
mask = mask | 262144LL;
etiss_coverage_count(2, 296, 294);
} // conditional
} // block
} // conditional
etiss_coverage_count(1, 299);
return mask;
etiss_coverage_count(1, 298);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_mstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 160);
{ // block
etiss_coverage_count(1, 315);
etiss_uint32 mask = 6280ULL;
etiss_coverage_count(1, 310);
etiss_coverage_count(1, 314);
return mask | RV32IMACFDXCFU0_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(3, 313, 311, 312);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
etiss_coverage_count(1, 161);
{ // block
etiss_coverage_count(1, 433);
etiss_coverage_count(1, 316);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 319, 317);
etiss_coverage_count(1, 325);
return *((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 31ULL;
etiss_coverage_count(3, 324, 322, 323);
} // conditional
etiss_coverage_count(1, 326);
if (csr == 2LL) { // conditional
etiss_coverage_count(2, 329, 327);
etiss_coverage_count(1, 338);
return (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] >> 5ULL) & 7ULL;
etiss_coverage_count(6, 337, 334, 332, 333, 335, 336);
} // conditional
etiss_coverage_count(1, 339);
if (csr == 3072LL) { // conditional
etiss_coverage_count(2, 342, 340);
etiss_coverage_count(1, 344);
return etiss_get_cycles(cpu, system, plugin_pointers);
etiss_coverage_count(1, 343);
} // conditional
etiss_coverage_count(1, 345);
if (csr == 3200LL) { // conditional
etiss_coverage_count(2, 348, 346);
etiss_coverage_count(1, 352);
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 351, 349, 350);
} // conditional
etiss_coverage_count(1, 353);
if (csr == 3073LL) { // conditional
etiss_coverage_count(2, 356, 354);
etiss_coverage_count(1, 358);
return etiss_get_time();
etiss_coverage_count(1, 357);
} // conditional
etiss_coverage_count(1, 359);
if (csr == 3201LL) { // conditional
etiss_coverage_count(2, 362, 360);
etiss_coverage_count(1, 366);
return etiss_get_time() >> 32ULL;
etiss_coverage_count(3, 365, 363, 364);
} // conditional
etiss_coverage_count(1, 367);
if (csr == 3074LL) { // conditional
etiss_coverage_count(2, 370, 368);
etiss_coverage_count(1, 372);
return etiss_get_instret(cpu, system, plugin_pointers);
etiss_coverage_count(1, 371);
} // conditional
etiss_coverage_count(1, 373);
if (csr == 3202LL) { // conditional
etiss_coverage_count(2, 376, 374);
etiss_coverage_count(1, 380);
return etiss_get_instret(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 379, 377, 378);
} // conditional
etiss_coverage_count(1, 381);
if (csr == 768LL || csr == 256LL) { // conditional
etiss_coverage_count(5, 388, 384, 382, 387, 385);
etiss_coverage_count(1, 408);
return *((RV32IMACFDXCFU0*)cpu)->CSR[768LL] | 8589934592ULL | 34359738368ULL;
etiss_coverage_count(3, 407, 399, 391);
} // conditional
etiss_coverage_count(1, 409);
if (csr == 769LL) { // conditional
etiss_coverage_count(2, 412, 410);
etiss_coverage_count(1, 428);
return (((1ULL) << 30) | (((*((RV32IMACFDXCFU0*)cpu)->CSR[769LL]) & 1073741823ULL)));
etiss_coverage_count(4, 427, 426, 421, 425);
} // conditional
etiss_coverage_count(1, 432);
return *((RV32IMACFDXCFU0*)cpu)->CSR[csr];
etiss_coverage_count(2, 431, 430);
} // block
}

void RV32IMACFDXCFU0_csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val)
{
etiss_coverage_count(1, 162);
{ // block
etiss_coverage_count(1, 515);
etiss_coverage_count(1, 434);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 437, 435);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 224ULL) | (val & 31ULL);
etiss_coverage_count(10, 470, 455, 469, 463, 458, 464, 467, 465, 466, 468);
} // conditional
 else if (csr == 2LL) { // conditional
etiss_coverage_count(2, 440, 438);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = ((val & 7ULL) << 5ULL) | (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 31ULL);
etiss_coverage_count(14, 488, 473, 487, 479, 476, 474, 475, 477, 478, 480, 485, 483, 484, 486);
} // conditional
 else if (csr == 3LL) { // conditional
etiss_coverage_count(2, 443, 441);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = val & 255ULL;
etiss_coverage_count(5, 495, 491, 494, 492, 493);
} // conditional
 else if (csr == 768LL) { // conditional
etiss_coverage_count(2, 446, 444);
*((RV32IMACFDXCFU0*)cpu)->CSR[768LL] = val & RV32IMACFDXCFU0_mstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 502, 498, 501, 499, 500);
} // conditional
 else if (csr == 256LL) { // conditional
etiss_coverage_count(2, 449, 447);
*((RV32IMACFDXCFU0*)cpu)->CSR[768LL] = val & RV32IMACFDXCFU0_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 509, 505, 508, 506, 507);
} // conditional
 else if (csr != 769LL) { // conditional
etiss_coverage_count(2, 452, 450);
*((RV32IMACFDXCFU0*)cpu)->CSR[csr] = val;
etiss_coverage_count(4, 514, 512, 511, 513);
} // conditional
} // block
}

etiss_uint64 RV32IMACFDXCFU0_get_field(etiss_uint64 reg, etiss_uint64 mask)
{
etiss_coverage_count(1, 169);
{ // block
etiss_coverage_count(1, 535);
etiss_coverage_count(1, 516);
if (!(mask)) { // conditional
etiss_coverage_count(2, 518, 517);
etiss_coverage_count(1, 520);
return 0LL;
etiss_coverage_count(1, 519);
} // conditional
etiss_coverage_count(1, 534);
return (reg & mask) / (mask & ~((mask << 1ULL)));
etiss_coverage_count(13, 533, 523, 521, 522, 524, 531, 525, 530, 528, 526, 527, 529, 532);
} // block
}

etiss_uint64 RV32IMACFDXCFU0_set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val)
{
etiss_coverage_count(1, 170);
{ // block
etiss_coverage_count(1, 558);
etiss_coverage_count(1, 557);
return ((reg & ~(mask)) | ((val * (mask & ~((mask << 1ULL)))) & mask));
etiss_coverage_count(21, 555, 539, 536, 538, 537, 540, 553, 550, 541, 548, 542, 547, 545, 543, 544, 546, 549, 551, 552, 554, 556);
} // block
}

etiss_uint8 RV32IMACFDXCFU0_ctz(etiss_uint64 val)
{
etiss_coverage_count(1, 171);
{ // block
etiss_coverage_count(1, 653);
etiss_coverage_count(1, 559);
if (!(val)) { // conditional
etiss_coverage_count(2, 561, 560);
etiss_coverage_count(1, 563);
return 0LL;
etiss_coverage_count(1, 562);
} // conditional
etiss_uint8 res = 0LL;
etiss_coverage_count(2, 566, 565);
etiss_coverage_count(1, 567);
if ((val << 32ULL) == 0LL) { // conditional
etiss_coverage_count(6, 573, 570, 568, 569, 571, 572);
{ // block
etiss_coverage_count(1, 580);
res = res + 32ULL;
etiss_coverage_count(3, 576, 574, 575);
val = val >> 32ULL;
etiss_coverage_count(3, 579, 577, 578);
} // block
} // conditional
etiss_coverage_count(1, 581);
if ((val << 48ULL) == 0LL) { // conditional
etiss_coverage_count(6, 587, 584, 582, 583, 585, 586);
{ // block
etiss_coverage_count(1, 594);
res = res + 16ULL;
etiss_coverage_count(3, 590, 588, 589);
val = val >> 16ULL;
etiss_coverage_count(3, 593, 591, 592);
} // block
} // conditional
etiss_coverage_count(1, 595);
if ((val << 56ULL) == 0LL) { // conditional
etiss_coverage_count(6, 601, 598, 596, 597, 599, 600);
{ // block
etiss_coverage_count(1, 608);
res = res + 8ULL;
etiss_coverage_count(3, 604, 602, 603);
val = val >> 8ULL;
etiss_coverage_count(3, 607, 605, 606);
} // block
} // conditional
etiss_coverage_count(1, 609);
if ((val << 60ULL) == 0LL) { // conditional
etiss_coverage_count(6, 615, 612, 610, 611, 613, 614);
{ // block
etiss_coverage_count(1, 622);
res = res + 4ULL;
etiss_coverage_count(3, 618, 616, 617);
val = val >> 4ULL;
etiss_coverage_count(3, 621, 619, 620);
} // block
} // conditional
etiss_coverage_count(1, 623);
if ((val << 62ULL) == 0LL) { // conditional
etiss_coverage_count(6, 629, 626, 624, 625, 627, 628);
{ // block
etiss_coverage_count(1, 636);
res = res + 2ULL;
etiss_coverage_count(3, 632, 630, 631);
val = val >> 2ULL;
etiss_coverage_count(3, 635, 633, 634);
} // block
} // conditional
etiss_coverage_count(1, 637);
if ((val << 63ULL) == 0LL) { // conditional
etiss_coverage_count(6, 643, 640, 638, 639, 641, 642);
{ // block
etiss_coverage_count(1, 650);
res = res + 1ULL;
etiss_coverage_count(3, 646, 644, 645);
val = val >> 1ULL;
etiss_coverage_count(3, 649, 647, 648);
} // block
} // conditional
etiss_coverage_count(1, 652);
return res;
etiss_coverage_count(1, 651);
} // block
}

void RV32IMACFDXCFU0_raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_uint32 mcause)
{
cpu->return_pending = 1;
cpu->exception = 0;
etiss_coverage_count(1, 172);
{ // block
etiss_coverage_count(1, 866);
etiss_uint32 epc = cpu->instructionPointer;
etiss_coverage_count(2, 656, 655);
etiss_uint32 deleg = 0LL;
etiss_coverage_count(1, 658);
etiss_uint32 vector = 0LL;
etiss_coverage_count(1, 659);
etiss_uint32 bit = mcause;
etiss_coverage_count(2, 661, 660);
etiss_int32 irq2 = (mcause & 2147483648ULL) != 0LL;
etiss_coverage_count(6, 677, 676, 673, 663, 674, 675);
etiss_coverage_count(1, 678);
if (irq2) { // conditional
etiss_coverage_count(1, 679);
{ // block
etiss_coverage_count(1, 704);
deleg = ((((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDXCFU0*)cpu)->CSR[771LL]) : (0LL);
etiss_coverage_count(8, 690, 680, 689, 683, 681, 684, 687, 688);
bit = bit & 2147483647ULL;
etiss_coverage_count(2, 703, 691);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 716);
deleg = ((((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDXCFU0*)cpu)->CSR[770LL]) : (0LL);
etiss_coverage_count(8, 715, 705, 714, 708, 706, 709, 712, 713);
} // block
} // conditional
etiss_coverage_count(1, 717);
if (((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL && (deleg >> bit) & 1ULL) { // conditional
etiss_coverage_count(9, 727, 720, 718, 726, 723, 721, 722, 724, 725);
{ // block
etiss_coverage_count(1, 796);
vector = ((*((RV32IMACFDXCFU0*)cpu)->CSR[261LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 742, 728, 741, 736, 733, 731, 732, 734, 735, 739, 737, 738, 740);
cpu->nextPc = (*((RV32IMACFDXCFU0*)cpu)->CSR[261LL] & -2LL) + vector;
etiss_coverage_count(7, 755, 743, 754, 751, 746, 752, 753);
*((RV32IMACFDXCFU0*)cpu)->CSR[321LL] = epc;
etiss_coverage_count(3, 760, 758, 759);
*((RV32IMACFDXCFU0*)cpu)->CSR[322LL] = mcause;
etiss_coverage_count(3, 765, 763, 764);
etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL);
etiss_coverage_count(2, 769, 768);
s = RV32IMACFDXCFU0_set_field(s, 32LL, RV32IMACFDXCFU0_get_field(s, 2LL));
etiss_coverage_count(6, 777, 770, 776, 771, 775, 773);
s = RV32IMACFDXCFU0_set_field(s, 256LL, ((RV32IMACFDXCFU0*)cpu)->PRIV);
etiss_coverage_count(5, 783, 778, 782, 779, 781);
s = RV32IMACFDXCFU0_set_field(s, 2LL, 0LL);
etiss_coverage_count(5, 789, 784, 788, 785, 787);
RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 256LL, s);
etiss_coverage_count(2, 792, 791);
((RV32IMACFDXCFU0*)cpu)->PRIV = (1LL) & 0x7;
etiss_coverage_count(2, 795, 793);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 865);
vector = ((*((RV32IMACFDXCFU0*)cpu)->CSR[773LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 811, 797, 810, 805, 802, 800, 801, 803, 804, 808, 806, 807, 809);
cpu->nextPc = (*((RV32IMACFDXCFU0*)cpu)->CSR[773LL] & -2LL) + vector;
etiss_coverage_count(7, 824, 812, 823, 820, 815, 821, 822);
*((RV32IMACFDXCFU0*)cpu)->CSR[833LL] = epc;
etiss_coverage_count(3, 829, 827, 828);
*((RV32IMACFDXCFU0*)cpu)->CSR[834LL] = mcause;
etiss_coverage_count(3, 834, 832, 833);
etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL);
etiss_coverage_count(2, 838, 837);
s = RV32IMACFDXCFU0_set_field(s, 128LL, RV32IMACFDXCFU0_get_field(s, 8LL));
etiss_coverage_count(6, 846, 839, 845, 840, 844, 842);
s = RV32IMACFDXCFU0_set_field(s, 6144LL, ((RV32IMACFDXCFU0*)cpu)->PRIV);
etiss_coverage_count(5, 852, 847, 851, 848, 850);
s = RV32IMACFDXCFU0_set_field(s, 8LL, 0LL);
etiss_coverage_count(5, 858, 853, 857, 854, 856);
RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);
etiss_coverage_count(2, 861, 860);
((RV32IMACFDXCFU0*)cpu)->PRIV = (3LL) & 0x7;
etiss_coverage_count(2, 864, 862);
} // block
} // conditional
} // block
}

void RV32IMACFDXCFU0_translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
etiss_coverage_count(1, 173);
{ // block
etiss_coverage_count(1, 923);
etiss_uint32 code = 0LL;
etiss_coverage_count(2, 870, 869);
etiss_coverage_count(1, 871);
if (cause == -2147483648LL) { // conditional
etiss_coverage_count(2, 874, 872);
etiss_coverage_count(1, 893);
return;
} // conditional
 else if (cause == -5LL) { // conditional
etiss_coverage_count(2, 877, 875);
code = 5LL;
etiss_coverage_count(2, 896, 894);
} // conditional
 else if (cause == -14LL) { // conditional
etiss_coverage_count(2, 880, 878);
code = 13LL;
etiss_coverage_count(2, 899, 897);
} // conditional
 else if (cause == -6LL) { // conditional
etiss_coverage_count(2, 883, 881);
code = 7LL;
etiss_coverage_count(2, 902, 900);
} // conditional
 else if (cause == -15LL) { // conditional
etiss_coverage_count(2, 886, 884);
code = 15LL;
etiss_coverage_count(2, 905, 903);
} // conditional
 else if (cause == -7LL) { // conditional
etiss_coverage_count(2, 889, 887);
code = 1LL;
etiss_coverage_count(2, 908, 906);
} // conditional
 else if (cause == -9LL) { // conditional
etiss_coverage_count(2, 892, 890);
{ // block
etiss_coverage_count(1, 916);
code = RV32IMACFDXCFU0_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(3, 911, 909, 910);
etiss_coverage_count(1, 912);
if (!(code)) { // conditional
etiss_coverage_count(2, 914, 913);
etiss_coverage_count(1, 915);
return;
} // conditional
} // block
} // conditional
else { // conditional
code = 2LL;
etiss_coverage_count(2, 919, 917);
} // conditional
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, code);
etiss_coverage_count(3, 922, 920, 921);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_calc_irq_mcause(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 174);
{ // block
etiss_coverage_count(1, 1104);
etiss_uint32 pending_interrupts = *((RV32IMACFDXCFU0*)cpu)->CSR[772LL] & *((RV32IMACFDXCFU0*)cpu)->CSR[836LL];
etiss_coverage_count(4, 932, 931, 927, 930);
etiss_coverage_count(1, 933);
if (!(pending_interrupts)) { // conditional
etiss_coverage_count(2, 935, 934);
etiss_coverage_count(1, 937);
return 0LL;
etiss_coverage_count(1, 936);
} // conditional
etiss_uint32 mie = RV32IMACFDXCFU0_get_field(*((RV32IMACFDXCFU0*)cpu)->CSR[768LL], 8LL);
etiss_coverage_count(3, 944, 943, 941);
etiss_uint32 m_enabled = ((RV32IMACFDXCFU0*)cpu)->PRIV < 3LL || (((RV32IMACFDXCFU0*)cpu)->PRIV == 3LL && mie);
etiss_coverage_count(9, 956, 955, 948, 946, 953, 951, 949, 952, 954);
etiss_uint32 enabled_interrupts = pending_interrupts & ~(*((RV32IMACFDXCFU0*)cpu)->CSR[771LL]) & -(m_enabled);
etiss_coverage_count(8, 967, 966, 963, 958, 962, 961, 965, 964);
etiss_coverage_count(1, 968);
if (enabled_interrupts == 0LL) { // conditional
etiss_coverage_count(3, 971, 969, 970);
{ // block
etiss_coverage_count(1, 1003);
etiss_uint32 deleg = *((RV32IMACFDXCFU0*)cpu)->CSR[771LL];
etiss_coverage_count(2, 976, 975);
etiss_uint32 sie = RV32IMACFDXCFU0_get_field(RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL), 2LL);
etiss_coverage_count(3, 982, 981, 979);
etiss_uint32 s_enabled = ((RV32IMACFDXCFU0*)cpu)->PRIV < 1LL || (((RV32IMACFDXCFU0*)cpu)->PRIV == 1LL && sie);
etiss_coverage_count(9, 994, 993, 986, 984, 991, 989, 987, 990, 992);
enabled_interrupts = pending_interrupts & deleg & -(s_enabled);
etiss_coverage_count(8, 1002, 995, 1001, 998, 996, 997, 1000, 999);
} // block
} // conditional
etiss_coverage_count(1, 1004);
if (enabled_interrupts) { // conditional
etiss_coverage_count(1, 1005);
{ // block
etiss_coverage_count(1, 1101);
etiss_coverage_count(1, 1006);
if (enabled_interrupts >> 12ULL) { // conditional
etiss_coverage_count(2, 1012, 1007);
enabled_interrupts = enabled_interrupts >> 12ULL << 12ULL;
etiss_coverage_count(5, 1055, 1043, 1054, 1049, 1044);
} // conditional
 else if (enabled_interrupts & 2048LL) { // conditional
etiss_coverage_count(2, 1015, 1013);
enabled_interrupts = 2048LL;
etiss_coverage_count(2, 1058, 1056);
} // conditional
 else if (enabled_interrupts & 8LL) { // conditional
etiss_coverage_count(2, 1018, 1016);
enabled_interrupts = 8LL;
etiss_coverage_count(2, 1061, 1059);
} // conditional
 else if (enabled_interrupts & 128LL) { // conditional
etiss_coverage_count(2, 1021, 1019);
enabled_interrupts = 128LL;
etiss_coverage_count(2, 1064, 1062);
} // conditional
 else if (enabled_interrupts & 512LL) { // conditional
etiss_coverage_count(2, 1024, 1022);
enabled_interrupts = 512LL;
etiss_coverage_count(2, 1067, 1065);
} // conditional
 else if (enabled_interrupts & 2LL) { // conditional
etiss_coverage_count(2, 1027, 1025);
enabled_interrupts = 2LL;
etiss_coverage_count(2, 1070, 1068);
} // conditional
 else if (enabled_interrupts & 32LL) { // conditional
etiss_coverage_count(2, 1030, 1028);
enabled_interrupts = 32LL;
etiss_coverage_count(2, 1073, 1071);
} // conditional
 else if (enabled_interrupts & 8192LL) { // conditional
etiss_coverage_count(2, 1033, 1031);
enabled_interrupts = 8192LL;
etiss_coverage_count(2, 1076, 1074);
} // conditional
 else if (enabled_interrupts & 1024LL) { // conditional
etiss_coverage_count(2, 1036, 1034);
enabled_interrupts = 1024LL;
etiss_coverage_count(2, 1079, 1077);
} // conditional
 else if (enabled_interrupts & 4LL) { // conditional
etiss_coverage_count(2, 1039, 1037);
enabled_interrupts = 4LL;
etiss_coverage_count(2, 1082, 1080);
} // conditional
 else if (enabled_interrupts & 64LL) { // conditional
etiss_coverage_count(2, 1042, 1040);
enabled_interrupts = 64LL;
etiss_coverage_count(2, 1085, 1083);
} // conditional
else { // conditional
etiss_coverage_count(1, 1087);
return 0LL;
etiss_coverage_count(1, 1086);
} // conditional
etiss_coverage_count(1, 1100);
return 2147483648ULL | RV32IMACFDXCFU0_ctz(enabled_interrupts);
etiss_coverage_count(3, 1099, 1098, 1097);
} // block
} // conditional
etiss_coverage_count(1, 1103);
return 0LL;
etiss_coverage_count(1, 1102);
} // block
}

void RV32IMACFDXCFU0_check_irq(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 175);
{ // block
etiss_coverage_count(1, 1113);
etiss_uint32 irq_mcause = RV32IMACFDXCFU0_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(2, 1107, 1106);
etiss_coverage_count(1, 1108);
if (irq_mcause) { // conditional
etiss_coverage_count(1, 1109);
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 1ULL, irq_mcause);
etiss_coverage_count(3, 1112, 1110, 1111);
} // conditional
} // block
}
