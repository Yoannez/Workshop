// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamUnit__Syms.h"


VL_ATTR_COLD void VStreamUnit___024root__trace_init_sub__TOP__0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"io_memWrite_valid", false,-1);
    tracep->declBus(c+5,"io_memWrite_payload_address", false,-1, 7,0);
    tracep->declBus(c+6,"io_memWrite_payload_data", false,-1, 31,0);
    tracep->declBit(c+7,"io_cmdA_valid", false,-1);
    tracep->declBit(c+8,"io_cmdA_ready", false,-1);
    tracep->declBus(c+9,"io_cmdA_payload", false,-1, 7,0);
    tracep->declBit(c+10,"io_cmdB_valid", false,-1);
    tracep->declBit(c+11,"io_cmdB_ready", false,-1);
    tracep->declBus(c+12,"io_cmdB_payload", false,-1, 31,0);
    tracep->declBit(c+13,"io_rsp_valid", false,-1);
    tracep->declBit(c+14,"io_rsp_ready", false,-1);
    tracep->declBus(c+15,"io_rsp_payload", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"reset", false,-1);
}

VL_ATTR_COLD void VStreamUnit___024root__trace_init_sub__TOP__StreamUnit__0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_init_sub__TOP__StreamUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"io_memWrite_valid", false,-1);
    tracep->declBus(c+5,"io_memWrite_payload_address", false,-1, 7,0);
    tracep->declBus(c+6,"io_memWrite_payload_data", false,-1, 31,0);
    tracep->declBit(c+7,"io_cmdA_valid", false,-1);
    tracep->declBit(c+1,"io_cmdA_ready", false,-1);
    tracep->declBus(c+9,"io_cmdA_payload", false,-1, 7,0);
    tracep->declBit(c+10,"io_cmdB_valid", false,-1);
    tracep->declBit(c+2,"io_cmdB_ready", false,-1);
    tracep->declBus(c+12,"io_cmdB_payload", false,-1, 31,0);
    tracep->declBit(c+3,"io_rsp_valid", false,-1);
    tracep->declBit(c+14,"io_rsp_ready", false,-1);
    tracep->declBus(c+18,"io_rsp_payload", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"reset", false,-1);
    tracep->declBit(c+19,"dataStream_valid", false,-1);
    tracep->declBit(c+2,"dataStream_ready", false,-1);
    tracep->declBus(c+20,"dataStream_payload", false,-1, 31,0);
    tracep->declBit(c+1,"dataStream_isFree", false,-1);
}

VL_ATTR_COLD void VStreamUnit___024root__trace_init_top(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_init_top\n"); );
    // Body
    VStreamUnit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("StreamUnit ");
    VStreamUnit___024root__trace_init_sub__TOP__StreamUnit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VStreamUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VStreamUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VStreamUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VStreamUnit___024root__trace_register(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VStreamUnit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VStreamUnit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VStreamUnit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VStreamUnit___024root__trace_full_sub_0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VStreamUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_full_top_0\n"); );
    // Init
    VStreamUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStreamUnit___024root*>(voidSelf);
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VStreamUnit___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VStreamUnit___024root__trace_full_sub_0(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSymsp->TOP__StreamUnit.__PVT__dataStream_isFree));
    tracep->fullBit(oldp+2,(vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready_1));
    tracep->fullBit(oldp+3,(vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready));
    tracep->fullBit(oldp+4,(vlSelf->io_memWrite_valid));
    tracep->fullCData(oldp+5,(vlSelf->io_memWrite_payload_address),8);
    tracep->fullIData(oldp+6,(vlSelf->io_memWrite_payload_data),32);
    tracep->fullBit(oldp+7,(vlSelf->io_cmdA_valid));
    tracep->fullBit(oldp+8,(vlSelf->io_cmdA_ready));
    tracep->fullCData(oldp+9,(vlSelf->io_cmdA_payload),8);
    tracep->fullBit(oldp+10,(vlSelf->io_cmdB_valid));
    tracep->fullBit(oldp+11,(vlSelf->io_cmdB_ready));
    tracep->fullIData(oldp+12,(vlSelf->io_cmdB_payload),32);
    tracep->fullBit(oldp+13,(vlSelf->io_rsp_valid));
    tracep->fullBit(oldp+14,(vlSelf->io_rsp_ready));
    tracep->fullIData(oldp+15,(vlSelf->io_rsp_payload),32);
    tracep->fullBit(oldp+16,(vlSelf->clk));
    tracep->fullBit(oldp+17,(vlSelf->reset));
    tracep->fullIData(oldp+18,((vlSymsp->TOP__StreamUnit.__PVT___zz_mem_port1 
                                ^ vlSelf->io_cmdB_payload)),32);
    tracep->fullBit(oldp+19,(vlSymsp->TOP__StreamUnit.__PVT___zz_dataStream_valid));
    tracep->fullIData(oldp+20,(vlSymsp->TOP__StreamUnit.__PVT___zz_mem_port1),32);
}
