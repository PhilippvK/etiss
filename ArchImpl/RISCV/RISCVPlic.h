/*

        @copyright

        <pre>

        Copyright 2018 Chair of Electronic Design Automation, TUM

        This file is part of ETISS tool, see <https://github.com/tum-ei-eda/etiss>.

        The initial version of this software has been created with the funding support by the German Federal
        Ministry of Education and Research (BMBF) in the project EffektiV under grant 01IS13022.

        Redistribution and use in source and binary forms, with or without modification, are permitted
        provided that the following conditions are met:

        1. Redistributions of source code must retain the above copyright notice, this list of conditions and
        the following disclaimer.

        2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
        and the following disclaimer in the documentation and/or other materials provided with the distribution.

        3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse
        or promote products derived from this software without specific prior written permission.

        THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
        WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
        PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
        DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
        PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
        HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
        NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
        POSSIBILITY OF SUCH DAMAGE.

        </pre>

        @author Chair of Electronic Design Automation, TUM

        @version 0.1

*/

#ifndef ETISS_RISCVArch_RISCVPLIC_H_
#define ETISS_RISCVArch_RISCVPLIC_H_

#include "Encoding.h"
#include "RISCV.h"
#include "etiss/CPUArch.h"

#define PLIC_N_CTX 1
#define PLIC_N_SRC 32
#define PLIC_N_BNK 1 // ceil(PLIC_N_SRC/32)

#define PLIC_BASE_ADDR 0x0c000000

// Warnings:
// src=0: RESERVED, i.e. Priority interrupt source 0 does not exist. No source, or source 0 ID, means no interrupt
// 1<=src<=31: allowed
// 32<=src<=1023: unimplemented!
// one bank = 32 bits
// bank can go up to 1024/32=32, here only 1?
// 0<=ctx<=15871

// ?
#define PRIO_SOURCE(src) (PLIC_BASE_ADDR + 0x04*src)
#define PRIO_SOURCE_BASE_ADDR PRIO_SOURCE(0)

// Interrupt pending for sources 32*(bank+1)-1 downto 32*(bank), here only 31..0
#define IP_BANK(bank) (PLIC_BASE_ADDR + 0x1000 + 0x04*bank)
#define IP_BANK_BASE_ADDR IP_BANK(0)

// Context-specific interrupt enable bits. Context means, hart context, i.e. a hart's priviledge level. For Ariane we have 1 hart and 2 priviledge levels (S)upervised (M)achine, giving us 2 contexts, where context 0 (ctx0) is hart0:M and context 1 (ctx1) is hart0:S. This reflects ariane's interrupt notification (irq[0:1] wires to core), where  irq[0] maps to machine irq and irq[1] to supervisor irq (see decoder stage).
#define IE_BANK_CTX(bank, ctx) (PLIC_BASE_ADDR + 0x2000 + 0x80*ctx + 0x04*bank)
#define IE_BANK_CTX_BASE_ADDR IE_BANK_CTX(0, 0)

// ?
#define PRIOTH_CTX(ctx) (PLIC_BASE_ADDR + 0x200000 + 0x1000*ctx)
#define PRIOTH_CTX_BASE_ADDR PRIOTH_CTX(0)

// Context-specific interrupt claim/complete process registers. A read to this register claims and Plic should provide the associated interrupt source's ID.
#define COMPLETE_CTX(ctx) (PLIC_BASE_ADDR + 0x200000 + 0x1000*ctx + 0x04)
#define COMPLETE_CTX_BASE_ADDR COMPLETE_CTX(0)


class RISCVPlic;

struct RISCVPlicSystem
{

    struct ETISS_System sys;

    RISCVPlic *this_;

    ETISS_System *orig;
};

class RISCVPlic : public etiss::CoroutinePlugin, public etiss::SystemWrapperPlugin
{
  public:
    RISCVPlic();

    virtual ~RISCVPlic() {}

    void init(ETISS_CPU *cpu, ETISS_System *system, etiss::CPUArch *arch) { riscvcpu = (RISCV *)cpu; }



    void calc_pending();

    void claim(etiss_int32 ctx);

    void set_active();

    void complete(etiss_uint32 ctx);

    etiss::int32 execute();

    ETISS_System *wrap(ETISS_CPU *cpu, ETISS_System *system);

    ETISS_System *unwrap(ETISS_CPU *cpu, ETISS_System *system);

    bool plic_enabled_;
    
    // riscv spec (sifive)
    etiss::uint32 ip_[PLIC_N_BNK];
    etiss::uint32 ie_[PLIC_N_BNK][PLIC_N_CTX];
    etiss::uint32 pth_[PLIC_N_CTX];
    etiss::uint32 prio_[PLIC_N_SRC+1];
    etiss::uint32 cc_[PLIC_N_CTX];

    // implementation specific
    // target
    etiss::uint32 id_[PLIC_N_CTX];

    // gateways
    etiss::uint32 set_[PLIC_N_BNK];
    etiss::uint32 ia_[PLIC_N_BNK];
    etiss::uint32 le_cfg_[PLIC_N_BNK];  // 1 bit per source - Interrupt input sensitive mask config: 0=level , 1=edge
    etiss_uint32 srcs_d_[PLIC_N_BNK];

    


  protected:
    virtual std::string _getPluginName() const { return std::string("RISCV-V PLIC"); }

  private:
    RISCV *riscvcpu;

};

#endif
