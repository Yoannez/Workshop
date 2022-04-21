// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMemorySumming__Syms.h"


void VMemorySumming___024root__trace_chg_sub_0(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep);

void VMemorySumming___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_chg_top_0\n"); );
    // Init
    VMemorySumming___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemorySumming___024root*>(voidSelf);
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMemorySumming___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMemorySumming___024root__trace_chg_sub_0(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->MemorySumming__DOT__sumArea_isStart));
        tracep->chgBit(oldp+1,((1U & (~ (IData)(vlSelf->MemorySumming__DOT__sumArea_isStart)))));
        tracep->chgBit(oldp+2,(vlSelf->MemorySumming__DOT__sumArea_rdValid));
    }
    tracep->chgBit(oldp+3,(vlSelf->io_wr_en));
    tracep->chgCData(oldp+4,(vlSelf->io_wr_addr),8);
    tracep->chgSData(oldp+5,(vlSelf->io_wr_data),16);
    tracep->chgBit(oldp+6,(vlSelf->io_sum_start));
    tracep->chgBit(oldp+7,(vlSelf->io_sum_done));
    tracep->chgSData(oldp+8,(vlSelf->io_sum_value),16);
    tracep->chgBit(oldp+9,(vlSelf->io_wr_clk));
    tracep->chgBit(oldp+10,(vlSelf->io_sum_clk));
    tracep->chgBit(oldp+11,(vlSelf->io_sum_reset));
    tracep->chgSData(oldp+12,(vlSelf->MemorySumming__DOT__myRam_io_rd_data),16);
    tracep->chgCData(oldp+13,(vlSelf->MemorySumming__DOT__sumArea_addrCounter),8);
    tracep->chgBit(oldp+14,((0xffU == (IData)(vlSelf->MemorySumming__DOT__sumArea_addrCounter))));
    tracep->chgSData(oldp+15,(vlSelf->MemorySumming__DOT__sumArea_sum),16);
    tracep->chgBit(oldp+16,(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext));
    tracep->chgBit(oldp+17,(((~ (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid)) 
                             & (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext))));
}

void VMemorySumming___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_cleanup\n"); );
    // Init
    VMemorySumming___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemorySumming___024root*>(voidSelf);
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
