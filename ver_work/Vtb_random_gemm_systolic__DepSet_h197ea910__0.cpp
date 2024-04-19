// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic.h"

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__0(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__0\n"); );
    // Body
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
    } else {
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if ((0x80U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                  >> 0x18U) * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                   >> 0x18U);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x40U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           >> 0x10U)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x20U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           >> 8U)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x10U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U]) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((8U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                  >> 0x18U) * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                   >> 0x18U);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((4U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                           >> 0x10U)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((2U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                           >> 8U)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if ((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U]) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                   >> 0x18U);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                   >> 0x18U);
        }
    }
    vlSelf->__PVT__W_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->if_en_out = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready) 
                          << 7U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                     << 6U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                << 5U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))));
    vlSelf->if_data_out = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out)) 
                            << 0x38U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                          << 0x30U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                             << 0x28U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                                         << 8U) 
                                                                        | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out))))))))));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 7U)));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 6U)));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__P_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                          << 0x18U) 
                                         | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))));
    vlSelf->__PVT__P_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))) 
                                                       >> 0x20U)));
    vlSelf->__PVT__P_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[6U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[7U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[8U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[9U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xaU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xbU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xcU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xdU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xeU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xfU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x10U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x11U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x12U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x13U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x14U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x15U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x16U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x17U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x18U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x19U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1aU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1bU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1cU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1dU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1eU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1fU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x20U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x21U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x22U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x23U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x24U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x25U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x26U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x27U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x28U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x29U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 5U)));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__W_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))));
    vlSelf->__PVT__W_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__W_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 4U)));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 3U)));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 2U)));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                  >> 1U)));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out)));
    vlSelf->__PVT__A_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__A_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))));
    vlSelf->__PVT__A_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__A_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out))));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__1(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__1\n"); );
    // Body
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 7U));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__0(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__0\n"); );
    // Body
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
    } else {
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if ((0x80U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x38U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x38U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x40U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x30U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x30U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x20U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x28U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x28U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x10U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x20U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x20U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((8U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x18U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x18U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((4U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 0x10U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 0x10U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((2U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                   >> 8U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                    >> 8U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if ((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & ((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out)) 
                                * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = (0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                   >> 0x18U);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U]);
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                            >> 8U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                            >> 0x10U));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                   >> 0x18U);
        }
    }
    vlSelf->__PVT__W_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                            >> 7U));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 6U)));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__P_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                          << 0x18U) 
                                         | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))));
    vlSelf->__PVT__P_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))) 
                                                       >> 0x20U)));
    vlSelf->__PVT__P_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[6U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[7U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[8U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[9U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xaU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xbU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xcU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xdU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xeU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xfU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x10U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x11U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x12U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x13U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x14U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x15U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x16U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x17U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x18U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x19U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1aU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1bU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1cU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1dU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1eU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1fU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x20U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x21U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x22U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x23U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x24U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x25U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x26U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x27U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x28U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x29U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 5U)));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__W_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))));
    vlSelf->__PVT__W_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__W_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 4U)));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 3U)));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 2U)));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                                  >> 1U)));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out)));
    vlSelf->__PVT__A_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__A_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))));
    vlSelf->__PVT__A_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__A_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out))));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__1(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__1\n"); );
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
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 8U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 9U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xaU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xbU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xcU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xdU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xeU));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                 >> 0xfU));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__0(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__0\n"); );
    // Body
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
    } else {
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                    << 0x18U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                                 >> 8U))));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if ((0x80U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x38U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x38U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x40U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x30U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x30U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x20U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x28U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x28U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x10U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x20U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x20U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((8U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x18U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x18U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((4U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 0x10U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 0x10U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                   >> 8U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                    >> 8U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                    << 0x10U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                                 >> 0x10U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                    << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U] 
                                              >> 0x18U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U]));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                    << 0x18U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                                 >> 8U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                    << 0x10U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                                 >> 0x10U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                    << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U] 
                                              >> 0x18U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U]));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = (0xffU & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 8U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x10U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x18U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x20U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x28U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x30U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                    >> 0x38U)));
        }
    }
    vlSelf->__PVT__W_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->of_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out))));
    vlSelf->of_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x10U) | (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out)) 
                                                   << 0x18U) 
                                                  | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                                                 >> 0x20U)));
    vlSelf->of_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 8U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                      >> 0x10U));
    vlSelf->of_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out);
    vlSelf->of_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                         >> 8U));
    vlSelf->of_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 8U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                      >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                            >> 7U));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 6U)));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__P_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                          << 0x18U) 
                                         | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))));
    vlSelf->__PVT__P_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))) 
                                                       >> 0x20U)));
    vlSelf->__PVT__P_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[6U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[7U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[8U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[9U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xaU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xbU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xcU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xdU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xeU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xfU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x10U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x11U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x12U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x13U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x14U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x15U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x16U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x17U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x18U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x19U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1aU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1bU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1cU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1dU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1eU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1fU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x20U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x21U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x22U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x23U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x24U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x25U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x26U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x27U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x28U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x29U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 5U)));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__W_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))));
    vlSelf->__PVT__W_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__W_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 4U)));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 3U)));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 2U)));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                                  >> 1U)));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en)));
    vlSelf->__PVT__A_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__A_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))));
    vlSelf->__PVT__A_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__A_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out))));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__2(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__2\n"); );
    // Body
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 1U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 2U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 3U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 4U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 5U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 6U));
    vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en 
        = ((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
           & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
              >> 7U));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & ((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                 & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 1U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 1U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 2U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 2U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 3U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 3U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 4U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 4U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 5U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 5U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (1U & (((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                  >> 6U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                            >> 6U)));
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en 
        = (IData)((((IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                    >> 7U) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                              >> 7U)));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__0(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__0\n"); );
    // Body
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    if (vlSymsp->TOP.rst) {
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
        vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out = 0U;
    } else {
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out;
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                    << 0x18U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                                 >> 8U))));
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out;
        }
        if ((0x80U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x38U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x38U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x40U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x30U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x30U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x20U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x28U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x28U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((0x10U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x20U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x20U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((8U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x18U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x18U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((4U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 0x10U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 0x10U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out;
        }
        if ((2U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                   >> 8U))) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out)) 
                                + vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out));
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out 
                = (0xffU & (IData)((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                    >> 8U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                    << 0x10U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                                 >> 0x10U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                    << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U] 
                                              >> 0x18U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U]));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                    << 0x18U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                                 >> 8U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                    << 0x10U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                                 >> 0x10U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + ((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                    << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U] 
                                              >> 0x18U))));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out;
        }
        if ((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out 
                = (0xffffffU & (((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out)) 
                                 * (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                + vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U]));
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out 
                = (0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out 
                = vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out;
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 8U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x10U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x18U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x20U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x28U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x30U)));
        }
        if (vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en) {
            vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out 
                = (0xffU & (IData)((vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                    >> 0x38U)));
        }
    }
    vlSelf->__PVT__W_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->of_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out)) 
                                    << 0x18U) | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out))));
    vlSelf->of_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x10U) | (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out)) 
                                                   << 0x18U) 
                                                  | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                                                 >> 0x20U)));
    vlSelf->of_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 8U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                      >> 0x10U));
    vlSelf->of_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out);
    vlSelf->of_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                         >> 8U));
    vlSelf->of_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out 
                            << 8U) | (vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out 
                                      >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                            >> 7U));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 6U)));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__P_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                          << 0x18U) 
                                         | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))));
    vlSelf->__PVT__P_data[1U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out)) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out))) 
                                                       >> 0x20U)));
    vlSelf->__PVT__P_data[2U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[3U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[4U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[5U] = ((vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[6U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[7U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 8U));
    vlSelf->__PVT__P_data[8U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                            >> 0x10U));
    vlSelf->__PVT__P_data[9U] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                  << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xaU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xbU] = ((vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xcU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0xdU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                 >> 8U));
    vlSelf->__PVT__P_data[0xeU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                              >> 0x10U));
    vlSelf->__PVT__P_data[0xfU] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                    << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x10U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x11U] = ((vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x12U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x13U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x14U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x15U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x16U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x17U] = ((vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x18U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x19U] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1aU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1bU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1cU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x1dU] = ((vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x1eU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x1fU] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x20U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x21U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x22U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x23U] = ((vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x24U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x25U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x26U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__PVT__P_data[0x27U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x18U) | vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out);
    vlSelf->__PVT__P_data[0x28U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 0x10U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                                  >> 8U));
    vlSelf->__PVT__P_data[0x29U] = ((vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                     << 8U) | (vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out 
                                               >> 0x10U));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 5U)));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__PVT__W_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))));
    vlSelf->__PVT__W_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__W_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__PVT__W_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out))));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 4U)));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 3U)));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 2U)));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                                  >> 1U)));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out)));
    vlSelf->__PVT__A_ready = (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                               << 0x37U) | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                             << 0x36U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                         << 0x32U) 
                                                        | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready)) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__A_data[0U] = (IData)((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                          << 0x38U) 
                                         | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                             << 0x30U) 
                                            | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                << 0x28U) 
                                               | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                         << 0x10U) 
                                                                        | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))));
    vlSelf->__PVT__A_data[1U] = (IData)(((((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out)) 
                                           << 0x38U) 
                                          | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                              << 0x30U) 
                                             | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out)))))))))) 
                                         >> 0x20U));
    vlSelf->__PVT__A_data[2U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[3U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[4U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[5U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[6U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[7U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[8U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[9U] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                  << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xaU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xbU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xcU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out))));
    vlSelf->__PVT__A_data[0xdU] = (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                    << 0x18U) | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out))));
}
