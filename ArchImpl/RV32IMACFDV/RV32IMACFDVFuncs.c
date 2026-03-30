/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the function implementations for the RV32IMACFDV core architecture.
 */

#include "RV32IMACFDVFuncs.h"
// clang-format off

etiss_uint8 RV32IMACFDV_extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension)
{
etiss_coverage_count(1, 80);
{ // block
etiss_coverage_count(1, 610);
etiss_coverage_count(1, 609);
return (*((RV32IMACFDV*)cpu)->CSR[769LL] >> (extension - 65ULL)) & 1ULL;
etiss_coverage_count(9, 608, 605, 600, 603, 601, 602, 604, 606, 607);
} // block
}

etiss_uint8 RV32IMACFDV_get_rm(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8 rm)
{
etiss_coverage_count(1, 399);
{ // block
etiss_coverage_count(1, 630);
etiss_coverage_count(1, 611);
if (rm == 7ULL) { // conditional
etiss_coverage_count(3, 614, 612, 613);
rm = ((((((RV32IMACFDV*)cpu)->FCSR) >> (5ULL)) & 0x7ULL)) & 0x7ULL;
etiss_coverage_count(6, 620, 615, 619, 616, 617, 618);
} // conditional
etiss_coverage_count(1, 621);
if (rm > 4ULL) { // conditional
etiss_coverage_count(3, 624, 622, 623);
RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, 2LL);
etiss_coverage_count(2, 627, 625);
} // conditional
etiss_coverage_count(1, 629);
return rm;
etiss_coverage_count(1, 628);
} // block
}

etiss_uint32 RV32IMACFDV_sstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 562);
{ // block
etiss_coverage_count(1, 703);
etiss_uint32 mask = 0LL;
etiss_coverage_count(2, 633, 632);
etiss_coverage_count(1, 634);
if (RV32IMACFDV_extension_enabled(cpu, system, plugin_pointers, 83ULL)) { // conditional
etiss_coverage_count(2, 636, 635);
{ // block
etiss_coverage_count(1, 700);
mask = mask | 5767458ULL;
etiss_coverage_count(2, 652, 637);
etiss_coverage_count(1, 653);
if (RV32IMACFDV_extension_enabled(cpu, system, plugin_pointers, 86ULL)) { // conditional
etiss_coverage_count(2, 655, 654);
mask = mask | 1536LL;
etiss_coverage_count(2, 658, 656);
} // conditional
etiss_coverage_count(1, 659);
if (RV32IMACFDV_extension_enabled(cpu, system, plugin_pointers, 70ULL)) { // conditional
etiss_coverage_count(2, 661, 660);
mask = mask | 24576LL;
etiss_coverage_count(2, 664, 662);
} // conditional
etiss_coverage_count(1, 665);
if (RV32IMACFDV_extension_enabled(cpu, system, plugin_pointers, 88ULL)) { // conditional
etiss_coverage_count(2, 667, 666);
mask = mask | 98304LL;
etiss_coverage_count(2, 670, 668);
} // conditional
etiss_coverage_count(1, 671);
if ((RV32IMACFDV_get_field(*((RV32IMACFDV*)cpu)->CSR[384LL], 2147483648ULL))) { // conditional
etiss_coverage_count(3, 681, 677, 683);
mask = mask | 262144LL;
etiss_coverage_count(2, 699, 697);
} // conditional
} // block
} // conditional
etiss_coverage_count(1, 702);
return mask;
etiss_coverage_count(1, 701);
} // block
}

etiss_uint32 RV32IMACFDV_mstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 563);
{ // block
etiss_coverage_count(1, 718);
etiss_uint32 mask = 6280ULL;
etiss_coverage_count(1, 713);
etiss_coverage_count(1, 717);
return mask | RV32IMACFDV_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(3, 716, 714, 715);
} // block
}

