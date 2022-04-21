// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolver.h for the primary calling header

#include "verilated.h"

#include "VPixelSolver__Syms.h"
#include "VPixelSolver___024root.h"

void VPixelSolver___024root___ctor_var_reset(VPixelSolver___024root* vlSelf);

VPixelSolver___024root::VPixelSolver___024root(VPixelSolver__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPixelSolver___024root___ctor_var_reset(this);
}

void VPixelSolver___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPixelSolver___024root::~VPixelSolver___024root() {
}
