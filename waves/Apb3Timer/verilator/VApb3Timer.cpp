// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VApb3Timer.h"
#include "VApb3Timer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VApb3Timer::VApb3Timer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VApb3Timer__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_apb_PADDR{vlSymsp->TOP.io_apb_PADDR}
    , io_apb_PSEL{vlSymsp->TOP.io_apb_PSEL}
    , io_apb_PENABLE{vlSymsp->TOP.io_apb_PENABLE}
    , io_apb_PREADY{vlSymsp->TOP.io_apb_PREADY}
    , io_apb_PWRITE{vlSymsp->TOP.io_apb_PWRITE}
    , io_apb_PSLVERROR{vlSymsp->TOP.io_apb_PSLVERROR}
    , io_fullA{vlSymsp->TOP.io_fullA}
    , io_fullB{vlSymsp->TOP.io_fullB}
    , io_external_tick{vlSymsp->TOP.io_external_tick}
    , io_external_clear{vlSymsp->TOP.io_external_clear}
    , io_apb_PWDATA{vlSymsp->TOP.io_apb_PWDATA}
    , io_apb_PRDATA{vlSymsp->TOP.io_apb_PRDATA}
    , rootp{&(vlSymsp->TOP)}
{
}

VApb3Timer::VApb3Timer(const char* _vcname__)
    : VApb3Timer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VApb3Timer::~VApb3Timer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VApb3Timer___024root___eval_initial(VApb3Timer___024root* vlSelf);
void VApb3Timer___024root___eval_settle(VApb3Timer___024root* vlSelf);
void VApb3Timer___024root___eval(VApb3Timer___024root* vlSelf);
#ifdef VL_DEBUG
void VApb3Timer___024root___eval_debug_assertions(VApb3Timer___024root* vlSelf);
#endif  // VL_DEBUG
void VApb3Timer___024root___final(VApb3Timer___024root* vlSelf);

static void _eval_initial_loop(VApb3Timer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VApb3Timer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VApb3Timer___024root___eval_settle(&(vlSymsp->TOP));
        VApb3Timer___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VApb3Timer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VApb3Timer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VApb3Timer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VApb3Timer___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VApb3Timer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VApb3Timer::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VApb3Timer::final() {
    VApb3Timer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VApb3Timer___024root__trace_init_top(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VApb3Timer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VApb3Timer___024root*>(voidSelf);
    VApb3Timer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VApb3Timer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VApb3Timer___024root__trace_register(VApb3Timer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VApb3Timer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VApb3Timer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
