// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTimer__Syms.h"
#include "VTimer.h"
#include "VTimer___024root.h"

// FUNCTIONS
VTimer__Syms::~VTimer__Syms()
{
}

VTimer__Syms::VTimer__Syms(VerilatedContext* contextp, const char* namep,VTimer* modelp)
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
