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

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

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

// TODO: fxixnduplicate declarartions by using classes
etiss_int32 dread_(void *handle, ETISS_CPU *cpu, etiss_uint64 addr, etiss_uint8 *buffer, etiss_uint32 length)
{
    RISCVUartSystem *lsys = ((RISCVUartSystem *)handle);
    char *regs = lsys->this_->regs_;
    // TODO: force length=1? and addr%4=0
    switch (addr & 0xfffffffc)
    {
    case UART_REG_RBR: // or UART_REG_DLL
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("READ DLL\n");
            *buffer = regs[UART_IDX_DLL];
        }
        else
        {
            // regs[UART_IDX_RBR] = 0;
            printf("READ RBR\n");
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_DR;
            *buffer = regs[UART_IDX_RBR];
        }
        break;
    case UART_REG_IER: // or UART_REG_DLM:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("READ DLM\n");
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_DR; // why?
            *buffer = regs[UART_IDX_DLM];
        }
        else
        {
            printf("READ IER\n");
            *buffer = regs[UART_IDX_IER];
            // TODO: handle interrupt enable
        }
        break;
    case UART_REG_IIR:
        printf("READ IIR\n");
        *buffer = regs[UART_IDX_IIR];
        break;
    case UART_REG_LCR:
        printf("READ LCR\n");
        *buffer = regs[UART_IDX_LCR];
        break;
    case UART_REG_MCR:
        printf("READ MCR\n");
        *buffer = regs[UART_IDX_MCR];
        break;
    case UART_REG_LSR:
        printf("READ LSR\n");
        *buffer = regs[UART_IDX_LSR];
        break;
    case UART_REG_MSR:
        printf("READ MSR\n");
        *buffer = regs[UART_IDX_MSR];
        break;
    case UART_REG_SCR:
        printf("READ SCR\n");
        *buffer = regs[UART_IDX_SCR];
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
    char *regs = lsys->this_->regs_;
    switch (addr & 0xfffffffc)
    {
    case UART_REG_THR: // or UART_REG_DLL
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("WRITE DLL\n");
            regs[UART_IDX_DLL] = *buffer;
        }
        else
        {
            printf("WRITE THR\n");
            regs[UART_IDX_THR] = *buffer;
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_THRE;
        }
        break;
    case UART_REG_IER: // or UART_REG_DLM
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("WRITE DLM\n");
            regs[UART_IDX_DLM] = *buffer;
        }
        else
        {
            printf("WRITE IER\n");
            regs[UART_IDX_IER] = *buffer;
        }
        break;
    case UART_REG_FCR: // unused
        printf("WRITE FCR\n");
        regs[UART_IDX_FCR] = *buffer;
        // TODO: handle clears
        break;
    case UART_REG_LCR:
        printf("WRITE LCR\n");
        regs[UART_IDX_LCR] = *buffer;
        break;
    case UART_REG_MCR:
        printf("WRITE MCR\n");
        regs[UART_IDX_MCR] = *buffer;
        break;
    case UART_REG_LSR:
        printf("WRITE LSR\n");
        regs[UART_IDX_LSR] = *buffer;
        break;
    case UART_REG_MSR:
        printf("WRITE MSR\n");
        regs[UART_IDX_MSR] = *buffer;
        break;
    case UART_REG_SCR:
        printf("WRITE SCR\n");
        regs[UART_IDX_SCR] = *buffer;
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
    char *regs = lsys->this_->regs_;
    switch (addr & 0xfffffffc)
    {
    case UART_REG_RBR: // or UART_REG_DLL
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("READ DLL\n");
            *buffer = regs[UART_IDX_DLL];
        }
        else
        {
            // regs[UART_IDX_RBR] = 0;
            printf("READ RBR\n");
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_DR;
            *buffer = regs[UART_IDX_RBR];
        }
        break;
    case UART_REG_IER: // or UART_REG_DLM:
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("READ DLM\n");
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_DR; // why?
            *buffer = regs[UART_IDX_DLM];
        }
        else
        {
            printf("READ IER\n");
            *buffer = regs[UART_IDX_IER];
            // TODO: handle interrupt enable
        }
        break;
    case UART_REG_IIR:
        printf("READ IIR\n");
        *buffer = regs[UART_IDX_IIR];
        break;
    case UART_REG_LCR:
        printf("READ LCR\n");
        *buffer = regs[UART_IDX_LCR];
        break;
    case UART_REG_MCR:
        printf("READ MCR\n");
        *buffer = regs[UART_IDX_MCR];
        break;
    case UART_REG_LSR:
        printf("READ LSR\n");
        *buffer = regs[UART_IDX_LSR];
        break;
    case UART_REG_MSR:
        printf("READ MSR\n");
        *buffer = regs[UART_IDX_MSR];
        break;
    case UART_REG_SCR:
        printf("READ SCR\n");
        *buffer = regs[UART_IDX_SCR];
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
    char *regs = lsys->this_->regs_;
    switch (addr & 0xfffffffc)
    {
    case UART_REG_THR: // or UART_REG_DLL
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("WRITE DLL\n");
            regs[UART_IDX_DLL] = *buffer;
        }
        else
        {
            printf("WRITE THR\n");
            regs[UART_IDX_THR] = *buffer;
            regs[UART_IDX_LSR] &= ~UART_MASK_LSR_THRE;
        }
        break;
    case UART_REG_IER: // or UART_REG_DLM
        if (regs[UART_IDX_LCR] & UART_MASK_LCR_DLAB)
        {
            printf("WRITE DLM\n");
            regs[UART_IDX_DLM] = *buffer;
        }
        else
        {
            printf("WRITE IER\n");
            regs[UART_IDX_IER] = *buffer;
        }
        break;
    case UART_REG_FCR: // unused
        printf("WRITE FCR\n");
        regs[UART_IDX_FCR] = *buffer;
        // TODO: handle clears
        break;
    case UART_REG_LCR:
        printf("WRITE LCR\n");
        regs[UART_IDX_LCR] = *buffer;
        break;
    case UART_REG_MCR:
        printf("WRITE MCR\n");
        regs[UART_IDX_MCR] = *buffer;
        break;
    case UART_REG_LSR:
        printf("WRITE LSR\n");
        regs[UART_IDX_LSR] = *buffer;
        break;
    case UART_REG_MSR:
        printf("WRITE MSR\n");
        regs[UART_IDX_MSR] = *buffer;
        break;
    case UART_REG_SCR:
        printf("WRITE SCR\n");
        regs[UART_IDX_SCR] = *buffer;
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
    : uart_enabled_(true)
{
    //memset(regs_, 0, 12);
    regs_[UART_IDX_RBR] = 0;
    regs_[UART_IDX_DLL] = 0;
    regs_[UART_IDX_THR] = 0;
    regs_[UART_IDX_DLM] = 0;
    regs_[UART_IDX_IER] = 0;
    regs_[UART_IDX_IIR] = 1;
    regs_[UART_IDX_FCR] = 0;
    regs_[UART_IDX_LCR] = 0;
    regs_[UART_IDX_MCR] = 0;
    regs_[UART_IDX_LSR] = 0x60;
    regs_[UART_IDX_MSR] = 0;
    regs_[UART_IDX_SCR] = 0;

    //int n;
    struct stat attribute;
    struct stat attribute2;

    // Setup OUT fifo
    if ((mkfifo(FIFOOUT, S_IRUSR | S_IWUSR)) == -1)
    {
        printf("ERROR: Could not create OUT fifo!\n");
        exit(EXIT_FAILURE);
        /* FIFO already exists? */
        // if(errno != EEXIST){
        //    // TODO
        //}
    }
    if (stat(FIFOOUT, &attribute) == -1)
    {
        printf("ERROR: Could not stat OUT fifo!\n");
        exit(EXIT_FAILURE);
    }

    if (fd_fifo_out_ == 0)
    {
        if ((fd_fifo_out_ = open(FIFOOUT, O_RDWR)) == -1)
        {
            printf("ERROR: Could not open OUT fifo!\n");
            // perror ("open()");
            exit(EXIT_FAILURE);
        }
    }
    //const char *p = "Hello FIFOOUT!";

    //n = write(fd_fifo_out_, p, strlen(p));
    //if (n) {
        // TODO
    //}

    // Setup IN fifo
    if ((mkfifo(FIFOIN, S_IRUSR | S_IWUSR)) == -1)
    {
        printf("ERROR: Could not create IN fifo!\n");
        exit(EXIT_FAILURE);
        /* FIFO already exists? */
        // if(errno != EEXIST){
        //    // TODO
        //}
    }
    if (stat(FIFOIN, &attribute2) == -1)
    {
        printf("ERROR: Could not stat IN fifo!\n");
        exit(EXIT_FAILURE);
    }

    if ((fd_fifo_in_ = open(FIFOIN, O_RDWR | O_NONBLOCK)) == -1)
    {
        // perror ("open()");
        printf("ERROR: Could not open IN fifo!\n");
        exit(EXIT_FAILURE);
    }

    //unsigned char *ptr;
    //n = read(fd_fifo_in_, ptr, 1);
    //printf("Read: %c\n", *ptr);
    //return n;
}

