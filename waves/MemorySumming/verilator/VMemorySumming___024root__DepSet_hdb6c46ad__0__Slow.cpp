// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemorySumming.h for the primary calling header

#include "verilated.h"

#include "VMemorySumming___024root.h"

VL_ATTR_COLD void VMemorySumming___024root___settle__TOP__0(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_sum_value = vlSelf->MemorySumming__DOT__sumArea_sum;
    vlSelf->io_sum_done = 0U;
    if (((~ (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid)) 
         & (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext))) {
        vlSelf->io_sum_done = 1U;
    }
    vlSelf->MemorySumming__DOT__when_MemorySumming_l64 
        = (1U & (~ (IData)(vlSelf->MemorySumming__DOT__sumArea_isStart)));
}

VL_ATTR_COLD void VMemorySumming___024root___eval_initial(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__io_wr_clk = (1U & (~ (IData)(vlSelf->io_wr_clk)));
    vlSelf->__Vclklast__TOP__io_sum_clk = (1U & (~ (IData)(vlSelf->io_sum_clk)));
    vlSelf->__Vclklast__TOP__io_sum_reset = (1U & (~ (IData)(vlSelf->io_sum_reset)));
}

VL_ATTR_COLD void VMemorySumming___024root___eval_settle(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___eval_settle\n"); );
    // Body
    VMemorySumming___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMemorySumming___024root___final(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___final\n"); );
}

VL_ATTR_COLD void VMemorySumming___024root___ctor_var_reset(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_wr_en = VL_RAND_RESET_I(1);
    vlSelf->io_wr_addr = VL_RAND_RESET_I(8);
    vlSelf->io_wr_data = VL_RAND_RESET_I(16);
    vlSelf->io_sum_start = VL_RAND_RESET_I(1);
    vlSelf->io_sum_done = VL_RAND_RESET_I(1);
    vlSelf->io_sum_value = VL_RAND_RESET_I(16);
    vlSelf->io_wr_clk = 0;
    vlSelf->io_sum_clk = 0;
    vlSelf->io_sum_reset = 0;
    vlSelf->MemorySumming__DOT__myRam_io_rd_data = VL_RAND_RESET_I(16);
    vlSelf->MemorySumming__DOT__sumArea_addrCounter = VL_RAND_RESET_I(8);
    vlSelf->MemorySumming__DOT__sumArea_isStart = VL_RAND_RESET_I(1);
    vlSelf->MemorySumming__DOT__when_MemorySumming_l64 = VL_RAND_RESET_I(1);
    vlSelf->MemorySumming__DOT__sumArea_rdValid = VL_RAND_RESET_I(1);
    vlSelf->MemorySumming__DOT__sumArea_sum = VL_RAND_RESET_I(16);
    vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->MemorySumming__DOT__myRam__DOT__mem[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->__Vdly__MemorySumming__DOT__sumArea_addrCounter = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__MemorySumming__DOT__myRam__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__MemorySumming__DOT__myRam__DOT__mem__v0 = VL_RAND_RESET_I(17);
    vlSelf->__Vdlyvset__MemorySumming__DOT__myRam__DOT__mem__v0 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
