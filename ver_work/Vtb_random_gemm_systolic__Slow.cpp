// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm_systolic.h"

void Vtb_random_gemm_systolic___ctor_var_reset(Vtb_random_gemm_systolic* vlSelf);

Vtb_random_gemm_systolic::Vtb_random_gemm_systolic(Vtb_random_gemm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_random_gemm_systolic___ctor_var_reset(this);
}

void Vtb_random_gemm_systolic::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_random_gemm_systolic::~Vtb_random_gemm_systolic() {
}
