// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm___024root.h"

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_initial__TOP(Vtb_random_gemm___024root* vlSelf);
VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__0(Vtb_random_gemm___024root* vlSelf);
VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__1(Vtb_random_gemm___024root* vlSelf);
VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__2(Vtb_random_gemm___024root* vlSelf);

void Vtb_random_gemm___024root___eval_initial(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_initial\n"); );
    // Body
    Vtb_random_gemm___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_random_gemm___024root___eval_initial__TOP__0(vlSelf);
    Vtb_random_gemm___024root___eval_initial__TOP__1(vlSelf);
    Vtb_random_gemm___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_random_gemm__DOT__sel_for_test__0 
        = vlSelf->tb_random_gemm__DOT__sel_for_test;
}

VL_INLINE_OPT VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__0(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "rtl/tb_random_gemm.sv", 
                                                           101);
        vlSelf->tb_random_gemm__DOT__cycles_count = 
            (((1U == vlSelf->tb_random_gemm__DOT__old_sel_for_test) 
              & (~ (IData)(vlSelf->tb_random_gemm__DOT__sel_for_test)))
              ? 0U : ((IData)(1U) + vlSelf->tb_random_gemm__DOT__cycles_count));
        vlSelf->tb_random_gemm__DOT__old_sel_for_test 
            = vlSelf->tb_random_gemm__DOT__sel_for_test;
    }
}

extern const VlWide<11>/*351:0*/ Vtb_random_gemm__ConstPool__CONST_h2a0bf58b_0;

