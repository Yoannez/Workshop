// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFunctionUnit.h for the primary calling header

#include "verilated.h"

#include "VFunctionUnit__Syms.h"
#include "VFunctionUnit___024root.h"

void VFunctionUnit___024root___ctor_var_reset(VFunctionUnit___024root* vlSelf);

VFunctionUnit___024root::VFunctionUnit___024root(VFunctionUnit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFunctionUnit___024root___ctor_var_reset(this);
}

void VFunctionUnit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VFunctionUnit___024root::~VFunctionUnit___024root() {
}
