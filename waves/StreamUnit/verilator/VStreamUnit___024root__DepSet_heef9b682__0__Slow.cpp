// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit__Syms.h"
#include "VStreamUnit___024root.h"

void VStreamUnit___024root___combo__TOP__0(VStreamUnit___024root* vlSelf);
void VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0(VStreamUnit_StreamUnit* vlSelf);
void VStreamUnit___024root___combo__TOP__1(VStreamUnit___024root* vlSelf);

VL_ATTR_COLD void VStreamUnit___024root___eval_settle(VStreamUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStreamUnit___024root___eval_settle\n"); );
    // Body
    VStreamUnit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0((&vlSymsp->TOP__StreamUnit));
    VStreamUnit___024root___combo__TOP__1(vlSelf);
}
