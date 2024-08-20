// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux42.h for the primary calling header

#include "verilated.h"

#include "Vmux42___024root.h"

VL_ATTR_COLD void Vmux42___024root___eval_static(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmux42___024root___eval_initial(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vmux42___024root___eval_final(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmux42___024root___eval_triggers__stl(Vmux42___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___dump_triggers__stl(Vmux42___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___eval_stl(Vmux42___024root* vlSelf);

VL_ATTR_COLD void Vmux42___024root___eval_settle(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmux42___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmux42___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hh/ysyx-workbench/数电实验/ex1/二位4选2nvboard/vsrc/mux42.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmux42___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___dump_triggers__stl(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmux42___024root___ico_sequent__TOP__0(Vmux42___024root* vlSelf);

VL_ATTR_COLD void Vmux42___024root___eval_stl(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vmux42___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___dump_triggers__ico(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___dump_triggers__act(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux42___024root___dump_triggers__nba(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux42___024root___ctor_var_reset(Vmux42___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux42__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux42___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x0 = 0;
    vlSelf->x1 = 0;
    vlSelf->x2 = 0;
    vlSelf->x3 = 0;
    vlSelf->y = 0;
    vlSelf->f = 0;
}
