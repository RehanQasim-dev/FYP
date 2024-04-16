// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_random_gemm.h for the primary calling header

#ifndef VERILATED_VTB_RANDOM_GEMM_SYSTOLIC_SETUP__D1_P10_H_
#define VERILATED_VTB_RANDOM_GEMM_SYSTOLIC_SETUP__D1_P10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_random_gemm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_random_gemm_systolic_setup__D1_P10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN16(in,15,0);
    VL_OUT16(out,15,0);
    CData/*0:0*/ __PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*2:0*/ __PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*3:0*/ __PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*4:0*/ __PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*5:0*/ __PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*6:0*/ __PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal;
    CData/*7:0*/ __PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*8:0*/ __PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*9:0*/ __PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*10:0*/ __PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*11:0*/ __PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*12:0*/ __PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*13:0*/ __PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal;
    SData/*14:0*/ __PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal;

    // INTERNAL VARIABLES
    Vtb_random_gemm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_random_gemm_systolic_setup__D1_P10(Vtb_random_gemm__Syms* symsp, const char* v__name);
    ~Vtb_random_gemm_systolic_setup__D1_P10();
    VL_UNCOPYABLE(Vtb_random_gemm_systolic_setup__D1_P10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
