// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStreamUnit.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VStreamUnit_StreamUnit.h"

VL_ATTR_COLD void VStreamUnit_StreamUnit___ctor_var_reset(VStreamUnit_StreamUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStreamUnit_StreamUnit___ctor_var_reset\n"); );
    // Body
    vlSelf->io_memWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memWrite_payload_address = VL_RAND_RESET_I(8);
    vlSelf->io_memWrite_payload_data = VL_RAND_RESET_I(32);
    vlSelf->io_cmdA_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmdA_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmdA_payload = VL_RAND_RESET_I(8);
    vlSelf->io_cmdB_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cmdB_ready = VL_RAND_RESET_I(1);
    vlSelf->io_cmdB_payload = VL_RAND_RESET_I(32);
    vlSelf->io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_payload = VL_RAND_RESET_I(32);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->__PVT___zz_mem_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_dataStream_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_io_cmdB_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_io_cmdB_ready_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
