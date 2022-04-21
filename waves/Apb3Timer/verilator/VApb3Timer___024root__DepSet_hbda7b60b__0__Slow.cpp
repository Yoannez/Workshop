// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Timer.h for the primary calling header

#include "verilated.h"

#include "VApb3Timer___024root.h"

VL_ATTR_COLD void VApb3Timer___024root___initial__TOP__0(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_apb_PREADY = 1U;
    vlSelf->io_apb_PSLVERROR = 0U;
}

VL_ATTR_COLD void VApb3Timer___024root___settle__TOP__0(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->Apb3Timer__DOT__timerA_io_full = ((IData)(vlSelf->Apb3Timer__DOT__timerA__DOT__counter) 
                                              == (IData)(vlSelf->Apb3Timer__DOT__timerA_io_limit_driver));
    vlSelf->Apb3Timer__DOT__timerB_io_full = ((IData)(vlSelf->Apb3Timer__DOT__timerB__DOT__counter) 
                                              == (IData)(vlSelf->Apb3Timer__DOT__timerB_io_limit_driver));
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
    vlSelf->io_fullA = vlSelf->Apb3Timer__DOT__timerA_io_full;
    vlSelf->io_fullB = vlSelf->Apb3Timer__DOT__timerB_io_full;
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

VL_ATTR_COLD void VApb3Timer___024root___eval_initial(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___eval_initial\n"); );
    // Body
    VApb3Timer___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VApb3Timer___024root___eval_settle(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___eval_settle\n"); );
    // Body
    VApb3Timer___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VApb3Timer___024root___final(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___final\n"); );
}

VL_ATTR_COLD void VApb3Timer___024root___ctor_var_reset(VApb3Timer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_apb_PADDR = VL_RAND_RESET_I(8);
    vlSelf->io_apb_PSEL = VL_RAND_RESET_I(1);
    vlSelf->io_apb_PENABLE = VL_RAND_RESET_I(1);
    vlSelf->io_apb_PREADY = VL_RAND_RESET_I(1);
    vlSelf->io_apb_PWRITE = VL_RAND_RESET_I(1);
    vlSelf->io_apb_PWDATA = VL_RAND_RESET_I(32);
    vlSelf->io_apb_PRDATA = VL_RAND_RESET_I(32);
    vlSelf->io_apb_PSLVERROR = VL_RAND_RESET_I(1);
    vlSelf->io_fullA = VL_RAND_RESET_I(1);
    vlSelf->io_fullB = VL_RAND_RESET_I(1);
    vlSelf->io_external_tick = VL_RAND_RESET_I(1);
    vlSelf->io_external_clear = VL_RAND_RESET_I(1);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->Apb3Timer__DOT__timerA_io_full = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__timerB_io_full = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__clockDivider_counter = VL_RAND_RESET_I(4);
    vlSelf->Apb3Timer__DOT__apbCtrl_doWrite = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable = VL_RAND_RESET_I(3);
    vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable = VL_RAND_RESET_I(2);
    vlSelf->Apb3Timer__DOT__bridgeA_busClear = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__timerA_io_limit_driver = VL_RAND_RESET_I(16);
    vlSelf->Apb3Timer__DOT__when_Timer_l39 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__when_Timer_l42 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable = VL_RAND_RESET_I(3);
    vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable = VL_RAND_RESET_I(2);
    vlSelf->Apb3Timer__DOT__bridgeB_busClear = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__timerB_io_limit_driver = VL_RAND_RESET_I(8);
    vlSelf->Apb3Timer__DOT__when_Timer_l39_1 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__when_Timer_l42_1 = VL_RAND_RESET_I(1);
    vlSelf->Apb3Timer__DOT__timerA__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->Apb3Timer__DOT__timerB__DOT__counter = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
