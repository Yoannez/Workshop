// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit__Syms.h"
#include "VStreamUnit___024root.h"

VL_INLINE_OPT void VStreamUnit___024root___combo__TOP__0(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_rsp_payload = (vlSymsp->TOP__StreamUnit.__PVT___zz_mem_port1 
                              ^ vlSelf->io_cmdB_payload);
}

VL_INLINE_OPT void VStreamUnit___024root___combo__TOP__1(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_rsp_valid = vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready;
    vlSelf->io_cmdB_ready = vlSymsp->TOP__StreamUnit.__PVT___zz_io_cmdB_ready_1;
    vlSelf->io_cmdA_ready = vlSymsp->TOP__StreamUnit.__PVT__dataStream_isFree;
}

void VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__0(VStreamUnit_StreamUnit* vlSelf);
void VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__1(VStreamUnit_StreamUnit* vlSelf);
void VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0(VStreamUnit_StreamUnit* vlSelf);

void VStreamUnit___024root___eval(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__0((&vlSymsp->TOP__StreamUnit));
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__1((&vlSymsp->TOP__StreamUnit));
    }
    VStreamUnit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0((&vlSymsp->TOP__StreamUnit));
    VStreamUnit___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}
