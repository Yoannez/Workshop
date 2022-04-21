// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCounter__Syms.h"


VL_ATTR_COLD void VCounter___024root__trace_init_sub__TOP__0(VCounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"io_clear", false,-1);
    tracep->declBus(c+2,"io_value", false,-1, 3,0);
    tracep->declBit(c+3,"io_full", false,-1);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("Counter ");
    tracep->declBit(c+1,"io_clear", false,-1);
    tracep->declBus(c+2,"io_value", false,-1, 3,0);
    tracep->declBit(c+3,"io_full", false,-1);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+6,"counter_1", false,-1, 3,0);
    tracep->declBit(c+7,"when_Counter_l23", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VCounter___024root__trace_init_top(VCounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_init_top\n"); );
    // Body
    VCounter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VCounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCounter___024root__trace_register(VCounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCounter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCounter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCounter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCounter___024root__trace_full_sub_0(VCounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_full_top_0\n"); );
    // Init
    VCounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCounter___024root*>(voidSelf);
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCounter___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VCounter___024root__trace_full_sub_0(VCounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCounter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->io_clear));
    tracep->fullCData(oldp+2,(vlSelf->io_value),4);
    tracep->fullBit(oldp+3,(vlSelf->io_full));
    tracep->fullBit(oldp+4,(vlSelf->clk));
    tracep->fullBit(oldp+5,(vlSelf->reset));
    tracep->fullCData(oldp+6,(vlSelf->Counter__DOT__counter_1),4);
    tracep->fullBit(oldp+7,((0xfU == (IData)(vlSelf->Counter__DOT__counter_1))));
}
