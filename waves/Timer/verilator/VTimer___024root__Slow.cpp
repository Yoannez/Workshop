// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTimer.h for the primary calling header

#include "verilated.h"

#include "VTimer__Syms.h"
#include "VTimer___024root.h"

void VTimer___024root___ctor_var_reset(VTimer___024root* vlSelf);

VTimer___024root::VTimer___024root(VTimer__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTimer___024root___ctor_var_reset(this);
}

void VTimer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTimer___024root::~VTimer___024root() {
}
