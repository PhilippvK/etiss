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

#include "RISCVPlic.h"
#include "Encoding.h"
#include "etiss/CPUArch.h"

// TODO: CLAIM IS WRITE ONLY?

static etiss_int32 iread__(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    ETISS_System *sys = lsys->orig;
    return sys->iread(sys->handle, cpu, addr, length);
}

static etiss_int32 iwrite__(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    ETISS_System *sys = lsys->orig;
    return sys->iwrite(sys->handle, cpu, addr, buffer, length);
}


etiss_int32 dread__(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    etiss_int32 src, bank, ctx;
    switch (addr & 0xfc000000)
    {
    case PLIC_BASE_ADDR:
        switch (addr & 0xffe00000)
        {
        case PLIC_BASE_ADDR:  // PRIO_SOURCE_BASE_ADDR or IP_BANK_BASE_ADDR or   
            switch (addr & 0xffffe000)
            {
            case PLIC_BASE_ADDR:
                switch (addr & 0xfffff000)
                {
                case PRIO_SOURCE_BASE_ADDR:
                    src = (addr & 0x3ff) >> 2;
                    if (src > 0 && src < 1024)  // Needs 0xfff to be useful?
                    {
                        printf("DREAD PRIO_SOURCE src=%d\n", src);
                        memcpy(buffer, (char *)(&(lsys->this_->prio_[src])) + (addr & 0x3), length);
                        break;
                    }
                    else
                    {
                        printf("INVALID READ ACCESS (PRIO_SOURCE)! src=%d\n", src);
                        return etiss::RETURNCODE::DBUS_READ_ERROR;
                    }
                    break;
                case IP_BANK_BASE_ADDR:
                    bank = (addr & 0x7f) >> 2;
                    if (bank < 32)  // Needs 0xff to be useful?
                    {
                        printf("DREAD IP_BANK bank=%d\n", bank);
                        memcpy(buffer, (char *)(&(lsys->this_->ip_[bank])) + (addr & 0x3), length);
                        break;
                    }
                    else
                    {
                        printf("INVALID READ ACCESS (IP_BANK)!\n");
                        return etiss::RETURNCODE::DBUS_READ_ERROR;
                    }
                    break;
                default: // illegal
                    printf("INVALID READ ACCESS!\n");
                    return etiss::RETURNCODE::DBUS_READ_ERROR;
                }
                break;
            default: // IE_BANK_CTX_BASE_ADDR
                bank = (addr & 0x7f) >> 2;
                ctx = (addr - IE_BANK_CTX_BASE_ADDR) >> 7;
                printf("DREAD IE_BANK_CTX bank=%d ctx=%d\n", bank, ctx);
                memcpy(buffer, (char *)(&(lsys->this_->ie_[bank][ctx])) + (addr & 0x3), length);
                break;
            }
            break;
        default:  // PRIOTH_CTX_BASE_ADDR or COMPLETE_CTX_BASE_ADDR
            switch (addr & 0xfff) 
            {
            case 0:  // PRIOTH_CTX_BASE_ADDR
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DREAD PRIOTH_CTX ctx=%d\n", ctx);
                memcpy(buffer, (char *)(&(lsys->this_->pth_[ctx])) + (addr & 0x3), length);
                break;
            case 4:  // CLAIM_CTX (COMPLETE_CTX)
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DREAD CLAIM_CTX ctx=%d\n", ctx);
                if (lsys->this_->id_[ctx])
                {
                    lsys->this_->claim(ctx);
                }
                memcpy(buffer, (char*)&lsys->this_->id_[ctx], length);
                break;
            default:  // illegal
                printf("INVALID READ ACCESS!\n");
                return etiss::RETURNCODE::DBUS_READ_ERROR;
            }
        }
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dread(sys->handle, cpu, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}


static etiss_int32 dwrite__(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    etiss_int32 src, bank, ctx;
    switch (addr & 0xfc000000)
    {
    case PLIC_BASE_ADDR:
        switch (addr & 0xffe00000)
        {
        case PLIC_BASE_ADDR:  // PRIO_SOURCE_BASE_ADDR or IP_BANK_BASE_ADDR or   
            switch (addr & 0xffffe000)
            {
            case PLIC_BASE_ADDR:
                switch (addr & 0xfffff000)
                {
                case PRIO_SOURCE_BASE_ADDR:
                    src = (addr & 0x3ff) >> 2;
                    if (src > 0 && src < 1024)  // Needs 0xfff to be useful?
                    {
                        printf("DWRITE PRIO_SOURCE src=%d\n", src);
                        memcpy((char *)(&(lsys->this_->prio_[src])) + (addr & 0x3), buffer, length);
                        break;
                    }
                    else
                    {
                        printf("INVALID WRITE ACCESS! src=%d\n", src);
                        return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                    }
                    break;
                case IP_BANK_BASE_ADDR:
                    bank = (addr & 0x7f) >> 2;
                    if (bank < 32)  // Needs 0xff to be useful?
                    {
                        printf("DWRITE IP_BANK bank=%d\n", bank);
                        memcpy((char *)(&(lsys->this_->ip_[bank])) + (addr & 0x3), buffer, length);
                        break;
                    }
                    else
                    {
                        printf("INVALID WRITE ACCESS (IP_BANK)!\n");
                        return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                    }
                    break;
                default: // illegal
                    printf("INVALID WRITE ACCESS!\n");
                    return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                }
                break;
            default: // IE_BANK_CTX_BASE_ADDR
                bank = (addr & 0x7f) >> 2;
                ctx = (addr - IE_BANK_CTX_BASE_ADDR) >> 7;
                printf("DWRITE IE_BANK_CTX bank=%d ctx=%d\n", bank, ctx);
                memcpy((char *)(&(lsys->this_->ie_[bank][ctx])) + (addr & 0x3), buffer, length);
                break;
            }
            break;
        default:  // PRIOTH_CTX_BASE_ADDR or COMPLETE_CTX_BASE_ADDR
            switch (addr & 0xfff) 
            {
            case 0:  // PRIOTH_CTX_BASE_ADDR
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DWRITE PRIOTH_CTX ctx=%d\n", ctx);
                memcpy((char *)(&(lsys->this_->pth_[ctx])) + (addr & 0x3), buffer, length);
                break;
            case 4:  // COMPLETE_CTX_BASE_ADDR (CLAIM_CTX_BASE_ADDR)
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DWRITE COMPLETE_CTX ctx=%d\n", ctx);
                memcpy((char *)(&(lsys->this_->cc_[ctx])) + (addr & 0x3), buffer, length);
                lsys->this_->complete(ctx);
                break;
            default:  // illegal
                printf("INVALID WRITE ACCESS!\n");
                return etiss::RETURNCODE::DBUS_WRITE_ERROR;
            }
        }
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dwrite(sys->handle, cpu, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static etiss_int32 dbg_read__(void *handle, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    etiss_int32 src, bank, ctx;
    switch (addr & 0xfc000000)
    {
    case PLIC_BASE_ADDR:
        switch (addr & 0xffe00000)
        {
        case PLIC_BASE_ADDR:  // PRIO_SOURCE_BASE_ADDR or IP_BANK_BASE_ADDR or   
            switch (addr & 0xffffe000)
            {
            case PLIC_BASE_ADDR:
                switch (addr & 0xfffff000)
                {
                case PRIO_SOURCE_BASE_ADDR:
                    src = (addr & 0x3ff) >> 2;
                    if (src > 0 && src < 1024)  // Needs 0xfff to be useful?
                    {
                        printf("DREAD PRIO_SOURCE src=%d\n", src);
                        memcpy(buffer, (char *)(&(lsys->this_->prio_[src])) + (addr & 0x3), length);
                        break;
                    }
                    else
                    {
                        printf("INVALID READ ACCESS (PRIO_SOURCE)! src=%d\n", src);
                        return etiss::RETURNCODE::DBUS_READ_ERROR;
                    }
                    break;
                case IP_BANK_BASE_ADDR:
                    bank = (addr & 0x7f) >> 2;
                    if (bank < 32)  // Needs 0xff to be useful?
                    {
                        printf("DREAD IP_BANK bank=%d\n", bank);
                        memcpy(buffer, (char *)(&(lsys->this_->ip_[bank])) + (addr & 0x3), length);
                        break;
                    }
                    else
                    {
                        printf("INVALID READ ACCESS (IP_BANK)! bank=%d\n", bank);
                        return etiss::RETURNCODE::DBUS_READ_ERROR;
                    }
                    break;
                default: // illegal
                    printf("INVALID READ ACCESS!\n");
                    return etiss::RETURNCODE::DBUS_READ_ERROR;
                }
                break;
            default: // IE_BANK_CTX_BASE_ADDR
                bank = (addr & 0x7f) >> 2;
                ctx = (addr - IE_BANK_CTX_BASE_ADDR) >> 7;
                printf("DREAD IE_BANK_CTX bank=%d ctx=%d\n", bank, ctx);
                memcpy(buffer, (char *)(&(lsys->this_->ie_[bank][ctx])) + (addr & 0x3), length);
                break;
            }
            break;
        default:  // PRIOTH_CTX_BASE_ADDR or COMPLETE_CTX_BASE_ADDR
            switch (addr & 0xfff) 
            {
            case 0:  // PRIOTH_CTX_BASE_ADDR
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DREAD PRIOTH_CTX ctx=%d\n", ctx);
                memcpy(buffer, (char *)(&(lsys->this_->pth_[ctx])) + (addr & 0x3), length);
                break;
            case 4:  // CLAIM_CTX (COMPLETE_CTX)
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DREAD CLAIM_CTX ctx=%d\n", ctx);
                if (lsys->this_->id_[ctx])
                {
                    lsys->this_->claim(ctx);
                }
                memcpy(buffer, (char*)&lsys->this_->id_[ctx], length);
                break;
            default:  // illegal
                printf("INVALID READ ACCESS!\n");
                return etiss::RETURNCODE::DBUS_READ_ERROR;
            }
        }
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dbg_read(sys->handle, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static etiss_int32 dbg_write__(void *handle, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    etiss_int32 src, bank, ctx;
    switch (addr & 0xfc000000)
    {
    case PLIC_BASE_ADDR:
        switch (addr & 0xffe00000)
        {
        case PLIC_BASE_ADDR:  // PRIO_SOURCE_BASE_ADDR or IP_BANK_BASE_ADDR or   
            switch (addr & 0xffffe000)
            {
            case PLIC_BASE_ADDR:
                switch (addr & 0xfffff000)
                {
                case PRIO_SOURCE_BASE_ADDR:
                    src = (addr & 0x3ff) >> 2;
                    if (src > 0 && src < 1024)  // Needs 0xfff to be useful?
                    {
                        printf("DWRITE PRIO_SOURCE src=%d\n", src);
                        memcpy((char *)(&(lsys->this_->prio_[src])) + (addr & 0x3), buffer, length);
                        break;
                    }
                    else
                    {
                        printf("INVALID WRITE ACCESS (PRIO_SOURCE)! src=%d\n", src);
                        return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                    }
                    break;
                case IP_BANK_BASE_ADDR:
                    bank = (addr & 0x7f) >> 2;
                    if (bank < 32)  // Needs 0xff to be useful?
                    {
                        printf("DWRITE IP_BANK bank=%d\n", bank);
                        memcpy((char *)(&(lsys->this_->ip_[bank])) + (addr & 0x3), buffer, length);
                        break;
                    }
                    else
                    {
                        printf("INVALID WRITE ACCESS (IP_BANK)! bank=%d\n", bank);
                        return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                    }
                    break;
                default: // illegal
                    printf("INVALID WRITE ACCESS!\n");
                    return etiss::RETURNCODE::DBUS_WRITE_ERROR;
                }
                break;
            default: // IE_BANK_CTX_BASE_ADDR
                bank = (addr & 0x7f) >> 2;
                ctx = (addr - IE_BANK_CTX_BASE_ADDR) >> 7;
                printf("DWRITE IE_BANK_CTX bank=%d ctx=%d\n", bank, ctx);
                memcpy((char *)(&(lsys->this_->ie_[bank][ctx])) + (addr & 0x3), buffer, length);
                break;
            }
            break;
        default:  // PRIOTH_CTX_BASE_ADDR or COMPLETE_CTX_BASE_ADDR
            switch (addr & 0xfff) 
            {
            case 0:  // PRIOTH_CTX_BASE_ADDR
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DWRITE PRIOTH_CTX ctx=%d\n", ctx);
                memcpy((char *)(&(lsys->this_->pth_[ctx])) + (addr & 0x3), buffer, length);
                break;
            case 4:  // COMPLETE_CTX_BASE_ADDR (CLAIM_CTX_BASE_ADDR)
                ctx = (addr - PRIOTH_CTX_BASE_ADDR) >> 12;
                printf("DWRITE COMPLETE_CTX ctx=%d\n", ctx);
                memcpy((char *)(&(lsys->this_->cc_[ctx])) + (addr & 0x3), buffer, length);
                lsys->this_->complete(ctx);
                break;
            default:  // illegal
                printf("INVALID WRITE ACCESS!\n");
                return etiss::RETURNCODE::DBUS_WRITE_ERROR;
            }
        }
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dbg_write(sys->handle, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static void syncTime(void *handle, ETISS_CPU *cpu)
{
    RISCVPlicSystem *lsys = ((RISCVPlicSystem *)handle);
    ETISS_System *sys = lsys->orig;
    sys->syncTime(sys->handle, cpu);
}

RISCVPlic::RISCVPlic()
    //: plic_enabled_(false)
    : plic_enabled_(true)
{
    memset(ip_, 0, 4*PLIC_N_BNK);
    memset(ie_, 0, 4*PLIC_N_BNK*PLIC_N_CTX);
    memset(pth_, 0, 4*PLIC_N_CTX);
    memset(prio_, 0, 4*(PLIC_N_SRC+1));
    memset(cc_, 0, 4*PLIC_N_CTX);
    memset(id_, 0, 4*PLIC_N_CTX);  // id=0: no active interrupt
    memset(set_, 0, 4*PLIC_N_BNK); 
    memset(ia_, 0, 4*PLIC_N_BNK); 
    memset(le_cfg_, 0xff, 4*PLIC_N_BNK); // all sources level(0)/edge(1) sensitive 
    memset(srcs_d_, 0, 4*PLIC_N_BNK); 

    // TODO: sure 3 for loops instead of memset!
}


void RISCVPlic::calc_pending()
{
    //printf("CALC PENDING\n");
    for (size_t bnk = 0; bnk < PLIC_N_BNK; ++bnk)
    {
        etiss_uint32 _ip = ip_[bnk];
        _ip = (_ip | (set_[bnk] & ~ia_[bnk] & ~_ip));
        ip_[bnk] = _ip;
    }
}

void RISCVPlic::claim(etiss_int32 ctx)
{
    printf("CLAIM ctx=%u\n", ctx);
    etiss_uint32 bnk = id_[ctx] >> 5;
    etiss_uint32 claim_flags = (0x1 << (id_[ctx] & 0x1f));

    etiss_uint32 _ip = ip_[bnk];
    _ip = (_ip | (set_[bnk] & ~ia_[bnk] & ~_ip)) & (~claim_flags);
    ip_[bnk] = _ip;
}

void RISCVPlic::set_active()
{
    //printf("SET ACTIVE\n");
    for (size_t bnk = 0; bnk < PLIC_N_BNK; ++bnk)
    {
        etiss_uint32 _ia = ia_[bnk];
        _ia = (_ia | (set_[bnk] & ~_ia));
        ia_[bnk] = _ia;
    }
}

void RISCVPlic::complete(etiss_uint32 ctx)
{
    printf("COMPLETE ctx=%u\n", ctx);
    etiss_uint32 bnk = cc_[ctx] >> 5;
    etiss_uint32 complete_flags = (0x1 << (cc_[ctx] & 0x1f));

    etiss_uint32 _ia = ia_[bnk];
    _ia = (_ia | (set_[bnk] & ~_ia)) & (~complete_flags);
    ia_[bnk] = _ia;
}

etiss::int32 RISCVPlic::execute()
{
    //printf("RISCVPlic::execute\n");
    bool irq_out[PLIC_N_CTX] = {0};
    etiss_uint32 srcs_flags[PLIC_N_BNK];
    
    if (plic_enabled_)
    {
        
        //printf("\nirq_in:\n");
        
        /* Scan interrupt lines */
        etiss_uint32 interrupt_lines_31_0 = riscvcpu->CSR[CSR_EXT_INTERRUPT_LINES_31_0];
        if (interrupt_lines_31_0) {
            //printf("interrupt_lines_31_0=0b%08x\n", interrupt_lines_31_0);
        }
        //printf("(0) set:0x%08x|ia:0x%08x|ip:0x%08x\n", set_[0], ia_[0], ip_[0]);
        srcs_flags[0] = interrupt_lines_31_0;
        //gw_->source();
        //// TODO: make function
        for (size_t bnk = 0; bnk < PLIC_N_BNK; ++bnk)
        {
            set_[bnk] = 0;
            for (size_t src = 1; src < PLIC_N_SRC; ++src)
            {
                etiss_uint32 mask = 0x1 << src;
                if (le_cfg_[bnk] & mask)
                { // source is edge sensitive
                    set_[bnk] |= (srcs_flags[bnk] & mask) ? ((srcs_d_[bnk] & mask) == 0) << src : 0;
                }
                else
                {
                    set_[bnk] |= (srcs_flags[bnk] & mask);
                }
            }
            srcs_d_[bnk] = srcs_flags[bnk]; 
        }
        //printf("(1) set:0x%08x|ia:0x%08x|ip:0x%08x\n", set_[0], ia_[0], ip_[0]);
        /* Make empty claim: this calculated pending interrupts */
        //gw_->claim(0);
        //// TODO: make function to be called by MMIO
        calc_pending();
        ////
        //printf("(2) set:0x%08x|ia:0x%08x|ip:0x%08x\n", set_[0], ia_[0], ip_[0]);

        // loop (process targets/hards)
        //// TODO: make function
        for (size_t ctx = 0; ctx < PLIC_N_CTX; ++ctx)
        {
            etiss_uint32 max_prio = pth_[ctx]+1;
            bool irq_next = 0;
            for (size_t src = 1; src < PLIC_N_SRC; ++src)
            {
                etiss_uint32 bnk = src >> 5;  // src / 32 
                if (((ip_[bnk] & ie_[bnk][ctx]) & (0x1 << src)) && (prio_[src] >= max_prio)) {
                    max_prio = prio_[src];
                    id_[ctx] = src; // src=0 reserved
                    irq_next = 1;
                }
            }
            irq_out[ctx] = irq_next;
        }
        
        /* Make an empty complete: this sets active interrupts, thus blocks unclaimed pending interrupts to be fired again*/
        //gw_->complete(0)
        set_active();
        //printf("(3) set:0x%08x|ia:0x%08x|ip:0x%08x\n", set_[0], ia_[0], ip_[0]);

        // single hart, machine mode only
        if (irq_out[0])
        {
            // FIXME: Currently we only set IRQ flag if machine timer interrupt is enabled
            // This may not be standard conform, but this reduces a lot of spam in the verbose log
            if (riscvcpu->CSR[CSR_MIE] & MIP_MEIP) {
                (riscvcpu->CSR[CSR_MIP]) |= MIP_MEIP;
                return etiss::RETURNCODE::INTERRUPT;
            }
        } else {
            (riscvcpu->CSR[CSR_MIP]) &= ~MIP_MEIP;
        }
    }

    return etiss::RETURNCODE::NOERROR;
}

ETISS_System *RISCVPlic::wrap(ETISS_CPU *cpu, ETISS_System *system)
{

    RISCVPlicSystem *ret = new RISCVPlicSystem();

    ret->sys.iread = &iread__;
    ret->sys.iwrite = &iwrite__;
    ret->sys.dread = &dread__;
    ret->sys.dwrite = &dwrite__;
    ret->sys.dbg_read = &dbg_read__;
    ret->sys.dbg_write = &dbg_write__;
    ret->sys.syncTime = &syncTime;

    ret->sys.handle = (void *)ret;

    ret->this_ = this;

    ret->orig = system;

    return (ETISS_System *)ret;
}

ETISS_System *RISCVPlic::unwrap(ETISS_CPU *cpu, ETISS_System *system)
{

    ETISS_System *ret = ((RISCVPlicSystem *)system)->orig;

    delete (RISCVPlicSystem *)system;

    return ret;
}
