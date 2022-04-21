// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit_StreamUnit.h"
#include "VStreamUnit__Syms.h"

void VStreamUnit_StreamUnit___ctor_var_reset(VStreamUnit_StreamUnit* vlSelf);

VStreamUnit_StreamUnit::VStreamUnit_StreamUnit(VStreamUnit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VStreamUnit_StreamUnit___ctor_var_reset(this);
}

void VStreamUnit_StreamUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VStreamUnit_StreamUnit::~VStreamUnit_StreamUnit() {
}
