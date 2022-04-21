// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFunctionUnit.h"
#include "VFunctionUnit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFunctionUnit::VFunctionUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFunctionUnit__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_cmd_valid{vlSymsp->TOP.io_cmd_valid}
    , io_cmd_payload{vlSymsp->TOP.io_cmd_payload}
    , io_valueA{vlSymsp->TOP.io_valueA}
    , io_valueB{vlSymsp->TOP.io_valueB}
    , io_valueC{vlSymsp->TOP.io_valueC}
    , rootp{&(vlSymsp->TOP)}
{
}

VFunctionUnit::VFunctionUnit(const char* _vcname__)
    : VFunctionUnit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFunctionUnit::~VFunctionUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFunctionUnit___024root___eval_initial(VFunctionUnit___024root* vlSelf);
void VFunctionUnit___024root___eval_settle(VFunctionUnit___024root* vlSelf);
void VFunctionUnit___024root___eval(VFunctionUnit___024root* vlSelf);
#ifdef VL_DEBUG
void VFunctionUnit___024root___eval_debug_assertions(VFunctionUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VFunctionUnit___024root___final(VFunctionUnit___024root* vlSelf);

static void _eval_initial_loop(VFunctionUnit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFunctionUnit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFunctionUnit___024root___eval_settle(&(vlSymsp->TOP));
        VFunctionUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VFunctionUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFunctionUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFunctionUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFunctionUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VFunctionUnit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFunctionUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VFunctionUnit::final() {
    VFunctionUnit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VFunctionUnit___024root__trace_init_top(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFunctionUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFunctionUnit___024root*>(voidSelf);
    VFunctionUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VFunctionUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VFunctionUnit___024root__trace_register(VFunctionUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFunctionUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFunctionUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
