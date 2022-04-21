// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounter.h for the primary calling header

#include "verilated.h"

#include "VCounter___024root.h"

VL_ATTR_COLD void VCounter___024root___settle__TOP__0(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_value = vlSelf->Counter__DOT__counter_1;
    vlSelf->io_full = 0U;
    if ((0xfU == (IData)(vlSelf->Counter__DOT__counter_1))) {
        vlSelf->io_full = 1U;
    }
}

VL_ATTR_COLD void VCounter___024root___eval_initial(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VCounter___024root___eval_settle(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___eval_settle\n"); );
    // Body
    VCounter___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VCounter___024root___final(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___final\n"); );
}

VL_ATTR_COLD void VCounter___024root___ctor_var_reset(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_clear = VL_RAND_RESET_I(1);
    vlSelf->io_value = VL_RAND_RESET_I(4);
    vlSelf->io_full = VL_RAND_RESET_I(1);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->Counter__DOT__counter_1 = VL_RAND_RESET_I(4);
}
