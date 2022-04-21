// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFunctionUnit.h for the primary calling header

#include "verilated.h"

#include "VFunctionUnit___024root.h"

VL_INLINE_OPT void VFunctionUnit___024root___sequent__TOP__0(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__FunctionUnit__DOT__setB_counter;
    CData/*3:0*/ __Vdly__FunctionUnit__DOT__setC_counter;
    CData/*3:0*/ __Vdly__FunctionUnit__DOT__setA_counter;
    // Body
    __Vdly__FunctionUnit__DOT__setA_counter = vlSelf->FunctionUnit__DOT__setA_counter;
    __Vdly__FunctionUnit__DOT__setC_counter = vlSelf->FunctionUnit__DOT__setC_counter;
    __Vdly__FunctionUnit__DOT__setB_counter = vlSelf->FunctionUnit__DOT__setB_counter;
    if (vlSelf->reset) {
        vlSelf->FunctionUnit__DOT__loadA_active = 0U;
        __Vdly__FunctionUnit__DOT__setA_counter = 0U;
        __Vdly__FunctionUnit__DOT__setC_counter = 0U;
        __Vdly__FunctionUnit__DOT__setB_counter = 0U;
        vlSelf->FunctionUnit__DOT__loadB_active = 0U;
        vlSelf->FunctionUnit__DOT__loadC_active = 0U;
    } else {
        if (vlSelf->FunctionUnit__DOT__setA_hit) {
            vlSelf->FunctionUnit__DOT__loadA_active = 1U;
        }
        if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44) {
            vlSelf->FunctionUnit__DOT__loadA_active = 0U;
        }
        if (vlSelf->io_cmd_valid) {
            __Vdly__FunctionUnit__DOT__setA_counter 
                = ((IData)(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7)
                    ? ((IData)(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25)
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->FunctionUnit__DOT__setA_counter))))
                    : 0U);
            __Vdly__FunctionUnit__DOT__setC_counter 
                = ((IData)(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1)
                    ? ((IData)(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_2)
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->FunctionUnit__DOT__setC_counter))))
                    : 0U);
            __Vdly__FunctionUnit__DOT__setB_counter 
                = ((IData)(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1)
                    ? ((IData)(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_1)
                        ? 0U : (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->FunctionUnit__DOT__setB_counter))))
                    : 0U);
        }
        if (vlSelf->FunctionUnit__DOT__setB_hit) {
            vlSelf->FunctionUnit__DOT__loadB_active = 1U;
        }
        if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1) {
            if ((3U == (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value))) {
                vlSelf->FunctionUnit__DOT__loadB_active = 0U;
            }
        }
        if (vlSelf->FunctionUnit__DOT__setC_hit) {
            vlSelf->FunctionUnit__DOT__loadC_active = 1U;
        }
        if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2) {
            if ((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value))) {
                vlSelf->FunctionUnit__DOT__loadC_active = 0U;
            }
        }
    }
    vlSelf->FunctionUnit__DOT__setA_counter = __Vdly__FunctionUnit__DOT__setA_counter;
    vlSelf->FunctionUnit__DOT__setC_counter = __Vdly__FunctionUnit__DOT__setC_counter;
    vlSelf->FunctionUnit__DOT__setB_counter = __Vdly__FunctionUnit__DOT__setB_counter;
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter));
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_2 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter));
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_1 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter));
}

VL_INLINE_OPT void VFunctionUnit___024root___sequent__TOP__1(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44) {
        vlSelf->FunctionUnit__DOT__loadA_buffer = vlSelf->io_cmd_payload;
    }
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadB_buffer 
                = ((0xffffff00U & vlSelf->FunctionUnit__DOT__loadB_buffer) 
                   | (IData)(vlSelf->io_cmd_payload));
        }
        if ((2U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadB_buffer 
                = ((0xffff00ffU & vlSelf->FunctionUnit__DOT__loadB_buffer) 
                   | ((IData)(vlSelf->io_cmd_payload) 
                      << 8U));
        }
        if ((4U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadB_buffer 
                = ((0xff00ffffU & vlSelf->FunctionUnit__DOT__loadB_buffer) 
                   | ((IData)(vlSelf->io_cmd_payload) 
                      << 0x10U));
        }
        if ((8U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadB_buffer 
                = ((0xffffffU & vlSelf->FunctionUnit__DOT__loadB_buffer) 
                   | ((IData)(vlSelf->io_cmd_payload) 
                      << 0x18U));
        }
    }
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2) {
        if ((1U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xffffffffff00ULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | (IData)((IData)(vlSelf->io_cmd_payload)));
        }
        if ((2U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xffffffff00ffULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | ((QData)((IData)(vlSelf->io_cmd_payload)) 
                      << 8U));
        }
        if ((4U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xffffff00ffffULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | ((QData)((IData)(vlSelf->io_cmd_payload)) 
                      << 0x10U));
        }
        if ((8U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xffff00ffffffULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | ((QData)((IData)(vlSelf->io_cmd_payload)) 
                      << 0x18U));
        }
        if ((0x10U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xff00ffffffffULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | ((QData)((IData)(vlSelf->io_cmd_payload)) 
                      << 0x20U));
        }
        if ((0x20U & ((IData)(1U) << (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)))) {
            vlSelf->FunctionUnit__DOT__loadC_buffer 
                = ((0xffffffffffULL & vlSelf->FunctionUnit__DOT__loadC_buffer) 
                   | ((QData)((IData)(vlSelf->io_cmd_payload)) 
                      << 0x28U));
        }
    }
    vlSelf->io_valueA = vlSelf->FunctionUnit__DOT__loadA_buffer;
    vlSelf->io_valueB = vlSelf->FunctionUnit__DOT__loadB_buffer;
    vlSelf->io_valueC = vlSelf->FunctionUnit__DOT__loadC_buffer;
}

