// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm___024root.h"

void Vtb_random_gemm___024root___ctor_var_reset(Vtb_random_gemm___024root* vlSelf);

Vtb_random_gemm___024root::Vtb_random_gemm___024root(Vtb_random_gemm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_random_gemm___024root___ctor_var_reset(this);
}

void Vtb_random_gemm___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_random_gemm___024root::~Vtb_random_gemm___024root() {
}
