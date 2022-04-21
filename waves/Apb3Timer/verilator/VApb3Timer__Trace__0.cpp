// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Timer__Syms.h"


void VApb3Timer___024root__trace_chg_sub_0(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep);

void VApb3Timer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_chg_top_0\n"); );
    // Init
    VApb3Timer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VApb3Timer___024root*>(voidSelf);
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VApb3Timer___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VApb3Timer___024root__trace_chg_sub_0(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgSData(oldp+0,(vlSelf->Apb3Timer__DOT__timerA__DOT__counter),16);
        tracep->chgCData(oldp+1,(vlSelf->Apb3Timer__DOT__timerB__DOT__counter),8);
        tracep->chgCData(oldp+2,(vlSelf->Apb3Timer__DOT__clockDivider_counter),4);
        tracep->chgBit(oldp+3,((0xfU == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter))));
        tracep->chgCData(oldp+4,(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable),3);
        tracep->chgCData(oldp+5,(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable),2);
        tracep->chgCData(oldp+6,(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable),3);
        tracep->chgCData(oldp+7,(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+8,(vlSelf->Apb3Timer__DOT__apbCtrl_doWrite));
        tracep->chgBit(oldp+9,(vlSelf->Apb3Timer__DOT__bridgeA_busClear));
        tracep->chgBit(oldp+10,(vlSelf->Apb3Timer__DOT__when_Timer_l39));
        tracep->chgBit(oldp+11,(vlSelf->Apb3Timer__DOT__when_Timer_l42));
        tracep->chgBit(oldp+12,(vlSelf->Apb3Timer__DOT__bridgeB_busClear));
        tracep->chgBit(oldp+13,(vlSelf->Apb3Timer__DOT__when_Timer_l39_1));
        tracep->chgBit(oldp+14,(vlSelf->Apb3Timer__DOT__when_Timer_l42_1));
    }
    tracep->chgCData(oldp+15,(vlSelf->io_apb_PADDR),8);
    tracep->chgBit(oldp+16,(vlSelf->io_apb_PSEL));
    tracep->chgBit(oldp+17,(vlSelf->io_apb_PENABLE));
    tracep->chgBit(oldp+18,(vlSelf->io_apb_PREADY));
    tracep->chgBit(oldp+19,(vlSelf->io_apb_PWRITE));
    tracep->chgIData(oldp+20,(vlSelf->io_apb_PWDATA),32);
    tracep->chgIData(oldp+21,(vlSelf->io_apb_PRDATA),32);
    tracep->chgBit(oldp+22,(vlSelf->io_apb_PSLVERROR));
    tracep->chgBit(oldp+23,(vlSelf->io_fullA));
    tracep->chgBit(oldp+24,(vlSelf->io_fullB));
    tracep->chgBit(oldp+25,(vlSelf->io_external_tick));
    tracep->chgBit(oldp+26,(vlSelf->io_external_clear));
    tracep->chgBit(oldp+27,(vlSelf->clk));
    tracep->chgBit(oldp+28,(vlSelf->reset));
    tracep->chgBit(oldp+29,((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                            << 2U) 
                                           | ((0xfU 
                                               == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                              << 1U))) 
                                    & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable)))));
    tracep->chgBit(oldp+30,(((0U != ((((IData)(vlSelf->io_external_clear) 
                                       << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable))) 
                             | (IData)(vlSelf->Apb3Timer__DOT__bridgeA_busClear))));
    tracep->chgBit(oldp+31,((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                            << 2U) 
                                           | ((0xfU 
                                               == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                              << 1U))) 
                                    & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable)))));
    tracep->chgBit(oldp+32,(((0U != ((((IData)(vlSelf->io_external_clear) 
                                       << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable))) 
                             | (IData)(vlSelf->Apb3Timer__DOT__bridgeB_busClear))));
    tracep->chgBit(oldp+33,(vlSelf->Apb3Timer__DOT__timerA_io_full));
    tracep->chgBit(oldp+34,(vlSelf->Apb3Timer__DOT__timerB_io_full));
    tracep->chgBit(oldp+35,((((IData)(vlSelf->io_apb_PSEL) 
                              & (IData)(vlSelf->io_apb_PENABLE)) 
                             & (IData)(vlSelf->io_apb_PWRITE))));
    tracep->chgBit(oldp+36,((((IData)(vlSelf->io_apb_PSEL) 
                              & (IData)(vlSelf->io_apb_PENABLE)) 
                             & (~ (IData)(vlSelf->io_apb_PWRITE)))));
    tracep->chgSData(oldp+37,(vlSelf->Apb3Timer__DOT__timerA_io_limit_driver),16);
    tracep->chgCData(oldp+38,(vlSelf->Apb3Timer__DOT__timerB_io_limit_driver),8);
    tracep->chgBit(oldp+39,(((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                             << 2U) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                               << 1U))) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable))) 
                             & (~ (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)))));
    tracep->chgBit(oldp+40,(((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                             << 2U) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                               << 1U))) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable))) 
                             & (~ (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)))));
}

void VApb3Timer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_cleanup\n"); );
    // Init
    VApb3Timer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VApb3Timer___024root*>(voidSelf);
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
