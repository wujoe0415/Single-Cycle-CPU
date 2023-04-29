// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb.h"
#include "Vhw3_tb___024root.h"

// FUNCTIONS
Vhw3_tb__Syms::~Vhw3_tb__Syms()
{
}

Vhw3_tb__Syms::Vhw3_tb__Syms(VerilatedContext* contextp, const char* namep,Vhw3_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
