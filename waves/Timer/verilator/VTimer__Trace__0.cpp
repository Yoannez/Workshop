// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTimer__Syms.h"


void VTimer___024root__trace_chg_sub_0(VTimer___024root* vlSelf, VerilatedVcd* tracep);

void VTimer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_chg_top_0\n"); );
    // Init
    VTimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTimer___024root*>(voidSelf);
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTimer___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VTimer___024root__trace_chg_sub_0(VTimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->io_tick));
    tracep->chgBit(oldp+1,(vlSelf->io_clear));
    tracep->chgCData(oldp+2,(vlSelf->io_limit),8);
    tracep->chgBit(oldp+3,(vlSelf->io_full));
    tracep->chgCData(oldp+4,(vlSelf->io_value),8);
    tracep->chgBit(oldp+5,(vlSelf->clk));
    tracep->chgBit(oldp+6,(vlSelf->reset));
    tracep->chgCData(oldp+7,(vlSelf->Timer__DOT__counter),8);
    tracep->chgBit(oldp+8,(((IData)(vlSelf->io_tick) 
                            & (~ (IData)(vlSelf->io_full)))));
}

void VTimer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_cleanup\n"); );
    // Init
    VTimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTimer___024root*>(voidSelf);
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
