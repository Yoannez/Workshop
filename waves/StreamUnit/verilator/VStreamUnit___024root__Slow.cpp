// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit__Syms.h"
#include "VStreamUnit___024root.h"

void VStreamUnit___024root___ctor_var_reset(VStreamUnit___024root* vlSelf);

VStreamUnit___024root::VStreamUnit___024root(VStreamUnit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VStreamUnit___024root___ctor_var_reset(this);
}

void VStreamUnit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VStreamUnit___024root::~VStreamUnit___024root() {
}
