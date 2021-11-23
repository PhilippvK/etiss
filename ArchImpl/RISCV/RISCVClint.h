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

#ifndef ETISS_RISCVArch_RISCVCLINT_H_
#define ETISS_RISCVArch_RISCVCLINT_H_

#include "Encoding.h"
#include "RISCV.h"
#include "etiss/CPUArch.h"

#define CLINT_BASE_ADDR 0x02000000
#define MTIMELO_ADDR CLINT_BASE_ADDR + 0xbff8
#define MTIMEHI_ADDR MTIMELO_ADDR + 4
#define MTIMECMPLO_ADDR CLINT_BASE_ADDR + 0x4000
#define MTIMECMPHI_ADDR MTIMECMPLO_ADDR + 4

class RISCVClint;

struct RISCVClintSystem
{

    struct ETISS_System sys;

    RISCVClint *this_;

    ETISS_System *orig;
};

class RISCVClint : public etiss::CoroutinePlugin, public etiss::SystemWrapperPlugin
{
  public:
    RISCVClint();

    virtual ~RISCVClint() {}

    void init(ETISS_CPU *cpu, ETISS_System *system, etiss::CPUArch *arch) { riscvcpu = (RISCV *)cpu; }

    etiss::int32 execute();

    ETISS_System *wrap(ETISS_CPU *cpu, ETISS_System *system);

    ETISS_System *unwrap(ETISS_CPU *cpu, ETISS_System *system);

    bool clint_enabled_;
    etiss::uint64 mtimecmplo_;
    etiss::uint64 mtimecmphi_;
    etiss::uint64 mtimelo_;
    etiss::uint64 mtimehi_;
    etiss::uint64 mtimecmp_;
    etiss::uint64 old_cycles_;
    char mtimelo_buf_[4];
    char mtimehi_buf_[4];
    char mtimecmplo_buf_[4];
    char mtimecmphi_buf_[4];

  protected:
    virtual std::string _getPluginName() const { return std::string("RISCV-V CLINT"); }

  private:
    RISCV *riscvcpu;

    //bool mtime_overflow_;
};

#endif
