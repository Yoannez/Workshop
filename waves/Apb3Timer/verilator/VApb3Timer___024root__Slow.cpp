// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Timer.h for the primary calling header

#include "verilated.h"

#include "VApb3Timer__Syms.h"
#include "VApb3Timer___024root.h"

void VApb3Timer___024root___ctor_var_reset(VApb3Timer___024root* vlSelf);

VApb3Timer___024root::VApb3Timer___024root(VApb3Timer__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VApb3Timer___024root___ctor_var_reset(this);
}

void VApb3Timer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VApb3Timer___024root::~VApb3Timer___024root() {
}
