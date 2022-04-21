// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCounter.h for the primary calling header

#include "verilated.h"

#include "VCounter___024root.h"

VL_INLINE_OPT void VCounter___024root___sequent__TOP__0(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__Counter__DOT__counter_1;
    // Body
    __Vdly__Counter__DOT__counter_1 = vlSelf->Counter__DOT__counter_1;
    if (vlSelf->reset) {
        __Vdly__Counter__DOT__counter_1 = 0U;
    } else {
        __Vdly__Counter__DOT__counter_1 = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->Counter__DOT__counter_1)));
        if (vlSelf->io_clear) {
            __Vdly__Counter__DOT__counter_1 = 0U;
        }
    }
    vlSelf->Counter__DOT__counter_1 = __Vdly__Counter__DOT__counter_1;
    vlSelf->io_value = vlSelf->Counter__DOT__counter_1;
    vlSelf->io_full = 0U;
    if ((0xfU == (IData)(vlSelf->Counter__DOT__counter_1))) {
        vlSelf->io_full = 1U;
    }
}

void VCounter___024root___eval(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VCounter___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VCounter___024root___eval_debug_assertions(VCounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_clear & 0xfeU))) {
        Verilated::overWidthError("io_clear");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
