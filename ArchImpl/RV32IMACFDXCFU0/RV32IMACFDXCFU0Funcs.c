/**
 * Generated on Fri, 20 Jun 2025 08:54:36 +0200.
 *
 * This file contains the function implementations for the RV32IMACFDXCFU0 core architecture.
 */

#include "RV32IMACFDXCFU0Funcs.h"

etiss_uint8 RV32IMACFDXCFU0_extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension)
{
etiss_coverage_count(1, 80);
{ // block
etiss_coverage_count(1, 205);
etiss_coverage_count(1, 204);
return (*((RV32IMACFDXCFU0*)cpu)->CSR[769LL] >> (extension - 65ULL)) & 1ULL;
etiss_coverage_count(9, 203, 200, 195, 198, 196, 197, 199, 201, 202);
} // block
}

etiss_uint8 RV32IMACFDXCFU0_get_rm(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8 rm)
{
etiss_coverage_count(1, 87);
{ // block
etiss_coverage_count(1, 225);
etiss_coverage_count(1, 206);
if (rm == 7ULL) { // conditional
etiss_coverage_count(3, 209, 207, 208);
rm = ((((((RV32IMACFDXCFU0*)cpu)->FCSR) >> (5ULL)) & 7ULL)) & 0x7;
etiss_coverage_count(6, 215, 210, 214, 211, 212, 213);
} // conditional
etiss_coverage_count(1, 216);
if (rm > 4ULL) { // conditional
etiss_coverage_count(3, 219, 217, 218);
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, 2LL);
etiss_coverage_count(2, 222, 220);
} // conditional
etiss_coverage_count(1, 224);
return rm;
etiss_coverage_count(1, 223);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_sstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 157);
{ // block
etiss_coverage_count(1, 298);
etiss_uint32 mask = 0LL;
etiss_coverage_count(2, 228, 227);
etiss_coverage_count(1, 229);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 83ULL)) { // conditional
etiss_coverage_count(2, 231, 230);
{ // block
etiss_coverage_count(1, 295);
mask = mask | 5767458ULL;
etiss_coverage_count(2, 247, 232);
etiss_coverage_count(1, 248);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 86ULL)) { // conditional
etiss_coverage_count(2, 250, 249);
mask = mask | 1536LL;
etiss_coverage_count(2, 253, 251);
} // conditional
etiss_coverage_count(1, 254);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 70ULL)) { // conditional
etiss_coverage_count(2, 256, 255);
mask = mask | 24576LL;
etiss_coverage_count(2, 259, 257);
} // conditional
etiss_coverage_count(1, 260);
if (RV32IMACFDXCFU0_extension_enabled(cpu, system, plugin_pointers, 88ULL)) { // conditional
etiss_coverage_count(2, 262, 261);
mask = mask | 98304LL;
etiss_coverage_count(2, 265, 263);
} // conditional
etiss_coverage_count(1, 266);
if ((RV32IMACFDXCFU0_get_field(*((RV32IMACFDXCFU0*)cpu)->CSR[384LL], 2147483648ULL))) { // conditional
etiss_coverage_count(3, 276, 272, 278);
mask = mask | 262144LL;
etiss_coverage_count(2, 294, 292);
} // conditional
} // block
} // conditional
etiss_coverage_count(1, 297);
return mask;
etiss_coverage_count(1, 296);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_mstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 158);
{ // block
etiss_coverage_count(1, 313);
etiss_uint32 mask = 6280ULL;
etiss_coverage_count(1, 308);
etiss_coverage_count(1, 312);
return mask | RV32IMACFDXCFU0_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(3, 311, 309, 310);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
etiss_coverage_count(1, 159);
{ // block
etiss_coverage_count(1, 431);
etiss_coverage_count(1, 314);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 317, 315);
etiss_coverage_count(1, 323);
return *((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 31ULL;
etiss_coverage_count(3, 322, 320, 321);
} // conditional
etiss_coverage_count(1, 324);
if (csr == 2LL) { // conditional
etiss_coverage_count(2, 327, 325);
etiss_coverage_count(1, 336);
return (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] >> 5ULL) & 7ULL;
etiss_coverage_count(6, 335, 332, 330, 331, 333, 334);
} // conditional
etiss_coverage_count(1, 337);
if (csr == 3072LL) { // conditional
etiss_coverage_count(2, 340, 338);
etiss_coverage_count(1, 342);
return etiss_get_cycles(cpu, system, plugin_pointers);
etiss_coverage_count(1, 341);
} // conditional
etiss_coverage_count(1, 343);
if (csr == 3200LL) { // conditional
etiss_coverage_count(2, 346, 344);
etiss_coverage_count(1, 350);
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 349, 347, 348);
} // conditional
etiss_coverage_count(1, 351);
if (csr == 3073LL) { // conditional
etiss_coverage_count(2, 354, 352);
etiss_coverage_count(1, 356);
return etiss_get_time();
etiss_coverage_count(1, 355);
} // conditional
etiss_coverage_count(1, 357);
if (csr == 3201LL) { // conditional
etiss_coverage_count(2, 360, 358);
etiss_coverage_count(1, 364);
return etiss_get_time() >> 32ULL;
etiss_coverage_count(3, 363, 361, 362);
} // conditional
etiss_coverage_count(1, 365);
if (csr == 3074LL) { // conditional
etiss_coverage_count(2, 368, 366);
etiss_coverage_count(1, 370);
return etiss_get_instret(cpu, system, plugin_pointers);
etiss_coverage_count(1, 369);
} // conditional
etiss_coverage_count(1, 371);
if (csr == 3202LL) { // conditional
etiss_coverage_count(2, 374, 372);
etiss_coverage_count(1, 378);
return etiss_get_instret(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 377, 375, 376);
} // conditional
etiss_coverage_count(1, 379);
if (csr == 768LL || csr == 256LL) { // conditional
etiss_coverage_count(5, 386, 382, 380, 385, 383);
etiss_coverage_count(1, 406);
return *((RV32IMACFDXCFU0*)cpu)->CSR[768LL] | 8589934592ULL | 34359738368ULL;
etiss_coverage_count(3, 405, 397, 389);
} // conditional
etiss_coverage_count(1, 407);
if (csr == 769LL) { // conditional
etiss_coverage_count(2, 410, 408);
etiss_coverage_count(1, 426);
return (((1ULL) << 30) | ((((*((RV32IMACFDXCFU0*)cpu)->CSR[769LL]) >> (0LL)) & 1073741823ULL)));
etiss_coverage_count(4, 425, 424, 419, 423);
} // conditional
etiss_coverage_count(1, 430);
return *((RV32IMACFDXCFU0*)cpu)->CSR[csr];
etiss_coverage_count(2, 429, 428);
} // block
}

