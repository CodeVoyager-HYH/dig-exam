// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux42.h"
#include "Vmux42__Syms.h"

//============================================================
// Constructors

Vmux42::Vmux42(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux42__Syms(contextp(), _vcname__, this)}
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

Vmux42::Vmux42(const char* _vcname__)
    : Vmux42(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux42::~Vmux42() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux42___024root___eval_debug_assertions(Vmux42___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux42___024root___eval_static(Vmux42___024root* vlSelf);
void Vmux42___024root___eval_initial(Vmux42___024root* vlSelf);
void Vmux42___024root___eval_settle(Vmux42___024root* vlSelf);
void Vmux42___024root___eval(Vmux42___024root* vlSelf);

void Vmux42::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux42::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux42___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux42___024root___eval_static(&(vlSymsp->TOP));
        Vmux42___024root___eval_initial(&(vlSymsp->TOP));
        Vmux42___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux42___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux42::eventsPending() { return false; }

uint64_t Vmux42::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux42::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux42___024root___eval_final(Vmux42___024root* vlSelf);

VL_ATTR_COLD void Vmux42::final() {
    Vmux42___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux42::hierName() const { return vlSymsp->name(); }
const char* Vmux42::modelName() const { return "Vmux42"; }
unsigned Vmux42::threads() const { return 1; }
