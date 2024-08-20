// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__A;
    top__DOT__A = 0;
    CData/*3:0*/ top__DOT__B;
    top__DOT__B = 0;
    // Body
    top__DOT__A = (0xfU & ((8U & (IData)(vlSelf->a))
                            ? ((IData)(1U) + (~ (IData)(vlSelf->a)))
                            : (IData)(vlSelf->a)));
    top__DOT__B = (0xfU & ((8U & (IData)(vlSelf->b))
                            ? ((IData)(1U) + (~ (IData)(vlSelf->b)))
                            : (IData)(vlSelf->b)));
    vlSelf->out = (0xfU & ((4U & (IData)(vlSelf->en))
                            ? ((2U & (IData)(vlSelf->en))
                                ? ((1U & (IData)(vlSelf->en))
                                    ? (((IData)(vlSelf->a) 
                                        == (IData)(vlSelf->b))
                                        ? 1U : 0U) : 
                                   (((1U & ((IData)(vlSelf->a) 
                                            >> 3U)) 
                                     != (1U & ((IData)(vlSelf->b) 
                                               >> 3U)))
                                     ? (((7U & (IData)(vlSelf->a)) 
                                         < (7U & (IData)(vlSelf->b)))
                                         ? 1U : 0U)
                                     : (((1U & ((IData)(vlSelf->a) 
                                                >> 3U)) 
                                         > (1U & ((IData)(vlSelf->b) 
                                                  >> 3U)))
                                         ? 1U : (((1U 
                                                   & ((IData)(vlSelf->a) 
                                                      >> 3U)) 
                                                  == 
                                                  (1U 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 3U)))
                                                  ? 
                                                 (((7U 
                                                    & (IData)(vlSelf->a)) 
                                                   < 
                                                   (7U 
                                                    & (IData)(vlSelf->b)))
                                                   ? 0U
                                                   : 1U)
                                                  : 0U))))
                                : ((1U & (IData)(vlSelf->en))
                                    ? ((IData)(vlSelf->a) 
                                       ^ (IData)(vlSelf->b))
                                    : ((IData)(vlSelf->a) 
                                       | (IData)(vlSelf->b))))
                            : ((2U & (IData)(vlSelf->en))
                                ? ((1U & (IData)(vlSelf->en))
                                    ? ((IData)(vlSelf->a) 
                                       & (IData)(vlSelf->b))
                                    : (~ (IData)(vlSelf->a)))
                                : ((1U & (IData)(vlSelf->en))
                                    ? ((IData)(((~ 
                                                 ((IData)(vlSelf->a) 
                                                  >> 3U)) 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U)))
                                        ? ((IData)(vlSelf->a) 
                                           + ((4U & 
                                               ((~ 
                                                 ((IData)(vlSelf->b) 
                                                  >> 3U)) 
                                                << 2U)) 
                                              | (3U 
                                                 & ((IData)(vlSelf->b) 
                                                    >> 1U))))
                                        : ((IData)(
                                                   ((~ 
                                                     ((IData)(vlSelf->b) 
                                                      >> 3U)) 
                                                    & ((IData)(vlSelf->a) 
                                                       >> 3U)))
                                            ? ((IData)(top__DOT__A) 
                                               + ((8U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->b) 
                                                        >> 3U)) 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (IData)(vlSelf->b))))
                                            : ((1U 
                                                & ((~ 
                                                    ((IData)(vlSelf->b) 
                                                     >> 3U)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->a) 
                                                       >> 3U))))
                                                ? ((IData)(vlSelf->a) 
                                                   - (IData)(top__DOT__B))
                                                : ((IData)(top__DOT__A) 
                                                   + 
                                                   ((8U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->b) 
                                                          >> 3U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (IData)(vlSelf->b)))))))
                                    : (((1U & ((IData)(vlSelf->a) 
                                               >> 3U)) 
                                        == (1U & ((IData)(vlSelf->b) 
                                                  >> 3U)))
                                        ? ((IData)(vlSelf->a) 
                                           + (IData)(vlSelf->b))
                                        : ((8U & (IData)(vlSelf->a))
                                            ? ((IData)(top__DOT__A) 
                                               + (IData)(vlSelf->b))
                                            : ((IData)(vlSelf->a) 
                                               + (IData)(top__DOT__B))))))));
    vlSelf->zero = (0U == (IData)(vlSelf->out));
    if ((1U == (IData)(vlSelf->en))) {
        if ((IData)((((IData)(vlSelf->a) >> 3U) & (~ 
                                                   ((IData)(vlSelf->b) 
                                                    >> 3U))))) {
            vlSelf->top__DOT__add__DOT__d = (0x10U 
                                             | (IData)(vlSelf->top__DOT__add__DOT__d));
            vlSelf->top__DOT__add__DOT__d = (0x1fU 
                                             & ((IData)(top__DOT__A) 
                                                + (7U 
                                                   & (IData)(vlSelf->b))));
            vlSelf->of = ((1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                 >> 3U)) != (1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                                   >> 4U)));
        } else if ((IData)(((~ ((IData)(vlSelf->a) 
                                >> 3U)) & ((IData)(vlSelf->b) 
                                           >> 3U)))) {
            vlSelf->top__DOT__add__DOT__d = (0xfU & (IData)(vlSelf->top__DOT__add__DOT__d));
            vlSelf->top__DOT__add__DOT__d = (0x1fU 
                                             & ((IData)(vlSelf->a) 
                                                + (IData)(top__DOT__B)));
            vlSelf->of = ((1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                 >> 3U)) != (1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                                   >> 4U)));
        } else {
            vlSelf->of = 0U;
        }
    } else if ((0U == (IData)(vlSelf->en))) {
        if (((1U & ((IData)(vlSelf->a) >> 3U)) != (1U 
                                                   & ((IData)(vlSelf->b) 
                                                      >> 3U)))) {
            vlSelf->top__DOT__add__DOT__d = (0xfU & (IData)(vlSelf->top__DOT__add__DOT__d));
            vlSelf->top__DOT__add__DOT__d = (0x1fU 
                                             & ((IData)(vlSelf->a) 
                                                + (IData)(vlSelf->b)));
            vlSelf->of = ((1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                 >> 4U)) != (1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                                   >> 3U)));
        } else if (((1U & ((IData)(vlSelf->a) >> 3U)) 
                    == (1U & ((IData)(vlSelf->b) >> 3U)))) {
            vlSelf->top__DOT__add__DOT__d = (0x10U 
                                             | (IData)(vlSelf->top__DOT__add__DOT__d));
            vlSelf->top__DOT__add__DOT__d = (0x1fU 
                                             & ((IData)(top__DOT__A) 
                                                + (IData)(top__DOT__B)));
            vlSelf->of = ((1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                 >> 3U)) != (1U & ((IData)(vlSelf->top__DOT__add__DOT__d) 
                                                   >> 4U)));
        } else {
            vlSelf->of = 0U;
        }
    } else {
        vlSelf->of = 0U;
    }
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->en & 0xf8U))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
