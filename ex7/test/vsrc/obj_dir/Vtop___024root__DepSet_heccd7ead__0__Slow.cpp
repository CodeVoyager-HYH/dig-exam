// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->seg6 = 0xffU;
    vlSelf->seg7 = 0xffU;
    vlSelf->top__DOT__state = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ps2_clk = vlSelf->ps2_clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h1f93ebb4_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_h181586bb_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ top__DOT__my_ps2_to_ascii__DOT__tmp;
    top__DOT__my_ps2_to_ascii__DOT__tmp = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx6 = (0xfU & (IData)(vlSelf->top__DOT__key_count));
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx6];
    __Vtableidx7 = (0xfU & ((IData)(vlSelf->top__DOT__key_count) 
                            >> 4U));
    vlSelf->seg5 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx7];
    vlSelf->top__DOT__tmp_data = vlSelf->top__DOT__my_keyboard__DOT__fifo
        [vlSelf->top__DOT__my_keyboard__DOT__r_ptr];
    if (vlSelf->top__DOT__ready) {
        vlSelf->top__DOT__next_state = ((0U == (IData)(vlSelf->top__DOT__state))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__state))
                                                  ? 
                                                 ((0xf0U 
                                                   == (IData)(vlSelf->top__DOT__tmp_data))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__state))
                                                   ? 
                                                  ((0xf0U 
                                                    != (IData)(vlSelf->top__DOT__tmp_data))
                                                    ? 1U
                                                    : 2U)
                                                   : 0U)));
        vlSelf->top__DOT__out_data = vlSelf->top__DOT__tmp_data;
    }
    if ((1U == (IData)(vlSelf->top__DOT__state))) {
        __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__out_data));
        __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__out_data) 
                                >> 4U));
        __Vtableidx1 = vlSelf->top__DOT__out_data;
    } else {
        __Vtableidx2 = 0U;
        __Vtableidx3 = 0U;
        __Vtableidx1 = 0U;
    }
    vlSelf->top__DOT__tmp_seg0 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx2];
    vlSelf->top__DOT__tmp_seg1 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx3];
    top__DOT__my_ps2_to_ascii__DOT__tmp = Vtop__ConstPool__TABLE_h181586bb_0
        [__Vtableidx1];
    __Vtableidx4 = (0xfU & (IData)(top__DOT__my_ps2_to_ascii__DOT__tmp));
    vlSelf->top__DOT__tmp_seg2 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(top__DOT__my_ps2_to_ascii__DOT__tmp) 
                            >> 4U));
    vlSelf->top__DOT__tmp_seg3 = Vtop__ConstPool__TABLE_h1f93ebb4_0
        [__Vtableidx5];
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or [changed] ps2_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or [changed] ps2_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clrn = VL_RAND_RESET_I(1);
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->seg0 = VL_RAND_RESET_I(8);
    vlSelf->seg1 = VL_RAND_RESET_I(8);
    vlSelf->seg2 = VL_RAND_RESET_I(8);
    vlSelf->seg3 = VL_RAND_RESET_I(8);
    vlSelf->seg4 = VL_RAND_RESET_I(8);
    vlSelf->seg5 = VL_RAND_RESET_I(8);
    vlSelf->seg6 = VL_RAND_RESET_I(8);
    vlSelf->seg7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__nextdata_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tmp_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__out_data = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__key_count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tmp_seg0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tmp_seg1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tmp_seg2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tmp_seg3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
