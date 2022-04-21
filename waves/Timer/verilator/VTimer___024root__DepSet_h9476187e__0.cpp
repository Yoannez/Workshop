// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTimer.h for the primary calling header

#include "verilated.h"

#include "VTimer___024root.h"

VL_INLINE_OPT void VTimer___024root___sequent__TOP__0(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__Timer__DOT__counter;
    // Body
    __Vdly__Timer__DOT__counter = vlSelf->Timer__DOT__counter;
    if (vlSelf->reset) {
        __Vdly__Timer__DOT__counter = 0U;
    } else {
        if (((IData)(vlSelf->io_tick) & (~ (IData)(vlSelf->io_full)))) {
            __Vdly__Timer__DOT__counter = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->Timer__DOT__counter)));
        }
        if (vlSelf->io_clear) {
            __Vdly__Timer__DOT__counter = 0U;
        }
    }
    vlSelf->Timer__DOT__counter = __Vdly__Timer__DOT__counter;
    vlSelf->io_value = vlSelf->Timer__DOT__counter;
}

VL_INLINE_OPT void VTimer___024root___combo__TOP__0(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_full = ((IData)(vlSelf->Timer__DOT__counter) 
                       == (IData)(vlSelf->io_limit));
}

void VTimer___024root___eval(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VTimer___024root___sequent__TOP__0(vlSelf);
    }
    VTimer___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VTimer___024root___eval_debug_assertions(VTimer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_tick & 0xfeU))) {
        Verilated::overWidthError("io_tick");}
    if (VL_UNLIKELY((vlSelf->io_clear & 0xfeU))) {
        Verilated::overWidthError("io_clear");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
