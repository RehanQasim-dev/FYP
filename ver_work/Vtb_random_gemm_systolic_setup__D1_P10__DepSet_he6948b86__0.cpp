// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic_setup__D1_P10.h"

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__0(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((2U & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                  << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((6U & ((IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                  << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xeU & ((IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                    << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1eU & ((IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3eU & ((IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7eU & ((IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xfeU & ((IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1feU & ((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3feU & ((IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7feU & ((IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch));
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
        = vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch;
}

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__1(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__1\n"); );
    // Body
    vlSelf->out = ((0x8000U & ((IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                               << 1U)) | ((0x4000U 
                                           & ((IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                              << 1U)) 
                                          | ((0x2000U 
                                              & ((IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                 << 1U)) 
                                             | ((0x1000U 
                                                 & ((IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                    << 1U)) 
                                                | ((0x800U 
                                                    & ((IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                       << 1U)) 
                                                   | ((0x400U 
                                                       & ((IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                          << 1U)) 
                                                      | ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                             << 1U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                << 1U)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                   << 1U)) 
                                                               | ((0x40U 
                                                                   & ((IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                      << 1U)) 
                                                                  | ((0x20U 
                                                                      & ((IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                         << 1U)) 
                                                                     | ((0x10U 
                                                                         & ((IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                            << 1U)) 
                                                                        | ((8U 
                                                                            & ((IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                               << 1U)) 
                                                                           | ((4U 
                                                                               & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                                << 1U)) 
                                                                              | (((IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__wfetch))))))))))))))));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__0(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__0\n"); );
    // Body
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((2U & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                  << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((6U & ((IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                  << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xeU & ((IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                    << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1eU & ((IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3eU & ((IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7eU & ((IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xfeU & ((IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                     << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1feU & ((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3feU & ((IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7feU & ((IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                      << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x1ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x3ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0x7ffeU & ((IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 1U)) | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en));
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
        = vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en;
}

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__1(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__1\n"); );
    // Body
    vlSelf->out = ((0x8000U & ((IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                               << 1U)) | ((0x4000U 
                                           & ((IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                              << 1U)) 
                                          | ((0x2000U 
                                              & ((IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                 << 1U)) 
                                             | ((0x1000U 
                                                 & ((IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                    << 1U)) 
                                                | ((0x800U 
                                                    & ((IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                       << 1U)) 
                                                   | ((0x400U 
                                                       & ((IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                          << 1U)) 
                                                      | ((0x200U 
                                                          & ((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                             << 1U)) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                << 1U)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                   << 1U)) 
                                                               | ((0x40U 
                                                                   & ((IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                      << 1U)) 
                                                                  | ((0x20U 
                                                                      & ((IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                         << 1U)) 
                                                                     | ((0x10U 
                                                                         & ((IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                            << 1U)) 
                                                                        | ((8U 
                                                                            & ((IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                               << 1U)) 
                                                                           | ((4U 
                                                                               & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                                << 1U)) 
                                                                              | (((IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP.tb_random_gemm__DOT__DUT__DOT__if_en))))))))))))))));
}