VL_INLINE_OPT VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__1(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_initial__TOP__1\n"); );
    // Init
    VlWide<70>/*2239:0*/ __Vtemp_h0695f459__0;
    VlWide<18>/*575:0*/ __Vtemp_h6c9bf5ca__0;
    VlWide<18>/*575:0*/ __Vtemp_hc6123e09__0;
    VlWide<18>/*575:0*/ __Vtemp_h6c9bf5ca__1;
    VlWide<18>/*575:0*/ __Vtemp_h3d14d617__0;
    // Body
    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "rtl/tb_random_gemm.sv", 
                                                       110);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_random_gemm__DOT__sel_for_test = 1U;
    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "rtl/tb_random_gemm.sv", 
                                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_random_gemm__DOT__file_handle = VL_FOPEN_NN(
                                                           VL_CVT_PACK_STR_NW(11, Vtb_random_gemm__ConstPool__CONST_h2a0bf58b_0)
                                                           , 
                                                           std::string{"w"});
    ;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no = 0U;
    while (VL_GTS_III(32, 0x32U, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no)) {
        VL_WRITEF("------------------------------------Test No %11d--------------------------------------\n",
                  32,((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no));
        vlSelf->tb_random_gemm__DOT__M = VL_URANDOM_RANGE_I(0x14U, 0x46U);
        vlSelf->tb_random_gemm__DOT__N = VL_URANDOM_RANGE_I(0x14U, 0x46U);
        vlSelf->tb_random_gemm__DOT__K = VL_URANDOM_RANGE_I(0x14U, 0x46U);
        vlSelf->tb_random_gemm__DOT__A_addr = 0U;
        vlSelf->tb_random_gemm__DOT__B_addr = VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__M, vlSelf->tb_random_gemm__DOT__K);
        vlSelf->tb_random_gemm__DOT__C_addr = (vlSelf->tb_random_gemm__DOT__B_addr 
                                               + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__K, vlSelf->tb_random_gemm__DOT__N));
        vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i, vlSelf->tb_random_gemm__DOT__M)) {
            vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j, vlSelf->tb_random_gemm__DOT__K)) {
                vlSelf->tb_random_gemm__DOT____Vlvbound_h848f6088__0 
                    = (0xffU & VL_URANDOM_RANGE_I(0U, 0x64U));
                if (VL_LIKELY(((0x22fU >= (0x3ffU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                                            << 3U))) 
                               & (0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))) {
                    VL_ASSIGNSEL_WI(560,8,(0x3ffU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                                            << 3U)), 
                                    vlSelf->tb_random_gemm__DOT__A
                                    [(0x7fU & vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)], vlSelf->tb_random_gemm__DOT____Vlvbound_h848f6088__0);
                }
                vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j 
                    = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j);
            }
            vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i, vlSelf->tb_random_gemm__DOT__K)) {
            vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j, vlSelf->tb_random_gemm__DOT__N)) {
                vlSelf->tb_random_gemm__DOT____Vlvbound_h16e23e8d__0 
                    = (0xffU & VL_URANDOM_RANGE_I(0U, 0x64U));
                if (VL_LIKELY(((0x22fU >= (0x3ffU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j 
                                            << 3U))) 
                               & (0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i))))) {
                    VL_ASSIGNSEL_WI(560,8,(0x3ffU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j 
                                            << 3U)), 
                                    vlSelf->tb_random_gemm__DOT__B
                                    [(0x7fU & vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i)], vlSelf->tb_random_gemm__DOT____Vlvbound_h16e23e8d__0);
                }
                vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j 
                    = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j);
            }
            vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i 
                = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i);
        }
        VL_WRITEF("M=%11d, K=%11d, N=%11d \n",32,vlSelf->tb_random_gemm__DOT__M,
                  32,vlSelf->tb_random_gemm__DOT__K,
                  32,vlSelf->tb_random_gemm__DOT__N);
        vlSelf->tb_random_gemm__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__i, vlSelf->tb_random_gemm__DOT__M)) {
            vlSelf->tb_random_gemm__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__j, vlSelf->tb_random_gemm__DOT__N)) {
                vlSelf->tb_random_gemm__DOT____Vlvbound_hda49e2e8__0 = 0U;
                if (VL_LIKELY(((0x8bfU >= (0xfffU & 
                                           (vlSelf->tb_random_gemm__DOT__j 
                                            << 5U))) 
                               & (0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))))) {
                    VL_ASSIGNSEL_WI(2240,32,(0xfffU 
                                             & (vlSelf->tb_random_gemm__DOT__j 
                                                << 5U)), 
                                    vlSelf->tb_random_gemm__DOT__C
                                    [(0x7fU & vlSelf->tb_random_gemm__DOT__i)], vlSelf->tb_random_gemm__DOT____Vlvbound_hda49e2e8__0);
                }
                vlSelf->tb_random_gemm__DOT__k = 0U;
                while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__k, vlSelf->tb_random_gemm__DOT__K)) {
                    VL_ASSIGN_W(2240,__Vtemp_h0695f459__0, 
                                vlSelf->tb_random_gemm__DOT__C
                                [((0x45U >= (0x7fU 
                                             & vlSelf->tb_random_gemm__DOT__i))
                                   ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                                   : 0U)]);
                    __Vtemp_h6c9bf5ca__0[0U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0U];
                    __Vtemp_h6c9bf5ca__0[1U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][1U];
                    __Vtemp_h6c9bf5ca__0[2U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][2U];
                    __Vtemp_h6c9bf5ca__0[3U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][3U];
                    __Vtemp_h6c9bf5ca__0[4U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][4U];
                    __Vtemp_h6c9bf5ca__0[5U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][5U];
                    __Vtemp_h6c9bf5ca__0[6U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][6U];
                    __Vtemp_h6c9bf5ca__0[7U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][7U];
                    __Vtemp_h6c9bf5ca__0[8U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][8U];
                    __Vtemp_h6c9bf5ca__0[9U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][9U];
                    __Vtemp_h6c9bf5ca__0[0xaU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xaU];
                    __Vtemp_h6c9bf5ca__0[0xbU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xbU];
                    __Vtemp_h6c9bf5ca__0[0xcU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xcU];
                    __Vtemp_h6c9bf5ca__0[0xdU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xdU];
                    __Vtemp_h6c9bf5ca__0[0xeU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xeU];
                    __Vtemp_h6c9bf5ca__0[0xfU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xfU];
                    __Vtemp_h6c9bf5ca__0[0x10U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x10U];
                    __Vtemp_h6c9bf5ca__0[0x11U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x11U];
                    __Vtemp_hc6123e09__0[0U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0U];
                    __Vtemp_hc6123e09__0[1U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][1U];
                    __Vtemp_hc6123e09__0[2U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][2U];
                    __Vtemp_hc6123e09__0[3U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][3U];
                    __Vtemp_hc6123e09__0[4U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][4U];
                    __Vtemp_hc6123e09__0[5U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][5U];
                    __Vtemp_hc6123e09__0[6U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][6U];
                    __Vtemp_hc6123e09__0[7U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][7U];
                    __Vtemp_hc6123e09__0[8U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][8U];
                    __Vtemp_hc6123e09__0[9U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][9U];
                    __Vtemp_hc6123e09__0[0xaU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xaU];
                    __Vtemp_hc6123e09__0[0xbU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xbU];
                    __Vtemp_hc6123e09__0[0xcU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xcU];
                    __Vtemp_hc6123e09__0[0xdU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xdU];
                    __Vtemp_hc6123e09__0[0xeU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xeU];
                    __Vtemp_hc6123e09__0[0xfU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0xfU];
                    __Vtemp_hc6123e09__0[0x10U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0x10U];
                    __Vtemp_hc6123e09__0[0x11U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__k))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__k)
                           : 0U)][0x11U];
                    vlSelf->tb_random_gemm__DOT____Vlvbound_hda49e2e8__1 
                        = (((0x8bfU >= (0xfffU & (vlSelf->tb_random_gemm__DOT__j 
                                                  << 5U)))
                             ? (((0U == (0x1fU & (vlSelf->tb_random_gemm__DOT__j 
                                                  << 5U)))
                                  ? 0U : (__Vtemp_h0695f459__0[
                                          (((IData)(0x1fU) 
                                            + (0xfffU 
                                               & (vlSelf->tb_random_gemm__DOT__j 
                                                  << 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__j 
                                                    << 5U))))) 
                                | (__Vtemp_h0695f459__0[
                                   (0x7fU & vlSelf->tb_random_gemm__DOT__j)] 
                                   >> (0x1fU & (vlSelf->tb_random_gemm__DOT__j 
                                                << 5U))))
                             : 0U) + (((0x22fU >= (0x3ffU 
                                                   & (vlSelf->tb_random_gemm__DOT__k 
                                                      << 3U)))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & (vlSelf->tb_random_gemm__DOT__k 
                                                  << 3U)))
                                              ? 0U : 
                                             (__Vtemp_h6c9bf5ca__0[
                                              (((IData)(7U) 
                                                + (0x3ffU 
                                                   & (vlSelf->tb_random_gemm__DOT__k 
                                                      << 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__k 
                                                      << 3U))))) 
                                            | (__Vtemp_h6c9bf5ca__0[
                                               (0x1fU 
                                                & (vlSelf->tb_random_gemm__DOT__k 
                                                   >> 2U))] 
                                               >> (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__k 
                                                      << 3U)))))
                                        : 0U) * ((0x22fU 
                                                  >= 
                                                  (0x3ffU 
                                                   & (vlSelf->tb_random_gemm__DOT__j 
                                                      << 3U)))
                                                  ? 
                                                 (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->tb_random_gemm__DOT__j 
                                                           << 3U)))
                                                       ? 0U
                                                       : 
                                                      (__Vtemp_hc6123e09__0[
                                                       (((IData)(7U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (vlSelf->tb_random_gemm__DOT__j 
                                                             << 3U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (vlSelf->tb_random_gemm__DOT__j 
                                                            << 3U))))) 
                                                     | (__Vtemp_hc6123e09__0[
                                                        (0x1fU 
                                                         & (vlSelf->tb_random_gemm__DOT__j 
                                                            >> 2U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & (vlSelf->tb_random_gemm__DOT__j 
                                                            << 3U)))))
                                                  : 0U)));
                    if (VL_LIKELY(((0x8bfU >= (0xfffU 
                                               & (vlSelf->tb_random_gemm__DOT__j 
                                                  << 5U))) 
                                   & (0x45U >= (0x7fU 
                                                & vlSelf->tb_random_gemm__DOT__i))))) {
                        VL_ASSIGNSEL_WI(2240,32,(0xfffU 
                                                 & (vlSelf->tb_random_gemm__DOT__j 
                                                    << 5U)), 
                                        vlSelf->tb_random_gemm__DOT__C
                                        [(0x7fU & vlSelf->tb_random_gemm__DOT__i)], vlSelf->tb_random_gemm__DOT____Vlvbound_hda49e2e8__1);
                    }
                    vlSelf->tb_random_gemm__DOT__k 
                        = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__k);
                }
                vlSelf->tb_random_gemm__DOT__j = ((IData)(1U) 
                                                  + vlSelf->tb_random_gemm__DOT__j);
            }
            vlSelf->tb_random_gemm__DOT__i = ((IData)(1U) 
                                              + vlSelf->tb_random_gemm__DOT__i);
        }
        vlSelf->tb_random_gemm__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__i, vlSelf->tb_random_gemm__DOT__M)) {
            vlSelf->tb_random_gemm__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__j, vlSelf->tb_random_gemm__DOT__K)) {
                vlSelf->tb_random_gemm__DOT__ksize 
                    = (VL_LTES_III(32, ((IData)(0x10U) 
                                        + vlSelf->tb_random_gemm__DOT__j), vlSelf->tb_random_gemm__DOT__K)
                        ? 0x10U : VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__K, (IData)(0x10U)));
                vlSelf->tb_random_gemm__DOT__test_interface_addr 
                    = ((vlSelf->tb_random_gemm__DOT__A_addr 
                        + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__i, vlSelf->tb_random_gemm__DOT__K)) 
                       + vlSelf->tb_random_gemm__DOT__j);
                vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l = 0U;
                while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l, vlSelf->tb_random_gemm__DOT__ksize)) {
                    __Vtemp_h6c9bf5ca__1[0U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0U];
                    __Vtemp_h6c9bf5ca__1[1U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][1U];
                    __Vtemp_h6c9bf5ca__1[2U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][2U];
                    __Vtemp_h6c9bf5ca__1[3U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][3U];
                    __Vtemp_h6c9bf5ca__1[4U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][4U];
                    __Vtemp_h6c9bf5ca__1[5U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][5U];
                    __Vtemp_h6c9bf5ca__1[6U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][6U];
                    __Vtemp_h6c9bf5ca__1[7U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][7U];
                    __Vtemp_h6c9bf5ca__1[8U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][8U];
                    __Vtemp_h6c9bf5ca__1[9U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][9U];
                    __Vtemp_h6c9bf5ca__1[0xaU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xaU];
                    __Vtemp_h6c9bf5ca__1[0xbU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xbU];
                    __Vtemp_h6c9bf5ca__1[0xcU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xcU];
                    __Vtemp_h6c9bf5ca__1[0xdU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xdU];
                    __Vtemp_h6c9bf5ca__1[0xeU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xeU];
                    __Vtemp_h6c9bf5ca__1[0xfU] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xfU];
                    __Vtemp_h6c9bf5ca__1[0x10U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x10U];
                    __Vtemp_h6c9bf5ca__1[0x11U] = vlSelf->tb_random_gemm__DOT__A
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x11U];
                    VL_ASSIGNSEL_WI(128,8,(0x7fU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l 
                                            << 3U)), vlSelf->tb_random_gemm__DOT__test_interface_wr_data, 
                                    ((0x22fU >= (0x3ffU 
                                                 & ((vlSelf->tb_random_gemm__DOT__j 
                                                     + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                    << 3U)))
                                      ? (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlSelf->tb_random_gemm__DOT__j 
                                                         + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_h6c9bf5ca__1[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x3ffU 
                                                       & ((vlSelf->tb_random_gemm__DOT__j 
                                                           + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                          << 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                         << 3U))))) 
                                                  | (__Vtemp_h6c9bf5ca__1[
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l) 
                                                         << 3U)))))
                                      : 0U));
                    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l 
                        = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l);
                }
                vlSelf->tb_random_gemm__DOT__test_interface_control 
                    = (0x1fU & vlSelf->tb_random_gemm__DOT__ksize);
                vlSelf->tb_random_gemm__DOT__test_interface_en = 1U;
                vlSelf->tb_random_gemm__DOT__test_interface_rdwr = 1U;
                vlSelf->tb_random_gemm__DOT__sel_for_test = 1U;
                co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clk)", 
                                                                   "rtl/tb_random_gemm.sv", 
                                                                   156);
                vlSelf->__Vm_traceActivity[2U] = 1U;
                vlSelf->tb_random_gemm__DOT__j = ((IData)(0x10U) 
                                                  + vlSelf->tb_random_gemm__DOT__j);
            }
            vlSelf->tb_random_gemm__DOT__i = ((IData)(1U) 
                                              + vlSelf->tb_random_gemm__DOT__i);
        }
        vlSelf->tb_random_gemm__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__i, vlSelf->tb_random_gemm__DOT__K)) {
            vlSelf->tb_random_gemm__DOT__j = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__j, vlSelf->tb_random_gemm__DOT__N)) {
                vlSelf->tb_random_gemm__DOT__nsize 
                    = (VL_LTES_III(32, ((IData)(0x10U) 
                                        + vlSelf->tb_random_gemm__DOT__j), vlSelf->tb_random_gemm__DOT__N)
                        ? 0x10U : VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__N, (IData)(0x10U)));
                vlSelf->tb_random_gemm__DOT__test_interface_addr 
                    = ((vlSelf->tb_random_gemm__DOT__B_addr 
                        + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__i, vlSelf->tb_random_gemm__DOT__N)) 
                       + vlSelf->tb_random_gemm__DOT__j);
                vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l = 0U;
                while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l, vlSelf->tb_random_gemm__DOT__nsize)) {
                    __Vtemp_h3d14d617__0[0U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0U];
                    __Vtemp_h3d14d617__0[1U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][1U];
                    __Vtemp_h3d14d617__0[2U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][2U];
                    __Vtemp_h3d14d617__0[3U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][3U];
                    __Vtemp_h3d14d617__0[4U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][4U];
                    __Vtemp_h3d14d617__0[5U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][5U];
                    __Vtemp_h3d14d617__0[6U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][6U];
                    __Vtemp_h3d14d617__0[7U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][7U];
                    __Vtemp_h3d14d617__0[8U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][8U];
                    __Vtemp_h3d14d617__0[9U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][9U];
                    __Vtemp_h3d14d617__0[0xaU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xaU];
                    __Vtemp_h3d14d617__0[0xbU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xbU];
                    __Vtemp_h3d14d617__0[0xcU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xcU];
                    __Vtemp_h3d14d617__0[0xdU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xdU];
                    __Vtemp_h3d14d617__0[0xeU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xeU];
                    __Vtemp_h3d14d617__0[0xfU] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0xfU];
                    __Vtemp_h3d14d617__0[0x10U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x10U];
                    __Vtemp_h3d14d617__0[0x11U] = vlSelf->tb_random_gemm__DOT__B
                        [((0x45U >= (0x7fU & vlSelf->tb_random_gemm__DOT__i))
                           ? (0x7fU & vlSelf->tb_random_gemm__DOT__i)
                           : 0U)][0x11U];
                    VL_ASSIGNSEL_WI(128,8,(0x7fU & 
                                           (vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l 
                                            << 3U)), vlSelf->tb_random_gemm__DOT__test_interface_wr_data, 
                                    ((0x22fU >= (0x3ffU 
                                                 & ((vlSelf->tb_random_gemm__DOT__j 
                                                     + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                    << 3U)))
                                      ? (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((vlSelf->tb_random_gemm__DOT__j 
                                                         + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_h3d14d617__0[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0x3ffU 
                                                       & ((vlSelf->tb_random_gemm__DOT__j 
                                                           + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                          << 3U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                         << 3U))))) 
                                                  | (__Vtemp_h3d14d617__0[
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((vlSelf->tb_random_gemm__DOT__j 
                                                          + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l) 
                                                         << 3U)))))
                                      : 0U));
                    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l 
                        = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l);
                }
                vlSelf->tb_random_gemm__DOT__test_interface_control 
                    = (0x1fU & vlSelf->tb_random_gemm__DOT__nsize);
                vlSelf->tb_random_gemm__DOT__test_interface_en = 1U;
                vlSelf->tb_random_gemm__DOT__test_interface_rdwr = 1U;
                vlSelf->tb_random_gemm__DOT__sel_for_test = 1U;
                co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge clk)", 
                                                                   "rtl/tb_random_gemm.sv", 
                                                                   169);
                vlSelf->__Vm_traceActivity[2U] = 1U;
                vlSelf->tb_random_gemm__DOT__j = ((IData)(0x10U) 
                                                  + vlSelf->tb_random_gemm__DOT__j);
            }
            vlSelf->tb_random_gemm__DOT__i = ((IData)(1U) 
                                              + vlSelf->tb_random_gemm__DOT__i);
        }
        vlSelf->tb_random_gemm__DOT__sel_for_test = 0U;
        vlSelf->tb_random_gemm__DOT__n = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__n, vlSelf->tb_random_gemm__DOT__N)) {
            vlSelf->tb_random_gemm__DOT__nsize = (VL_LTES_III(32, 
                                                              ((IData)(0x10U) 
                                                               + vlSelf->tb_random_gemm__DOT__n), vlSelf->tb_random_gemm__DOT__N)
                                                   ? 0x10U
                                                   : 
                                                  VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__N, (IData)(0x10U)));
            vlSelf->tb_random_gemm__DOT__m = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__m, vlSelf->tb_random_gemm__DOT__M)) {
                vlSelf->tb_random_gemm__DOT__msize 
                    = (VL_LTES_III(32, ((IData)(0x10U) 
                                        + vlSelf->tb_random_gemm__DOT__m), vlSelf->tb_random_gemm__DOT__M)
                        ? 0x10U : VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__M, (IData)(0x10U)));
                vlSelf->tb_random_gemm__DOT__k = 0U;
                while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__k, vlSelf->tb_random_gemm__DOT__K)) {
                    vlSelf->tb_random_gemm__DOT__last 
                        = VL_GTES_III(32, ((IData)(0x10U) 
                                           + vlSelf->tb_random_gemm__DOT__k), vlSelf->tb_random_gemm__DOT__K);
                    vlSelf->tb_random_gemm__DOT__first 
                        = (0U == vlSelf->tb_random_gemm__DOT__k);
                    vlSelf->tb_random_gemm__DOT__ksize 
                        = (VL_LTES_III(32, ((IData)(0x10U) 
                                            + vlSelf->tb_random_gemm__DOT__k), vlSelf->tb_random_gemm__DOT__K)
                            ? 0x10U : VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__K, (IData)(0x10U)));
                    vlSelf->tb_random_gemm__DOT__Tile_A_Address 
                        = ((vlSelf->tb_random_gemm__DOT__A_addr 
                            + vlSelf->tb_random_gemm__DOT__k) 
                           + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__m, vlSelf->tb_random_gemm__DOT__K));
                    vlSelf->tb_random_gemm__DOT__Tile_B_Address 
                        = (((vlSelf->tb_random_gemm__DOT__B_addr 
                             + vlSelf->tb_random_gemm__DOT__n) 
                            + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__k, vlSelf->tb_random_gemm__DOT__N)) 
                           + VL_MULS_III(32, (vlSelf->tb_random_gemm__DOT__ksize 
                                              - (IData)(1U)), vlSelf->tb_random_gemm__DOT__N));
                    vlSelf->tb_random_gemm__DOT__Tile_C_Address 
                        = ((vlSelf->tb_random_gemm__DOT__C_addr 
                            + vlSelf->tb_random_gemm__DOT__n) 
                           + VL_MULS_III(32, vlSelf->tb_random_gemm__DOT__m, vlSelf->tb_random_gemm__DOT__K));
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       189);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_en = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_rdwr = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x9000000cU;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = vlSelf->tb_random_gemm__DOT__K;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       194);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000010U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = vlSelf->tb_random_gemm__DOT__N;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       197);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_en = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_rdwr = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = vlSelf->tb_random_gemm__DOT__Tile_A_Address;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000000U;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       203);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000004U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = vlSelf->tb_random_gemm__DOT__Tile_B_Address;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       207);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000008U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = vlSelf->tb_random_gemm__DOT__Tile_C_Address;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       212);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000014U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = (((IData)(vlSelf->tb_random_gemm__DOT__first) 
                            << 1U) | (IData)(vlSelf->tb_random_gemm__DOT__last));
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       215);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000018U;
                    vlSelf->tb_random_gemm__DOT__system_bus_wr_data 
                        = ((vlSelf->tb_random_gemm__DOT__msize 
                            | (vlSelf->tb_random_gemm__DOT__ksize 
                               << 5U)) | (vlSelf->tb_random_gemm__DOT__nsize 
                                          << 0xaU));
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       219);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_en = 1U;
                    vlSelf->tb_random_gemm__DOT__system_bus_rdwr = 0U;
                    vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000000U;
                    co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge clk)", 
                                                                       "rtl/tb_random_gemm.sv", 
                                                                       223);
                    vlSelf->__Vm_traceActivity[2U] = 1U;
                    while ((1U == vlSelf->tb_random_gemm__DOT__system_bus_rd_data)) {
                        co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge clk)", 
                                                                           "rtl/tb_random_gemm.sv", 
                                                                           225);
                        vlSelf->__Vm_traceActivity[2U] = 1U;
                    }
                    vlSelf->tb_random_gemm__DOT__k 
                        = ((IData)(0x10U) + vlSelf->tb_random_gemm__DOT__k);
                }
                vlSelf->tb_random_gemm__DOT__m = ((IData)(0x10U) 
                                                  + vlSelf->tb_random_gemm__DOT__m);
            }
            vlSelf->tb_random_gemm__DOT__n = ((IData)(0x10U) 
                                              + vlSelf->tb_random_gemm__DOT__n);
        }
        vlSelf->tb_random_gemm__DOT__system_bus_en = 1U;
        vlSelf->tb_random_gemm__DOT__system_bus_rdwr = 0U;
        vlSelf->tb_random_gemm__DOT__system_bus_addr = 0x90000018U;
        co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "rtl/tb_random_gemm.sv", 
                                                           235);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U != vlSelf->tb_random_gemm__DOT__system_bus_rd_data)) {
            co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "rtl/tb_random_gemm.sv", 
                                                               237);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        VL_FWRITEF(vlSelf->tb_random_gemm__DOT__file_handle,"%0d,%0d,%0d,%0#\n",
                   32,vlSelf->tb_random_gemm__DOT__M,
                   32,vlSelf->tb_random_gemm__DOT__K,
                   32,vlSelf->tb_random_gemm__DOT__N,
                   32,vlSelf->tb_random_gemm__DOT__cycles_count);
        vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no 
            = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no);
    }
    VL_FCLOSE_I(vlSelf->tb_random_gemm__DOT__file_handle); VL_FINISH_MT("rtl/tb_random_gemm.sv", 244, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_random_gemm___024root___eval_initial__TOP__2(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_initial__TOP__2\n"); );
    // Init
    VlWide<70>/*2239:0*/ __Vtemp_h88053b33__0;
    VlWide<70>/*2239:0*/ __Vtemp_h88053b33__1;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h7b1b7f80__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_random_gemm.sel_for_test)", 
                                                           "rtl/tb_random_gemm.sv", 
                                                           255);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->tb_random_gemm__DOT__N_ = vlSelf->tb_random_gemm__DOT__N;
        vlSelf->tb_random_gemm__DOT__n_ = 0U;
        while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__n_, vlSelf->tb_random_gemm__DOT__N_)) {
            vlSelf->tb_random_gemm__DOT__nsize_ = (
                                                   VL_LTES_III(32, 
                                                               ((IData)(0x10U) 
                                                                + vlSelf->tb_random_gemm__DOT__n_), vlSelf->tb_random_gemm__DOT__N_)
                                                    ? 0x10U
                                                    : 
                                                   VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__N_, (IData)(0x10U)));
            vlSelf->tb_random_gemm__DOT__count_rows_compared = 0U;
            while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__count_rows_compared, vlSelf->tb_random_gemm__DOT__M)) {
                vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                    = vlSelf->tb_random_gemm__DOT__n_;
                while (VL_LTS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i, 
                                  (vlSelf->tb_random_gemm__DOT__nsize_ 
                                   + vlSelf->tb_random_gemm__DOT__n_))) {
                    if ((0U == VL_MODDIVS_III(32, vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i, (IData)(4U)))) {
                        co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge clk)", 
                                                                           "rtl/tb_random_gemm.sv", 
                                                                           272);
                        vlSelf->__Vm_traceActivity[3U] = 1U;
                        while ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__interface_en) 
                                         & (IData)(vlSelf->tb_random_gemm__DOT__interface_rdwr))))) {
                            co_await vlSelf->__VtrigSched_h21418e1f__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge clk)", 
                                                                               "rtl/tb_random_gemm.sv", 
                                                                               274);
                            vlSelf->__Vm_traceActivity[3U] = 1U;
                        }
                    }
                    VL_ASSIGN_W(2240,__Vtemp_h88053b33__0, 
                                vlSelf->tb_random_gemm__DOT__C
                                [((0x45U >= (0x7fU 
                                             & vlSelf->tb_random_gemm__DOT__count_rows_compared))
                                   ? (0x7fU & vlSelf->tb_random_gemm__DOT__count_rows_compared)
                                   : 0U)]);
                    if (VL_UNLIKELY((((0x8bfU >= (0xfffU 
                                                  & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                     << 5U)))
                                       ? (((0U == (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                      << 5U)))
                                            ? 0U : 
                                           (__Vtemp_h88053b33__0[
                                            (((IData)(0x1fU) 
                                              + (0xfffU 
                                                 & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                      << 5U))))) 
                                          | (__Vtemp_h88053b33__0[
                                             (0x7fU 
                                              & vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i)] 
                                             >> (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                    << 5U))))
                                       : 0U) != vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[
                                     (3U & vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i)]))) {
                        VL_ASSIGN_W(2240,__Vtemp_h88053b33__1, 
                                    vlSelf->tb_random_gemm__DOT__C
                                    [((0x45U >= (0x7fU 
                                                 & vlSelf->tb_random_gemm__DOT__count_rows_compared))
                                       ? (0x7fU & vlSelf->tb_random_gemm__DOT__count_rows_compared)
                                       : 0U)]);
                        VL_WRITEF("Mismatch found C[%0d][%0d] = %0# , interface_wr_data[%0d] = %0#, time=%0#\n",
                                  32,vlSelf->tb_random_gemm__DOT__count_rows_compared,
                                  32,vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i,
                                  32,((0x8bfU >= (0xfffU 
                                                  & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                     << 5U)))
                                       ? (((0U == (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                      << 5U)))
                                            ? 0U : 
                                           (__Vtemp_h88053b33__1[
                                            (((IData)(0x1fU) 
                                              + (0xfffU 
                                                 & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                      << 5U))))) 
                                          | (__Vtemp_h88053b33__1[
                                             (0x7fU 
                                              & vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i)] 
                                             >> (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                                                    << 5U))))
                                       : 0U),32,vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i,
                                  32,vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[
                                  (3U & vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i)],
                                  64,VL_TIME_UNITED_Q(1));
                    }
                    vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i 
                        = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i);
                }
                vlSelf->tb_random_gemm__DOT__count_rows_compared 
                    = ((IData)(1U) + vlSelf->tb_random_gemm__DOT__count_rows_compared);
            }
            vlSelf->tb_random_gemm__DOT__n_ = ((IData)(0x10U) 
                                               + vlSelf->tb_random_gemm__DOT__n_);
        }
        VL_WRITEF("Matrix Test Passed\n");
    }
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