void RV32IMACFDXCFU0_csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val)
{
etiss_coverage_count(1, 160);
{ // block
etiss_coverage_count(1, 513);
etiss_coverage_count(1, 432);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 435, 433);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 224ULL) | (val & 31ULL);
etiss_coverage_count(10, 468, 453, 467, 461, 456, 462, 465, 463, 464, 466);
} // conditional
 else if (csr == 2LL) { // conditional
etiss_coverage_count(2, 438, 436);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = ((val & 7ULL) << 5ULL) | (*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] & 31ULL);
etiss_coverage_count(14, 486, 471, 485, 477, 474, 472, 473, 475, 476, 478, 483, 481, 482, 484);
} // conditional
 else if (csr == 3LL) { // conditional
etiss_coverage_count(2, 441, 439);
*((RV32IMACFDXCFU0*)cpu)->CSR[3LL] = val & 255ULL;
etiss_coverage_count(5, 493, 489, 492, 490, 491);
} // conditional
 else if (csr == 768LL) { // conditional
etiss_coverage_count(2, 444, 442);
*((RV32IMACFDXCFU0*)cpu)->CSR[768LL] = val & RV32IMACFDXCFU0_mstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 500, 496, 499, 497, 498);
} // conditional
 else if (csr == 256LL) { // conditional
etiss_coverage_count(2, 447, 445);
*((RV32IMACFDXCFU0*)cpu)->CSR[768LL] = val & RV32IMACFDXCFU0_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 507, 503, 506, 504, 505);
} // conditional
 else if (csr != 769LL) { // conditional
etiss_coverage_count(2, 450, 448);
*((RV32IMACFDXCFU0*)cpu)->CSR[csr] = val;
etiss_coverage_count(4, 512, 510, 509, 511);
} // conditional
} // block
}

