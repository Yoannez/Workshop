// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPrimeUsage.h for the primary calling header

#include "verilated.h"

#include "VPrimeUsage__Syms.h"
#include "VPrimeUsage___024root.h"

void VPrimeUsage___024root___ctor_var_reset(VPrimeUsage___024root* vlSelf);

VPrimeUsage___024root::VPrimeUsage___024root(VPrimeUsage__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPrimeUsage___024root___ctor_var_reset(this);
}

void VPrimeUsage___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPrimeUsage___024root::~VPrimeUsage___024root() {
}
