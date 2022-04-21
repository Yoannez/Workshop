// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPixelSolverMultiCore__Syms.h"


VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_sub__TOP__0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+193,"io_cmd_valid", false,-1);
    tracep->declBit(c+194,"io_cmd_ready", false,-1);
    tracep->declBus(c+195,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+197,"io_rsp_valid", false,-1);
    tracep->declBit(c+198,"io_rsp_ready", false,-1);
    tracep->declBus(c+199,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->pushNamePrefix("PixelSolverMultiCore ");
    tracep->declBit(c+193,"io_cmd_valid", false,-1);
    tracep->declBit(c+194,"io_cmd_ready", false,-1);
    tracep->declBus(c+195,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+197,"io_rsp_valid", false,-1);
    tracep->declBit(c+198,"io_rsp_ready", false,-1);
    tracep->declBus(c+199,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBit(c+150,"dispatcher_1_io_outputs_0_ready", false,-1);
    tracep->declBit(c+151,"dispatcher_1_io_outputs_1_ready", false,-1);
    tracep->declBit(c+152,"dispatcher_1_io_outputs_2_ready", false,-1);
    tracep->declBit(c+153,"dispatcher_1_io_outputs_3_ready", false,-1);
    tracep->declBit(c+154,"dispatcher_1_io_outputs_4_ready", false,-1);
    tracep->declBit(c+155,"dispatcher_1_io_outputs_5_ready", false,-1);
    tracep->declBit(c+156,"dispatcher_1_io_outputs_6_ready", false,-1);
    tracep->declBit(c+157,"dispatcher_1_io_outputs_7_ready", false,-1);
    tracep->declBit(c+158,"pixelSolvers_0_io_rsp_ready", false,-1);
    tracep->declBit(c+159,"pixelSolvers_1_io_rsp_ready", false,-1);
    tracep->declBit(c+160,"pixelSolvers_2_io_rsp_ready", false,-1);
    tracep->declBit(c+161,"pixelSolvers_3_io_rsp_ready", false,-1);
    tracep->declBit(c+162,"pixelSolvers_4_io_rsp_ready", false,-1);
    tracep->declBit(c+163,"pixelSolvers_5_io_rsp_ready", false,-1);
    tracep->declBit(c+164,"pixelSolvers_6_io_rsp_ready", false,-1);
    tracep->declBit(c+165,"pixelSolvers_7_io_rsp_ready", false,-1);
    tracep->declBit(c+166,"dispatcher_1_io_input_ready", false,-1);
    tracep->declBit(c+167,"dispatcher_1_io_outputs_0_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_0_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_0_payload_y", false,-1, 27,0);
    tracep->declBit(c+168,"dispatcher_1_io_outputs_1_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_1_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_1_payload_y", false,-1, 27,0);
    tracep->declBit(c+169,"dispatcher_1_io_outputs_2_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_2_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_2_payload_y", false,-1, 27,0);
    tracep->declBit(c+170,"dispatcher_1_io_outputs_3_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_3_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_3_payload_y", false,-1, 27,0);
    tracep->declBit(c+171,"dispatcher_1_io_outputs_4_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_4_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_4_payload_y", false,-1, 27,0);
    tracep->declBit(c+172,"dispatcher_1_io_outputs_5_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_5_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_5_payload_y", false,-1, 27,0);
    tracep->declBit(c+173,"dispatcher_1_io_outputs_6_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_6_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_6_payload_y", false,-1, 27,0);
    tracep->declBit(c+174,"dispatcher_1_io_outputs_7_valid", false,-1);
    tracep->declBus(c+195,"dispatcher_1_io_outputs_7_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"dispatcher_1_io_outputs_7_payload_y", false,-1, 27,0);
    tracep->declBit(c+175,"pixelSolvers_0_io_cmd_ready", false,-1);
    tracep->declBit(c+9,"pixelSolvers_0_io_rsp_valid", false,-1);
    tracep->declBus(c+10,"pixelSolvers_0_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+176,"pixelSolvers_1_io_cmd_ready", false,-1);
    tracep->declBit(c+11,"pixelSolvers_1_io_rsp_valid", false,-1);
    tracep->declBus(c+12,"pixelSolvers_1_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+177,"pixelSolvers_2_io_cmd_ready", false,-1);
    tracep->declBit(c+13,"pixelSolvers_2_io_rsp_valid", false,-1);
    tracep->declBus(c+14,"pixelSolvers_2_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+178,"pixelSolvers_3_io_cmd_ready", false,-1);
    tracep->declBit(c+15,"pixelSolvers_3_io_rsp_valid", false,-1);
    tracep->declBus(c+16,"pixelSolvers_3_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+179,"pixelSolvers_4_io_cmd_ready", false,-1);
    tracep->declBit(c+17,"pixelSolvers_4_io_rsp_valid", false,-1);
    tracep->declBus(c+18,"pixelSolvers_4_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+180,"pixelSolvers_5_io_cmd_ready", false,-1);
    tracep->declBit(c+19,"pixelSolvers_5_io_rsp_valid", false,-1);
    tracep->declBus(c+20,"pixelSolvers_5_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+181,"pixelSolvers_6_io_cmd_ready", false,-1);
    tracep->declBit(c+21,"pixelSolvers_6_io_rsp_valid", false,-1);
    tracep->declBus(c+22,"pixelSolvers_6_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+182,"pixelSolvers_7_io_cmd_ready", false,-1);
    tracep->declBit(c+23,"pixelSolvers_7_io_rsp_valid", false,-1);
    tracep->declBus(c+24,"pixelSolvers_7_io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+183,"arbiter_1_io_inputs_0_ready", false,-1);
    tracep->declBit(c+184,"arbiter_1_io_inputs_1_ready", false,-1);
    tracep->declBit(c+185,"arbiter_1_io_inputs_2_ready", false,-1);
    tracep->declBit(c+186,"arbiter_1_io_inputs_3_ready", false,-1);
    tracep->declBit(c+187,"arbiter_1_io_inputs_4_ready", false,-1);
    tracep->declBit(c+188,"arbiter_1_io_inputs_5_ready", false,-1);
    tracep->declBit(c+189,"arbiter_1_io_inputs_6_ready", false,-1);
    tracep->declBit(c+190,"arbiter_1_io_inputs_7_ready", false,-1);
    tracep->declBit(c+25,"arbiter_1_io_output_valid", false,-1);
    tracep->declBus(c+202,"arbiter_1_io_output_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+26,"dispatcher_1_io_outputs_0_m2sPipe_valid", false,-1);
    tracep->declBit(c+175,"dispatcher_1_io_outputs_0_m2sPipe_ready", false,-1);
    tracep->declBus(c+134,"dispatcher_1_io_outputs_0_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+135,"dispatcher_1_io_outputs_0_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+26,"dispatcher_1_io_outputs_0_rValid", false,-1);
    tracep->declBus(c+134,"dispatcher_1_io_outputs_0_rData_x", false,-1, 27,0);
    tracep->declBus(c+135,"dispatcher_1_io_outputs_0_rData_y", false,-1, 27,0);
    tracep->declBit(c+27,"when_Stream_l342", false,-1);
    tracep->declBit(c+28,"pixelSolvers_0_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+183,"pixelSolvers_0_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+1,"pixelSolvers_0_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+28,"pixelSolvers_0_io_rsp_rValid", false,-1);
    tracep->declBus(c+1,"pixelSolvers_0_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+29,"when_Stream_l342_1", false,-1);
    tracep->declBit(c+30,"dispatcher_1_io_outputs_1_m2sPipe_valid", false,-1);
    tracep->declBit(c+176,"dispatcher_1_io_outputs_1_m2sPipe_ready", false,-1);
    tracep->declBus(c+136,"dispatcher_1_io_outputs_1_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+137,"dispatcher_1_io_outputs_1_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+30,"dispatcher_1_io_outputs_1_rValid", false,-1);
    tracep->declBus(c+136,"dispatcher_1_io_outputs_1_rData_x", false,-1, 27,0);
    tracep->declBus(c+137,"dispatcher_1_io_outputs_1_rData_y", false,-1, 27,0);
    tracep->declBit(c+31,"when_Stream_l342_2", false,-1);
    tracep->declBit(c+32,"pixelSolvers_1_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+184,"pixelSolvers_1_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+2,"pixelSolvers_1_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+32,"pixelSolvers_1_io_rsp_rValid", false,-1);
    tracep->declBus(c+2,"pixelSolvers_1_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+33,"when_Stream_l342_3", false,-1);
    tracep->declBit(c+34,"dispatcher_1_io_outputs_2_m2sPipe_valid", false,-1);
    tracep->declBit(c+177,"dispatcher_1_io_outputs_2_m2sPipe_ready", false,-1);
    tracep->declBus(c+138,"dispatcher_1_io_outputs_2_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+139,"dispatcher_1_io_outputs_2_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+34,"dispatcher_1_io_outputs_2_rValid", false,-1);
    tracep->declBus(c+138,"dispatcher_1_io_outputs_2_rData_x", false,-1, 27,0);
    tracep->declBus(c+139,"dispatcher_1_io_outputs_2_rData_y", false,-1, 27,0);
    tracep->declBit(c+35,"when_Stream_l342_4", false,-1);
    tracep->declBit(c+36,"pixelSolvers_2_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+185,"pixelSolvers_2_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+3,"pixelSolvers_2_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+36,"pixelSolvers_2_io_rsp_rValid", false,-1);
    tracep->declBus(c+3,"pixelSolvers_2_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+37,"when_Stream_l342_5", false,-1);
    tracep->declBit(c+38,"dispatcher_1_io_outputs_3_m2sPipe_valid", false,-1);
    tracep->declBit(c+178,"dispatcher_1_io_outputs_3_m2sPipe_ready", false,-1);
    tracep->declBus(c+140,"dispatcher_1_io_outputs_3_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+141,"dispatcher_1_io_outputs_3_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+38,"dispatcher_1_io_outputs_3_rValid", false,-1);
    tracep->declBus(c+140,"dispatcher_1_io_outputs_3_rData_x", false,-1, 27,0);
    tracep->declBus(c+141,"dispatcher_1_io_outputs_3_rData_y", false,-1, 27,0);
    tracep->declBit(c+39,"when_Stream_l342_6", false,-1);
    tracep->declBit(c+40,"pixelSolvers_3_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+186,"pixelSolvers_3_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+4,"pixelSolvers_3_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+40,"pixelSolvers_3_io_rsp_rValid", false,-1);
    tracep->declBus(c+4,"pixelSolvers_3_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+41,"when_Stream_l342_7", false,-1);
    tracep->declBit(c+42,"dispatcher_1_io_outputs_4_m2sPipe_valid", false,-1);
    tracep->declBit(c+179,"dispatcher_1_io_outputs_4_m2sPipe_ready", false,-1);
    tracep->declBus(c+142,"dispatcher_1_io_outputs_4_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+143,"dispatcher_1_io_outputs_4_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+42,"dispatcher_1_io_outputs_4_rValid", false,-1);
    tracep->declBus(c+142,"dispatcher_1_io_outputs_4_rData_x", false,-1, 27,0);
    tracep->declBus(c+143,"dispatcher_1_io_outputs_4_rData_y", false,-1, 27,0);
    tracep->declBit(c+43,"when_Stream_l342_8", false,-1);
    tracep->declBit(c+44,"pixelSolvers_4_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+187,"pixelSolvers_4_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+5,"pixelSolvers_4_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+44,"pixelSolvers_4_io_rsp_rValid", false,-1);
    tracep->declBus(c+5,"pixelSolvers_4_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+45,"when_Stream_l342_9", false,-1);
    tracep->declBit(c+46,"dispatcher_1_io_outputs_5_m2sPipe_valid", false,-1);
    tracep->declBit(c+180,"dispatcher_1_io_outputs_5_m2sPipe_ready", false,-1);
    tracep->declBus(c+144,"dispatcher_1_io_outputs_5_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+145,"dispatcher_1_io_outputs_5_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+46,"dispatcher_1_io_outputs_5_rValid", false,-1);
    tracep->declBus(c+144,"dispatcher_1_io_outputs_5_rData_x", false,-1, 27,0);
    tracep->declBus(c+145,"dispatcher_1_io_outputs_5_rData_y", false,-1, 27,0);
    tracep->declBit(c+47,"when_Stream_l342_10", false,-1);
    tracep->declBit(c+48,"pixelSolvers_5_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+188,"pixelSolvers_5_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+6,"pixelSolvers_5_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+48,"pixelSolvers_5_io_rsp_rValid", false,-1);
    tracep->declBus(c+6,"pixelSolvers_5_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+49,"when_Stream_l342_11", false,-1);
    tracep->declBit(c+50,"dispatcher_1_io_outputs_6_m2sPipe_valid", false,-1);
    tracep->declBit(c+181,"dispatcher_1_io_outputs_6_m2sPipe_ready", false,-1);
    tracep->declBus(c+146,"dispatcher_1_io_outputs_6_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+147,"dispatcher_1_io_outputs_6_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+50,"dispatcher_1_io_outputs_6_rValid", false,-1);
    tracep->declBus(c+146,"dispatcher_1_io_outputs_6_rData_x", false,-1, 27,0);
    tracep->declBus(c+147,"dispatcher_1_io_outputs_6_rData_y", false,-1, 27,0);
    tracep->declBit(c+51,"when_Stream_l342_12", false,-1);
    tracep->declBit(c+52,"pixelSolvers_6_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+189,"pixelSolvers_6_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+7,"pixelSolvers_6_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+52,"pixelSolvers_6_io_rsp_rValid", false,-1);
    tracep->declBus(c+7,"pixelSolvers_6_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+53,"when_Stream_l342_13", false,-1);
    tracep->declBit(c+54,"dispatcher_1_io_outputs_7_m2sPipe_valid", false,-1);
    tracep->declBit(c+182,"dispatcher_1_io_outputs_7_m2sPipe_ready", false,-1);
    tracep->declBus(c+148,"dispatcher_1_io_outputs_7_m2sPipe_payload_x", false,-1, 27,0);
    tracep->declBus(c+149,"dispatcher_1_io_outputs_7_m2sPipe_payload_y", false,-1, 27,0);
    tracep->declBit(c+54,"dispatcher_1_io_outputs_7_rValid", false,-1);
    tracep->declBus(c+148,"dispatcher_1_io_outputs_7_rData_x", false,-1, 27,0);
    tracep->declBus(c+149,"dispatcher_1_io_outputs_7_rData_y", false,-1, 27,0);
    tracep->declBit(c+55,"when_Stream_l342_14", false,-1);
    tracep->declBit(c+56,"pixelSolvers_7_io_rsp_m2sPipe_valid", false,-1);
    tracep->declBit(c+190,"pixelSolvers_7_io_rsp_m2sPipe_ready", false,-1);
    tracep->declBus(c+8,"pixelSolvers_7_io_rsp_m2sPipe_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+56,"pixelSolvers_7_io_rsp_rValid", false,-1);
    tracep->declBus(c+8,"pixelSolvers_7_io_rsp_rData_iteration", false,-1, 3,0);
    tracep->declBit(c+57,"when_Stream_l342_15", false,-1);
    tracep->pushNamePrefix("arbiter_1 ");
    tracep->declBit(c+28,"io_inputs_0_valid", false,-1);
    tracep->declBit(c+183,"io_inputs_0_ready", false,-1);
    tracep->declBus(c+1,"io_inputs_0_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+32,"io_inputs_1_valid", false,-1);
    tracep->declBit(c+184,"io_inputs_1_ready", false,-1);
    tracep->declBus(c+2,"io_inputs_1_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+36,"io_inputs_2_valid", false,-1);
    tracep->declBit(c+185,"io_inputs_2_ready", false,-1);
    tracep->declBus(c+3,"io_inputs_2_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+40,"io_inputs_3_valid", false,-1);
    tracep->declBit(c+186,"io_inputs_3_ready", false,-1);
    tracep->declBus(c+4,"io_inputs_3_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+44,"io_inputs_4_valid", false,-1);
    tracep->declBit(c+187,"io_inputs_4_ready", false,-1);
    tracep->declBus(c+5,"io_inputs_4_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+48,"io_inputs_5_valid", false,-1);
    tracep->declBit(c+188,"io_inputs_5_ready", false,-1);
    tracep->declBus(c+6,"io_inputs_5_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+52,"io_inputs_6_valid", false,-1);
    tracep->declBit(c+189,"io_inputs_6_ready", false,-1);
    tracep->declBus(c+7,"io_inputs_6_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+56,"io_inputs_7_valid", false,-1);
    tracep->declBit(c+190,"io_inputs_7_ready", false,-1);
    tracep->declBus(c+8,"io_inputs_7_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+25,"io_output_valid", false,-1);
    tracep->declBit(c+198,"io_output_ready", false,-1);
    tracep->declBus(c+202,"io_output_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBit(c+191,"counter_willIncrement", false,-1);
    tracep->declBit(c+209,"counter_willClear", false,-1);
    tracep->declBus(c+203,"counter_valueNext", false,-1, 2,0);
    tracep->declBus(c+58,"counter_value", false,-1, 2,0);
    tracep->declBit(c+59,"counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+204,"counter_willOverflow", false,-1);
    tracep->declBit(c+205,"io_output_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dispatcher_1 ");
    tracep->declBit(c+193,"io_input_valid", false,-1);
    tracep->declBit(c+166,"io_input_ready", false,-1);
    tracep->declBus(c+195,"io_input_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_input_payload_y", false,-1, 27,0);
    tracep->declBit(c+167,"io_outputs_0_valid", false,-1);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_sub__TOP__1(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_sub__TOP__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+150,"io_outputs_0_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_0_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_0_payload_y", false,-1, 27,0);
    tracep->declBit(c+168,"io_outputs_1_valid", false,-1);
    tracep->declBit(c+151,"io_outputs_1_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_1_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_1_payload_y", false,-1, 27,0);
    tracep->declBit(c+169,"io_outputs_2_valid", false,-1);
    tracep->declBit(c+152,"io_outputs_2_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_2_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_2_payload_y", false,-1, 27,0);
    tracep->declBit(c+170,"io_outputs_3_valid", false,-1);
    tracep->declBit(c+153,"io_outputs_3_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_3_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_3_payload_y", false,-1, 27,0);
    tracep->declBit(c+171,"io_outputs_4_valid", false,-1);
    tracep->declBit(c+154,"io_outputs_4_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_4_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_4_payload_y", false,-1, 27,0);
    tracep->declBit(c+172,"io_outputs_5_valid", false,-1);
    tracep->declBit(c+155,"io_outputs_5_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_5_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_5_payload_y", false,-1, 27,0);
    tracep->declBit(c+173,"io_outputs_6_valid", false,-1);
    tracep->declBit(c+156,"io_outputs_6_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_6_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_6_payload_y", false,-1, 27,0);
    tracep->declBit(c+174,"io_outputs_7_valid", false,-1);
    tracep->declBit(c+157,"io_outputs_7_ready", false,-1);
    tracep->declBus(c+195,"io_outputs_7_payload_x", false,-1, 27,0);
    tracep->declBus(c+196,"io_outputs_7_payload_y", false,-1, 27,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBit(c+192,"counter_willIncrement", false,-1);
    tracep->declBit(c+209,"counter_willClear", false,-1);
    tracep->declBus(c+206,"counter_valueNext", false,-1, 2,0);
    tracep->declBus(c+60,"counter_value", false,-1, 2,0);
    tracep->declBit(c+61,"counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+207,"counter_willOverflow", false,-1);
    tracep->declBit(c+208,"io_input_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_0 ");
    tracep->declBit(c+26,"io_cmd_valid", false,-1);
    tracep->declBit(c+175,"io_cmd_ready", false,-1);
    tracep->declBus(c+134,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+135,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+9,"io_rsp_valid", false,-1);
    tracep->declBit(c+158,"io_rsp_ready", false,-1);
    tracep->declBus(c+10,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+62,"x", false,-1, 27,0);
    tracep->declBus(c+63,"y", false,-1, 27,0);
    tracep->declBus(c+10,"iteration", false,-1, 3,0);
    tracep->declQuad(c+64,"xx", false,-1, 55,0);
    tracep->declQuad(c+66,"yy", false,-1, 55,0);
    tracep->declQuad(c+68,"xy", false,-1, 55,0);
    tracep->declBit(c+70,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_1 ");
    tracep->declBit(c+30,"io_cmd_valid", false,-1);
    tracep->declBit(c+176,"io_cmd_ready", false,-1);
    tracep->declBus(c+136,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+137,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+11,"io_rsp_valid", false,-1);
    tracep->declBit(c+159,"io_rsp_ready", false,-1);
    tracep->declBus(c+12,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+71,"x", false,-1, 27,0);
    tracep->declBus(c+72,"y", false,-1, 27,0);
    tracep->declBus(c+12,"iteration", false,-1, 3,0);
    tracep->declQuad(c+73,"xx", false,-1, 55,0);
    tracep->declQuad(c+75,"yy", false,-1, 55,0);
    tracep->declQuad(c+77,"xy", false,-1, 55,0);
    tracep->declBit(c+79,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_2 ");
    tracep->declBit(c+34,"io_cmd_valid", false,-1);
    tracep->declBit(c+177,"io_cmd_ready", false,-1);
    tracep->declBus(c+138,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+139,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+13,"io_rsp_valid", false,-1);
    tracep->declBit(c+160,"io_rsp_ready", false,-1);
    tracep->declBus(c+14,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+80,"x", false,-1, 27,0);
    tracep->declBus(c+81,"y", false,-1, 27,0);
    tracep->declBus(c+14,"iteration", false,-1, 3,0);
    tracep->declQuad(c+82,"xx", false,-1, 55,0);
    tracep->declQuad(c+84,"yy", false,-1, 55,0);
    tracep->declQuad(c+86,"xy", false,-1, 55,0);
    tracep->declBit(c+88,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_3 ");
    tracep->declBit(c+38,"io_cmd_valid", false,-1);
    tracep->declBit(c+178,"io_cmd_ready", false,-1);
    tracep->declBus(c+140,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+141,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+15,"io_rsp_valid", false,-1);
    tracep->declBit(c+161,"io_rsp_ready", false,-1);
    tracep->declBus(c+16,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+89,"x", false,-1, 27,0);
    tracep->declBus(c+90,"y", false,-1, 27,0);
    tracep->declBus(c+16,"iteration", false,-1, 3,0);
    tracep->declQuad(c+91,"xx", false,-1, 55,0);
    tracep->declQuad(c+93,"yy", false,-1, 55,0);
    tracep->declQuad(c+95,"xy", false,-1, 55,0);
    tracep->declBit(c+97,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_4 ");
    tracep->declBit(c+42,"io_cmd_valid", false,-1);
    tracep->declBit(c+179,"io_cmd_ready", false,-1);
    tracep->declBus(c+142,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+143,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+17,"io_rsp_valid", false,-1);
    tracep->declBit(c+162,"io_rsp_ready", false,-1);
    tracep->declBus(c+18,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+98,"x", false,-1, 27,0);
    tracep->declBus(c+99,"y", false,-1, 27,0);
    tracep->declBus(c+18,"iteration", false,-1, 3,0);
    tracep->declQuad(c+100,"xx", false,-1, 55,0);
    tracep->declQuad(c+102,"yy", false,-1, 55,0);
    tracep->declQuad(c+104,"xy", false,-1, 55,0);
    tracep->declBit(c+106,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_5 ");
    tracep->declBit(c+46,"io_cmd_valid", false,-1);
    tracep->declBit(c+180,"io_cmd_ready", false,-1);
    tracep->declBus(c+144,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+145,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+19,"io_rsp_valid", false,-1);
    tracep->declBit(c+163,"io_rsp_ready", false,-1);
    tracep->declBus(c+20,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+107,"x", false,-1, 27,0);
    tracep->declBus(c+108,"y", false,-1, 27,0);
    tracep->declBus(c+20,"iteration", false,-1, 3,0);
    tracep->declQuad(c+109,"xx", false,-1, 55,0);
    tracep->declQuad(c+111,"yy", false,-1, 55,0);
    tracep->declQuad(c+113,"xy", false,-1, 55,0);
    tracep->declBit(c+115,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_6 ");
    tracep->declBit(c+50,"io_cmd_valid", false,-1);
    tracep->declBit(c+181,"io_cmd_ready", false,-1);
    tracep->declBus(c+146,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+147,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+21,"io_rsp_valid", false,-1);
    tracep->declBit(c+164,"io_rsp_ready", false,-1);
    tracep->declBus(c+22,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+116,"x", false,-1, 27,0);
    tracep->declBus(c+117,"y", false,-1, 27,0);
    tracep->declBus(c+22,"iteration", false,-1, 3,0);
    tracep->declQuad(c+118,"xx", false,-1, 55,0);
    tracep->declQuad(c+120,"yy", false,-1, 55,0);
    tracep->declQuad(c+122,"xy", false,-1, 55,0);
    tracep->declBit(c+124,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pixelSolvers_7 ");
    tracep->declBit(c+54,"io_cmd_valid", false,-1);
    tracep->declBit(c+182,"io_cmd_ready", false,-1);
    tracep->declBus(c+148,"io_cmd_payload_x", false,-1, 27,0);
    tracep->declBus(c+149,"io_cmd_payload_y", false,-1, 27,0);
    tracep->declBit(c+23,"io_rsp_valid", false,-1);
    tracep->declBit(c+165,"io_rsp_ready", false,-1);
    tracep->declBus(c+24,"io_rsp_payload_iteration", false,-1, 3,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+201,"reset", false,-1);
    tracep->declBus(c+125,"x", false,-1, 27,0);
    tracep->declBus(c+126,"y", false,-1, 27,0);
    tracep->declBus(c+24,"iteration", false,-1, 3,0);
    tracep->declQuad(c+127,"xx", false,-1, 55,0);
    tracep->declQuad(c+129,"yy", false,-1, 55,0);
    tracep->declQuad(c+131,"xy", false,-1, 55,0);
    tracep->declBit(c+133,"when_PixelSolver_l45", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_init_top(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_init_top\n"); );
    // Body
    VPixelSolverMultiCore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    VPixelSolverMultiCore___024root__trace_init_sub__TOP__1(vlSelf, tracep);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolverMultiCore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPixelSolverMultiCore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_register(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPixelSolverMultiCore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPixelSolverMultiCore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPixelSolverMultiCore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_full_top_0\n"); );
    // Init
    VPixelSolverMultiCore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolverMultiCore___024root*>(voidSelf);
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPixelSolverMultiCore___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPixelSolverMultiCore___024root__trace_full_sub_0(VPixelSolverMultiCore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPixelSolverMultiCore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPixelSolverMultiCore___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+2,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+3,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+4,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+5,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+6,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+7,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration),4);
    tracep->fullCData(oldp+8,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration),4);
    tracep->fullBit(oldp+9,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid));
    tracep->fullCData(oldp+10,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration),4);
    tracep->fullBit(oldp+11,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid));
    tracep->fullCData(oldp+12,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration),4);
    tracep->fullBit(oldp+13,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid));
    tracep->fullCData(oldp+14,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration),4);
    tracep->fullBit(oldp+15,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid));
    tracep->fullCData(oldp+16,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration),4);
    tracep->fullBit(oldp+17,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid));
    tracep->fullCData(oldp+18,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration),4);
    tracep->fullBit(oldp+19,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid));
    tracep->fullCData(oldp+20,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration),4);
    tracep->fullBit(oldp+21,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid));
    tracep->fullCData(oldp+22,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration),4);
    tracep->fullBit(oldp+23,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid));
    tracep->fullCData(oldp+24,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration),4);
    tracep->fullBit(oldp+25,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid));
    tracep->fullBit(oldp+26,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid));
    tracep->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid)))));
    tracep->fullBit(oldp+28,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid));
    tracep->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid)))));
    tracep->fullBit(oldp+30,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid));
    tracep->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid)))));
    tracep->fullBit(oldp+32,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid));
    tracep->fullBit(oldp+33,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid)))));
    tracep->fullBit(oldp+34,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid));
    tracep->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid)))));
    tracep->fullBit(oldp+36,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid));
    tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid)))));
    tracep->fullBit(oldp+38,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid));
    tracep->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid)))));
    tracep->fullBit(oldp+40,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid));
    tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid)))));
    tracep->fullBit(oldp+42,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid));
    tracep->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid)))));
    tracep->fullBit(oldp+44,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid));
    tracep->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid)))));
    tracep->fullBit(oldp+46,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid));
    tracep->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid)))));
    tracep->fullBit(oldp+48,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid));
    tracep->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid)))));
    tracep->fullBit(oldp+50,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid));
    tracep->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid)))));
    tracep->fullBit(oldp+52,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid));
    tracep->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid)))));
    tracep->fullBit(oldp+54,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid));
    tracep->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid)))));
    tracep->fullBit(oldp+56,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid));
    tracep->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid)))));
    tracep->fullCData(oldp+58,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value),3);
    tracep->fullBit(oldp+59,((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))));
    tracep->fullCData(oldp+60,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value),3);
    tracep->fullBit(oldp+61,((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value))));
    tracep->fullIData(oldp+62,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x),28);
    tracep->fullIData(oldp+63,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y),28);
    tracep->fullQData(oldp+64,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx),56);
    tracep->fullQData(oldp+66,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy),56);
    tracep->fullQData(oldp+68,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y))))),56);
    tracep->fullBit(oldp+70,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+71,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x),28);
    tracep->fullIData(oldp+72,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y),28);
    tracep->fullQData(oldp+73,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx),56);
    tracep->fullQData(oldp+75,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy),56);
    tracep->fullQData(oldp+77,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y))))),56);
    tracep->fullBit(oldp+79,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+80,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x),28);
    tracep->fullIData(oldp+81,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y),28);
    tracep->fullQData(oldp+82,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx),56);
    tracep->fullQData(oldp+84,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy),56);
    tracep->fullQData(oldp+86,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y))))),56);
    tracep->fullBit(oldp+88,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+89,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x),28);
    tracep->fullIData(oldp+90,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y),28);
    tracep->fullQData(oldp+91,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx),56);
    tracep->fullQData(oldp+93,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy),56);
    tracep->fullQData(oldp+95,((0xffffffffffffffULL 
                                & VL_MULS_QQQ(56, (0xffffffffffffffULL 
                                                   & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x)), 
                                              (0xffffffffffffffULL 
                                               & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y))))),56);
    tracep->fullBit(oldp+97,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+98,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x),28);
    tracep->fullIData(oldp+99,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y),28);
    tracep->fullQData(oldp+100,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx),56);
    tracep->fullQData(oldp+102,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy),56);
    tracep->fullQData(oldp+104,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y))))),56);
    tracep->fullBit(oldp+106,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+107,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x),28);
    tracep->fullIData(oldp+108,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y),28);
    tracep->fullQData(oldp+109,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx),56);
    tracep->fullQData(oldp+111,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy),56);
    tracep->fullQData(oldp+113,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y))))),56);
    tracep->fullBit(oldp+115,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+116,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x),28);
    tracep->fullIData(oldp+117,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y),28);
    tracep->fullQData(oldp+118,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx),56);
    tracep->fullQData(oldp+120,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy),56);
    tracep->fullQData(oldp+122,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y))))),56);
    tracep->fullBit(oldp+124,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+125,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x),28);
    tracep->fullIData(oldp+126,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y),28);
    tracep->fullQData(oldp+127,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx),56);
    tracep->fullQData(oldp+129,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy),56);
    tracep->fullQData(oldp+131,((0xffffffffffffffULL 
                                 & VL_MULS_QQQ(56, 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x)), 
                                               (0xffffffffffffffULL 
                                                & VL_EXTENDS_QI(56,28, vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y))))),56);
    tracep->fullBit(oldp+133,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45));
    tracep->fullIData(oldp+134,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_x),28);
    tracep->fullIData(oldp+135,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_y),28);
    tracep->fullIData(oldp+136,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_x),28);
    tracep->fullIData(oldp+137,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_y),28);
    tracep->fullIData(oldp+138,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_x),28);
    tracep->fullIData(oldp+139,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_y),28);
    tracep->fullIData(oldp+140,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_x),28);
    tracep->fullIData(oldp+141,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_y),28);
    tracep->fullIData(oldp+142,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_x),28);
    tracep->fullIData(oldp+143,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_y),28);
    tracep->fullIData(oldp+144,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_x),28);
    tracep->fullIData(oldp+145,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_y),28);
    tracep->fullIData(oldp+146,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_x),28);
    tracep->fullIData(oldp+147,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_y),28);
    tracep->fullIData(oldp+148,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_x),28);
    tracep->fullIData(oldp+149,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_y),28);
    tracep->fullBit(oldp+150,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready));
    tracep->fullBit(oldp+151,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready));
    tracep->fullBit(oldp+152,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready));
    tracep->fullBit(oldp+153,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready));
    tracep->fullBit(oldp+154,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready));
    tracep->fullBit(oldp+155,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready));
    tracep->fullBit(oldp+156,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready));
    tracep->fullBit(oldp+157,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready));
    tracep->fullBit(oldp+158,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready));
    tracep->fullBit(oldp+159,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready));
    tracep->fullBit(oldp+160,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready));
    tracep->fullBit(oldp+161,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready));
    tracep->fullBit(oldp+162,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready));
    tracep->fullBit(oldp+163,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready));
    tracep->fullBit(oldp+164,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready));
    tracep->fullBit(oldp+165,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready));
    tracep->fullBit(oldp+166,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready));
    tracep->fullBit(oldp+167,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid));
    tracep->fullBit(oldp+168,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid));
    tracep->fullBit(oldp+169,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid));
    tracep->fullBit(oldp+170,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid));
    tracep->fullBit(oldp+171,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid));
    tracep->fullBit(oldp+172,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid));
    tracep->fullBit(oldp+173,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid));
    tracep->fullBit(oldp+174,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid));
    tracep->fullBit(oldp+175,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready));
    tracep->fullBit(oldp+176,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready));
    tracep->fullBit(oldp+177,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready));
    tracep->fullBit(oldp+178,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready));
    tracep->fullBit(oldp+179,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready));
    tracep->fullBit(oldp+180,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready));
    tracep->fullBit(oldp+181,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready));
    tracep->fullBit(oldp+182,(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready));
    tracep->fullBit(oldp+183,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready));
    tracep->fullBit(oldp+184,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready));
    tracep->fullBit(oldp+185,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready));
    tracep->fullBit(oldp+186,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready));
    tracep->fullBit(oldp+187,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready));
    tracep->fullBit(oldp+188,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready));
    tracep->fullBit(oldp+189,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready));
    tracep->fullBit(oldp+190,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready));
    tracep->fullBit(oldp+191,(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement));
    tracep->fullBit(oldp+192,(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement));
    tracep->fullBit(oldp+193,(vlSelf->io_cmd_valid));
    tracep->fullBit(oldp+194,(vlSelf->io_cmd_ready));
    tracep->fullIData(oldp+195,(vlSelf->io_cmd_payload_x),28);
    tracep->fullIData(oldp+196,(vlSelf->io_cmd_payload_y),28);
    tracep->fullBit(oldp+197,(vlSelf->io_rsp_valid));
    tracep->fullBit(oldp+198,(vlSelf->io_rsp_ready));
    tracep->fullCData(oldp+199,(vlSelf->io_rsp_payload_iteration),4);
    tracep->fullBit(oldp+200,(vlSelf->clk));
    tracep->fullBit(oldp+201,(vlSelf->reset));
    tracep->fullCData(oldp+202,(((4U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                  ? ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                      ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                          ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration)
                                          : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration))
                                      : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                          ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration)
                                          : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration)))
                                  : ((2U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                      ? ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                          ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration)
                                          : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration))
                                      : ((1U & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value))
                                          ? (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration)
                                          : (IData)(vlSelf->PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration))))),4);
    tracep->fullCData(oldp+203,((7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value) 
                                       + (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement)))),3);
    tracep->fullBit(oldp+204,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value)) 
                               & (IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement))));
    tracep->fullBit(oldp+205,(((IData)(vlSelf->PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid) 
                               & (IData)(vlSelf->io_rsp_ready))));
    tracep->fullCData(oldp+206,((7U & ((IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value) 
                                       + (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement)))),3);
    tracep->fullBit(oldp+207,(((7U == (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value)) 
                               & (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement))));
    tracep->fullBit(oldp+208,(((IData)(vlSelf->io_cmd_valid) 
                               & (IData)(vlSelf->PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready))));
    tracep->fullBit(oldp+209,(0U));
}
