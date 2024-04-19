// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic_setup__P10.h"

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__0(Vtb_random_gemm_systolic_setup__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h17e02114__0;
    VlWide<3>/*95:0*/ __Vtemp_hd54240ca__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2d3f7be__0;
    VlWide<3>/*95:0*/ __Vtemp_h09b8b24d__0;
    VlWide<4>/*127:0*/ __Vtemp_h21ef58e2__0;
    VlWide<4>/*127:0*/ __Vtemp_ha88c3731__0;
    VlWide<4>/*127:0*/ __Vtemp_h7c7215c5__0;
    // Body
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xff00U & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                       << 8U)) | (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[0U] 
                                           >> 0x10U)));
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xffff00U & (vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                         << 8U)) | (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[0U] 
                                    >> 0x18U));
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
            << 8U) | (0xffU & vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[1U]));
    vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
        = (((QData)((IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal)) 
            << 8U) | (QData)((IData)((0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[1U] 
                                               >> 8U)))));
    vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xffffffffff00ULL & (vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                 << 8U)) | (QData)((IData)(
                                                           (0xffU 
                                                            & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[1U] 
                                                               >> 0x10U)))));
    vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((0xffffffffffff00ULL & (vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                   << 8U)) | (QData)((IData)(
                                                             (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[1U] 
                                                              >> 0x18U))));
    vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
        = ((vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
            << 8U) | (QData)((IData)((0xffU & vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[2U]))));
    __Vtemp_h17e02114__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U])))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U]))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h17e02114__0[2U] = ((IData)(((((QData)((IData)(
                                                           vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U]))) 
                                         >> 0x20U)) 
                                >> 0x18U);
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U])))) 
            << 8U) | (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[2U] 
                               >> 8U)));
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_h17e02114__0[1U];
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_h17e02114__0[2U];
    __Vtemp_hd54240ca__0[1U] = ((vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_hd54240ca__0[2U] = ((vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (0xff00U 
                                              & (vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                 << 8U)));
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[2U] 
                               >> 0x10U)));
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_hd54240ca__0[1U];
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_hd54240ca__0[2U];
    __Vtemp_ha2d3f7be__0[1U] = ((vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_ha2d3f7be__0[2U] = ((vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (0xffff00U 
                                              & (vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                 << 8U)));
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[2U] 
                      >> 0x18U));
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_ha2d3f7be__0[1U];
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_ha2d3f7be__0[2U];
    __Vtemp_h09b8b24d__0[1U] = ((vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_h09b8b24d__0[2U] = ((vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                              << 8U));
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (0xffU & vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[3U]));
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_h09b8b24d__0[1U];
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_h09b8b24d__0[2U];
    __Vtemp_h21ef58e2__0[1U] = ((vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_h21ef58e2__0[2U] = ((vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                              << 8U));
    __Vtemp_h21ef58e2__0[3U] = (vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                >> 0x18U);
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[3U] 
                               >> 8U)));
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_h21ef58e2__0[1U];
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_h21ef58e2__0[2U];
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
        = __Vtemp_h21ef58e2__0[3U];
    __Vtemp_ha88c3731__0[1U] = ((vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_ha88c3731__0[2U] = ((vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                              << 8U));
    __Vtemp_ha88c3731__0[3U] = ((vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                 >> 0x18U) | (0xff00U 
                                              & (vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                                 << 8U)));
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[3U] 
                               >> 0x10U)));
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_ha88c3731__0[1U];
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_ha88c3731__0[2U];
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
        = __Vtemp_ha88c3731__0[3U];
    __Vtemp_h7c7215c5__0[1U] = ((vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                              << 8U));
    __Vtemp_h7c7215c5__0[2U] = ((vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                 >> 0x18U) | (vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                              << 8U));
    __Vtemp_h7c7215c5__0[3U] = ((vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                 >> 0x18U) | (0xffff00U 
                                              & (vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                                 << 8U)));
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
        = ((vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
            << 8U) | (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[3U] 
                      >> 0x18U));
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
        = __Vtemp_h7c7215c5__0[1U];
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
        = __Vtemp_h7c7215c5__0[2U];
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
        = __Vtemp_h7c7215c5__0[3U];
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
        = (0xffU & (vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[0U] 
                    >> 8U));
}

VL_INLINE_OPT void Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__1(Vtb_random_gemm_systolic_setup__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6b9eb3bd__0;
    // Body
    __Vtemp_h6b9eb3bd__0[0U] = (IData)((((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                     >> 0x30U))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                        >> 0x28U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                           >> 0x20U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                   >> 0x18U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000000U 
                                                                     & (vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                        << 8U)) 
                                                                    | ((0xff0000U 
                                                                        & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                           << 8U)) 
                                                                       | (((IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                           << 8U) 
                                                                          | (0xffU 
                                                                             & vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[0U])))))))))));
    __Vtemp_h6b9eb3bd__0[1U] = (IData)(((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                      >> 0x30U))))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                         >> 0x28U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                            >> 0x20U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                    >> 0x18U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                         << 8U)) 
                                                                     | ((0xff0000U 
                                                                         & ((IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                            << 8U)) 
                                                                        | (((IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                                                            << 8U) 
                                                                           | (0xffU 
                                                                              & vlSymsp->TOP.tb_random_gemm__DOT__interface_rd_data[0U])))))))))) 
                                        >> 0x20U));
    vlSelf->out[0U] = __Vtemp_h6b9eb3bd__0[0U];
    vlSelf->out[1U] = __Vtemp_h6b9eb3bd__0[1U];
    vlSelf->out[2U] = ((0xff000000U & (vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                       << 8U)) | ((0xff0000U 
                                                   & (vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                      << 8U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                                   >> 0x38U))))));
    vlSelf->out[3U] = ((0xff000000U & (vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                       << 8U)) | ((0xff0000U 
                                                   & (vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                                      << 8U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                                         << 8U)) 
                                                     | (vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                        >> 0x18U))));
}