VL_INLINE_OPT void Vtb_random_gemm___024root___act_sequent__TOP__0(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en = 0U;
    if (((IData)(vlSelf->tb_random_gemm__DOT__system_bus_en) 
         & (IData)(vlSelf->tb_random_gemm__DOT__system_bus_rdwr))) {
        if ((0x90000000U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
            if ((0x90000004U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                if ((0x90000008U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                    if ((0x9000000cU != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                        if ((0x90000010U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                            if ((0x90000014U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                if ((0x90000018U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en = 1U;
                                }
                            }
                            if ((0x90000014U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en = 1U;
                            }
                        }
                        if ((0x90000010U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en = 1U;
                        }
                    }
                    if ((0x9000000cU == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en = 1U;
                    }
                }
                if ((0x90000008U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en = 1U;
                }
            }
            if ((0x90000004U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en = 1U;
            }
        }
        if ((0x90000000U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en = 1U;
        }
    }
    if (vlSelf->tb_random_gemm__DOT__sel_for_test) {
        vlSelf->tb_random_gemm__DOT__selected_interface_en 
            = vlSelf->tb_random_gemm__DOT__test_interface_en;
        vlSelf->tb_random_gemm__DOT__selected_interface_rdwr 
            = vlSelf->tb_random_gemm__DOT__test_interface_rdwr;
        vlSelf->tb_random_gemm__DOT__selected_interface_control 
            = vlSelf->tb_random_gemm__DOT__test_interface_control;
        vlSelf->tb_random_gemm__DOT__selected_interface_addr 
            = vlSelf->tb_random_gemm__DOT__test_interface_addr;
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U];
    } else {
        vlSelf->tb_random_gemm__DOT__selected_interface_en 
            = vlSelf->tb_random_gemm__DOT__interface_en;
        vlSelf->tb_random_gemm__DOT__selected_interface_rdwr 
            = vlSelf->tb_random_gemm__DOT__interface_rdwr;
        vlSelf->tb_random_gemm__DOT__selected_interface_control 
            = vlSelf->tb_random_gemm__DOT__interface_control;
        vlSelf->tb_random_gemm__DOT__selected_interface_addr 
            = ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))
                ? vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr
                : vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr);
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U];
    }
    if (((IData)(vlSelf->tb_random_gemm__DOT__system_bus_en) 
         & (~ (IData)(vlSelf->tb_random_gemm__DOT__system_bus_rdwr)))) {
        vlSelf->tb_random_gemm__DOT__system_bus_rd_data 
            = ((0x90000000U == vlSelf->tb_random_gemm__DOT__system_bus_addr)
                ? (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_full)
                : ((0x90000018U == vlSelf->tb_random_gemm__DOT__system_bus_addr)
                    ? (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)
                    : 0U));
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask = 0U;
    if ((1U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (1U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((2U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (2U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((3U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (4U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((4U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (8U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((5U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x10U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((6U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x20U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((7U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x40U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((8U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x80U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((9U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x100U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xaU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x200U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xbU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x400U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xcU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x800U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xdU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x1000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xeU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x2000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xfU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x4000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0x10U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x8000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[1U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (1U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[2U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (2U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[3U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (3U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[4U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (4U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[5U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (5U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[6U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (6U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[7U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (7U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[8U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (8U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[9U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (9U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xaU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xaU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xbU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xbU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xcU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xcU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xdU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xdU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xeU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xeU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xfU] 
        = (0x3ffU & (vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                     >> 4U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x10U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x10U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x10U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[1U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x11U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x11U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x11U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x11U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x11U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[2U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x12U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x12U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x12U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x12U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x12U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[3U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x13U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x13U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x13U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x13U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x13U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[4U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x14U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x14U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x14U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x14U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x14U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[5U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x15U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x15U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x15U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x15U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x15U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[6U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x16U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x16U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x16U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x16U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x16U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[7U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x17U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x17U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x17U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x17U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x17U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[8U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x18U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x18U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x18U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x18U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x18U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[9U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x19U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x19U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x19U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x19U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x19U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xaU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1aU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1aU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1aU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1aU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1aU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xbU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1bU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1bU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1bU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1bU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1bU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xcU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1cU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1cU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1cU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1cU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1cU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xdU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1dU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1dU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1dU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1dU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1dU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xeU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1eU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1eU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1eU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1eU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1eU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xfU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1fU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1fU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1fU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1fU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1fU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[4U] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[5U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[6U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[7U] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[8U] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[9U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xaU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xbU] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xcU] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xdU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xeU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xfU] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_wea 
        = ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
             & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                >> (0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
            << 0xfU) | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                          & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                             >> (0xfU & ((IData)(0xeU) 
                                         - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                         << 0xeU) | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                       & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                          >> (0xfU 
                                              & ((IData)(0xdU) 
                                                 - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                      << 0xdU) | ((
                                                   ((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                    & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(0xcU) 
                                                           - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                       & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(0xbU) 
                                                              - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                          & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                             >> 
                                                             (0xfU 
                                                              & ((IData)(0xaU) 
                                                                 - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                             & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                >> 
                                                                (0xfU 
                                                                 & ((IData)(9U) 
                                                                    - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                   >> 
                                                                   (0xfU 
                                                                    & ((IData)(8U) 
                                                                       - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                   & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                      >> 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                      & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                         >> 
                                                                         (0xfU 
                                                                          & ((IData)(6U) 
                                                                             - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                         & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                            >> 
                                                                            (0xfU 
                                                                             & ((IData)(5U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                            & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                               >> 
                                                                               (0xfU 
                                                                                & ((IData)(4U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                               & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(3U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(2U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(1U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & (- vlSelf->tb_random_gemm__DOT__selected_interface_addr)))))))))))))))))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & (- vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[1U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(1U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[2U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(2U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[3U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(3U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[4U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(4U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[5U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(5U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[6U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(6U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[7U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(7U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[8U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(8U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[9U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(9U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xaU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xaU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xbU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xbU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xcU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xcU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xdU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xdU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xeU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xeU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xfU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
}

void Vtb_random_gemm___024root___eval_act(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_random_gemm___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_random_gemm___024root___nba_sequent__TOP__3(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & (- vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[1U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(1U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[2U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(2U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[3U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(3U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[4U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(4U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[5U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(5U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[6U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(6U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[7U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(7U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[8U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(8U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[9U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(9U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xaU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xaU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xbU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xbU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xcU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xcU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xdU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xdU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xeU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xeU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xfU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
}

void Vtb_random_gemm___024root___eval_triggers__act(Vtb_random_gemm___024root* vlSelf);
void Vtb_random_gemm___024root___timing_commit(Vtb_random_gemm___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__act(Vtb_random_gemm___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_random_gemm___024root___timing_resume(Vtb_random_gemm___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__nba(Vtb_random_gemm___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_random_gemm___024root___eval_nba(Vtb_random_gemm___024root* vlSelf);

void Vtb_random_gemm___024root___eval(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_random_gemm___024root___eval_triggers__act(vlSelf);
            Vtb_random_gemm___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_random_gemm___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rtl/tb_random_gemm.sv", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_random_gemm___024root___timing_resume(vlSelf);
                Vtb_random_gemm___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_random_gemm___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rtl/tb_random_gemm.sv", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_random_gemm___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_random_gemm___024root___timing_commit(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h21418e1f__0.commit("@(posedge clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7b1b7f80__0.commit("@(negedge tb_random_gemm.sel_for_test)");
    }
}

void Vtb_random_gemm___024root___timing_resume(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h21418e1f__0.resume("@(posedge clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7b1b7f80__0.resume("@(negedge tb_random_gemm.sel_for_test)");
    }
}

#ifdef VL_DEBUG
void Vtb_random_gemm___024root___eval_debug_assertions(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
