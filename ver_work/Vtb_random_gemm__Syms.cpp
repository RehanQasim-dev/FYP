// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm.h"
#include "Vtb_random_gemm___024root.h"
#include "Vtb_random_gemm___024unit.h"
#include "Vtb_random_gemm_systolic_setup__P10.h"
#include "Vtb_random_gemm_systolic_setup__D1_P10.h"
#include "Vtb_random_gemm_systolic.h"

// FUNCTIONS
Vtb_random_gemm__Syms::~Vtb_random_gemm__Syms()
{
}

Vtb_random_gemm__Syms::Vtb_random_gemm__Syms(VerilatedContext* contextp, const char* namep, Vtb_random_gemm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.input_data_setup")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.input_valid_setup")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.super_sys_instance.core0")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.super_sys_instance.core1")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.super_sys_instance.core2")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.super_sys_instance.core3")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.weight_data_setup")}
    , TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup{this, Verilated::catName(namep, "tb_random_gemm.DUT.datapath_instance.weight_valid_setup")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0 = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1 = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2 = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3 = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup;
    TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup = &TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__Vconfigure(true);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__Vconfigure(true);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vconfigure(true);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vconfigure(false);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vconfigure(false);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vconfigure(false);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__Vconfigure(false);
    TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__Vconfigure(false);
}
