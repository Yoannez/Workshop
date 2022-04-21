// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VStreamUnit.h"
#include "VStreamUnit__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VStreamUnit::VStreamUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VStreamUnit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_memWrite_valid{vlSymsp->TOP.io_memWrite_valid}
    , io_memWrite_payload_address{vlSymsp->TOP.io_memWrite_payload_address}
    , io_cmdA_valid{vlSymsp->TOP.io_cmdA_valid}
    , io_cmdA_ready{vlSymsp->TOP.io_cmdA_ready}
    , io_cmdA_payload{vlSymsp->TOP.io_cmdA_payload}
    , io_cmdB_valid{vlSymsp->TOP.io_cmdB_valid}
    , io_cmdB_ready{vlSymsp->TOP.io_cmdB_ready}
    , io_rsp_valid{vlSymsp->TOP.io_rsp_valid}
    , io_rsp_ready{vlSymsp->TOP.io_rsp_ready}
    , io_memWrite_payload_data{vlSymsp->TOP.io_memWrite_payload_data}
    , io_cmdB_payload{vlSymsp->TOP.io_cmdB_payload}
    , io_rsp_payload{vlSymsp->TOP.io_rsp_payload}
    , StreamUnit{vlSymsp->TOP.StreamUnit}
    , rootp{&(vlSymsp->TOP)}
{
}

VStreamUnit::VStreamUnit(const char* _vcname__)
    : VStreamUnit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VStreamUnit::~VStreamUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VStreamUnit___024root___eval_initial(VStreamUnit___024root* vlSelf);
void VStreamUnit___024root___eval_settle(VStreamUnit___024root* vlSelf);
void VStreamUnit___024root___eval(VStreamUnit___024root* vlSelf);
#ifdef VL_DEBUG
void VStreamUnit___024root___eval_debug_assertions(VStreamUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VStreamUnit___024root___final(VStreamUnit___024root* vlSelf);

static void _eval_initial_loop(VStreamUnit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VStreamUnit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VStreamUnit___024root___eval_settle(&(vlSymsp->TOP));
        VStreamUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VStreamUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStreamUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VStreamUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VStreamUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VStreamUnit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VStreamUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VStreamUnit::final() {
    VStreamUnit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VStreamUnit___024root__trace_init_top(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VStreamUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStreamUnit___024root*>(voidSelf);
    VStreamUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VStreamUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VStreamUnit___024root__trace_register(VStreamUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VStreamUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VStreamUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
