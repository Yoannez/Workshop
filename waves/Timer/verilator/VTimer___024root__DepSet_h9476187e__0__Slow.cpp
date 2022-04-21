// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTimer.h for the primary calling header

#include "verilated.h"

#include "VTimer___024root.h"

VL_ATTR_COLD void VTimer___024root___settle__TOP__0(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_value = vlSelf->Timer__DOT__counter;
    vlSelf->io_full = ((IData)(vlSelf->Timer__DOT__counter) 
                       == (IData)(vlSelf->io_limit));
}

VL_ATTR_COLD void VTimer___024root___eval_initial(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VTimer___024root___eval_settle(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___eval_settle\n"); );
    // Body
    VTimer___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTimer___024root___final(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___final\n"); );
}

VL_ATTR_COLD void VTimer___024root___ctor_var_reset(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_tick = VL_RAND_RESET_I(1);
    vlSelf->io_clear = VL_RAND_RESET_I(1);
    vlSelf->io_limit = VL_RAND_RESET_I(8);
    vlSelf->io_full = VL_RAND_RESET_I(1);
    vlSelf->io_value = VL_RAND_RESET_I(8);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->Timer__DOT__counter = VL_RAND_RESET_I(8);
}
