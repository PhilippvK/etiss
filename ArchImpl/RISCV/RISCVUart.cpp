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

#include "RISCVUart.h"
#include "Encoding.h"
#include "etiss/CPUArch.h"

static etiss_int32 iread(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    ETISS_System *sys = lsys->orig;
    return sys->iread(sys->handle, cpu, addr, length);
}

static etiss_int32 iwrite(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    ETISS_System *sys = lsys->orig;
    return sys->iwrite(sys->handle, cpu, addr, buffer, length);
}

etiss_int32 dread(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    char *regs = t = lsys->this_->regs_;
    // TODO: force length=1?
    switch (addr & 0xfffffffc)
    {
    case UART_REG_RBR:
    case UART_REG_DLL:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB) {
            memcpy(buffer, regs[UART_IDX_DLL] + (addr & 0x3), length);
        } else {
            // TODO: move to helper function
            char data; // ???
            regs[UART_IDX_RBR] = data;
            regs[UART_IDX_LSR] = 0x61; // TODO: make more readable?
            lsys->this->send_interrupt_ = true;
            memcpy(buffer, regs[UART_IDX_RBR] + (addr & 0x3), length);
        }
        break;
    case UART_REG_IER:
    case UART_REG_DLM:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB) {
            memcpy(buffer, regs[UART_IDX_DLM] + (addr & 0x3), length);
        } else {
            memcpy(buffer, regs[UART_IDX_IER] + (addr & 0x3), length);
        }
        break;
    case UART_REG_IIR:
        memcpy(buffer, regs[UART_IDX_IIR] + (addr & 0x3), length);
        break;
    case UART_REG_LCR:
        memcpy(buffer, regs[UART_IDX_LCR] + (addr & 0x3), length);
    case UART_REG_MCR:
        memcpy(buffer, regs[UART_IDX_MCR] + (addr & 0x3), length);
    case UART_REG_LSR:
        memcpy(buffer, regs[UART_IDX_LSR] + (addr & 0x3), length);
    case UART_REG_MSR:
        memcpy(buffer, regs[UART_IDX_MSR] + (addr & 0x3), length);
    case UART_REG_SCR:
        memcpy(buffer, regs[UART_IDX_SCR] + (addr & 0x3), length);
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dread(sys->handle, cpu, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static etiss_int32 dwrite(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    switch (addr & 0xfffffffc)
    {
    case UART_REG_THR:
    case UART_REG_DLL:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB) {
            memcpy(regs[UART_IDX_DLL] + (addr & 0x3), buffer, length);
        } else {
            memcpy(regs[UART_IDX_THR] + (addr & 0x3), buffer, length);
        }
        break;
    case UART_REG_IER:
    case UART_REG_DLM:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB) {
            memcpy(regs[UART_IDX_DLM] + (addr & 0x3), buffer, length);
        } else {
            memcpy(regs[UART_IDX_IER] + (addr & 0x3), buffer, length);
        }
        break;
    case UART_REG_FCR:
        memcpy(regs[UART_IDX_FCR] + (addr & 0x3), buffer, length);
        break;
    case UART_REG_LCR:
        memcpy(regs[UART_IDX_LCR] + (addr & 0x3), buffer, length);
    case UART_REG_MCR:
        memcpy(regs[UART_IDX_MCR] + (addr & 0x3), buffer, length);
    case UART_REG_LSR:
        memcpy(regs[UART_IDX_LSR] + (addr & 0x3), buffer, length);
    case UART_REG_MSR:
        memcpy(regs[UART_IDX_MSR] + (addr & 0x3), buffer, length);
    case UART_REG_SCR:
        memcpy(regs[UART_IDX_SCR] + (addr & 0x3), buffer, length);
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dwrite(sys->handle, cpu, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static etiss_int32 dbg_read(void *handle, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    char *mtime_buf;
    switch (addr & 0xfffffffc)
    {
    case MTIMELO_ADDR:
        printf("DBG_READ MTIMELO\n");
        mtime_buf = (char *)(&(lsys->this_->mtimelo_));
        memcpy(buffer, mtime_buf + (addr & 0x3), length);
        break;
    case MTIMEHI_ADDR:
        printf("DBG_READ MTIMEHI\n");
        mtime_buf = (char *)(&(lsys->this_->mtimehi_));
        memcpy(buffer, mtime_buf + (addr & 0x3), length);
        break;
    case MTIMECMPLO_ADDR:
    case MTIMECMPHI_ADDR:
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dbg_read(sys->handle, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static etiss_int32 dbg_write(void *handle, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    switch (addr & 0xfffffffc)
    {
    case MTIMELO_ADDR:
        printf("DWRITE MTIMELO\n");
        memcpy(lsys->this_->mtimelo_buf_ + (addr & 0x3), buffer, length);
        break;
    case MTIMEHI_ADDR:
        printf("DWRITE MTIMEHI\n");
        memcpy(lsys->this_->mtimehi_buf_ + (addr & 0x3), buffer, length);
        break;
    case MTIMECMPLO_ADDR:
        printf("DBG_WRITE MTIMECMPLO\n");
        memcpy(lsys->this_->mtimecmplo_buf_ + (addr & 0x3), buffer, length);
        break;
    case MTIMECMPHI_ADDR:
        printf("DBG_WRITE MTIMECMPHI\n");
        memcpy(lsys->this_->mtimecmphi_buf_ + (addr & 0x3), buffer, length);
        break;
    default:
        ETISS_System *sys = lsys->orig;
        return sys->dbg_write(sys->handle, addr, buffer, length);
    }
    return etiss::RETURNCODE::NOERROR;
}

static void syncTime(void *handle, ETISS_CPU *cpu)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    ETISS_System *sys = lsys->orig;
    sys->syncTime(sys->handle, cpu);
}

RISCVUart::RISCVUart()
    //: clint_enabled_(false)
    : clint_enabled_(true)
    , mtimecmplo_(0)
    , mtimecmphi_(0)
    , mtimelo_(0)
    , mtimehi_(0)
{
    memset(mtimelo_buf_, 0, 4);
    memset(mtimehi_buf_, 0, 4);
    memset(mtimecmplo_buf_, 0, 4);
    memset(mtimecmphi_buf_, 0, 4);
}

etiss::int32 RISCVUart::execute()
{
    static const uint64_t _OVERFLOW_ = 0x0FFFFFFFF;
    static const uint64_t rtcPeriod_ps = 30517578; //~32.768kHz
    static uint64_t rtcCounter_ps = 0;
    bool irq = false;

    int cpu_cycle_time = ((ETISS_CPU *)riscvcpu)->cpuCycleTime_ps;
    long cpu_time = ((ETISS_CPU *)riscvcpu)->cpuTime_ps;
    //mtime_overflow_ = (new_mtime < mtime_) ? true : false;
    //mtime_ = new_mtime;

    if (mtimecmplo_buf_[0] || mtimecmphi_buf_[0]) {
        mtimelo_ = *((etiss::uint32 *)mtimelo_buf_);
        mtimehi_ = *((etiss::uint32 *)mtimehi_buf_);
        mtimecmplo_ = *((etiss::uint32 *)mtimecmplo_buf_);
        mtimecmphi_ = *((etiss::uint32 *)mtimecmphi_buf_);

        // Setting a compare value automatically enabled the clint
        if (!clint_enabled_) {
            clint_enabled_ = true;
        }

        rtcCounter_ps += cpu_cycle_time;
	      if (rtcCounter_ps >= rtcPeriod_ps) {
		        //(*irq_out_)[1] = 0;
	          mtimelo_ = mtimelo_ + 1;
	          if (mtimelo_ >= _OVERFLOW_) {
	              mtimelo_ = 0;
	              mtimehi_ = mtimehi_ + 1;
	              if (mtimehi_ >= _OVERFLOW_) {
	                  mtimehi_ = 0;
	              }
	          }

	          uint64_t tmp1 = 0, tmp2 = 0;
	          tmp1 = ((uint64_t)mtimelo_) | ((uint64_t)mtimehi_ << 32);
	          tmp2 = ((uint64_t)mtimecmplo_) | ((uint64_t)mtimecmphi_ << 32);

	          if (tmp1 >= tmp2) {
	          	  irq = true;
	          }

            rtcCounter_ps = 0;
  	    }
    }

    *((etiss::uint32 *)mtimelo_buf_) = mtimelo_;
    *((etiss::uint32 *)mtimehi_buf_) = mtimehi_;

    if (!clint_enabled_) {
        return etiss::RETURNCODE::NOERROR;
    } else if (irq) {
        printf("cpu_cycle_time=%d, cpu_time=%ld\n",cpu_cycle_time,cpu_time);
        //(riscvcpu->CSR[CSR_MIP]) |= MIP_MSIP;
        (riscvcpu->CSR[CSR_MIP]) |= MIP_MTIP;
        return etiss::RETURNCODE::INTERRUPT;
    }

    return etiss::RETURNCODE::NOERROR;
}

ETISS_System *RISCVUart::wrap(ETISS_CPU *cpu, ETISS_System *system)
{

    RISCVUartSystem *ret = new RISCVUartSystem();

    ret->sys.iread = &iread;
    ret->sys.iwrite = &iwrite;
    ret->sys.dread = &dread;
    ret->sys.dwrite = &dwrite;
    ret->sys.dbg_read = &dbg_read;
    ret->sys.dbg_write = &dbg_write;
    ret->sys.syncTime = &syncTime;

    ret->sys.handle = (void *)ret;

    ret->this_ = this;

    ret->orig = system;

    return (ETISS_System *)ret;
}

ETISS_System *RISCVUart::unwrap(ETISS_CPU *cpu, ETISS_System *system)
{

    ETISS_System *ret = ((RISCVUartSystem *)system)->orig;

    delete (RISCVUartSystem *)system;

    return ret;
}
