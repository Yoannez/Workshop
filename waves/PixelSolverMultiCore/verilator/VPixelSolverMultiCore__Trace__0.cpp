// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolverMultiCore__Syms.h"


void VPixelSolverMultiCore___024root__trace_chg_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

void VPixelSolverMultiCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_chg_top_0\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPixelSolverMultiCore___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VPixelSolverMultiCore___024root__trace_chg_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+1,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+2,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+3,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+4,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+5,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+6,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration),4);
        tracep->chgCData(oldp+7,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+8,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid));
        tracep->chgCData(oldp+9,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration),4);
        tracep->chgBit(oldp+10,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid));
        tracep->chgCData(oldp+11,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration),4);
        tracep->chgBit(oldp+12,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid));
        tracep->chgCData(oldp+13,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration),4);
        tracep->chgBit(oldp+14,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid));
        tracep->chgCData(oldp+15,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration),4);
        tracep->chgBit(oldp+16,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid));
        tracep->chgCData(oldp+17,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration),4);
        tracep->chgBit(oldp+18,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid));
        tracep->chgCData(oldp+19,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration),4);
        tracep->chgBit(oldp+20,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid));
        tracep->chgCData(oldp+21,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration),4);
        tracep->chgBit(oldp+22,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid));
        tracep->chgCData(oldp+23,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration),4);
        tracep->chgBit(oldp+24,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid));
        tracep->chgBit(oldp+25,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid));
        tracep->chgBit(oldp+26,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid)))));
        tracep->chgBit(oldp+27,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid));
        tracep->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid)))));
        tracep->chgBit(oldp+29,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid));
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid)))));
        tracep->chgBit(oldp+31,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid));
        tracep->chgBit(oldp+32,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid)))));
        tracep->chgBit(oldp+33,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid));
        tracep->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid)))));
        tracep->chgBit(oldp+35,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid));
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid)))));
        tracep->chgBit(oldp+37,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid));
        tracep->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid)))));
        tracep->chgBit(oldp+39,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid));
        tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid)))));
        tracep->chgBit(oldp+41,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid));
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid)))));
        tracep->chgBit(oldp+43,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid));
        tracep->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid)))));
        tracep->chgBit(oldp+45,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid));
        tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid)))));
        tracep->chgBit(oldp+47,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid));
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid)))));
        tracep->chgBit(oldp+49,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid));
        tracep->chgBit(oldp+50,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid)))));
        tracep->chgBit(oldp+51,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid));
        tracep->chgBit(oldp+52,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid)))));
        tracep->chgBit(oldp+53,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid));
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid)))));
        tracep->chgBit(oldp+55,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid));
        tracep->chgBit(oldp+56,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid)))));
        tracep->chgCData(oldp+57,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value),3);
        tracep->chgBit(oldp+58,((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))));
        tracep->chgCData(oldp+59,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value),3);
        tracep->chgBit(oldp+60,((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value))));
        tracep->chgIData(oldp+61,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x),28);
        tracep->chgIData(oldp+62,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y),28);
        tracep->chgQData(oldp+63,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx),56);
        tracep->chgQData(oldp+65,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy),56);
        tracep->chgQData(oldp+67,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y))))),56);
        tracep->chgBit(oldp+69,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+70,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x),28);
        tracep->chgIData(oldp+71,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y),28);
        tracep->chgQData(oldp+72,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx),56);
        tracep->chgQData(oldp+74,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy),56);
        tracep->chgQData(oldp+76,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y))))),56);
        tracep->chgBit(oldp+78,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+79,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x),28);
        tracep->chgIData(oldp+80,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y),28);
        tracep->chgQData(oldp+81,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx),56);
        tracep->chgQData(oldp+83,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy),56);
        tracep->chgQData(oldp+85,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y))))),56);
        tracep->chgBit(oldp+87,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+88,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x),28);
        tracep->chgIData(oldp+89,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y),28);
        tracep->chgQData(oldp+90,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx),56);
        tracep->chgQData(oldp+92,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy),56);
        tracep->chgQData(oldp+94,((0xffffffffffffffULL 
                                   & VL_MULS_QQQ(56, 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x)), 
                                                 (0xffffffffffffffULL 
                                                  & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y))))),56);
        tracep->chgBit(oldp+96,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+97,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x),28);
        tracep->chgIData(oldp+98,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y),28);
        tracep->chgQData(oldp+99,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx),56);
        tracep->chgQData(oldp+101,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy),56);
        tracep->chgQData(oldp+103,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y))))),56);
        tracep->chgBit(oldp+105,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+106,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x),28);
        tracep->chgIData(oldp+107,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y),28);
        tracep->chgQData(oldp+108,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx),56);
        tracep->chgQData(oldp+110,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy),56);
        tracep->chgQData(oldp+112,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y))))),56);
        tracep->chgBit(oldp+114,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+115,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x),28);
        tracep->chgIData(oldp+116,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y),28);
        tracep->chgQData(oldp+117,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx),56);
        tracep->chgQData(oldp+119,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy),56);
        tracep->chgQData(oldp+121,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y))))),56);
        tracep->chgBit(oldp+123,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45));
        tracep->chgIData(oldp+124,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x),28);
        tracep->chgIData(oldp+125,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y),28);
        tracep->chgQData(oldp+126,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx),56);
        tracep->chgQData(oldp+128,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy),56);
        tracep->chgQData(oldp+130,((0xffffffffffffffULL 
                                    & VL_MULS_QQQ(56, 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x)), 
                                                  (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y))))),56);
        tracep->chgBit(oldp+132,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+133,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_x),28);
        tracep->chgIData(oldp+134,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_y),28);
        tracep->chgIData(oldp+135,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_x),28);
        tracep->chgIData(oldp+136,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_y),28);
        tracep->chgIData(oldp+137,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_x),28);
        tracep->chgIData(oldp+138,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_y),28);
        tracep->chgIData(oldp+139,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_x),28);
        tracep->chgIData(oldp+140,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_y),28);
        tracep->chgIData(oldp+141,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_x),28);
        tracep->chgIData(oldp+142,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_y),28);
        tracep->chgIData(oldp+143,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_x),28);
        tracep->chgIData(oldp+144,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_y),28);
        tracep->chgIData(oldp+145,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_x),28);
        tracep->chgIData(oldp+146,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_y),28);
        tracep->chgIData(oldp+147,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_x),28);
        tracep->chgIData(oldp+148,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_y),28);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+149,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready));
        tracep->chgBit(oldp+150,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready));
        tracep->chgBit(oldp+151,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready));
        tracep->chgBit(oldp+152,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready));
        tracep->chgBit(oldp+153,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready));
        tracep->chgBit(oldp+154,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready));
        tracep->chgBit(oldp+155,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready));
        tracep->chgBit(oldp+156,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready));
        tracep->chgBit(oldp+157,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready));
        tracep->chgBit(oldp+158,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready));
        tracep->chgBit(oldp+159,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready));
        tracep->chgBit(oldp+160,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready));
        tracep->chgBit(oldp+161,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready));
        tracep->chgBit(oldp+162,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready));
        tracep->chgBit(oldp+163,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready));
        tracep->chgBit(oldp+164,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready));
        tracep->chgBit(oldp+165,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready));
        tracep->chgBit(oldp+166,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid));
        tracep->chgBit(oldp+167,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid));
        tracep->chgBit(oldp+168,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid));
        tracep->chgBit(oldp+169,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid));
        tracep->chgBit(oldp+170,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid));
        tracep->chgBit(oldp+171,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid));
        tracep->chgBit(oldp+172,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid));
        tracep->chgBit(oldp+173,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid));
        tracep->chgBit(oldp+174,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready));
        tracep->chgBit(oldp+175,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready));
        tracep->chgBit(oldp+176,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready));
        tracep->chgBit(oldp+177,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready));
        tracep->chgBit(oldp+178,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready));
        tracep->chgBit(oldp+179,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready));
        tracep->chgBit(oldp+180,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready));
        tracep->chgBit(oldp+181,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready));
        tracep->chgBit(oldp+182,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready));
        tracep->chgBit(oldp+183,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready));
        tracep->chgBit(oldp+184,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready));
        tracep->chgBit(oldp+185,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready));
        tracep->chgBit(oldp+186,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready));
        tracep->chgBit(oldp+187,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready));
        tracep->chgBit(oldp+188,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready));
        tracep->chgBit(oldp+189,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready));
        tracep->chgBit(oldp+190,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement));
        tracep->chgBit(oldp+191,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement));
    }
    tracep->chgBit(oldp+192,(vlSelf->io_cmd_valid));
    tracep->chgBit(oldp+193,(vlSelf->io_cmd_ready));
    tracep->chgIData(oldp+194,(vlSelf->io_cmd_payload_x),28);
    tracep->chgIData(oldp+195,(vlSelf->io_cmd_payload_y),28);
    tracep->chgBit(oldp+196,(vlSelf->io_rsp_valid));
    tracep->chgBit(oldp+197,(vlSelf->io_rsp_ready));
    tracep->chgCData(oldp+198,(vlSelf->io_rsp_payload_iteration),4);
    tracep->chgBit(oldp+199,(vlSelf->clk));
    tracep->chgBit(oldp+200,(vlSelf->reset));
    tracep->chgCData(oldp+201,(((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                 ? ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                     ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                         ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration)
                                         : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration))
                                     : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                         ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration)
                                         : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration)))
                                 : ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                     ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                         ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration)
                                         : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration))
                                     : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                         ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration)
                                         : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration))))),4);
    tracep->chgCData(oldp+202,((7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value) 
                                      + (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement)))),3);
    tracep->chgBit(oldp+203,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)) 
                              & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement))));
    tracep->chgBit(oldp+204,(((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid) 
                              & (IData)(vlSelf->io_rsp_ready))));
    tracep->chgCData(oldp+205,((7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value) 
                                      + (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement)))),3);
    tracep->chgBit(oldp+206,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)) 
                              & (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement))));
    tracep->chgBit(oldp+207,(((IData)(vlSelf->io_cmd_valid) 
                              & (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready))));
}

void VPixelSolverMultiCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_cleanup\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
