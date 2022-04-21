// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit___024root.h"

#ifdef VL_DEBUG
void VStreamUnit___024root___eval_debug_assertions(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_memWrite_valid & 0xfeU))) {
        Verilated::overWidthError("io_memWrite_valid");}
    if (VL_UNLIKELY((vlSelf->io_cmdA_valid & 0xfeU))) {
        Verilated::overWidthError("io_cmdA_valid");}
    if (VL_UNLIKELY((vlSelf->io_cmdB_valid & 0xfeU))) {
        Verilated::overWidthError("io_cmdB_valid");}
    if (VL_UNLIKELY((vlSelf->io_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
