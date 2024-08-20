// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux42.h for the primary calling header

#include "verilated.h"

#include "Vmux42__Syms.h"
#include "Vmux42___024root.h"

void Vmux42___024root___ctor_var_reset(Vmux42___024root* vlSelf);

Vmux42___024root::Vmux42___024root(Vmux42__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux42___024root___ctor_var_reset(this);
}

void Vmux42___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux42___024root::~Vmux42___024root() {
}