etiss_uint64 RV32IMACFDXCFU0_get_field(etiss_uint64 reg, etiss_uint64 mask)
{
etiss_coverage_count(1, 167);
{ // block
etiss_coverage_count(1, 533);
etiss_coverage_count(1, 514);
if (!(mask)) { // conditional
etiss_coverage_count(2, 516, 515);
etiss_coverage_count(1, 518);
return 0LL;
etiss_coverage_count(1, 517);
} // conditional
etiss_coverage_count(1, 532);
return (reg & mask) / (mask & ~((mask << 1ULL)));
etiss_coverage_count(13, 531, 521, 519, 520, 522, 529, 523, 528, 526, 524, 525, 527, 530);
} // block
}

etiss_uint64 RV32IMACFDXCFU0_set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val)
{
etiss_coverage_count(1, 168);
{ // block
etiss_coverage_count(1, 556);
etiss_coverage_count(1, 555);
return ((reg & ~(mask)) | ((val * (mask & ~((mask << 1ULL)))) & mask));
etiss_coverage_count(21, 553, 537, 534, 536, 535, 538, 551, 548, 539, 546, 540, 545, 543, 541, 542, 544, 547, 549, 550, 552, 554);
} // block
}

etiss_uint8 RV32IMACFDXCFU0_ctz(etiss_uint64 val)
{
etiss_coverage_count(1, 169);
{ // block
etiss_coverage_count(1, 651);
etiss_coverage_count(1, 557);
if (!(val)) { // conditional
etiss_coverage_count(2, 559, 558);
etiss_coverage_count(1, 561);
return 0LL;
etiss_coverage_count(1, 560);
} // conditional
etiss_uint8 res = 0LL;
etiss_coverage_count(2, 564, 563);
etiss_coverage_count(1, 565);
if ((val << 32ULL) == 0LL) { // conditional
etiss_coverage_count(6, 571, 568, 566, 567, 569, 570);
{ // block
etiss_coverage_count(1, 578);
res = res + 32ULL;
etiss_coverage_count(3, 574, 572, 573);
val = val >> 32ULL;
etiss_coverage_count(3, 577, 575, 576);
} // block
} // conditional
etiss_coverage_count(1, 579);
if ((val << 48ULL) == 0LL) { // conditional
etiss_coverage_count(6, 585, 582, 580, 581, 583, 584);
{ // block
etiss_coverage_count(1, 592);
res = res + 16ULL;
etiss_coverage_count(3, 588, 586, 587);
val = val >> 16ULL;
etiss_coverage_count(3, 591, 589, 590);
} // block
} // conditional
etiss_coverage_count(1, 593);
if ((val << 56ULL) == 0LL) { // conditional
etiss_coverage_count(6, 599, 596, 594, 595, 597, 598);
{ // block
etiss_coverage_count(1, 606);
res = res + 8ULL;
etiss_coverage_count(3, 602, 600, 601);
val = val >> 8ULL;
etiss_coverage_count(3, 605, 603, 604);
} // block
} // conditional
etiss_coverage_count(1, 607);
if ((val << 60ULL) == 0LL) { // conditional
etiss_coverage_count(6, 613, 610, 608, 609, 611, 612);
{ // block
etiss_coverage_count(1, 620);
res = res + 4ULL;
etiss_coverage_count(3, 616, 614, 615);
val = val >> 4ULL;
etiss_coverage_count(3, 619, 617, 618);
} // block
} // conditional
etiss_coverage_count(1, 621);
if ((val << 62ULL) == 0LL) { // conditional
etiss_coverage_count(6, 627, 624, 622, 623, 625, 626);
{ // block
etiss_coverage_count(1, 634);
res = res + 2ULL;
etiss_coverage_count(3, 630, 628, 629);
val = val >> 2ULL;
etiss_coverage_count(3, 633, 631, 632);
} // block
} // conditional
etiss_coverage_count(1, 635);
if ((val << 63ULL) == 0LL) { // conditional
etiss_coverage_count(6, 641, 638, 636, 637, 639, 640);
{ // block
etiss_coverage_count(1, 648);
res = res + 1ULL;
etiss_coverage_count(3, 644, 642, 643);
val = val >> 1ULL;
etiss_coverage_count(3, 647, 645, 646);
} // block
} // conditional
etiss_coverage_count(1, 650);
return res;
etiss_coverage_count(1, 649);
} // block
}

