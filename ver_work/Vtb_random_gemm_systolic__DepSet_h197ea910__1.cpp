// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic.h"

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__1(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__1\n"); );
    // Body
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 0xfU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                 & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                    >> 8U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 1U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 9U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 2U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 0xaU)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 3U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 0xbU)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 4U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 0xcU)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 5U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 0xdU)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                  >> 6U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 0xeU)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (IData)((((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                    >> 7U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                              >> 0xfU)));
}
