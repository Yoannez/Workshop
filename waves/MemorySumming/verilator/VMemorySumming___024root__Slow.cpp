// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemorySumming.h for the primary calling header

#include "verilated.h"

#include "VMemorySumming__Syms.h"
#include "VMemorySumming___024root.h"

void VMemorySumming___024root___ctor_var_reset(VMemorySumming___024root* vlSelf);

VMemorySumming___024root::VMemorySumming___024root(VMemorySumming__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMemorySumming___024root___ctor_var_reset(this);
}

void VMemorySumming___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMemorySumming___024root::~VMemorySumming___024root() {
}