void RV32IMACFDXCFU0_raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_uint32 mcause)
{
cpu->return_pending = 1;
cpu->exception = 0;
etiss_coverage_count(1, 170);
{ // block
etiss_coverage_count(1, 864);
etiss_uint32 epc = cpu->instructionPointer;
etiss_coverage_count(2, 654, 653);
etiss_uint32 deleg = 0LL;
etiss_coverage_count(1, 656);
etiss_uint32 vector = 0LL;
etiss_coverage_count(1, 657);
etiss_uint32 bit = mcause;
etiss_coverage_count(2, 659, 658);
etiss_int32 irq2 = (mcause & 2147483648ULL) != 0LL;
etiss_coverage_count(6, 675, 674, 671, 661, 672, 673);
etiss_coverage_count(1, 676);
if (irq2) { // conditional
etiss_coverage_count(1, 677);
{ // block
etiss_coverage_count(1, 702);
deleg = ((((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDXCFU0*)cpu)->CSR[771LL]) : (0LL);
etiss_coverage_count(8, 688, 678, 687, 681, 679, 682, 685, 686);
bit = bit & 2147483647ULL;
etiss_coverage_count(2, 701, 689);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 714);
deleg = ((((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDXCFU0*)cpu)->CSR[770LL]) : (0LL);
etiss_coverage_count(8, 713, 703, 712, 706, 704, 707, 710, 711);
} // block
} // conditional
etiss_coverage_count(1, 715);
if (((RV32IMACFDXCFU0*)cpu)->PRIV <= 1LL && (deleg >> bit) & 1ULL) { // conditional
etiss_coverage_count(9, 725, 718, 716, 724, 721, 719, 720, 722, 723);
{ // block
etiss_coverage_count(1, 794);
vector = ((*((RV32IMACFDXCFU0*)cpu)->CSR[261LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 740, 726, 739, 734, 731, 729, 730, 732, 733, 737, 735, 736, 738);
cpu->nextPc = (*((RV32IMACFDXCFU0*)cpu)->CSR[261LL] & -2LL) + vector;
etiss_coverage_count(7, 753, 741, 752, 749, 744, 750, 751);
*((RV32IMACFDXCFU0*)cpu)->CSR[321LL] = epc;
etiss_coverage_count(3, 758, 756, 757);
*((RV32IMACFDXCFU0*)cpu)->CSR[322LL] = mcause;
etiss_coverage_count(3, 763, 761, 762);
etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL);
etiss_coverage_count(2, 767, 766);
s = RV32IMACFDXCFU0_set_field(s, 32LL, RV32IMACFDXCFU0_get_field(s, 2LL));
etiss_coverage_count(6, 775, 768, 774, 769, 773, 771);
s = RV32IMACFDXCFU0_set_field(s, 256LL, ((RV32IMACFDXCFU0*)cpu)->PRIV);
etiss_coverage_count(5, 781, 776, 780, 777, 779);
s = RV32IMACFDXCFU0_set_field(s, 2LL, 0LL);
etiss_coverage_count(5, 787, 782, 786, 783, 785);
RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 256LL, s);
etiss_coverage_count(2, 790, 789);
((RV32IMACFDXCFU0*)cpu)->PRIV = (1LL) & 0x7;
etiss_coverage_count(2, 793, 791);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 863);
vector = ((*((RV32IMACFDXCFU0*)cpu)->CSR[773LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 809, 795, 808, 803, 800, 798, 799, 801, 802, 806, 804, 805, 807);
cpu->nextPc = (*((RV32IMACFDXCFU0*)cpu)->CSR[773LL] & -2LL) + vector;
etiss_coverage_count(7, 822, 810, 821, 818, 813, 819, 820);
*((RV32IMACFDXCFU0*)cpu)->CSR[833LL] = epc;
etiss_coverage_count(3, 827, 825, 826);
*((RV32IMACFDXCFU0*)cpu)->CSR[834LL] = mcause;
etiss_coverage_count(3, 832, 830, 831);
etiss_uint32 s = RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 768LL);
etiss_coverage_count(2, 836, 835);
s = RV32IMACFDXCFU0_set_field(s, 128LL, RV32IMACFDXCFU0_get_field(s, 8LL));
etiss_coverage_count(6, 844, 837, 843, 838, 842, 840);
s = RV32IMACFDXCFU0_set_field(s, 6144LL, ((RV32IMACFDXCFU0*)cpu)->PRIV);
etiss_coverage_count(5, 850, 845, 849, 846, 848);
s = RV32IMACFDXCFU0_set_field(s, 8LL, 0LL);
etiss_coverage_count(5, 856, 851, 855, 852, 854);
RV32IMACFDXCFU0_csr_write(cpu, system, plugin_pointers, 768LL, s);
etiss_coverage_count(2, 859, 858);
((RV32IMACFDXCFU0*)cpu)->PRIV = (3LL) & 0x7;
etiss_coverage_count(2, 862, 860);
} // block
} // conditional
} // block
}

void RV32IMACFDXCFU0_translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
etiss_coverage_count(1, 171);
{ // block
etiss_coverage_count(1, 921);
etiss_uint32 code = 0LL;
etiss_coverage_count(2, 868, 867);
etiss_coverage_count(1, 869);
if (cause == -2147483648LL) { // conditional
etiss_coverage_count(2, 872, 870);
etiss_coverage_count(1, 891);
return;
} // conditional
 else if (cause == -5LL) { // conditional
etiss_coverage_count(2, 875, 873);
code = 5LL;
etiss_coverage_count(2, 894, 892);
} // conditional
 else if (cause == -14LL) { // conditional
etiss_coverage_count(2, 878, 876);
code = 13LL;
etiss_coverage_count(2, 897, 895);
} // conditional
 else if (cause == -6LL) { // conditional
etiss_coverage_count(2, 881, 879);
code = 7LL;
etiss_coverage_count(2, 900, 898);
} // conditional
 else if (cause == -15LL) { // conditional
etiss_coverage_count(2, 884, 882);
code = 15LL;
etiss_coverage_count(2, 903, 901);
} // conditional
 else if (cause == -7LL) { // conditional
etiss_coverage_count(2, 887, 885);
code = 1LL;
etiss_coverage_count(2, 906, 904);
} // conditional
 else if (cause == -9LL) { // conditional
etiss_coverage_count(2, 890, 888);
{ // block
etiss_coverage_count(1, 914);
code = RV32IMACFDXCFU0_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(3, 909, 907, 908);
etiss_coverage_count(1, 910);
if (!(code)) { // conditional
etiss_coverage_count(2, 912, 911);
etiss_coverage_count(1, 913);
return;
} // conditional
} // block
} // conditional
else { // conditional
code = 2LL;
etiss_coverage_count(2, 917, 915);
} // conditional
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 0LL, code);
etiss_coverage_count(3, 920, 918, 919);
} // block
}

