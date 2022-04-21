// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolverMultiCore.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVERMULTICORE___024ROOT_H_
#define VERILATED_VPIXELSOLVERMULTICORE___024ROOT_H_  // guard

#include "verilated.h"

class VPixelSolverMultiCore__Syms;
VL_MODULE(VPixelSolverMultiCore___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_cmd_valid,0,0);
        VL_OUT8(io_cmd_ready,0,0);
        VL_OUT8(io_rsp_valid,0,0);
        VL_IN8(io_rsp_ready,0,0);
        VL_OUT8(io_rsp_payload_iteration,3,0);
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7_io_cmd_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_0_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_1_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_2_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_3_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_4_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_5_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_6_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1_io_inputs_7_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2_io_rsp_rData_iteration;
    };
    struct {
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rValid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rValid;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7_io_rsp_rData_iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1__DOT___zz_io_input_ready;
        CData/*0:0*/ PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__dispatcher_1__DOT__counter_value;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__when_PixelSolver_l45;
        CData/*3:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration;
        CData/*0:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__when_PixelSolver_l45;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1__DOT___zz_io_output_valid;
        CData/*0:0*/ PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_willIncrement;
        CData/*2:0*/ PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_valueNext;
        CData/*2:0*/ PixelSolverMultiCore__DOT__arbiter_1__DOT__counter_value;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__iteration;
        CData/*3:0*/ __Vdly__PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__iteration;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        VL_IN(io_cmd_payload_x,27,0);
        VL_IN(io_cmd_payload_y,27,0);
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_0_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_1_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_2_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_3_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_4_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_5_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_x;
    };
    struct {
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_6_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__dispatcher_1_io_outputs_7_rData_y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__y;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__x;
        IData/*27:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__y;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_0__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_1__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_2__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_3__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_4__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_5__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_6__DOT__xy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xx;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__yy;
        QData/*55:0*/ PixelSolverMultiCore__DOT__pixelSolvers_7__DOT__xy;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VPixelSolverMultiCore__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPixelSolverMultiCore___024root(VPixelSolverMultiCore__Syms* symsp, const char* name);
    ~VPixelSolverMultiCore___024root();
    VL_UNCOPYABLE(VPixelSolverMultiCore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
