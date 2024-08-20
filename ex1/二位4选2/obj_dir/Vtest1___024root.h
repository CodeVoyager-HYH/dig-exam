// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest1.h for the primary calling header

#ifndef VERILATED_VTEST1___024ROOT_H_
#define VERILATED_VTEST1___024ROOT_H_  // guard

#include "verilated.h"

class Vtest1__Syms;

class Vtest1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x0,1,0);
    VL_IN8(x1,1,0);
    VL_IN8(x2,1,0);
    VL_IN8(x3,1,0);
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest1___024root(Vtest1__Syms* symsp, const char* v__name);
    ~Vtest1___024root();
    VL_UNCOPYABLE(Vtest1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