// TODO: destructor to close fifos? -> unwrap?

etiss::int32 RISCVUart::execute()
{
    
    bool irq = false;
    static size_t wait = 0;

    if (!uart_enabled_)
    {
        return etiss::RETURNCODE::NOERROR;
    }
    else
    {   
        const etiss::uint64 baud_rate = 115200;
        const etiss::uint64 bytes_per_second = baud_rate/(8+1);
        const etiss::uint64 ps_per_byte = 1000000000000/bytes_per_second;
        etiss::uint64 cycles_per_byte = ps_per_byte / ((ETISS_CPU *)riscvcpu)->cpuCycleTime_ps;
        etiss::uint64 cycles = ((ETISS_CPU *)riscvcpu)->cpuTime_ps / ((ETISS_CPU *)riscvcpu)->cpuCycleTime_ps;
        etiss::uint64 delta_cycles = cycles - old_cycles_;
        old_cycles_ = cycles;

        // Read
        unsigned char c;
        int n;
        if (wait) {
            //printf("W (%ld)\n", wait);
            wait = delta_cycles > wait ? 0 : wait - delta_cycles;
        } else {
            n = read(fd_fifo_in_, &c, 1);
            if (n == 1) {
                printf("Read: %d (%c)\n", c, c);
                regs_[UART_IDX_RBR] = c;
                regs_[UART_IDX_LSR] |= UART_MASK_LSR_DR;
                // todo: IF INterrupts enabled
                irq = true;
                wait = cycles_per_byte;
                //-> 2500?
                // TODO:use mtime instead as there could be 39* the delay
            }
        }
        

        // Write
        if (!(regs_[UART_IDX_LSR] & UART_MASK_LSR_THRE)) { // if not empty
            c = regs_[UART_IDX_THR];
            printf("Write: %d (%c)\n", c, c);
            n = write(fd_fifo_out_, &c, 1);
            regs_[UART_IDX_THR] = 0;
            regs_[UART_IDX_LSR] |= UART_MASK_LSR_THRE;
        }
    
    //return n;
        //printf("cpu_cycle_time=%d, cpu_time=%ld\n", cpu_cycle_time, cpu_time);
        //(riscvcpu->CSR[CSR_MIP]) |= MIP_MSIP;
        if (irq) {
            //printf("Trigger IRQ\n");
            // FIXME: Currently we only set IRQ flag if machine external interrupt is enabled
            // This may not be standard conform, but this reduces a lot of spam in the verbose log
            if (riscvcpu->CSR[CSR_MIE] & MIP_MEIP) {
                (riscvcpu->CSR[CSR_MIP]) |= MIP_MEIP;
                return etiss::RETURNCODE::INTERRUPT;
            }
        }
    }

    return etiss::RETURNCODE::NOERROR;
}

ETISS_System *RISCVUart::wrap(ETISS_CPU *cpu, ETISS_System *system)
{

    RISCVUartSystem *ret = new RISCVUartSystem();

    ret->sys.iread = &iread;
    ret->sys.iwrite = &iwrite;
    ret->sys.dread = &dread_;
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
