/**
 * Generated on Wed, 15 Mar 2023 15:20:41 +0100.
 *
 * This file contains the function macros for the RV32IMAC core architecture.
 */

#ifndef __RV32IMAC_FUNCS_H
#define __RV32IMAC_FUNCS_H

#ifndef ETISS_ARCH_STATIC_FN_ONLY
#include "Arch/RV32IMAC/RV32IMAC.h"
#include "etiss/jit/CPU.h"
#include "etiss/jit/System.h"
#include "etiss/jit/ReturnCode.h"
#endif


static inline etiss_int32 raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_int32 mcause)
{
if (irq != 0U) {
return -9;
} else {
if (mcause == 0 || mcause == 1) {
return -7;
}
if (mcause == 2) {
return -11;
}
if (mcause == 3) {
return 2147483648;
}
if (mcause == 4 || mcause == 5) {
return -5;
}
if (mcause == 6 || mcause == 7) {
return -6;
}
if (mcause == 8 || mcause == 9 || mcause == 10 || mcause == 11) {
return -17;
}
if (mcause == 12 || mcause == 20) {
return -13;
}
if (mcause == 13 || mcause == 21) {
return -14;
}
if (mcause == 15 || mcause == 23) {
return -15;
}
return -11;
}
}

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void leave(etiss_int32 priv_lvl);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void wait(etiss_int32 flag);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_cycles(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_time();
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint64 etiss_get_instret(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers);
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline etiss_uint32 csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
if (csr == 1U) {
return ((RV32IMAC*)cpu)->CSR[3U] & 31U;
}
if (csr == 2U) {
return (((RV32IMAC*)cpu)->CSR[3U] >> 5U) & 7U;
}
if (csr == 3072U) {
return etiss_get_cycles(cpu, system, plugin_pointers);
}
if (csr == 3200U) {
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32U;
}
if (csr == 3073U) {
return etiss_get_time();
}
if (csr == 3201U) {
return etiss_get_time() >> 32U;
}
if (csr == 3074U) {
return etiss_get_instret(cpu, system, plugin_pointers);
}
if (csr == 3202U) {
return etiss_get_instret(cpu, system, plugin_pointers) >> 32U;
}
return ((RV32IMAC*)cpu)->CSR[csr];
}
#endif

#ifndef ETISS_ARCH_STATIC_FN_ONLY
static inline void csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint32 val)
{
if (csr == 1U) {
((RV32IMAC*)cpu)->CSR[3] = (((RV32IMAC*)cpu)->CSR[3U] & 224U) | (val & 31U);
} else if (csr == 2U) {
((RV32IMAC*)cpu)->CSR[3] = ((val & 7U) << 5U) | (((RV32IMAC*)cpu)->CSR[3U] & 31U);
} else if (csr == 3U) {
((RV32IMAC*)cpu)->CSR[3] = val & 255U;
} else {
((RV32IMAC*)cpu)->CSR[csr] = val;
}
}
#endif
#endif