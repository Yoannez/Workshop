// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPrimeUsage.h"
#include "VPrimeUsage__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPrimeUsage::VPrimeUsage(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPrimeUsage__Syms(_vcontextp__, _vcname__, this)}
    , io_value{vlSymsp->TOP.io_value}
    , io_isPrime{vlSymsp->TOP.io_isPrime}
    , rootp{&(vlSymsp->TOP)}
{
}

VPrimeUsage::VPrimeUsage(const char* _vcname__)
    : VPrimeUsage(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPrimeUsage::~VPrimeUsage() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPrimeUsage___024root___eval_initial(VPrimeUsage___024root* vlSelf);
void VPrimeUsage___024root___eval_settle(VPrimeUsage___024root* vlSelf);
void VPrimeUsage___024root___eval(VPrimeUsage___024root* vlSelf);
#ifdef VL_DEBUG
void VPrimeUsage___024root___eval_debug_assertions(VPrimeUsage___024root* vlSelf);
#endif  // VL_DEBUG
void VPrimeUsage___024root___final(VPrimeUsage___024root* vlSelf);

static void _eval_initial_loop(VPrimeUsage__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPrimeUsage___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPrimeUsage___024root___eval_settle(&(vlSymsp->TOP));
        VPrimeUsage___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPrimeUsage::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPrimeUsage::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPrimeUsage___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPrimeUsage___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPrimeUsage::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPrimeUsage::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPrimeUsage::final() {
    VPrimeUsage___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPrimeUsage___024root__trace_init_top(VPrimeUsage___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPrimeUsage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPrimeUsage___024root*>(voidSelf);
    VPrimeUsage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPrimeUsage___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPrimeUsage___024root__trace_register(VPrimeUsage___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPrimeUsage::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPrimeUsage___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
