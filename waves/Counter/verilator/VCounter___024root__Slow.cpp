// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounter.h for the primary calling header

#include "verilated.h"

#include "VCounter__Syms.h"
#include "VCounter___024root.h"

void VCounter___024root___ctor_var_reset(VCounter___024root* vlSelf);

VCounter___024root::VCounter___024root(VCounter__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCounter___024root___ctor_var_reset(this);
}

void VCounter___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCounter___024root::~VCounter___024root() {
}
