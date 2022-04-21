// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit___024root.h"

VL_ATTR_COLD void VStreamUnit___024root___eval_initial(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VStreamUnit___024root___final(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___final\n"); );
}

VL_ATTR_COLD void VStreamUnit___024root___ctor_var_reset(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_memWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memWrite_payload_address = VL_RAND_RESET_I(8);
    vlSelf->io_memWrite_payload_data = VL_RAND_RESET_I(32);
    vlSelf->io_cmdA_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmdA_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmdA_payload = VL_RAND_RESET_I(8);
    vlSelf->io_cmdB_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmdB_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmdB_payload = VL_RAND_RESET_I(32);
    vlSelf->io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_payload = VL_RAND_RESET_I(32);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
