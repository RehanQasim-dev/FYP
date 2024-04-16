// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic_setup__D1_P10.h"

VL_ATTR_COLD void Vtb_random_gemm_systolic_setup__D1_P10___ctor_var_reset(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_random_gemm_systolic_setup__D1_P10___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(16);
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(5);
    vlSelf->__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(6);
    vlSelf->__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(7);
    vlSelf->__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(9);
    vlSelf->__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(10);
    vlSelf->__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(11);
    vlSelf->__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(12);
    vlSelf->__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(13);
    vlSelf->__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(14);
    vlSelf->__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(15);
}
