// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTimer.h"
#include "VTimer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTimer::VTimer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTimer__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_tick{vlSymsp->TOP.io_tick}
    , io_clear{vlSymsp->TOP.io_clear}
    , io_limit{vlSymsp->TOP.io_limit}
    , io_full{vlSymsp->TOP.io_full}
    , io_value{vlSymsp->TOP.io_value}
    , rootp{&(vlSymsp->TOP)}
{
}

VTimer::VTimer(const char* _vcname__)
    : VTimer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTimer::~VTimer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTimer___024root___eval_initial(VTimer___024root* vlSelf);
void VTimer___024root___eval_settle(VTimer___024root* vlSelf);
void VTimer___024root___eval(VTimer___024root* vlSelf);
#ifdef VL_DEBUG
void VTimer___024root___eval_debug_assertions(VTimer___024root* vlSelf);
#endif  // VL_DEBUG
void VTimer___024root___final(VTimer___024root* vlSelf);

static void _eval_initial_loop(VTimer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTimer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTimer___024root___eval_settle(&(vlSymsp->TOP));
        VTimer___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTimer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTimer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTimer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTimer___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTimer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTimer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTimer::final() {
    VTimer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTimer___024root__trace_init_top(VTimer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTimer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTimer___024root*>(voidSelf);
    VTimer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTimer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTimer___024root__trace_register(VTimer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTimer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTimer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
