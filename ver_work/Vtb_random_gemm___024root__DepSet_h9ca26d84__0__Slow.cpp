// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm___024root.h"

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_static(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_static\n"); );
}

extern const VlWide<14>/*447:0*/ Vtb_random_gemm__ConstPool__CONST_h8e65af17_0;

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_initial__TOP(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 8, 16384, 0, VL_CVT_PACK_STR_NW(14, Vtb_random_gemm__ConstPool__CONST_h8e65af17_0)
                 ,  &(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_final(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_triggers__stl(Vtb_random_gemm___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__stl(Vtb_random_gemm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___eval_stl(Vtb_random_gemm___024root* vlSelf);

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_settle(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_random_gemm___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_random_gemm___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("rtl/tb_random_gemm.sv", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_random_gemm___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__stl(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__act(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_random_gemm.sel_for_test)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__nba(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_random_gemm.sel_for_test)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_random_gemm___024root___ctor_var_reset(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->tb_random_gemm__DOT__system_bus_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__system_bus_rdwr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__system_bus_rd_data = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__system_bus_wr_data = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__system_bus_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__interface_control = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__interface_rdwr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__interface_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__interface_rd_data);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data);
    vlSelf->tb_random_gemm__DOT__test_interface_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__test_interface_wr_data);
    vlSelf->tb_random_gemm__DOT__test_interface_control = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__test_interface_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__test_interface_rdwr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__sel_for_test = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__selected_interface_addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__selected_interface_wr_data);
    vlSelf->tb_random_gemm__DOT__selected_interface_control = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__selected_interface_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__selected_interface_rdwr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__n = 0;
    vlSelf->tb_random_gemm__DOT__m = 0;
    vlSelf->tb_random_gemm__DOT__k = 0;
    vlSelf->tb_random_gemm__DOT__i = 0;
    vlSelf->tb_random_gemm__DOT__j = 0;
    vlSelf->tb_random_gemm__DOT__M = 0;
    vlSelf->tb_random_gemm__DOT__K = 0;
    vlSelf->tb_random_gemm__DOT__N = 0;
    vlSelf->tb_random_gemm__DOT__nsize = 0;
    vlSelf->tb_random_gemm__DOT__msize = 0;
    vlSelf->tb_random_gemm__DOT__ksize = 0;
    vlSelf->tb_random_gemm__DOT__last = 0;
    vlSelf->tb_random_gemm__DOT__first = 0;
    vlSelf->tb_random_gemm__DOT__Tile_A_Address = 0;
    vlSelf->tb_random_gemm__DOT__Tile_B_Address = 0;
    vlSelf->tb_random_gemm__DOT__Tile_C_Address = 0;
    for (int __Vi0 = 0; __Vi0 < 50; ++__Vi0) {
        VL_RAND_RESET_W(400, vlSelf->tb_random_gemm__DOT__A[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 50; ++__Vi0) {
        VL_RAND_RESET_W(400, vlSelf->tb_random_gemm__DOT__B[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 50; ++__Vi0) {
        VL_RAND_RESET_W(1600, vlSelf->tb_random_gemm__DOT__C[__Vi0]);
    }
    vlSelf->tb_random_gemm__DOT__A_addr = 0;
    vlSelf->tb_random_gemm__DOT__B_addr = 0;
    vlSelf->tb_random_gemm__DOT__C_addr = 0;
    vlSelf->tb_random_gemm__DOT__count_rows_compared = 0;
    vlSelf->tb_random_gemm__DOT__total_tiles = 0;
    vlSelf->tb_random_gemm__DOT__n_ = 0;
    vlSelf->tb_random_gemm__DOT__nsize_ = 0;
    vlSelf->tb_random_gemm__DOT__msize_ = 0;
    vlSelf->tb_random_gemm__DOT__N_ = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l = 0;
    vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->tb_random_gemm__DOT____Vlvbound_he49c9c7b__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_random_gemm__DOT____Vlvbound_h2958b785__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_random_gemm__DOT____Vlvbound_hcfef8e25__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT____Vlvbound_hcfef8e25__1 = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty = VL_RAND_RESET_I(4);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result = VL_RAND_RESET_I(4);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_done = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__if_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__wfetch = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel_buffered = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr_store = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_rdwr_store = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__accum_start = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__we_accum_ctrl = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel = VL_RAND_RESET_I(7);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel = VL_RAND_RESET_I(15);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum = VL_RAND_RESET_I(17);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store = VL_RAND_RESET_I(14);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite = VL_RAND_RESET_I(14);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__old_valid_Psum_15 = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch = VL_RAND_RESET_I(8);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en = VL_RAND_RESET_I(8);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(192, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(192, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(7);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal = VL_RAND_RESET_I(11);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal = VL_RAND_RESET_I(15);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__rd_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__empty_ = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[__Vi0]);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__rd_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__empty_ = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[__Vi0]);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__rd_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__empty_ = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[__Vi0]);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1);
    VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__rd_en_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__empty_ = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[__Vi0]);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_Q(48);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_Q(48);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_Q(48);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_Q(48);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal = VL_RAND_RESET_I(24);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr = VL_RAND_RESET_I(3);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rd_en_true = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__ns = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__conf_buff_read = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__prefetch_done = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__if_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__wfetch = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns = VL_RAND_RESET_I(3);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs = VL_RAND_RESET_I(3);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs = VL_RAND_RESET_I(3);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = VL_RAND_RESET_I(3);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_clr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_full = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__fifo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_rdwr = VL_RAND_RESET_I(1);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_mask = VL_RAND_RESET_I(4);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_wr_data = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask = VL_RAND_RESET_I(16);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_wea = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_enb = VL_RAND_RESET_I(16);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web = VL_RAND_RESET_I(16);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_ = VL_RAND_RESET_I(16);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl = VL_RAND_RESET_I(4);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mem[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_random_gemm__DOT__sel_for_test__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
