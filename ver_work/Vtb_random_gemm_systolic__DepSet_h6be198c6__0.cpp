// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic.h"

VL_INLINE_OPT void Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__1(Vtb_random_gemm_systolic* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_random_gemm_systolic___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__1\n"); );
    // Body
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
}
