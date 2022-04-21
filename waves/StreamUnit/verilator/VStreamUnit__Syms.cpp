// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VStreamUnit__Syms.h"
#include "VStreamUnit.h"
#include "VStreamUnit___024root.h"
#include "VStreamUnit_StreamUnit.h"

// FUNCTIONS
VStreamUnit__Syms::~VStreamUnit__Syms()
{
}

VStreamUnit__Syms::VStreamUnit__Syms(VerilatedContext* contextp, const char* namep,VStreamUnit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__StreamUnit{this, Verilated::catName(namep, "StreamUnit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.StreamUnit = &TOP__StreamUnit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__StreamUnit.__Vconfigure(true);
    // Setup scopes
    __Vscope_StreamUnit.configure(this, name(), "StreamUnit", "StreamUnit", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_StreamUnit.varInsert(__Vfinal,"mem", &(TOP__StreamUnit.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,255);
    }
}
