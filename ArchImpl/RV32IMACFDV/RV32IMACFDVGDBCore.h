/**
 * Generated on Mon, 30 Mar 2026 14:43:05 +0200.
 *
 * This file contains the GDBCore adapter for the RV32IMACFDV core architecture.
 *
 * WARNING: This file contains user-added code, be mindful when overwriting this with
 * generated code!
 */

#ifndef ETISS_RV32IMACFDVArch_RV32IMACFDVGDBCORE_H_
#define ETISS_RV32IMACFDVArch_RV32IMACFDVGDBCORE_H_

#include "etiss/IntegratedLibrary/gdb/GDBCore.h"
#include <sstream>

/**
    @brief This class is the brige between RV32IMACFDV architecture and gdbserver

    @details Gdbserver integrated in ETISS calls GDBCore to read/write registers via virtualStrruct
                The index in mapRegister() should strictly follow the RV32IMACFDV gdb tool defined register
                order. Because gdbserver will send raw register data sequentially in strict order over
                RSP ->TCP/IP ->RSP protocal

                Check the order with gdb command:
                $(gdb) info all-registers
                which lists all registers supported and its order.

                By default only general purpose register and instruction pointer are supported. Further
                Special Function Register/Control and Status Register could be added manually. Meanwhile
                virtualStruct in RV32IMACFDVArch.cpp should be modified as well as well

*/
class RV32IMACFDVGDBCore : public etiss::plugin::gdb::GDBCore
{
  public:
    std::string mapRegister(unsigned index)
    {
        switch (index){
        case 0: return "X0";
        case 1: return "X1";
        case 2: return "X2";
        case 3: return "X3";
        case 4: return "X4";
        case 5: return "X5";
        case 6: return "X6";
        case 7: return "X7";
        case 8: return "X8";
        case 9: return "X9";
        case 10: return "X10";
        case 11: return "X11";
        case 12: return "X12";
        case 13: return "X13";
        case 14: return "X14";
        case 15: return "X15";
        case 16: return "X16";
        case 17: return "X17";
        case 18: return "X18";
        case 19: return "X19";
        case 20: return "X20";
        case 21: return "X21";
        case 22: return "X22";
        case 23: return "X23";
        case 24: return "X24";
        case 25: return "X25";
        case 26: return "X26";
        case 27: return "X27";
        case 28: return "X28";
        case 29: return "X29";
        case 30: return "X30";
        case 31: return "X31";
        case 32: return "instructionPointer";
        case 33: return "F0";
        case 34: return "F1";
        case 35: return "F2";
        case 36: return "F3";
        case 37: return "F4";
        case 38: return "F5";
        case 39: return "F6";
        case 40: return "F7";
        case 41: return "F8";
        case 42: return "F9";
        case 43: return "F10";
        case 44: return "F11";
        case 45: return "F12";
        case 46: return "F13";
        case 47: return "F14";
        case 48: return "F15";
        case 49: return "F16";
        case 50: return "F17";
        case 51: return "F18";
        case 52: return "F19";
        case 53: return "F20";
        case 54: return "F21";
        case 55: return "F22";
        case 56: return "F23";
        case 57: return "F24";
        case 58: return "F25";
        case 59: return "F26";
        case 60: return "F27";
        case 61: return "F28";
        case 62: return "F29";
        case 63: return "F30";
        case 64: return "F31";
        case 68: return "CSR3";
        case 3923: return "CSR3858";
        case 3924: return "CSR3859";
        case 3925: return "CSR3860";
        case 833: return "CSR768";
        case 834: return "CSR769";
        case 835: return "CSR770";
        case 836: return "CSR771";
        case 837: return "CSR772";
        case 838: return "CSR773";
        case 839: return "CSR774";
        case 897: return "CSR832";
        case 898: return "CSR833";
        case 899: return "CSR834";
        case 900: return "CSR835";
        case 901: return "CSR836";
        case 2881: return "CSR2816";
        case 3009: return "CSR2944";
        case 2883: return "CSR2818";
        case 3011: return "CSR2946";
        case 3137: return "CSR3072";
        case 3265: return "CSR3200";
        case 3138: return "CSR3073";
        case 3266: return "CSR3201";
        case 3139: return "CSR3074";
        case 3267: return "CSR3202";
        case 4162: return "V0";
        case 4163: return "V1";
        case 4164: return "V2";
        case 4165: return "V3";
        case 4166: return "V4";
        case 4167: return "V5";
        case 4168: return "V6";
        case 4169: return "V7";
        case 4170: return "V8";
        case 4171: return "V9";
        case 4172: return "V10";
        case 4173: return "V11";
        case 4174: return "V12";
        case 4175: return "V13";
        case 4176: return "V14";
        case 4177: return "V15";
        case 4178: return "V16";
        case 4179: return "V17";
        case 4180: return "V18";
        case 4181: return "V19";
        case 4182: return "V20";
        case 4183: return "V21";
        case 4184: return "V22";
        case 4185: return "V23";
        case 4186: return "V24";
        case 4187: return "V25";
        case 4188: return "V26";
        case 4189: return "V27";
        case 4190: return "V28";
        case 4191: return "V29";
        case 4192: return "V30";
        case 4193: return "V31";
        case 73: return "CSR8";
        case 74: return "CSR9";
        case 75: return "CSR10";
        case 80: return "CSR15";
        case 3169: return "CSR3104";
        case 3170: return "CSR3105";
        case 3171: return "CSR3106";
        /**************************************************************************
        *   Further register should be added here to send data over gdbserver	  *
        ***************************************************************************/
        }
        return "";
  }

    unsigned mapRegister(std::string name) { return INVALIDMAPPING; }

    unsigned mappedRegisterCount()
    {
        // Modify according to sent register number
        return 33;
    }

    etiss::uint64 getInstructionPointer(ETISS_CPU *cpu) { return cpu->instructionPointer; }

    bool isLittleEndian()
    {
        // Modify according to RV32IMACFDV manual
        return true;
    }
};

#endif
