// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolverMultiCore.h for the primary calling header

#include "verilated.h"

#include "VPixelSolverMultiCore__Syms.h"
#include "VPixelSolverMultiCore___024root.h"

void VPixelSolverMultiCore___024root___ctor_var_reset(VPixelSolverMultiCore___024root* vlSelf);

VPixelSolverMultiCore___024root::VPixelSolverMultiCore___024root(VPixelSolverMultiCore__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPixelSolverMultiCore___024root___ctor_var_reset(this);
}

void VPixelSolverMultiCore___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPixelSolverMultiCore___024root::~VPixelSolverMultiCore___024root() {
}