VL_INLINE_OPT void VFunctionUnit___024root___combo__TOP__0(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7 
        = ((8U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
            ? (0x41U == (IData)(vlSelf->io_cmd_payload))
            : ((4U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                ? ((2U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x75U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                        ? (0x6cU == (IData)(vlSelf->io_cmd_payload))
                        : (0x61U == (IData)(vlSelf->io_cmd_payload))))
                : ((2U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                        ? (0x56U == (IData)(vlSelf->io_cmd_payload))
                        : (0x74U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setA_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x73U == (IData)(vlSelf->io_cmd_payload))))));
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1 
        = ((8U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
            ? (0x43U == (IData)(vlSelf->io_cmd_payload))
            : ((4U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                ? ((2U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x75U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                        ? (0x6cU == (IData)(vlSelf->io_cmd_payload))
                        : (0x61U == (IData)(vlSelf->io_cmd_payload))))
                : ((2U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                        ? (0x56U == (IData)(vlSelf->io_cmd_payload))
                        : (0x74U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setC_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x73U == (IData)(vlSelf->io_cmd_payload))))));
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1 
        = ((8U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
            ? (0x42U == (IData)(vlSelf->io_cmd_payload))
            : ((4U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                ? ((2U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x75U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                        ? (0x6cU == (IData)(vlSelf->io_cmd_payload))
                        : (0x61U == (IData)(vlSelf->io_cmd_payload))))
                : ((2U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                    ? ((1U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                        ? (0x56U == (IData)(vlSelf->io_cmd_payload))
                        : (0x74U == (IData)(vlSelf->io_cmd_payload)))
                    : ((1U & (IData)(vlSelf->FunctionUnit__DOT__setB_counter))
                        ? (0x65U == (IData)(vlSelf->io_cmd_payload))
                        : (0x73U == (IData)(vlSelf->io_cmd_payload))))));
    if (vlSelf->io_cmd_valid) {
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44 
            = vlSelf->FunctionUnit__DOT__loadA_active;
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1 
            = vlSelf->FunctionUnit__DOT__loadB_active;
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2 
            = vlSelf->FunctionUnit__DOT__loadC_active;
        vlSelf->FunctionUnit__DOT__setA_hit = 0U;
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter))) {
                vlSelf->FunctionUnit__DOT__setA_hit = 1U;
            }
        }
        vlSelf->FunctionUnit__DOT__setC_hit = 0U;
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter))) {
                vlSelf->FunctionUnit__DOT__setC_hit = 1U;
            }
        }
        vlSelf->FunctionUnit__DOT__setB_hit = 0U;
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter))) {
                vlSelf->FunctionUnit__DOT__setB_hit = 1U;
            }
        }
    } else {
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44 = 0U;
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1 = 0U;
        vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2 = 0U;
        vlSelf->FunctionUnit__DOT__setA_hit = 0U;
        vlSelf->FunctionUnit__DOT__setC_hit = 0U;
        vlSelf->FunctionUnit__DOT__setB_hit = 0U;
    }
    vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44) {
        vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement = 1U;
    }
    vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1) {
        vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement = 1U;
    }
    vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2) {
        vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VFunctionUnit___024root___sequent__TOP__2(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->FunctionUnit__DOT__loadB_counter_value = 0U;
        vlSelf->FunctionUnit__DOT__loadC_counter_value = 0U;
    } else {
        vlSelf->FunctionUnit__DOT__loadB_counter_value 
            = vlSelf->FunctionUnit__DOT__loadB_counter_valueNext;
        vlSelf->FunctionUnit__DOT__loadC_counter_value 
            = vlSelf->FunctionUnit__DOT__loadC_counter_valueNext;
    }
}

VL_INLINE_OPT void VFunctionUnit___024root___combo__TOP__1(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->FunctionUnit__DOT__loadB_counter_valueNext 
        = (3U & ((IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value) 
                 + (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement)));
    vlSelf->FunctionUnit__DOT__loadC_counter_valueNext 
        = (((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
            & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value) 
                          + (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))));
}

void VFunctionUnit___024root___eval(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VFunctionUnit___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VFunctionUnit___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VFunctionUnit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VFunctionUnit___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    VFunctionUnit___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VFunctionUnit___024root___eval_debug_assertions(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_cmd_valid & 0xfeU))) {
        Verilated::overWidthError("io_cmd_valid");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
