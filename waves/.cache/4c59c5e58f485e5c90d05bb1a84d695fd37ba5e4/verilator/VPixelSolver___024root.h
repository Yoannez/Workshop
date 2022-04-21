// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPixelSolver.h for the primary calling header

#ifndef VERILATED_VPIXELSOLVER___024ROOT_H_
#define VERILATED_VPIXELSOLVER___024ROOT_H_  // guard

#include "verilated.h"

class VPixelSolver__Syms;
VL_MODULE(VPixelSolver___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cmd_valid,0,0);
    VL_OUT8(io_cmd_ready,0,0);
    VL_OUT8(io_rsp_valid,0,0);
    VL_IN8(io_rsp_ready,0,0);
    VL_OUT8(io_rsp_payload_iteration,3,0);
    CData/*3:0*/ PixelSolver__DOT__iteration;
    CData/*0:0*/ PixelSolver__DOT__when_PixelSolver_l45;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VL_IN(io_cmd_payload_x,27,0);
    VL_IN(io_cmd_payload_y,27,0);
    IData/*27:0*/ PixelSolver__DOT__x;
    IData/*27:0*/ PixelSolver__DOT__y;
    QData/*55:0*/ PixelSolver__DOT__xx;
    QData/*55:0*/ PixelSolver__DOT__yy;
    QData/*55:0*/ PixelSolver__DOT__xy;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPixelSolver__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPixelSolver___024root(VPixelSolver__Syms* symsp, const char* name);
    ~VPixelSolver___024root();
    VL_UNCOPYABLE(VPixelSolver___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
