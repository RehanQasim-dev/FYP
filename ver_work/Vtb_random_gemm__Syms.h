// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_RANDOM_GEMM__SYMS_H_
#define VERILATED_VTB_RANDOM_GEMM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_random_gemm.h"

// INCLUDE MODULE CLASSES
#include "Vtb_random_gemm___024root.h"
#include "Vtb_random_gemm___024unit.h"
#include "Vtb_random_gemm_systolic_setup__P10.h"
#include "Vtb_random_gemm_systolic_setup__D1_P10.h"
#include "Vtb_random_gemm_systolic.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_random_gemm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_random_gemm* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_random_gemm___024root      TOP;
    Vtb_random_gemm_systolic_setup__P10 TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup;
    Vtb_random_gemm_systolic_setup__D1_P10 TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup;
    Vtb_random_gemm_systolic       TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0;
    Vtb_random_gemm_systolic       TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1;
    Vtb_random_gemm_systolic       TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2;
    Vtb_random_gemm_systolic       TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3;
    Vtb_random_gemm_systolic_setup__P10 TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup;
    Vtb_random_gemm_systolic_setup__D1_P10 TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup;

    // CONSTRUCTORS
    Vtb_random_gemm__Syms(VerilatedContext* contextp, const char* namep, Vtb_random_gemm* modelp);
    ~Vtb_random_gemm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
