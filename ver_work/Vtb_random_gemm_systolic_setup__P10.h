// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_random_gemm.h for the primary calling header

#ifndef VERILATED_VTB_RANDOM_GEMM_SYSTOLIC_SETUP__P10_H_
#define VERILATED_VTB_RANDOM_GEMM_SYSTOLIC_SETUP__P10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_random_gemm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_random_gemm_systolic_setup__P10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_INW(in,127,0,4);
    VL_OUTW(out,127,0,4);
    CData/*7:0*/ __PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*15:0*/ __PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal;
    IData/*23:0*/ __PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal;
    IData/*31:0*/ __PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal;
    QData/*39:0*/ __PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal;
    QData/*47:0*/ __PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal;
    QData/*55:0*/ __PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal;
    QData/*63:0*/ __PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<3>/*71:0*/ __PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<3>/*79:0*/ __PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<3>/*87:0*/ __PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<3>/*95:0*/ __PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<4>/*103:0*/ __PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<4>/*111:0*/ __PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal;
    VlWide<4>/*119:0*/ __PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal;

    // INTERNAL VARIABLES
    Vtb_random_gemm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_random_gemm_systolic_setup__P10(Vtb_random_gemm__Syms* symsp, const char* v__name);
    ~Vtb_random_gemm_systolic_setup__P10();
    VL_UNCOPYABLE(Vtb_random_gemm_systolic_setup__P10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
