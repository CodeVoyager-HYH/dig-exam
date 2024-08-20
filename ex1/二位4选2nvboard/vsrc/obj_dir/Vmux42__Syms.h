// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX42__SYMS_H_
#define VERILATED_VMUX42__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmux42.h"

// INCLUDE MODULE CLASSES
#include "Vmux42___024root.h"

// SYMS CLASS (contains all model state)
class Vmux42__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux42* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux42___024root               TOP;

    // CONSTRUCTORS
    Vmux42__Syms(VerilatedContext* contextp, const char* namep, Vmux42* modelp);
    ~Vmux42__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