etiss_uint32 RV32IMACFDV_csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
etiss_coverage_count(1, 564);
{ // block
etiss_coverage_count(1, 836);
etiss_coverage_count(1, 719);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 722, 720);
etiss_coverage_count(1, 728);
return *((RV32IMACFDV*)cpu)->CSR[3LL] & 31ULL;
etiss_coverage_count(3, 727, 725, 726);
} // conditional
etiss_coverage_count(1, 729);
if (csr == 2LL) { // conditional
etiss_coverage_count(2, 732, 730);
etiss_coverage_count(1, 741);
return (*((RV32IMACFDV*)cpu)->CSR[3LL] >> 5ULL) & 7ULL;
etiss_coverage_count(6, 740, 737, 735, 736, 738, 739);
} // conditional
etiss_coverage_count(1, 742);
if (csr == 3072LL) { // conditional
etiss_coverage_count(2, 745, 743);
etiss_coverage_count(1, 747);
return etiss_get_cycles(cpu, system, plugin_pointers);
etiss_coverage_count(1, 746);
} // conditional
etiss_coverage_count(1, 748);
if (csr == 3200LL) { // conditional
etiss_coverage_count(2, 751, 749);
etiss_coverage_count(1, 755);
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 754, 752, 753);
} // conditional
etiss_coverage_count(1, 756);
if (csr == 3073LL) { // conditional
etiss_coverage_count(2, 759, 757);
etiss_coverage_count(1, 761);
return etiss_get_time();
etiss_coverage_count(1, 760);
} // conditional
etiss_coverage_count(1, 762);
if (csr == 3201LL) { // conditional
etiss_coverage_count(2, 765, 763);
etiss_coverage_count(1, 769);
return etiss_get_time() >> 32ULL;
etiss_coverage_count(3, 768, 766, 767);
} // conditional
etiss_coverage_count(1, 770);
if (csr == 3074LL) { // conditional
etiss_coverage_count(2, 773, 771);
etiss_coverage_count(1, 775);
return etiss_get_instret(cpu, system, plugin_pointers);
etiss_coverage_count(1, 774);
} // conditional
etiss_coverage_count(1, 776);
if (csr == 3202LL) { // conditional
etiss_coverage_count(2, 779, 777);
etiss_coverage_count(1, 783);
return etiss_get_instret(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 782, 780, 781);
} // conditional
etiss_coverage_count(1, 784);
if (csr == 768LL || csr == 256LL) { // conditional
etiss_coverage_count(5, 791, 787, 785, 790, 788);
etiss_coverage_count(1, 811);
return *((RV32IMACFDV*)cpu)->CSR[768LL] | 8589934592ULL | 34359738368ULL;
etiss_coverage_count(3, 810, 802, 794);
} // conditional
etiss_coverage_count(1, 812);
if (csr == 769LL) { // conditional
etiss_coverage_count(2, 815, 813);
etiss_coverage_count(1, 831);
return (((1ULL) << 30) | (((*((RV32IMACFDV*)cpu)->CSR[769LL]) & 0x3fffffffULL)));
etiss_coverage_count(4, 830, 829, 824, 828);
} // conditional
etiss_coverage_count(1, 835);
return *((RV32IMACFDV*)cpu)->CSR[csr];
etiss_coverage_count(2, 834, 833);
} // block
}

