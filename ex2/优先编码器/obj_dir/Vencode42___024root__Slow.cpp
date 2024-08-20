// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode42.h for the primary calling header

#include "verilated.h"

#include "Vencode42__Syms.h"
#include "Vencode42___024root.h"

void Vencode42___024root___ctor_var_reset(Vencode42___024root* vlSelf);

Vencode42___024root::Vencode42___024root(Vencode42__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vencode42___024root___ctor_var_reset(this);
}

void Vencode42___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vencode42___024root::~Vencode42___024root() {
}
