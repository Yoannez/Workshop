// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Timer__Syms.h"


VL_ATTR_COLD void VApb3Timer___024root__trace_init_sub__TOP__0(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+16,"io_apb_PADDR", false,-1, 7,0);
    tracep->declBus(c+17,"io_apb_PSEL", false,-1, 0,0);
    tracep->declBit(c+18,"io_apb_PENABLE", false,-1);
    tracep->declBit(c+19,"io_apb_PREADY", false,-1);
    tracep->declBit(c+20,"io_apb_PWRITE", false,-1);
    tracep->declBus(c+21,"io_apb_PWDATA", false,-1, 31,0);
    tracep->declBus(c+22,"io_apb_PRDATA", false,-1, 31,0);
    tracep->declBit(c+23,"io_apb_PSLVERROR", false,-1);
    tracep->declBit(c+24,"io_fullA", false,-1);
    tracep->declBit(c+25,"io_fullB", false,-1);
    tracep->declBit(c+26,"io_external_tick", false,-1);
    tracep->declBit(c+27,"io_external_clear", false,-1);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"reset", false,-1);
    tracep->pushNamePrefix("Apb3Timer ");
    tracep->declBus(c+16,"io_apb_PADDR", false,-1, 7,0);
    tracep->declBus(c+17,"io_apb_PSEL", false,-1, 0,0);
    tracep->declBit(c+18,"io_apb_PENABLE", false,-1);
    tracep->declBit(c+19,"io_apb_PREADY", false,-1);
    tracep->declBit(c+20,"io_apb_PWRITE", false,-1);
    tracep->declBus(c+21,"io_apb_PWDATA", false,-1, 31,0);
    tracep->declBus(c+22,"io_apb_PRDATA", false,-1, 31,0);
    tracep->declBit(c+23,"io_apb_PSLVERROR", false,-1);
    tracep->declBit(c+24,"io_fullA", false,-1);
    tracep->declBit(c+25,"io_fullB", false,-1);
    tracep->declBit(c+26,"io_external_tick", false,-1);
    tracep->declBit(c+27,"io_external_clear", false,-1);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"reset", false,-1);
    tracep->declBit(c+30,"timerA_io_tick", false,-1);
    tracep->declBit(c+31,"timerA_io_clear", false,-1);
    tracep->declBit(c+32,"timerB_io_tick", false,-1);
    tracep->declBit(c+33,"timerB_io_clear", false,-1);
    tracep->declBit(c+34,"timerA_io_full", false,-1);
    tracep->declBus(c+1,"timerA_io_value", false,-1, 15,0);
    tracep->declBit(c+35,"timerB_io_full", false,-1);
    tracep->declBus(c+2,"timerB_io_value", false,-1, 7,0);
    tracep->declBus(c+3,"clockDivider_counter", false,-1, 3,0);
    tracep->declBit(c+4,"clockDivider_full", false,-1);
    tracep->declBit(c+36,"apbCtrl_askWrite", false,-1);
    tracep->declBit(c+37,"apbCtrl_askRead", false,-1);
    tracep->declBit(c+9,"apbCtrl_doWrite", false,-1);
    tracep->declBit(c+37,"apbCtrl_doRead", false,-1);
    tracep->declBus(c+5,"bridgeA_ticksEnable", false,-1, 2,0);
    tracep->declBus(c+6,"bridgeA_clearsEnable", false,-1, 1,0);
    tracep->declBit(c+10,"bridgeA_busClear", false,-1);
    tracep->declBus(c+38,"timerA_io_limit_driver", false,-1, 15,0);
    tracep->declBit(c+11,"when_Timer_l39", false,-1);
    tracep->declBit(c+12,"when_Timer_l42", false,-1);
    tracep->declBus(c+7,"bridgeB_ticksEnable", false,-1, 2,0);
    tracep->declBus(c+8,"bridgeB_clearsEnable", false,-1, 1,0);
    tracep->declBit(c+13,"bridgeB_busClear", false,-1);
    tracep->declBus(c+39,"timerB_io_limit_driver", false,-1, 7,0);
    tracep->declBit(c+14,"when_Timer_l39_1", false,-1);
    tracep->declBit(c+15,"when_Timer_l42_1", false,-1);
    tracep->pushNamePrefix("timerA ");
    tracep->declBit(c+30,"io_tick", false,-1);
    tracep->declBit(c+31,"io_clear", false,-1);
    tracep->declBus(c+38,"io_limit", false,-1, 15,0);
    tracep->declBit(c+34,"io_full", false,-1);
    tracep->declBus(c+1,"io_value", false,-1, 15,0);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"reset", false,-1);
    tracep->declBus(c+1,"counter", false,-1, 15,0);
    tracep->declBit(c+40,"when_Timer_l20", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("timerB ");
    tracep->declBit(c+32,"io_tick", false,-1);
    tracep->declBit(c+33,"io_clear", false,-1);
    tracep->declBus(c+39,"io_limit", false,-1, 7,0);
    tracep->declBit(c+35,"io_full", false,-1);
    tracep->declBus(c+2,"io_value", false,-1, 7,0);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+29,"reset", false,-1);
    tracep->declBus(c+2,"counter", false,-1, 7,0);
    tracep->declBit(c+41,"when_Timer_l20", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VApb3Timer___024root__trace_init_top(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_init_top\n"); );
    // Body
    VApb3Timer___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VApb3Timer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VApb3Timer___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VApb3Timer___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VApb3Timer___024root__trace_register(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VApb3Timer___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VApb3Timer___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VApb3Timer___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VApb3Timer___024root__trace_full_sub_0(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VApb3Timer___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_full_top_0\n"); );
    // Init
    VApb3Timer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VApb3Timer___024root*>(voidSelf);
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VApb3Timer___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VApb3Timer___024root__trace_full_sub_0(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Timer___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+1,(vlSelf->Apb3Timer__DOT__timerA__DOT__counter),16);
    tracep->fullCData(oldp+2,(vlSelf->Apb3Timer__DOT__timerB__DOT__counter),8);
    tracep->fullCData(oldp+3,(vlSelf->Apb3Timer__DOT__clockDivider_counter),4);
    tracep->fullBit(oldp+4,((0xfU == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter))));
    tracep->fullCData(oldp+5,(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable),3);
    tracep->fullCData(oldp+6,(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable),2);
    tracep->fullCData(oldp+7,(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable),3);
    tracep->fullCData(oldp+8,(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable),2);
    tracep->fullBit(oldp+9,(vlSelf->Apb3Timer__DOT__apbCtrl_doWrite));
    tracep->fullBit(oldp+10,(vlSelf->Apb3Timer__DOT__bridgeA_busClear));
    tracep->fullBit(oldp+11,(vlSelf->Apb3Timer__DOT__when_Timer_l39));
    tracep->fullBit(oldp+12,(vlSelf->Apb3Timer__DOT__when_Timer_l42));
    tracep->fullBit(oldp+13,(vlSelf->Apb3Timer__DOT__bridgeB_busClear));
    tracep->fullBit(oldp+14,(vlSelf->Apb3Timer__DOT__when_Timer_l39_1));
    tracep->fullBit(oldp+15,(vlSelf->Apb3Timer__DOT__when_Timer_l42_1));
    tracep->fullCData(oldp+16,(vlSelf->io_apb_PADDR),8);
    tracep->fullBit(oldp+17,(vlSelf->io_apb_PSEL));
    tracep->fullBit(oldp+18,(vlSelf->io_apb_PENABLE));
    tracep->fullBit(oldp+19,(vlSelf->io_apb_PREADY));
    tracep->fullBit(oldp+20,(vlSelf->io_apb_PWRITE));
    tracep->fullIData(oldp+21,(vlSelf->io_apb_PWDATA),32);
    tracep->fullIData(oldp+22,(vlSelf->io_apb_PRDATA),32);
    tracep->fullBit(oldp+23,(vlSelf->io_apb_PSLVERROR));
    tracep->fullBit(oldp+24,(vlSelf->io_fullA));
    tracep->fullBit(oldp+25,(vlSelf->io_fullB));
    tracep->fullBit(oldp+26,(vlSelf->io_external_tick));
    tracep->fullBit(oldp+27,(vlSelf->io_external_clear));
    tracep->fullBit(oldp+28,(vlSelf->clk));
    tracep->fullBit(oldp+29,(vlSelf->reset));
    tracep->fullBit(oldp+30,((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                             << 2U) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                               << 1U))) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable)))));
    tracep->fullBit(oldp+31,(((0U != ((((IData)(vlSelf->io_external_clear) 
                                        << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)) 
                                      & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_clearsEnable))) 
                              | (IData)(vlSelf->Apb3Timer__DOT__bridgeA_busClear))));
    tracep->fullBit(oldp+32,((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                             << 2U) 
                                            | ((0xfU 
                                                == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                               << 1U))) 
                                     & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable)))));
    tracep->fullBit(oldp+33,(((0U != ((((IData)(vlSelf->io_external_clear) 
                                        << 1U) | (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)) 
                                      & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_clearsEnable))) 
                              | (IData)(vlSelf->Apb3Timer__DOT__bridgeB_busClear))));
    tracep->fullBit(oldp+34,(vlSelf->Apb3Timer__DOT__timerA_io_full));
    tracep->fullBit(oldp+35,(vlSelf->Apb3Timer__DOT__timerB_io_full));
    tracep->fullBit(oldp+36,((((IData)(vlSelf->io_apb_PSEL) 
                               & (IData)(vlSelf->io_apb_PENABLE)) 
                              & (IData)(vlSelf->io_apb_PWRITE))));
    tracep->fullBit(oldp+37,((((IData)(vlSelf->io_apb_PSEL) 
                               & (IData)(vlSelf->io_apb_PENABLE)) 
                              & (~ (IData)(vlSelf->io_apb_PWRITE)))));
    tracep->fullSData(oldp+38,(vlSelf->Apb3Timer__DOT__timerA_io_limit_driver),16);
    tracep->fullCData(oldp+39,(vlSelf->Apb3Timer__DOT__timerB_io_limit_driver),8);
    tracep->fullBit(oldp+40,(((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                              << 2U) 
                                             | ((0xfU 
                                                 == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                                << 1U))) 
                                      & (IData)(vlSelf->Apb3Timer__DOT__bridgeA_ticksEnable))) 
                              & (~ (IData)(vlSelf->Apb3Timer__DOT__timerA_io_full)))));
    tracep->fullBit(oldp+41,(((0U != ((1U | (((IData)(vlSelf->io_external_tick) 
                                              << 2U) 
                                             | ((0xfU 
                                                 == (IData)(vlSelf->Apb3Timer__DOT__clockDivider_counter)) 
                                                << 1U))) 
                                      & (IData)(vlSelf->Apb3Timer__DOT__bridgeB_ticksEnable))) 
                              & (~ (IData)(vlSelf->Apb3Timer__DOT__timerB_io_full)))));
}
