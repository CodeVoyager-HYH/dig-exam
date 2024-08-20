// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux42__Syms.h"
#include "Vmux42.h"
#include "Vmux42___024root.h"

// FUNCTIONS
Vmux42__Syms::~Vmux42__Syms()
{
}

Vmux42__Syms::Vmux42__Syms(VerilatedContext* contextp, const char* namep, Vmux42* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