void RV32IMACFDV_csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val)
{
etiss_coverage_count(1, 565);
{ // block
etiss_coverage_count(1, 918);
etiss_coverage_count(1, 837);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 840, 838);
*((RV32IMACFDV*)cpu)->CSR[3LL] = (*((RV32IMACFDV*)cpu)->CSR[3LL] & 224ULL) | (val & 31ULL);
etiss_coverage_count(10, 873, 858, 872, 866, 861, 867, 870, 868, 869, 871);
} // conditional
 else if (csr == 2LL) { // conditional
etiss_coverage_count(2, 843, 841);
*((RV32IMACFDV*)cpu)->CSR[3LL] = ((val & 7ULL) << 5ULL) | (*((RV32IMACFDV*)cpu)->CSR[3LL] & 31ULL);
etiss_coverage_count(14, 891, 876, 890, 882, 879, 877, 878, 880, 881, 883, 888, 886, 887, 889);
} // conditional
 else if (csr == 3LL) { // conditional
etiss_coverage_count(2, 846, 844);
*((RV32IMACFDV*)cpu)->CSR[3LL] = val & 255ULL;
etiss_coverage_count(5, 898, 894, 897, 895, 896);
} // conditional
 else if (csr == 768LL) { // conditional
etiss_coverage_count(2, 849, 847);
*((RV32IMACFDV*)cpu)->CSR[768LL] = val & RV32IMACFDV_mstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 905, 901, 904, 902, 903);
} // conditional
 else if (csr == 256LL) { // conditional
etiss_coverage_count(2, 852, 850);
*((RV32IMACFDV*)cpu)->CSR[768LL] = val & RV32IMACFDV_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 912, 908, 911, 909, 910);
} // conditional
 else if (csr != 769LL) { // conditional
etiss_coverage_count(2, 855, 853);
*((RV32IMACFDV*)cpu)->CSR[csr] = val;
etiss_coverage_count(4, 917, 915, 914, 916);
} // conditional
} // block
}

etiss_uint64 RV32IMACFDV_get_field(etiss_uint64 reg, etiss_uint64 mask)
{
etiss_coverage_count(1, 572);
{ // block
etiss_coverage_count(1, 938);
etiss_coverage_count(1, 919);
if (!(mask)) { // conditional
etiss_coverage_count(2, 921, 920);
etiss_coverage_count(1, 923);
return 0LL;
etiss_coverage_count(1, 922);
} // conditional
etiss_coverage_count(1, 937);
return (reg & mask) / (mask & ~((mask << 1ULL)));
etiss_coverage_count(13, 936, 926, 924, 925, 927, 934, 928, 933, 931, 929, 930, 932, 935);
} // block
}

etiss_uint64 RV32IMACFDV_set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val)
{
etiss_coverage_count(1, 573);
{ // block
etiss_coverage_count(1, 961);
etiss_coverage_count(1, 960);
return ((reg & ~(mask)) | ((val * (mask & ~((mask << 1ULL)))) & mask));
etiss_coverage_count(21, 958, 942, 939, 941, 940, 943, 956, 953, 944, 951, 945, 950, 948, 946, 947, 949, 952, 954, 955, 957, 959);
} // block
}

