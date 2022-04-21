// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamUnit__Syms.h"


void VStreamUnit___024root__trace_chg_sub_0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep);

void VStreamUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_chg_top_0\n"); );
    // Init
    VStreamUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStreamUnit___024root*>(voidSelf);
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VStreamUnit___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VStreamUnit___024root__trace_chg_sub_0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__StreamUnit.__PVT__dataStream_isFree));
        tracep->chgBit(oldp+1,(vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready_1));
        tracep->chgBit(oldp+2,(vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready));
    }
    tracep->chgBit(oldp+3,(vlSelf->io_memWrite_valid));
    tracep->chgCData(oldp+4,(vlSelf->io_memWrite_payload_address),8);
    tracep->chgIData(oldp+5,(vlSelf->io_memWrite_payload_data),32);
    tracep->chgBit(oldp+6,(vlSelf->io_cmdA_valid));
    tracep->chgBit(oldp+7,(vlSelf->io_cmdA_ready));
    tracep->chgCData(oldp+8,(vlSelf->io_cmdA_payload),8);
    tracep->chgBit(oldp+9,(vlSelf->io_cmdB_valid));
    tracep->chgBit(oldp+10,(vlSelf->io_cmdB_ready));
    tracep->chgIData(oldp+11,(vlSelf->io_cmdB_payload),32);
    tracep->chgBit(oldp+12,(vlSelf->io_rsp_valid));
    tracep->chgBit(oldp+13,(vlSelf->io_rsp_ready));
    tracep->chgIData(oldp+14,(vlSelf->io_rsp_payload),32);
    tracep->chgBit(oldp+15,(vlSelf->clk));
    tracep->chgBit(oldp+16,(vlSelf->reset));
    tracep->chgIData(oldp+17,((vlSymsp->TOP__StreamUnit.__PVT___zz_mem_port1 
                               ^ vlSelf->io_cmdB_payload)),32);
    tracep->chgBit(oldp+18,(vlSymsp->TOP__StreamUnit.__PVT___zz_dataStream_valid));
    tracep->chgIData(oldp+19,(vlSymsp->TOP__StreamUnit.__PVT___zz_mem_port1),32);
}

void VStreamUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_cleanup\n"); );
    // Init
    VStreamUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStreamUnit___024root*>(voidSelf);
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
