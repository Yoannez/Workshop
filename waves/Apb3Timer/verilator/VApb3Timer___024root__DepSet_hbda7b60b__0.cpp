// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Timer.h for the primary calling header

#include "verilated.h"

#include "VApb3Timer___024root.h"

VL_INLINE_OPT void VApb3Timer___024root___sequent__TOP__0(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__Apb3Timer__DOT__clockDivider_counter;
    SData/*15:0*/ __Vdly__Apb3Timer__DOT__timerA__DOT__counter;
    CData/*7:0*/ __Vdly__Apb3Timer__DOT__timerB__DOT__counter;
    // Body
    __Vdly__Apb3Timer__DOT__clockDivider_counter = vlSelf->Apb3Timer__DOT__clockDivider_counter;
    __Vdly__Apb3Timer__DOT__timerB__DOT__counter = vlSelf->Apb3Timer__DOT__timerB__DOT__counter;
    __Vdly__Apb3Timer__DOT__timerA__DOT__counter = vlSelf->Apb3Timer__DOT__timerA__DOT__counter;
    if (vlSelf->reset) {
        __Vdly__Apb3Timer__DOT__clockDivider_counter = 0U;
        __Vdly__Apb3Timer__DOT__timerB__DOT__counter = 0U;
        __Vdly__Apb3Timer__DOT__timerA__DOT__counter = 0U;
        vlSelf->Apb3Timer__DOT__timerB__DOT__counter 
            = __Vdly__Apb3Timer__DOT__timerB__DOT__counter;
        vlSelf->Apb3Timer__DOT__clockDivider_counter 
            = __Vdly__Apb3Timer__DOT__clockDivider_counter;
        vlSelf->Apb3Timer__DOT__timerA__DOT__counter 
            = __Vdly__Apb3Timer__DOT__timerA__DOT__counter;
        vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable = 0U;
        vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable = 0U;
        vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable = 0U;
        vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable = 0U;
    } else {
        __Vdly__Apb3Timer__DOT__clockDivider_counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)));
        if (((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                             << 2U) | ((0xfU == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                       << 1U))) & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable))) 
             & (~ (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)))) {
            __Vdly__Apb3Timer__DOT__timerB__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->Apb3Timer__DOT__timerB__DOT__counter)));
        }
        if (((0U != ((((IData)(vlSelf->io_external_clear) 
                       << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)) 
                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable))) 
             | (IData)(vlSelf->Apb3Timer__DOT__bridgeB_busClear))) {
            __Vdly__Apb3Timer__DOT__timerB__DOT__counter = 0U;
        }
        if (((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                             << 2U) | ((0xfU == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                       << 1U))) & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable))) 
             & (~ (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)))) {
            __Vdly__Apb3Timer__DOT__timerA__DOT__counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->Apb3Timer__DOT__timerA__DOT__counter)));
        }
        if (((0U != ((((IData)(vlSelf->io_external_clear) 
                       << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)) 
                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable))) 
             | (IData)(vlSelf->Apb3Timer__DOT__bridgeA_busClear))) {
            __Vdly__Apb3Timer__DOT__timerA__DOT__counter = 0U;
        }
        vlSelf->Apb3Timer__DOT__timerB__DOT__counter 
            = __Vdly__Apb3Timer__DOT__timerB__DOT__counter;
        vlSelf->Apb3Timer__DOT__clockDivider_counter 
            = __Vdly__Apb3Timer__DOT__clockDivider_counter;
        vlSelf->Apb3Timer__DOT__timerA__DOT__counter 
            = __Vdly__Apb3Timer__DOT__timerA__DOT__counter;
        if ((0U != (IData)(vlSelf->io_apb_PADDR))) {
            if ((0x10U == (IData)(vlSelf->io_apb_PADDR))) {
                if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
                    vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable 
                        = (7U & vlSelf->io_apb_PWDATA);
                    vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable 
                        = (3U & (vlSelf->io_apb_PWDATA 
                                 >> 0x10U));
                }
            }
        }
        if ((0U == (IData)(vlSelf->io_apb_PADDR))) {
            if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
                vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable 
                    = (7U & vlSelf->io_apb_PWDATA);
                vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable 
                    = (3U & (vlSelf->io_apb_PWDATA 
                             >> 0x10U));
            }
        }
    }
}

VL_INLINE_OPT void VApb3Timer___024root___sequent__TOP__1(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___sequent__TOP__1\n"); );
    // Body
    if ((4U != (IData)(vlSelf->io_apb_PADDR))) {
        if ((0x14U == (IData)(vlSelf->io_apb_PADDR))) {
            if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
                vlSelf->Apb3Timer__DOT__timerB_io_limit_driver 
                    = (0xffU & vlSelf->io_apb_PWDATA);
            }
        }
    }
    if ((4U == (IData)(vlSelf->io_apb_PADDR))) {
        if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
            vlSelf->Apb3Timer__DOT__timerA_io_limit_driver 
                = (0xffffU & vlSelf->io_apb_PWDATA);
        }
    }
}

