// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMemorySumming__Syms.h"


VL_ATTR_COLD void VMemorySumming___024root__trace_init_sub__TOP__0(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"io_wr_en", false,-1);
    tracep->declBus(c+5,"io_wr_addr", false,-1, 7,0);
    tracep->declBus(c+6,"io_wr_data", false,-1, 15,0);
    tracep->declBit(c+7,"io_sum_start", false,-1);
    tracep->declBit(c+8,"io_sum_done", false,-1);
    tracep->declBus(c+9,"io_sum_value", false,-1, 15,0);
    tracep->declBit(c+10,"io_wr_clk", false,-1);
    tracep->declBit(c+11,"io_sum_clk", false,-1);
    tracep->declBit(c+12,"io_sum_reset", false,-1);
    tracep->pushNamePrefix("MemorySumming ");
    tracep->declBit(c+4,"io_wr_en", false,-1);
    tracep->declBus(c+5,"io_wr_addr", false,-1, 7,0);
    tracep->declBus(c+6,"io_wr_data", false,-1, 15,0);
    tracep->declBit(c+7,"io_sum_start", false,-1);
    tracep->declBit(c+8,"io_sum_done", false,-1);
    tracep->declBus(c+9,"io_sum_value", false,-1, 15,0);
    tracep->declBit(c+10,"io_wr_clk", false,-1);
    tracep->declBit(c+11,"io_sum_clk", false,-1);
    tracep->declBit(c+12,"io_sum_reset", false,-1);
    tracep->declBus(c+13,"myRam_io_rd_data", false,-1, 15,0);
    tracep->declBus(c+14,"sumArea_addrCounter", false,-1, 7,0);
    tracep->declBit(c+1,"sumArea_isStart", false,-1);
    tracep->declBit(c+2,"when_MemorySumming_l64", false,-1);
    tracep->declBit(c+15,"when_MemorySumming_l69", false,-1);
    tracep->declBit(c+3,"sumArea_rdValid", false,-1);
    tracep->declBus(c+16,"sumArea_sum", false,-1, 15,0);
    tracep->declBit(c+17,"sumArea_rdValid_regNext", false,-1);
    tracep->declBit(c+18,"when_MemorySumming_l82", false,-1);
    tracep->pushNamePrefix("myRam ");
    tracep->declBus(c+19,"addressWidth", false,-1, 31,0);
    tracep->declBus(c+20,"wordWidth", false,-1, 31,0);
    tracep->declBit(c+10,"io_wr_clk", false,-1);
    tracep->declBit(c+4,"io_wr_en", false,-1);
    tracep->declBus(c+5,"io_wr_addr", false,-1, 7,0);
    tracep->declBus(c+6,"io_wr_data", false,-1, 15,0);
    tracep->declBit(c+11,"io_rd_clk", false,-1);
    tracep->declBit(c+1,"io_rd_en", false,-1);
    tracep->declBus(c+14,"io_rd_addr", false,-1, 7,0);
    tracep->declBus(c+13,"io_rd_data", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VMemorySumming___024root__trace_init_top(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_init_top\n"); );
    // Body
    VMemorySumming___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMemorySumming___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMemorySumming___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMemorySumming___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMemorySumming___024root__trace_register(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMemorySumming___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMemorySumming___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMemorySumming___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMemorySumming___024root__trace_full_sub_0(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMemorySumming___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_full_top_0\n"); );
    // Init
    VMemorySumming___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemorySumming___024root*>(voidSelf);
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMemorySumming___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMemorySumming___024root__trace_full_sub_0(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->MemorySumming__DOT__sumArea_isStart));
    tracep->fullBit(oldp+2,((1U & (~ (IData)(vlSelf->MemorySumming__DOT__sumArea_isStart)))));
    tracep->fullBit(oldp+3,(vlSelf->MemorySumming__DOT__sumArea_rdValid));
    tracep->fullBit(oldp+4,(vlSelf->io_wr_en));
    tracep->fullCData(oldp+5,(vlSelf->io_wr_addr),8);
    tracep->fullSData(oldp+6,(vlSelf->io_wr_data),16);
    tracep->fullBit(oldp+7,(vlSelf->io_sum_start));
    tracep->fullBit(oldp+8,(vlSelf->io_sum_done));
    tracep->fullSData(oldp+9,(vlSelf->io_sum_value),16);
    tracep->fullBit(oldp+10,(vlSelf->io_wr_clk));
    tracep->fullBit(oldp+11,(vlSelf->io_sum_clk));
    tracep->fullBit(oldp+12,(vlSelf->io_sum_reset));
    tracep->fullSData(oldp+13,(vlSelf->MemorySumming__DOT__myRam_io_rd_data),16);
    tracep->fullCData(oldp+14,(vlSelf->MemorySumming__DOT__sumArea_addrCounter),8);
    tracep->fullBit(oldp+15,((0xffU == (IData)(vlSelf->MemorySumming__DOT__sumArea_addrCounter))));
    tracep->fullSData(oldp+16,(vlSelf->MemorySumming__DOT__sumArea_sum),16);
    tracep->fullBit(oldp+17,(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext));
    tracep->fullBit(oldp+18,(((~ (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid)) 
                              & (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext))));
    tracep->fullIData(oldp+19,(8U),32);
    tracep->fullIData(oldp+20,(0x10U),32);
}
