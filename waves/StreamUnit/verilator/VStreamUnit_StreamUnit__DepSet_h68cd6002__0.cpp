// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit_StreamUnit.h"
#include "VStreamUnit__Syms.h"

VL_INLINE_OPT void VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__0(VStreamUnit_StreamUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__mem__v0;
    IData/*31:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if (vlSymsp->TOP.io_memWrite_valid) {
        __Vdlyvval__mem__v0 = vlSymsp->TOP.io_memWrite_payload_data;
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = vlSymsp->TOP.io_memWrite_payload_address;
    }
    if (vlSelf->__PVT__dataStream_isFree) {
        vlSelf->__PVT___zz_mem_port1 = vlSelf->mem[vlSymsp->TOP.io_cmdA_payload];
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__1(VStreamUnit_StreamUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStreamUnit_StreamUnit___sequent__TOP__StreamUnit__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT___zz_dataStream_valid = 0U;
    } else {
        if (vlSelf->__PVT___zz_io_cmdB_ready_1) {
            vlSelf->__PVT___zz_dataStream_valid = 0U;
        }
        if (vlSelf->__PVT__dataStream_isFree) {
            vlSelf->__PVT___zz_dataStream_valid = vlSymsp->TOP.io_cmdA_valid;
        }
    }
}

VL_INLINE_OPT void VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0(VStreamUnit_StreamUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStreamUnit_StreamUnit___combo__TOP__StreamUnit__0\n"); );
    // Body
    vlSelf->__PVT___zz_io_cmdB_ready = ((IData)(vlSelf->__PVT___zz_dataStream_valid) 
                                        & (IData)(vlSymsp->TOP.io_cmdB_valid));
    vlSelf->__PVT___zz_io_cmdB_ready_1 = ((IData)(vlSelf->__PVT___zz_io_cmdB_ready) 
                                          & (IData)(vlSymsp->TOP.io_rsp_ready));
    vlSelf->__PVT__dataStream_isFree = (1U & ((~ (IData)(vlSelf->__PVT___zz_dataStream_valid)) 
                                              | (IData)(vlSelf->__PVT___zz_io_cmdB_ready_1)));
}
