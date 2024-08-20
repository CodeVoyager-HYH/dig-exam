// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX41__SYMS_H_
#define VERILATED_VMUX41__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmux41.h"

// INCLUDE MODULE CLASSES
#include "Vmux41___024root.h"

// SYMS CLASS (contains all model state)
class Vmux41__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux41* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux41___024root               TOP;

    // CONSTRUCTORS
    Vmux41__Syms(VerilatedContext* contextp, const char* namep, Vmux41* modelp);
    ~Vmux41__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