VL_INLINE_OPT void VApb3Timer___024root___combo__TOP__0(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->Apb3Timer__DOT__apbCtrl_doWrite = (((IData)(vlSelf->io_apb_PSEL) 
                                                & (IData)(vlSelf->io_apb_PENABLE)) 
                                               & (IData)(vlSelf->io_apb_PWRITE));
    vlSelf->io_apb_PRDATA = 0U;
    if ((0U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xfffffff8U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable));
        vlSelf->io_apb_PRDATA = ((0xfffcffffU & vlSelf->io_apb_PRDATA) 
                                 | ((IData)(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable) 
                                    << 0x10U));
    } else if ((4U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xffff0000U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__timerA_io_limit_driver));
    } else if ((8U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xffff0000U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__timerA__DOT__counter));
    } else if ((0x10U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xfffffff8U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable));
        vlSelf->io_apb_PRDATA = ((0xfffcffffU & vlSelf->io_apb_PRDATA) 
                                 | ((IData)(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable) 
                                    << 0x10U));
    } else if ((0x14U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xffffff00U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__timerB_io_limit_driver));
    } else if ((0x18U == (IData)(vlSelf->io_apb_PADDR))) {
        vlSelf->io_apb_PRDATA = ((0xffffff00U & vlSelf->io_apb_PRDATA) 
                                 | (IData)(vlSelf->Apb3Timer__DOT__timerB__DOT__counter));
    }
    vlSelf->Apb3Timer__DOT__when_Timer_l39 = 0U;
    if ((4U == (IData)(vlSelf->io_apb_PADDR))) {
        if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
            vlSelf->Apb3Timer__DOT__when_Timer_l39 = 1U;
        }
    }
    vlSelf->Apb3Timer__DOT__when_Timer_l42 = 0U;
    if ((8U == (IData)(vlSelf->io_apb_PADDR))) {
        if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
            vlSelf->Apb3Timer__DOT__when_Timer_l42 = 1U;
        }
    }
    vlSelf->Apb3Timer__DOT__when_Timer_l39_1 = 0U;
    if ((0x14U == (IData)(vlSelf->io_apb_PADDR))) {
        if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
            vlSelf->Apb3Timer__DOT__when_Timer_l39_1 = 1U;
        }
    }
    vlSelf->Apb3Timer__DOT__when_Timer_l42_1 = 0U;
    if ((0x18U == (IData)(vlSelf->io_apb_PADDR))) {
        if (vlSelf->Apb3Timer__DOT__apbCtrl_doWrite) {
            vlSelf->Apb3Timer__DOT__when_Timer_l42_1 = 1U;
        }
    }
    vlSelf->Apb3Timer__DOT__bridgeA_busClear = 0U;
    if (vlSelf->Apb3Timer__DOT__when_Timer_l39) {
        vlSelf->Apb3Timer__DOT__bridgeA_busClear = 1U;
    }
    if (vlSelf->Apb3Timer__DOT__when_Timer_l42) {
        vlSelf->Apb3Timer__DOT__bridgeA_busClear = 1U;
    }
    vlSelf->Apb3Timer__DOT__bridgeB_busClear = 0U;
    if (vlSelf->Apb3Timer__DOT__when_Timer_l39_1) {
        vlSelf->Apb3Timer__DOT__bridgeB_busClear = 1U;
    }
    if (vlSelf->Apb3Timer__DOT__when_Timer_l42_1) {
        vlSelf->Apb3Timer__DOT__bridgeB_busClear = 1U;
    }
}

VL_INLINE_OPT void VApb3Timer___024root___sequent__TOP__2(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->Apb3Timer__DOT__timerB_io_full = ((IData)(vlSelf->Apb3Timer__DOT__timerB__DOT__counter) 
                                              == (IData)(vlSelf->Apb3Timer__DOT__timerB_io_limit_driver));
    vlSelf->Apb3Timer__DOT__timerA_io_full = ((IData)(vlSelf->Apb3Timer__DOT__timerA__DOT__counter) 
                                              == (IData)(vlSelf->Apb3Timer__DOT__timerA_io_limit_driver));
    vlSelf->io_fullB = vlSelf->Apb3Timer__DOT__timerB_io_full;
    vlSelf->io_fullA = vlSelf->Apb3Timer__DOT__timerA_io_full;
}

void VApb3Timer___024root___eval(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VApb3Timer___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VApb3Timer___024root___sequent__TOP__1(vlSelf);
    }
    VApb3Timer___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VApb3Timer___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VApb3Timer___024root___eval_debug_assertions(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_apb_PSEL & 0xfeU))) {
        Verilated::overWidthError("io_apb_PSEL");}
    if (VL_UNLIKELY((vlSelf->io_apb_PENABLE & 0xfeU))) {
        Verilated::overWidthError("io_apb_PENABLE");}
    if (VL_UNLIKELY((vlSelf->io_apb_PWRITE & 0xfeU))) {
        Verilated::overWidthError("io_apb_PWRITE");}
    if (VL_UNLIKELY((vlSelf->io_external_tick & 0xfeU))) {
        Verilated::overWidthError("io_external_tick");}
    if (VL_UNLIKELY((vlSelf->io_external_clear & 0xfeU))) {
        Verilated::overWidthError("io_external_clear");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
