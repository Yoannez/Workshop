// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VApb3Timer__Syms.h"
#include "VApb3Timer.h"
#include "VApb3Timer___024root.h"

// FUNCTIONS
VApb3Timer__Syms::~VApb3Timer__Syms()
{
}

VApb3Timer__Syms::VApb3Timer__Syms(VerilatedContext* contextp, const char* namep,VApb3Timer* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
