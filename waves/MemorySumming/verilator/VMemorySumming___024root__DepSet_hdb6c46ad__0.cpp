// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemorySumming.h for the primary calling header

#include "verilated.h"

#include "VMemorySumming___024root.h"

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__0(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__MemorySumming__DOT__myRam__DOT__mem__v0 = 0U;
    if (vlSelf->io_wr_en) {
        vlSelf->__Vdlyvval__MemorySumming__DOT__myRam__DOT__mem__v0 
            = vlSelf->io_wr_data;
        vlSelf->__Vdlyvset__MemorySumming__DOT__myRam__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__MemorySumming__DOT__myRam__DOT__mem__v0 
            = vlSelf->io_wr_addr;
    }
}

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__1(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext 
        = ((~ (IData)(vlSelf->io_sum_reset)) & (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid));
}

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__2(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__2\n"); );
    // Init
    SData/*15:0*/ __Vdly__MemorySumming__DOT__sumArea_sum;
    // Body
    vlSelf->__Vdly__MemorySumming__DOT__sumArea_addrCounter 
        = vlSelf->MemorySumming__DOT__sumArea_addrCounter;
    __Vdly__MemorySumming__DOT__sumArea_sum = vlSelf->MemorySumming__DOT__sumArea_sum;
    vlSelf->__Vdly__MemorySumming__DOT__sumArea_addrCounter 
        = ((IData)(vlSelf->MemorySumming__DOT__sumArea_isStart)
            ? (0xffU & ((IData)(1U) + (IData)(vlSelf->MemorySumming__DOT__sumArea_addrCounter)))
            : 0U);
    __Vdly__MemorySumming__DOT__sumArea_sum = 0U;
    if (vlSelf->MemorySumming__DOT__sumArea_rdValid) {
        __Vdly__MemorySumming__DOT__sumArea_sum = (0xffffU 
                                                   & ((IData)(vlSelf->MemorySumming__DOT__sumArea_sum) 
                                                      + (IData)(vlSelf->MemorySumming__DOT__myRam_io_rd_data)));
    }
    vlSelf->MemorySumming__DOT__sumArea_sum = __Vdly__MemorySumming__DOT__sumArea_sum;
    vlSelf->io_sum_value = vlSelf->MemorySumming__DOT__sumArea_sum;
    if (vlSelf->MemorySumming__DOT__sumArea_isStart) {
        vlSelf->MemorySumming__DOT__myRam_io_rd_data 
            = (0xffffU & vlSelf->MemorySumming__DOT__myRam__DOT__mem
               [vlSelf->MemorySumming__DOT__sumArea_addrCounter]);
    }
}

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__3(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->MemorySumming__DOT__sumArea_rdValid = (
                                                   (~ (IData)(vlSelf->io_sum_reset)) 
                                                   & (IData)(vlSelf->MemorySumming__DOT__sumArea_isStart));
    vlSelf->io_sum_done = 0U;
    if (((~ (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid)) 
         & (IData)(vlSelf->MemorySumming__DOT__sumArea_rdValid_regNext))) {
        vlSelf->io_sum_done = 1U;
    }
    if (vlSelf->io_sum_reset) {
        vlSelf->MemorySumming__DOT__sumArea_isStart = 0U;
    } else if (vlSelf->MemorySumming__DOT__when_MemorySumming_l64) {
        vlSelf->MemorySumming__DOT__sumArea_isStart 
            = vlSelf->io_sum_start;
    } else if ((0xffU == (IData)(vlSelf->MemorySumming__DOT__sumArea_addrCounter))) {
        vlSelf->MemorySumming__DOT__sumArea_isStart = 0U;
    }
    vlSelf->MemorySumming__DOT__when_MemorySumming_l64 
        = (1U & (~ (IData)(vlSelf->MemorySumming__DOT__sumArea_isStart)));
}

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__4(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__MemorySumming__DOT__myRam__DOT__mem__v0) {
        vlSelf->MemorySumming__DOT__myRam__DOT__mem[vlSelf->__Vdlyvdim0__MemorySumming__DOT__myRam__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__MemorySumming__DOT__myRam__DOT__mem__v0;
    }
}

VL_INLINE_OPT void VMemorySumming___024root___sequent__TOP__5(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->MemorySumming__DOT__sumArea_addrCounter 
        = vlSelf->__Vdly__MemorySumming__DOT__sumArea_addrCounter;
}

void VMemorySumming___024root___eval(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->io_wr_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_wr_clk)))) {
        VMemorySumming___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->io_sum_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_clk))) 
         | ((IData)(vlSelf->io_sum_reset) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_reset))))) {
        VMemorySumming___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->io_sum_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_clk)))) {
        VMemorySumming___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->io_sum_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_clk))) 
         | ((IData)(vlSelf->io_sum_reset) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_reset))))) {
        VMemorySumming___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->io_wr_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_wr_clk)))) {
        VMemorySumming___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->io_sum_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__io_sum_clk)))) {
        VMemorySumming___024root___sequent__TOP__5(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__io_wr_clk = vlSelf->io_wr_clk;
    vlSelf->__Vclklast__TOP__io_sum_clk = vlSelf->io_sum_clk;
    vlSelf->__Vclklast__TOP__io_sum_reset = vlSelf->io_sum_reset;
}

#ifdef VL_DEBUG
void VMemorySumming___024root___eval_debug_assertions(VMemorySumming___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemorySumming___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_wr_en & 0xfeU))) {
        Verilated::overWidthError("io_wr_en");}
    if (VL_UNLIKELY((vlSelf->io_sum_start & 0xfeU))) {
        Verilated::overWidthError("io_sum_start");}
    if (VL_UNLIKELY((vlSelf->io_wr_clk & 0xfeU))) {
        Verilated::overWidthError("io_wr_clk");}
    if (VL_UNLIKELY((vlSelf->io_sum_clk & 0xfeU))) {
        Verilated::overWidthError("io_sum_clk");}
    if (VL_UNLIKELY((vlSelf->io_sum_reset & 0xfeU))) {
        Verilated::overWidthError("io_sum_reset");}
}
#endif  // VL_DEBUG
