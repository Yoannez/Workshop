// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFunctionUnit__Syms.h"


void VFunctionUnit___024root__trace_chg_sub_0(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep);

void VFunctionUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_chg_top_0\n"); );
    // Init
    VFunctionUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFunctionUnit___024root*>(voidSelf);
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFunctionUnit___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VFunctionUnit___024root__trace_chg_sub_0(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->FunctionUnit__DOT__setA_counter),4);
        tracep->chgBit(oldp+1,((8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter))));
        tracep->chgBit(oldp+2,(vlSelf->FunctionUnit__DOT__loadA_active));
        tracep->chgCData(oldp+3,(vlSelf->FunctionUnit__DOT__setB_counter),4);
        tracep->chgBit(oldp+4,((8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter))));
        tracep->chgBit(oldp+5,(vlSelf->FunctionUnit__DOT__loadB_active));
        tracep->chgCData(oldp+6,(vlSelf->FunctionUnit__DOT__setC_counter),4);
        tracep->chgBit(oldp+7,((8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter))));
        tracep->chgBit(oldp+8,(vlSelf->FunctionUnit__DOT__loadC_active));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+9,(vlSelf->FunctionUnit__DOT__loadA_buffer),8);
        tracep->chgIData(oldp+10,(vlSelf->FunctionUnit__DOT__loadB_buffer),32);
        tracep->chgQData(oldp+11,(vlSelf->FunctionUnit__DOT__loadC_buffer),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+13,(vlSelf->FunctionUnit__DOT__setA_hit));
        tracep->chgBit(oldp+14,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7));
        tracep->chgBit(oldp+15,(vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement));
        tracep->chgBit(oldp+16,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44));
        tracep->chgBit(oldp+17,(vlSelf->FunctionUnit__DOT__setB_hit));
        tracep->chgBit(oldp+18,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1));
        tracep->chgBit(oldp+19,(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement));
        tracep->chgBit(oldp+20,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1));
        tracep->chgBit(oldp+21,(vlSelf->FunctionUnit__DOT__setC_hit));
        tracep->chgBit(oldp+22,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1));
        tracep->chgBit(oldp+23,(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement));
        tracep->chgBit(oldp+24,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgCData(oldp+25,(vlSelf->FunctionUnit__DOT__loadB_counter_value),2);
        tracep->chgBit(oldp+26,((3U == (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value))));
        tracep->chgCData(oldp+27,(vlSelf->FunctionUnit__DOT__loadC_counter_value),3);
        tracep->chgBit(oldp+28,((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value))));
    }
    tracep->chgBit(oldp+29,(vlSelf->io_cmd_valid));
    tracep->chgCData(oldp+30,(vlSelf->io_cmd_payload),8);
    tracep->chgCData(oldp+31,(vlSelf->io_valueA),8);
    tracep->chgIData(oldp+32,(vlSelf->io_valueB),32);
    tracep->chgQData(oldp+33,(vlSelf->io_valueC),48);
    tracep->chgBit(oldp+35,(vlSelf->clk));
    tracep->chgBit(oldp+36,(vlSelf->reset));
    tracep->chgCData(oldp+37,((3U & ((IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value) 
                                     + (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement)))),2);
    tracep->chgBit(oldp+38,(((3U == (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)) 
                             & (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement))));
    tracep->chgCData(oldp+39,((((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
                                & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))
                                ? 0U : (7U & ((IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value) 
                                              + (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))))),3);
    tracep->chgBit(oldp+40,(((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
                             & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))));
}

void VFunctionUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_cleanup\n"); );
    // Init
    VFunctionUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFunctionUnit___024root*>(voidSelf);
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
