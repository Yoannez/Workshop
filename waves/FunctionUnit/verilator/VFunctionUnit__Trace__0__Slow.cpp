// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFunctionUnit__Syms.h"


VL_ATTR_COLD void VFunctionUnit___024root__trace_init_sub__TOP__0(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+30,"io_cmd_valid", false,-1);
    tracep->declBus(c+31,"io_cmd_payload", false,-1, 7,0);
    tracep->declBus(c+32,"io_valueA", false,-1, 7,0);
    tracep->declBus(c+33,"io_valueB", false,-1, 31,0);
    tracep->declQuad(c+34,"io_valueC", false,-1, 47,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->pushNamePrefix("FunctionUnit ");
    tracep->declBit(c+30,"io_cmd_valid", false,-1);
    tracep->declBus(c+31,"io_cmd_payload", false,-1, 7,0);
    tracep->declBus(c+32,"io_valueA", false,-1, 7,0);
    tracep->declBus(c+33,"io_valueB", false,-1, 31,0);
    tracep->declQuad(c+34,"io_valueC", false,-1, 47,0);
    tracep->declBit(c+36,"clk", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+14,"setA_hit", false,-1);
    tracep->declBus(c+1,"setA_counter", false,-1, 3,0);
    tracep->declBit(c+15,"when_FunctionUnit_l24", false,-1);
    tracep->declBit(c+2,"when_FunctionUnit_l25", false,-1);
    tracep->declBit(c+3,"loadA_active", false,-1);
    tracep->declBit(c+16,"loadA_counter_willIncrement", false,-1);
    tracep->declBit(c+42,"loadA_counter_willClear", false,-1);
    tracep->declBit(c+43,"loadA_counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+16,"loadA_counter_willOverflow", false,-1);
    tracep->declBus(c+10,"loadA_buffer", false,-1, 7,0);
    tracep->declBit(c+17,"when_FunctionUnit_l44", false,-1);
    tracep->declBit(c+18,"setB_hit", false,-1);
    tracep->declBus(c+4,"setB_counter", false,-1, 3,0);
    tracep->declBit(c+19,"when_FunctionUnit_l24_1", false,-1);
    tracep->declBit(c+5,"when_FunctionUnit_l25_1", false,-1);
    tracep->declBit(c+6,"loadB_active", false,-1);
    tracep->declBit(c+20,"loadB_counter_willIncrement", false,-1);
    tracep->declBit(c+42,"loadB_counter_willClear", false,-1);
    tracep->declBus(c+38,"loadB_counter_valueNext", false,-1, 1,0);
    tracep->declBus(c+26,"loadB_counter_value", false,-1, 1,0);
    tracep->declBit(c+27,"loadB_counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+39,"loadB_counter_willOverflow", false,-1);
    tracep->declBus(c+11,"loadB_buffer", false,-1, 31,0);
    tracep->declBit(c+21,"when_FunctionUnit_l44_1", false,-1);
    tracep->declBit(c+22,"setC_hit", false,-1);
    tracep->declBus(c+7,"setC_counter", false,-1, 3,0);
    tracep->declBit(c+23,"when_FunctionUnit_l24_2", false,-1);
    tracep->declBit(c+8,"when_FunctionUnit_l25_2", false,-1);
    tracep->declBit(c+9,"loadC_active", false,-1);
    tracep->declBit(c+24,"loadC_counter_willIncrement", false,-1);
    tracep->declBit(c+42,"loadC_counter_willClear", false,-1);
    tracep->declBus(c+40,"loadC_counter_valueNext", false,-1, 2,0);
    tracep->declBus(c+28,"loadC_counter_value", false,-1, 2,0);
    tracep->declBit(c+29,"loadC_counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+41,"loadC_counter_willOverflow", false,-1);
    tracep->declQuad(c+12,"loadC_buffer", false,-1, 47,0);
    tracep->declBit(c+25,"when_FunctionUnit_l44_2", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VFunctionUnit___024root__trace_init_top(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_init_top\n"); );
    // Body
    VFunctionUnit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFunctionUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VFunctionUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VFunctionUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFunctionUnit___024root__trace_register(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VFunctionUnit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VFunctionUnit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VFunctionUnit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFunctionUnit___024root__trace_full_sub_0(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFunctionUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_full_top_0\n"); );
    // Init
    VFunctionUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFunctionUnit___024root*>(voidSelf);
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFunctionUnit___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VFunctionUnit___024root__trace_full_sub_0(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFunctionUnit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->FunctionUnit__DOT__setA_counter),4);
    tracep->fullBit(oldp+2,((8U == (IData)(vlSelf->FunctionUnit__DOT__setA_counter))));
    tracep->fullBit(oldp+3,(vlSelf->FunctionUnit__DOT__loadA_active));
    tracep->fullCData(oldp+4,(vlSelf->FunctionUnit__DOT__setB_counter),4);
    tracep->fullBit(oldp+5,((8U == (IData)(vlSelf->FunctionUnit__DOT__setB_counter))));
    tracep->fullBit(oldp+6,(vlSelf->FunctionUnit__DOT__loadB_active));
    tracep->fullCData(oldp+7,(vlSelf->FunctionUnit__DOT__setC_counter),4);
    tracep->fullBit(oldp+8,((8U == (IData)(vlSelf->FunctionUnit__DOT__setC_counter))));
    tracep->fullBit(oldp+9,(vlSelf->FunctionUnit__DOT__loadC_active));
    tracep->fullCData(oldp+10,(vlSelf->FunctionUnit__DOT__loadA_buffer),8);
    tracep->fullIData(oldp+11,(vlSelf->FunctionUnit__DOT__loadB_buffer),32);
    tracep->fullQData(oldp+12,(vlSelf->FunctionUnit__DOT__loadC_buffer),48);
    tracep->fullBit(oldp+14,(vlSelf->FunctionUnit__DOT__setA_hit));
    tracep->fullBit(oldp+15,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_7));
    tracep->fullBit(oldp+16,(vlSelf->FunctionUnit__DOT__loadA_counter_willIncrement));
    tracep->fullBit(oldp+17,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44));
    tracep->fullBit(oldp+18,(vlSelf->FunctionUnit__DOT__setB_hit));
    tracep->fullBit(oldp+19,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_1_1));
    tracep->fullBit(oldp+20,(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement));
    tracep->fullBit(oldp+21,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_1));
    tracep->fullBit(oldp+22,(vlSelf->FunctionUnit__DOT__setC_hit));
    tracep->fullBit(oldp+23,(vlSelf->FunctionUnit__DOT___zz_when_FunctionUnit_l24_2_1));
    tracep->fullBit(oldp+24,(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement));
    tracep->fullBit(oldp+25,(vlSelf->FunctionUnit__DOT__when_FunctionUnit_l44_2));
    tracep->fullCData(oldp+26,(vlSelf->FunctionUnit__DOT__loadB_counter_value),2);
    tracep->fullBit(oldp+27,((3U == (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value))));
    tracep->fullCData(oldp+28,(vlSelf->FunctionUnit__DOT__loadC_counter_value),3);
    tracep->fullBit(oldp+29,((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value))));
    tracep->fullBit(oldp+30,(vlSelf->io_cmd_valid));
    tracep->fullCData(oldp+31,(vlSelf->io_cmd_payload),8);
    tracep->fullCData(oldp+32,(vlSelf->io_valueA),8);
    tracep->fullIData(oldp+33,(vlSelf->io_valueB),32);
    tracep->fullQData(oldp+34,(vlSelf->io_valueC),48);
    tracep->fullBit(oldp+36,(vlSelf->clk));
    tracep->fullBit(oldp+37,(vlSelf->reset));
    tracep->fullCData(oldp+38,((3U & ((IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value) 
                                      + (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement)))),2);
    tracep->fullBit(oldp+39,(((3U == (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_value)) 
                              & (IData)(vlSelf->FunctionUnit__DOT__loadB_counter_willIncrement))));
    tracep->fullCData(oldp+40,((((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
                                 & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))
                                 ? 0U : (7U & ((IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value) 
                                               + (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))))),3);
    tracep->fullBit(oldp+41,(((5U == (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_value)) 
                              & (IData)(vlSelf->FunctionUnit__DOT__loadC_counter_willIncrement))));
    tracep->fullBit(oldp+42,(0U));
    tracep->fullBit(oldp+43,(1U));
}
