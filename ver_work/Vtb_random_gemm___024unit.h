// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_random_gemm.h for the primary calling header

#ifndef VERILATED_VTB_RANDOM_GEMM___024UNIT_H_
#define VERILATED_VTB_RANDOM_GEMM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_random_gemm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_random_gemm___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_random_gemm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_random_gemm___024unit(Vtb_random_gemm__Syms* symsp, const char* v__name);
    ~Vtb_random_gemm___024unit();
    VL_UNCOPYABLE(Vtb_random_gemm___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
