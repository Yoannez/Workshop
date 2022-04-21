// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPrimeUsage.h for the primary calling header

#include "verilated.h"

#include "VPrimeUsage___024root.h"

VL_ATTR_COLD void VPrimeUsage___024root___eval_initial(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___eval_initial\n"); );
}

void VPrimeUsage___024root___combo__TOP__0(VPrimeUsage___024root* vlSelf);

VL_ATTR_COLD void VPrimeUsage___024root___eval_settle(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___eval_settle\n"); );
    // Body
    VPrimeUsage___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPrimeUsage___024root___final(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___final\n"); );
}

VL_ATTR_COLD void VPrimeUsage___024root___ctor_var_reset(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_value = VL_RAND_RESET_I(5);
    vlSelf->io_isPrime = VL_RAND_RESET_I(1);
}
