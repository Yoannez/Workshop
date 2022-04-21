// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFunctionUnit.h for the primary calling header

#include "verilated.h"

#include "VFunctionUnit___024root.h"

VL_ATTR_COLD void VFunctionUnit___024root___settle__TOP__0(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter));
    vlSelf->io_valueA = vlSelf->FunctionUnit__DOT__loadA_buffer;
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_1 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter));
    vlSelf->io_valueB = vlSelf->FunctionUnit__DOT__loadB_buffer;
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_2 
        = (8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter));
    vlSelf->io_valueC = vlSelf->FunctionUnit__DOT__loadC_buffer;
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44 
        = ((IData)(vlSelf->FunctionUnit__DOT__loadA_active) 
           & (IData)(vlSelf->io_cmd_valid));
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
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1 
        = ((IData)(vlSelf->FunctionUnit__DOT__loadB_active) 
           & (IData)(vlSelf->io_cmd_valid));
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2 
        = ((IData)(vlSelf->FunctionUnit__DOT__loadC_active) 
           & (IData)(vlSelf->io_cmd_valid));
    vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44) {
        vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement = 1U;
    }
    vlSelf->FunctionUnit__DOT__setA_hit = 0U;
    if (vlSelf->io_cmd_valid) {
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter))) {
                vlSelf->FunctionUnit__DOT__setA_hit = 1U;
            }
        }
        vlSelf->FunctionUnit__DOT__setB_hit = 0U;
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter))) {
                vlSelf->FunctionUnit__DOT__setB_hit = 1U;
            }
        }
        vlSelf->FunctionUnit__DOT__setC_hit = 0U;
        if (vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1) {
            if ((8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter))) {
                vlSelf->FunctionUnit__DOT__setC_hit = 1U;
            }
        }
    } else {
        vlSelf->FunctionUnit__DOT__setB_hit = 0U;
        vlSelf->FunctionUnit__DOT__setC_hit = 0U;
    }
    vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1) {
        vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement = 1U;
    }
    vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement = 0U;
    if (vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2) {
        vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement = 1U;
    }
    vlSelf->FunctionUnit__DOT__loadB_counter_valueNext 
        = (3U & ((IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value) 
                 + (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement)));
    vlSelf->FunctionUnit__DOT__loadC_counter_valueNext 
        = (((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
            & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value) 
                          + (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))));
}

VL_ATTR_COLD void VFunctionUnit___024root___eval_initial(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VFunctionUnit___024root___eval_settle(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___eval_settle\n"); );
    // Body
    VFunctionUnit___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VFunctionUnit___024root___final(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___final\n"); );
}

VL_ATTR_COLD void VFunctionUnit___024root___ctor_var_reset(VFunctionUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmd_payload = VL_RAND_RESET_I(8);
    vlSelf->io_valueA = VL_RAND_RESET_I(8);
    vlSelf->io_valueB = VL_RAND_RESET_I(32);
    vlSelf->io_valueC = VL_RAND_RESET_Q(48);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setA_hit = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setA_counter = VL_RAND_RESET_I(4);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadA_active = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadA_buffer = VL_RAND_RESET_I(8);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setB_hit = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setB_counter = VL_RAND_RESET_I(4);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_1 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadB_active = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadB_counter_valueNext = VL_RAND_RESET_I(2);
    vlSelf->FunctionUnit__DOT__loadB_counter_value = VL_RAND_RESET_I(2);
    vlSelf->FunctionUnit__DOT__loadB_buffer = VL_RAND_RESET_I(32);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setC_hit = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__setC_counter = VL_RAND_RESET_I(4);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l25_2 = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadC_active = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->FunctionUnit__DOT__loadC_counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->FunctionUnit__DOT__loadC_counter_value = VL_RAND_RESET_I(3);
    vlSelf->FunctionUnit__DOT__loadC_buffer = VL_RAND_RESET_Q(48);
    vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