etiss_uint32 RV32IMACFDXCFU0_calc_irq_mcause(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 172);
{ // block
etiss_coverage_count(1, 1102);
etiss_uint32 pending_interrupts = *((RV32IMACFDXCFU0*)cpu)->CSR[772LL] & *((RV32IMACFDXCFU0*)cpu)->CSR[836LL];
etiss_coverage_count(4, 930, 929, 925, 928);
etiss_coverage_count(1, 931);
if (!(pending_interrupts)) { // conditional
etiss_coverage_count(2, 933, 932);
etiss_coverage_count(1, 935);
return 0LL;
etiss_coverage_count(1, 934);
} // conditional
etiss_uint32 mie = RV32IMACFDXCFU0_get_field(*((RV32IMACFDXCFU0*)cpu)->CSR[768LL], 8LL);
etiss_coverage_count(3, 942, 941, 939);
etiss_uint32 m_enabled = ((RV32IMACFDXCFU0*)cpu)->PRIV < 3LL || (((RV32IMACFDXCFU0*)cpu)->PRIV == 3LL && mie);
etiss_coverage_count(9, 954, 953, 946, 944, 951, 949, 947, 950, 952);
etiss_uint32 enabled_interrupts = pending_interrupts & ~(*((RV32IMACFDXCFU0*)cpu)->CSR[771LL]) & -(m_enabled);
etiss_coverage_count(8, 965, 964, 961, 956, 960, 959, 963, 962);
etiss_coverage_count(1, 966);
if (enabled_interrupts == 0LL) { // conditional
etiss_coverage_count(3, 969, 967, 968);
{ // block
etiss_coverage_count(1, 1001);
etiss_uint32 deleg = *((RV32IMACFDXCFU0*)cpu)->CSR[771LL];
etiss_coverage_count(2, 974, 973);
etiss_uint32 sie = RV32IMACFDXCFU0_get_field(RV32IMACFDXCFU0_csr_read(cpu, system, plugin_pointers, 256LL), 2LL);
etiss_coverage_count(3, 980, 979, 977);
etiss_uint32 s_enabled = ((RV32IMACFDXCFU0*)cpu)->PRIV < 1LL || (((RV32IMACFDXCFU0*)cpu)->PRIV == 1LL && sie);
etiss_coverage_count(9, 992, 991, 984, 982, 989, 987, 985, 988, 990);
enabled_interrupts = pending_interrupts & deleg & -(s_enabled);
etiss_coverage_count(8, 1000, 993, 999, 996, 994, 995, 998, 997);
} // block
} // conditional
etiss_coverage_count(1, 1002);
if (enabled_interrupts) { // conditional
etiss_coverage_count(1, 1003);
{ // block
etiss_coverage_count(1, 1099);
etiss_coverage_count(1, 1004);
if (enabled_interrupts >> 12ULL) { // conditional
etiss_coverage_count(2, 1010, 1005);
enabled_interrupts = enabled_interrupts >> 12ULL << 12ULL;
etiss_coverage_count(5, 1053, 1041, 1052, 1047, 1042);
} // conditional
 else if (enabled_interrupts & 2048LL) { // conditional
etiss_coverage_count(2, 1013, 1011);
enabled_interrupts = 2048LL;
etiss_coverage_count(2, 1056, 1054);
} // conditional
 else if (enabled_interrupts & 8LL) { // conditional
etiss_coverage_count(2, 1016, 1014);
enabled_interrupts = 8LL;
etiss_coverage_count(2, 1059, 1057);
} // conditional
 else if (enabled_interrupts & 128LL) { // conditional
etiss_coverage_count(2, 1019, 1017);
enabled_interrupts = 128LL;
etiss_coverage_count(2, 1062, 1060);
} // conditional
 else if (enabled_interrupts & 512LL) { // conditional
etiss_coverage_count(2, 1022, 1020);
enabled_interrupts = 512LL;
etiss_coverage_count(2, 1065, 1063);
} // conditional
 else if (enabled_interrupts & 2LL) { // conditional
etiss_coverage_count(2, 1025, 1023);
enabled_interrupts = 2LL;
etiss_coverage_count(2, 1068, 1066);
} // conditional
 else if (enabled_interrupts & 32LL) { // conditional
etiss_coverage_count(2, 1028, 1026);
enabled_interrupts = 32LL;
etiss_coverage_count(2, 1071, 1069);
} // conditional
 else if (enabled_interrupts & 8192LL) { // conditional
etiss_coverage_count(2, 1031, 1029);
enabled_interrupts = 8192LL;
etiss_coverage_count(2, 1074, 1072);
} // conditional
 else if (enabled_interrupts & 1024LL) { // conditional
etiss_coverage_count(2, 1034, 1032);
enabled_interrupts = 1024LL;
etiss_coverage_count(2, 1077, 1075);
} // conditional
 else if (enabled_interrupts & 4LL) { // conditional
etiss_coverage_count(2, 1037, 1035);
enabled_interrupts = 4LL;
etiss_coverage_count(2, 1080, 1078);
} // conditional
 else if (enabled_interrupts & 64LL) { // conditional
etiss_coverage_count(2, 1040, 1038);
enabled_interrupts = 64LL;
etiss_coverage_count(2, 1083, 1081);
} // conditional
else { // conditional
etiss_coverage_count(1, 1085);
return 0LL;
etiss_coverage_count(1, 1084);
} // conditional
etiss_coverage_count(1, 1098);
return 2147483648ULL | RV32IMACFDXCFU0_ctz(enabled_interrupts);
etiss_coverage_count(3, 1097, 1096, 1095);
} // block
} // conditional
etiss_coverage_count(1, 1101);
return 0LL;
etiss_coverage_count(1, 1100);
} // block
}

void RV32IMACFDXCFU0_check_irq(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 173);
{ // block
etiss_coverage_count(1, 1111);
etiss_uint32 irq_mcause = RV32IMACFDXCFU0_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(2, 1105, 1104);
etiss_coverage_count(1, 1106);
if (irq_mcause) { // conditional
etiss_coverage_count(1, 1107);
RV32IMACFDXCFU0_raise(cpu, system, plugin_pointers, 1ULL, irq_mcause);
etiss_coverage_count(3, 1110, 1108, 1109);
} // conditional
} // block
}
