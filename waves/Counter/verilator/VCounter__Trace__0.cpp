// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCounter__Syms.h"


void VCounter___024root__trace_chg_sub_0(VCounter___024root* vlSelf, VerilatedVcd* tracep);

void VCounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_chg_top_0\n"); );
    // Init
    VCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounter___024root*>(voidSelf);
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCounter___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VCounter___024root__trace_chg_sub_0(VCounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->io_clear));
    tracep->chgCData(oldp+1,(vlSelf->io_value),4);
    tracep->chgBit(oldp+2,(vlSelf->io_full));
    tracep->chgBit(oldp+3,(vlSelf->clk));
    tracep->chgBit(oldp+4,(vlSelf->reset));
    tracep->chgCData(oldp+5,(vlSelf->Counter__DOT__counter_1),4);
    tracep->chgBit(oldp+6,((0xfU == (IData)(vlSelf->Counter__DOT__counter_1))));
}

void VCounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_cleanup\n"); );
    // Init
    VCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounter___024root*>(voidSelf);
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
