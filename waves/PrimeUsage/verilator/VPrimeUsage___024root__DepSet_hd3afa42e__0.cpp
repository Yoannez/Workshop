// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPrimeUsage.h for the primary calling header

#include "verilated.h"

#include "VPrimeUsage___024root.h"

VL_INLINE_OPT void VPrimeUsage___024root___combo__TOP__0(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_isPrime = (0U != (((0x1fU == (IData)(vlSelf->io_value)) 
                                  << 0xcU) | (((0x1dU 
                                                == (IData)(vlSelf->io_value)) 
                                               << 0xbU) 
                                              | (((0x17U 
                                                   == (IData)(vlSelf->io_value)) 
                                                  << 0xaU) 
                                                 | (((0x13U 
                                                      == (IData)(vlSelf->io_value)) 
                                                     << 9U) 
                                                    | (((0x11U 
                                                         == (IData)(vlSelf->io_value)) 
                                                        << 8U) 
                                                       | (((0xdU 
                                                            == (IData)(vlSelf->io_value)) 
                                                           << 7U) 
                                                          | (((0xbU 
                                                               == (IData)(vlSelf->io_value)) 
                                                              << 6U) 
                                                             | (((7U 
                                                                  == (IData)(vlSelf->io_value)) 
                                                                 << 5U) 
                                                                | (((5U 
                                                                     == (IData)(vlSelf->io_value)) 
                                                                    << 4U) 
                                                                   | (((3U 
                                                                        == (IData)(vlSelf->io_value)) 
                                                                       << 3U) 
                                                                      | (((2U 
                                                                           == (IData)(vlSelf->io_value)) 
                                                                          << 2U) 
                                                                         | (((1U 
                                                                              == (IData)(vlSelf->io_value)) 
                                                                             << 1U) 
                                                                            | (0U 
                                                                               == (IData)(vlSelf->io_value)))))))))))))));
}

void VPrimeUsage___024root___eval(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___eval\n"); );
    // Body
    VPrimeUsage___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VPrimeUsage___024root___eval_debug_assertions(VPrimeUsage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPrimeUsage___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_value & 0xe0U))) {
        Verilated::overWidthError("io_value");}
}
#endif  // VL_DEBUG
