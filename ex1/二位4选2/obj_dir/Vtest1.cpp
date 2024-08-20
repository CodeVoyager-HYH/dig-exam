// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest1.h"
#include "Vtest1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest1::Vtest1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest1__Syms(contextp(), _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest1::Vtest1(const char* _vcname__)
    : Vtest1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest1::~Vtest1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest1___024root___eval_debug_assertions(Vtest1___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest1___024root___eval_static(Vtest1___024root* vlSelf);
void Vtest1___024root___eval_initial(Vtest1___024root* vlSelf);
void Vtest1___024root___eval_settle(Vtest1___024root* vlSelf);
void Vtest1___024root___eval(Vtest1___024root* vlSelf);

void Vtest1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest1___024root___eval_static(&(vlSymsp->TOP));
        Vtest1___024root___eval_initial(&(vlSymsp->TOP));
        Vtest1___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest1::eventsPending() { return false; }

uint64_t Vtest1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtest1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest1___024root___eval_final(Vtest1___024root* vlSelf);

VL_ATTR_COLD void Vtest1::final() {
    Vtest1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest1::hierName() const { return vlSymsp->name(); }
const char* Vtest1::modelName() const { return "Vtest1"; }
unsigned Vtest1::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtest1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest1___024root__trace_init_top(Vtest1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest1___024root*>(voidSelf);
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtest1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtest1___024root__trace_register(Vtest1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest1::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest1::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
