// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPixelSolverMultiCore.h for the primary calling header

#include "verilated.h"

#include "VPixelSolverMultiCore___024root.h"

VL_ATTR_COLD void VPixelSolverMultiCore___024root___settle__TOP__0(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y))));
    if ((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
        if ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
            if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
                vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration;
                vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                    = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid;
            } else {
                vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration;
                vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                    = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid;
            }
        } else if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid;
        } else {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid;
        }
    } else if ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
        if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid;
        } else {
            vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration;
            vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
                = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid;
        }
    } else if ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))) {
        vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration;
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
            = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid;
    } else {
        vlSelf->io_rsp_payload_iteration = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration;
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid 
            = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready = 0U;
    if ((1U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready = 0U;
    if ((2U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready = 0U;
    if ((4U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready = 0U;
    if ((8U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready = 0U;
    if ((0x10U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready = 0U;
    if ((0x20U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready = 0U;
    if ((0x40U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready = 0U;
    if ((0x80U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready 
            = vlSelf->io_rsp_ready;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x))));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy 
        = (0xffffffffffffffULL & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y)), 
                                             (0xffffffffffffffULL 
                                              & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y))));
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid = 0U;
    if ((1U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid = 0U;
    if ((2U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid = 0U;
    if ((4U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid = 0U;
    if ((8U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid = 0U;
    if ((0x10U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid = 0U;
    if ((0x20U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid = 0U;
    if ((0x40U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid = 0U;
    if ((0x80U & ((IData)(1U) << (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid 
            = vlSelf->io_cmd_valid;
    }
    vlSelf->io_rsp_valid = vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid;
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement = 0U;
    if (((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid) 
         & (IData)(vlSelf->io_rsp_ready))) {
        vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> VPixelSolverMultiCore__ConstPool__TABLE_hd956944c_0;

VL_ATTR_COLD void VPixelSolverMultiCore___024root___settle__TOP__1(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___settle__TOP__1\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    // Body
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready 
        = vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45 
        = (VL_GTS_IQQ(56, 0x40000000000ULL, (0xffffffffffffffULL 
                                             & (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx 
                                                + vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy))) 
           & (0xfU > (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration)));
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_valueNext 
        = (7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value) 
                 + (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement)));
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid = 0U;
    if (vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid) {
        if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45)))) {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid = 1U;
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready = 0U;
            if (vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready) {
                vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready = 1U;
            }
        } else {
            vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready = 0U;
        }
    } else {
        vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready = 0U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready 
        = vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready;
    if ((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid)))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready) 
                     << 0xaU) | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready) 
                                  << 9U) | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready) 
                                             << 8U) 
                                            | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready) 
                                                << 7U) 
                                               | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)))))))));
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready 
        = VPixelSolverMultiCore__ConstPool__TABLE_hd956944c_0
        [__Vtableidx1];
    vlSelf->io_cmd_ready = vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready;
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement = 0U;
    if (((IData)(vlSelf->io_cmd_valid) & (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready))) {
        vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement = 1U;
    }
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_valueNext 
        = (7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value) 
                 + (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement)));
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root___eval_initial(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root___eval_settle(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___eval_settle\n"); );
    // Body
    VPixelSolverMultiCore___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VPixelSolverMultiCore___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root___final(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___final\n"); );
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root___ctor_var_reset(VPixelSolverMultiCore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmd_payload_x = VL_RAND_RESET_I(28);
    vlSelf->io_cmd_payload_y = VL_RAND_RESET_I(28);
    vlSelf->io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_payload_iteration = VL_RAND_RESET_I(4);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value = VL_RAND_RESET_I(3);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y = VL_RAND_RESET_I(28);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xy = VL_RAND_RESET_Q(56);
    vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45 = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
