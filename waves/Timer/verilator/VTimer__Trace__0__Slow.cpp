// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTimer__Syms.h"


VL_ATTR_COLD void VTimer___024root__trace_init_sub__TOP__0(VTimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"io_tick", false,-1);
    tracep->declBit(c+2,"io_clear", false,-1);
    tracep->declBus(c+3,"io_limit", false,-1, 7,0);
    tracep->declBit(c+4,"io_full", false,-1);
    tracep->declBus(c+5,"io_value", false,-1, 7,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("Timer ");
    tracep->declBit(c+1,"io_tick", false,-1);
    tracep->declBit(c+2,"io_clear", false,-1);
    tracep->declBus(c+3,"io_limit", false,-1, 7,0);
    tracep->declBit(c+4,"io_full", false,-1);
    tracep->declBus(c+5,"io_value", false,-1, 7,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBus(c+8,"counter", false,-1, 7,0);
    tracep->declBit(c+9,"when_Timer_l20", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VTimer___024root__trace_init_top(VTimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_init_top\n"); );
    // Body
    VTimer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTimer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTimer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTimer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTimer___024root__trace_register(VTimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTimer___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTimer___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTimer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTimer___024root__trace_full_sub_0(VTimer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTimer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_full_top_0\n"); );
    // Init
    VTimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTimer___024root*>(voidSelf);
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTimer___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTimer___024root__trace_full_sub_0(VTimer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTimer___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->io_tick));
    tracep->fullBit(oldp+2,(vlSelf->io_clear));
    tracep->fullCData(oldp+3,(vlSelf->io_limit),8);
    tracep->fullBit(oldp+4,(vlSelf->io_full));
    tracep->fullCData(oldp+5,(vlSelf->io_value),8);
    tracep->fullBit(oldp+6,(vlSelf->clk));
    tracep->fullBit(oldp+7,(vlSelf->reset));
    tracep->fullCData(oldp+8,(vlSelf->Timer__DOT__counter),8);
    tracep->fullBit(oldp+9,(((IData)(vlSelf->io_tick) 
                             & (~ (IData)(vlSelf->io_full)))));
}