etiss_uint8 RV32IMACFDV_ctz(etiss_uint64 val)
{
etiss_coverage_count(1, 574);
{ // block
etiss_coverage_count(1, 1053);
etiss_coverage_count(1, 962);
if (!(val)) { // conditional
etiss_coverage_count(2, 964, 963);
etiss_coverage_count(1, 966);
return 0LL;
etiss_coverage_count(1, 965);
} // conditional
etiss_uint8 res = 0LL;
etiss_coverage_count(2, 969, 968);
etiss_coverage_count(1, 970);
if ((val << 32ULL) == 0LL) { // conditional
etiss_coverage_count(6, 976, 973, 971, 972, 974, 975);
{ // block
etiss_coverage_count(1, 983);
res = res + 32ULL;
etiss_coverage_count(3, 979, 977, 978);
val = val >> 32ULL;
etiss_coverage_count(3, 982, 980, 981);
} // block
} // conditional
etiss_coverage_count(1, 984);
if ((val << 48ULL) == 0LL) { // conditional
etiss_coverage_count(6, 990, 987, 985, 986, 988, 989);
{ // block
etiss_coverage_count(1, 997);
res = res + 16ULL;
etiss_coverage_count(3, 993, 991, 992);
val = val >> 16ULL;
etiss_coverage_count(3, 996, 994, 995);
} // block
} // conditional
etiss_coverage_count(1, 998);
if ((val << 56ULL) == 0LL) { // conditional
etiss_coverage_count(6, 1004, 1001, 999, 1000, 1002, 1003);
{ // block
etiss_coverage_count(1, 1011);
res = res + 8ULL;
etiss_coverage_count(3, 1007, 1005, 1006);
val = val >> 8ULL;
etiss_coverage_count(3, 1010, 1008, 1009);
} // block
} // conditional
etiss_coverage_count(1, 1012);
if ((val << 60ULL) == 0LL) { // conditional
etiss_coverage_count(6, 1018, 1015, 1013, 1014, 1016, 1017);
{ // block
etiss_coverage_count(1, 1025);
res = res + 4ULL;
etiss_coverage_count(3, 1021, 1019, 1020);
val = val >> 4ULL;
etiss_coverage_count(3, 1024, 1022, 1023);
} // block
} // conditional
etiss_coverage_count(1, 1026);
if ((val << 62ULL) == 0LL) { // conditional
etiss_coverage_count(6, 1032, 1029, 1027, 1028, 1030, 1031);
{ // block
etiss_coverage_count(1, 1039);
res = res + 2ULL;
etiss_coverage_count(3, 1035, 1033, 1034);
val = val >> 2ULL;
etiss_coverage_count(3, 1038, 1036, 1037);
} // block
} // conditional
etiss_coverage_count(1, 1040);
if ((val << 63ULL) == 0LL) { // conditional
etiss_coverage_count(6, 1046, 1043, 1041, 1042, 1044, 1045);
{ // block
etiss_coverage_count(1, 1050);
res = res + 1ULL;
etiss_coverage_count(3, 1049, 1047, 1048);
} // block
} // conditional
etiss_coverage_count(1, 1052);
return res;
etiss_coverage_count(1, 1051);
} // block
}

