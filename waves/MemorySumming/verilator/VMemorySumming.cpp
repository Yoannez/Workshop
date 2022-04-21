// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMemorySumming.h"
#include "VMemorySumming__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMemorySumming::VMemorySumming(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMemorySumming__Syms(_vcontextp__, _vcname__, this)}
    , io_wr_clk{vlSymsp->TOP.io_wr_clk}
    , io_sum_clk{vlSymsp->TOP.io_sum_clk}
    , io_sum_reset{vlSymsp->TOP.io_sum_reset}
    , io_wr_en{vlSymsp->TOP.io_wr_en}
    , io_wr_addr{vlSymsp->TOP.io_wr_addr}
    , io_sum_start{vlSymsp->TOP.io_sum_start}
    , io_sum_done{vlSymsp->TOP.io_sum_done}
    , io_wr_data{vlSymsp->TOP.io_wr_data}
    , io_sum_value{vlSymsp->TOP.io_sum_value}
    , rootp{&(vlSymsp->TOP)}
{
}

VMemorySumming::VMemorySumming(const char* _vcname__)
    : VMemorySumming(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMemorySumming::~VMemorySumming() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMemorySumming___024root___eval_initial(VMemorySumming___024root* vlSelf);
void VMemorySumming___024root___eval_settle(VMemorySumming___024root* vlSelf);
void VMemorySumming___024root___eval(VMemorySumming___024root* vlSelf);
#ifdef VL_DEBUG
void VMemorySumming___024root___eval_debug_assertions(VMemorySumming___024root* vlSelf);
#endif  // VL_DEBUG
void VMemorySumming___024root___final(VMemorySumming___024root* vlSelf);

static void _eval_initial_loop(VMemorySumming__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMemorySumming___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMemorySumming___024root___eval_settle(&(vlSymsp->TOP));
        VMemorySumming___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VMemorySumming::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMemorySumming::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMemorySumming___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMemorySumming___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VMemorySumming::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMemorySumming::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VMemorySumming::final() {
    VMemorySumming___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VMemorySumming___024root__trace_init_top(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMemorySumming___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemorySumming___024root*>(voidSelf);
    VMemorySumming__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VMemorySumming___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VMemorySumming___024root__trace_register(VMemorySumming___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMemorySumming::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMemorySumming___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
