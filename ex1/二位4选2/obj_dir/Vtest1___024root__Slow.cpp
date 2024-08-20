// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest1.h for the primary calling header

#include "verilated.h"

#include "Vtest1__Syms.h"
#include "Vtest1___024root.h"

void Vtest1___024root___ctor_var_reset(Vtest1___024root* vlSelf);

Vtest1___024root::Vtest1___024root(Vtest1__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest1___024root___ctor_var_reset(this);
}

void Vtest1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest1___024root::~Vtest1___024root() {
}