void RV32IMACFDV_raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_uint32 mcause)
{
cpu->return_pending = 1;
cpu->exception = 0;
etiss_coverage_count(1, 575);
{ // block
etiss_coverage_count(1, 1266);
etiss_uint32 epc = cpu->instructionPointer;
etiss_coverage_count(2, 1056, 1055);
etiss_uint32 deleg = 0LL;
etiss_coverage_count(1, 1058);
etiss_uint32 vector = 0LL;
etiss_coverage_count(1, 1059);
etiss_uint32 bit = mcause;
etiss_coverage_count(2, 1061, 1060);
etiss_int32 irq2 = (mcause & 2147483648ULL) != 0LL;
etiss_coverage_count(6, 1077, 1076, 1073, 1063, 1074, 1075);
etiss_coverage_count(1, 1078);
if (irq2) { // conditional
etiss_coverage_count(1, 1079);
{ // block
etiss_coverage_count(1, 1104);
deleg = ((((RV32IMACFDV*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDV*)cpu)->CSR[771LL]) : (0LL);
etiss_coverage_count(8, 1090, 1080, 1089, 1083, 1081, 1084, 1087, 1088);
bit = bit & 2147483647ULL;
etiss_coverage_count(2, 1103, 1091);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 1116);
deleg = ((((RV32IMACFDV*)cpu)->PRIV <= 1LL)) ? (*((RV32IMACFDV*)cpu)->CSR[770LL]) : (0LL);
etiss_coverage_count(8, 1115, 1105, 1114, 1108, 1106, 1109, 1112, 1113);
} // block
} // conditional
etiss_coverage_count(1, 1117);
if (((RV32IMACFDV*)cpu)->PRIV <= 1LL && (deleg >> bit) & 1ULL) { // conditional
etiss_coverage_count(9, 1127, 1120, 1118, 1126, 1123, 1121, 1122, 1124, 1125);
{ // block
etiss_coverage_count(1, 1196);
vector = ((*((RV32IMACFDV*)cpu)->CSR[261LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 1142, 1128, 1141, 1136, 1133, 1131, 1132, 1134, 1135, 1139, 1137, 1138, 1140);
cpu->nextPc = (*((RV32IMACFDV*)cpu)->CSR[261LL] & -2LL) + vector;
etiss_coverage_count(7, 1155, 1143, 1154, 1151, 1146, 1152, 1153);
*((RV32IMACFDV*)cpu)->CSR[321LL] = epc;
etiss_coverage_count(3, 1160, 1158, 1159);
*((RV32IMACFDV*)cpu)->CSR[322LL] = mcause;
etiss_coverage_count(3, 1165, 1163, 1164);
etiss_uint32 s = RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 256LL);
etiss_coverage_count(2, 1169, 1168);
s = RV32IMACFDV_set_field(s, 32LL, RV32IMACFDV_get_field(s, 2LL));
etiss_coverage_count(6, 1177, 1170, 1176, 1171, 1175, 1173);
s = RV32IMACFDV_set_field(s, 256LL, ((RV32IMACFDV*)cpu)->PRIV);
etiss_coverage_count(5, 1183, 1178, 1182, 1179, 1181);
s = RV32IMACFDV_set_field(s, 2LL, 0LL);
etiss_coverage_count(5, 1189, 1184, 1188, 1185, 1187);
RV32IMACFDV_csr_write(cpu, system, plugin_pointers, 256LL, s);
etiss_coverage_count(2, 1192, 1191);
((RV32IMACFDV*)cpu)->PRIV = (1LL) & 0x7ULL;
etiss_coverage_count(2, 1195, 1193);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 1265);
vector = ((*((RV32IMACFDV*)cpu)->CSR[773LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 1211, 1197, 1210, 1205, 1202, 1200, 1201, 1203, 1204, 1208, 1206, 1207, 1209);
cpu->nextPc = (*((RV32IMACFDV*)cpu)->CSR[773LL] & -2LL) + vector;
etiss_coverage_count(7, 1224, 1212, 1223, 1220, 1215, 1221, 1222);
*((RV32IMACFDV*)cpu)->CSR[833LL] = epc;
etiss_coverage_count(3, 1229, 1227, 1228);
*((RV32IMACFDV*)cpu)->CSR[834LL] = mcause;
etiss_coverage_count(3, 1234, 1232, 1233);
etiss_uint32 s = RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 768LL);
etiss_coverage_count(2, 1238, 1237);
s = RV32IMACFDV_set_field(s, 128LL, RV32IMACFDV_get_field(s, 8LL));
etiss_coverage_count(6, 1246, 1239, 1245, 1240, 1244, 1242);
s = RV32IMACFDV_set_field(s, 6144LL, ((RV32IMACFDV*)cpu)->PRIV);
etiss_coverage_count(5, 1252, 1247, 1251, 1248, 1250);
s = RV32IMACFDV_set_field(s, 8LL, 0LL);
etiss_coverage_count(5, 1258, 1253, 1257, 1254, 1256);
RV32IMACFDV_csr_write(cpu, system, plugin_pointers, 768LL, s);
etiss_coverage_count(2, 1261, 1260);
((RV32IMACFDV*)cpu)->PRIV = (3LL) & 0x7ULL;
etiss_coverage_count(2, 1264, 1262);
} // block
} // conditional
} // block
}

void RV32IMACFDV_translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
etiss_coverage_count(1, 576);
{ // block
etiss_coverage_count(1, 1323);
etiss_uint32 code = 0LL;
etiss_coverage_count(2, 1270, 1269);
etiss_coverage_count(1, 1271);
if (cause == -2147483648LL) { // conditional
etiss_coverage_count(2, 1274, 1272);
etiss_coverage_count(1, 1293);
return;
} // conditional
 else if (cause == -5LL) { // conditional
etiss_coverage_count(2, 1277, 1275);
code = 5LL;
etiss_coverage_count(2, 1296, 1294);
} // conditional
 else if (cause == -14LL) { // conditional
etiss_coverage_count(2, 1280, 1278);
code = 13LL;
etiss_coverage_count(2, 1299, 1297);
} // conditional
 else if (cause == -6LL) { // conditional
etiss_coverage_count(2, 1283, 1281);
code = 7LL;
etiss_coverage_count(2, 1302, 1300);
} // conditional
 else if (cause == -15LL) { // conditional
etiss_coverage_count(2, 1286, 1284);
code = 15LL;
etiss_coverage_count(2, 1305, 1303);
} // conditional
 else if (cause == -7LL) { // conditional
etiss_coverage_count(2, 1289, 1287);
code = 1LL;
etiss_coverage_count(2, 1308, 1306);
} // conditional
 else if (cause == -9LL) { // conditional
etiss_coverage_count(2, 1292, 1290);
{ // block
etiss_coverage_count(1, 1316);
code = RV32IMACFDV_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(3, 1311, 1309, 1310);
etiss_coverage_count(1, 1312);
if (!(code)) { // conditional
etiss_coverage_count(2, 1314, 1313);
etiss_coverage_count(1, 1315);
return;
} // conditional
} // block
} // conditional
else { // conditional
code = 2LL;
etiss_coverage_count(2, 1319, 1317);
} // conditional
RV32IMACFDV_raise(cpu, system, plugin_pointers, 0LL, code);
etiss_coverage_count(3, 1322, 1320, 1321);
} // block
}

etiss_uint32 RV32IMACFDV_calc_irq_mcause(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 577);
{ // block
etiss_coverage_count(1, 1504);
etiss_uint32 pending_interrupts = *((RV32IMACFDV*)cpu)->CSR[772LL] & *((RV32IMACFDV*)cpu)->CSR[836LL];
etiss_coverage_count(4, 1332, 1331, 1327, 1330);
etiss_coverage_count(1, 1333);
if (!(pending_interrupts)) { // conditional
etiss_coverage_count(2, 1335, 1334);
etiss_coverage_count(1, 1337);
return 0LL;
etiss_coverage_count(1, 1336);
} // conditional
etiss_uint32 mie = RV32IMACFDV_get_field(*((RV32IMACFDV*)cpu)->CSR[768LL], 8LL);
etiss_coverage_count(3, 1344, 1343, 1341);
etiss_uint32 m_enabled = ((RV32IMACFDV*)cpu)->PRIV < 3LL || (((RV32IMACFDV*)cpu)->PRIV == 3LL && mie);
etiss_coverage_count(9, 1356, 1355, 1348, 1346, 1353, 1351, 1349, 1352, 1354);
etiss_uint32 enabled_interrupts = pending_interrupts & ~(*((RV32IMACFDV*)cpu)->CSR[771LL]) & -(m_enabled);
etiss_coverage_count(8, 1367, 1366, 1363, 1358, 1362, 1361, 1365, 1364);
etiss_coverage_count(1, 1368);
if (enabled_interrupts == 0LL) { // conditional
etiss_coverage_count(3, 1371, 1369, 1370);
{ // block
etiss_coverage_count(1, 1403);
etiss_uint32 deleg = *((RV32IMACFDV*)cpu)->CSR[771LL];
etiss_coverage_count(2, 1376, 1375);
etiss_uint32 sie = RV32IMACFDV_get_field(RV32IMACFDV_csr_read(cpu, system, plugin_pointers, 256LL), 2LL);
etiss_coverage_count(3, 1382, 1381, 1379);
etiss_uint32 s_enabled = ((RV32IMACFDV*)cpu)->PRIV < 1LL || (((RV32IMACFDV*)cpu)->PRIV == 1LL && sie);
etiss_coverage_count(9, 1394, 1393, 1386, 1384, 1391, 1389, 1387, 1390, 1392);
enabled_interrupts = pending_interrupts & deleg & -(s_enabled);
etiss_coverage_count(8, 1402, 1395, 1401, 1398, 1396, 1397, 1400, 1399);
} // block
} // conditional
etiss_coverage_count(1, 1404);
if (enabled_interrupts) { // conditional
etiss_coverage_count(1, 1405);
{ // block
etiss_coverage_count(1, 1501);
etiss_coverage_count(1, 1406);
if (enabled_interrupts >> 12ULL) { // conditional
etiss_coverage_count(2, 1412, 1407);
enabled_interrupts = enabled_interrupts >> 12ULL << 12ULL;
etiss_coverage_count(5, 1455, 1443, 1454, 1449, 1444);
} // conditional
 else if (enabled_interrupts & 2048LL) { // conditional
etiss_coverage_count(2, 1415, 1413);
enabled_interrupts = 2048LL;
etiss_coverage_count(2, 1458, 1456);
} // conditional
 else if (enabled_interrupts & 8LL) { // conditional
etiss_coverage_count(2, 1418, 1416);
enabled_interrupts = 8LL;
etiss_coverage_count(2, 1461, 1459);
} // conditional
 else if (enabled_interrupts & 128LL) { // conditional
etiss_coverage_count(2, 1421, 1419);
enabled_interrupts = 128LL;
etiss_coverage_count(2, 1464, 1462);
} // conditional
 else if (enabled_interrupts & 512LL) { // conditional
etiss_coverage_count(2, 1424, 1422);
enabled_interrupts = 512LL;
etiss_coverage_count(2, 1467, 1465);
} // conditional
 else if (enabled_interrupts & 2LL) { // conditional
etiss_coverage_count(2, 1427, 1425);
enabled_interrupts = 2LL;
etiss_coverage_count(2, 1470, 1468);
} // conditional
 else if (enabled_interrupts & 32LL) { // conditional
etiss_coverage_count(2, 1430, 1428);
enabled_interrupts = 32LL;
etiss_coverage_count(2, 1473, 1471);
} // conditional
 else if (enabled_interrupts & 8192LL) { // conditional
etiss_coverage_count(2, 1433, 1431);
enabled_interrupts = 8192LL;
etiss_coverage_count(2, 1476, 1474);
} // conditional
 else if (enabled_interrupts & 1024LL) { // conditional
etiss_coverage_count(2, 1436, 1434);
enabled_interrupts = 1024LL;
etiss_coverage_count(2, 1479, 1477);
} // conditional
 else if (enabled_interrupts & 4LL) { // conditional
etiss_coverage_count(2, 1439, 1437);
enabled_interrupts = 4LL;
etiss_coverage_count(2, 1482, 1480);
} // conditional
 else if (enabled_interrupts & 64LL) { // conditional
etiss_coverage_count(2, 1442, 1440);
enabled_interrupts = 64LL;
etiss_coverage_count(2, 1485, 1483);
} // conditional
else { // conditional
etiss_coverage_count(1, 1487);
return 0LL;
etiss_coverage_count(1, 1486);
} // conditional
etiss_coverage_count(1, 1500);
return 2147483648ULL | RV32IMACFDV_ctz(enabled_interrupts);
etiss_coverage_count(3, 1499, 1498, 1497);
} // block
} // conditional
etiss_coverage_count(1, 1503);
return 0LL;
etiss_coverage_count(1, 1502);
} // block
}

void RV32IMACFDV_check_irq(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 578);
{ // block
etiss_coverage_count(1, 1513);
etiss_uint32 irq_mcause = RV32IMACFDV_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(2, 1507, 1506);
etiss_coverage_count(1, 1508);
if (irq_mcause) { // conditional
etiss_coverage_count(1, 1509);
RV32IMACFDV_raise(cpu, system, plugin_pointers, 1ULL, irq_mcause);
etiss_coverage_count(3, 1512, 1510, 1511);
} // conditional
} // block
}
// clang-format on
