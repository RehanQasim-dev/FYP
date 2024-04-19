// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_random_gemm__Syms.h"


void Vtb_random_gemm___024root__trace_chg_sub_0(Vtb_random_gemm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_random_gemm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_random_gemm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_random_gemm___024root*>(voidSelf);
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_random_gemm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_random_gemm___024root__trace_chg_sub_0(Vtb_random_gemm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0]),10);
        bufp->chgSData(oldp+1,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[1]),10);
        bufp->chgSData(oldp+2,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[2]),10);
        bufp->chgSData(oldp+3,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[3]),10);
        bufp->chgSData(oldp+4,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[4]),10);
        bufp->chgSData(oldp+5,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[5]),10);
        bufp->chgSData(oldp+6,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[6]),10);
        bufp->chgSData(oldp+7,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[7]),10);
        bufp->chgSData(oldp+8,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[8]),10);
        bufp->chgSData(oldp+9,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[9]),10);
        bufp->chgSData(oldp+10,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[10]),10);
        bufp->chgSData(oldp+11,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[11]),10);
        bufp->chgSData(oldp+12,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[12]),10);
        bufp->chgSData(oldp+13,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[13]),10);
        bufp->chgSData(oldp+14,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[14]),10);
        bufp->chgSData(oldp+15,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[15]),10);
        bufp->chgSData(oldp+16,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_enb),16);
        bufp->chgSData(oldp+17,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web),16);
        bufp->chgSData(oldp+18,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+19,(vlSelf->tb_random_gemm__DOT__system_bus_en));
        bufp->chgBit(oldp+20,(vlSelf->tb_random_gemm__DOT__system_bus_rdwr));
        bufp->chgIData(oldp+21,(vlSelf->tb_random_gemm__DOT__system_bus_wr_data),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_random_gemm__DOT__system_bus_addr),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_random_gemm__DOT__test_interface_addr),32);
        bufp->chgCData(oldp+24,((0xffU & vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U])),8);
        bufp->chgCData(oldp+25,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+26,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+27,((vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+28,((0xffU & vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U])),8);
        bufp->chgCData(oldp+29,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+30,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+31,((vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+32,((0xffU & vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U])),8);
        bufp->chgCData(oldp+33,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+34,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+35,((vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+36,((0xffU & vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U])),8);
        bufp->chgCData(oldp+37,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+38,((0xffU & (vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+39,((vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+40,(vlSelf->tb_random_gemm__DOT__test_interface_control),5);
        bufp->chgBit(oldp+41,(vlSelf->tb_random_gemm__DOT__test_interface_en));
        bufp->chgBit(oldp+42,(vlSelf->tb_random_gemm__DOT__test_interface_rdwr));
        bufp->chgBit(oldp+43,(vlSelf->tb_random_gemm__DOT__sel_for_test));
        bufp->chgIData(oldp+44,(vlSelf->tb_random_gemm__DOT__n),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_random_gemm__DOT__m),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_random_gemm__DOT__k),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_random_gemm__DOT__i),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_random_gemm__DOT__j),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_random_gemm__DOT__M),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_random_gemm__DOT__K),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_random_gemm__DOT__N),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_random_gemm__DOT__nsize),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_random_gemm__DOT__msize),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_random_gemm__DOT__ksize),32);
        bufp->chgBit(oldp+55,(vlSelf->tb_random_gemm__DOT__last));
        bufp->chgBit(oldp+56,(vlSelf->tb_random_gemm__DOT__first));
        bufp->chgIData(oldp+57,(vlSelf->tb_random_gemm__DOT__Tile_A_Address),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_random_gemm__DOT__Tile_B_Address),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_random_gemm__DOT__Tile_C_Address),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_random_gemm__DOT__A_addr),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_random_gemm__DOT__B_addr),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_random_gemm__DOT__C_addr),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_random_gemm__DOT__file_handle),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__test_no),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk6__DOT__l),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_random_gemm__DOT__unnamedblk1__DOT__unnamedblk7__DOT__l),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+71,(vlSelf->tb_random_gemm__DOT__count_rows_compared),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_random_gemm__DOT__n_),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_random_gemm__DOT__nsize_),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_random_gemm__DOT__N_),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_random_gemm__DOT__unnamedblk8__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+76,(vlSelf->tb_random_gemm__DOT__system_bus_rd_data),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_random_gemm__DOT__selected_interface_addr),32);
        bufp->chgWData(oldp+78,(vlSelf->tb_random_gemm__DOT__selected_interface_wr_data),128);
        bufp->chgCData(oldp+82,(vlSelf->tb_random_gemm__DOT__selected_interface_control),5);
        bufp->chgBit(oldp+83,(vlSelf->tb_random_gemm__DOT__selected_interface_en));
        bufp->chgBit(oldp+84,(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr));
        bufp->chgBit(oldp+85,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en));
        bufp->chgBit(oldp+86,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en));
        bufp->chgBit(oldp+87,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en));
        bufp->chgBit(oldp+88,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en));
        bufp->chgBit(oldp+89,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en));
        bufp->chgBit(oldp+90,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en));
        bufp->chgBit(oldp+91,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en));
        bufp->chgCData(oldp+92,((0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U])),8);
        bufp->chgCData(oldp+93,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+94,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+95,((vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+96,((0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U])),8);
        bufp->chgCData(oldp+97,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+98,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+99,((vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+100,((0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U])),8);
        bufp->chgCData(oldp+101,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+102,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+103,((vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+104,((0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U])),8);
        bufp->chgCData(oldp+105,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+106,((0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+107,((vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                                  >> 0x18U)),8);
        bufp->chgSData(oldp+108,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask),16);
        bufp->chgCData(oldp+109,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0]),8);
        bufp->chgCData(oldp+110,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[1]),8);
        bufp->chgCData(oldp+111,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[2]),8);
        bufp->chgCData(oldp+112,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[3]),8);
        bufp->chgCData(oldp+113,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[4]),8);
        bufp->chgCData(oldp+114,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[5]),8);
        bufp->chgCData(oldp+115,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[6]),8);
        bufp->chgCData(oldp+116,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[7]),8);
        bufp->chgCData(oldp+117,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[8]),8);
        bufp->chgCData(oldp+118,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[9]),8);
        bufp->chgCData(oldp+119,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[10]),8);
        bufp->chgCData(oldp+120,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[11]),8);
        bufp->chgCData(oldp+121,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[12]),8);
        bufp->chgCData(oldp+122,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[13]),8);
        bufp->chgCData(oldp+123,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[14]),8);
        bufp->chgCData(oldp+124,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[15]),8);
        bufp->chgSData(oldp+125,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0]),10);
        bufp->chgSData(oldp+126,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[1]),10);
        bufp->chgSData(oldp+127,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[2]),10);
        bufp->chgSData(oldp+128,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[3]),10);
        bufp->chgSData(oldp+129,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[4]),10);
        bufp->chgSData(oldp+130,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[5]),10);
        bufp->chgSData(oldp+131,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[6]),10);
        bufp->chgSData(oldp+132,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[7]),10);
        bufp->chgSData(oldp+133,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[8]),10);
        bufp->chgSData(oldp+134,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[9]),10);
        bufp->chgSData(oldp+135,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[10]),10);
        bufp->chgSData(oldp+136,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[11]),10);
        bufp->chgSData(oldp+137,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[12]),10);
        bufp->chgSData(oldp+138,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[13]),10);
        bufp->chgSData(oldp+139,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[14]),10);
        bufp->chgSData(oldp+140,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[15]),10);
        bufp->chgSData(oldp+141,((0xffffU & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_en))))),16);
        bufp->chgSData(oldp+142,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_wea),16);
        bufp->chgCData(oldp+143,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0]),8);
        bufp->chgCData(oldp+144,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[1]),8);
        bufp->chgCData(oldp+145,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[2]),8);
        bufp->chgCData(oldp+146,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[3]),8);
        bufp->chgCData(oldp+147,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[4]),8);
        bufp->chgCData(oldp+148,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[5]),8);
        bufp->chgCData(oldp+149,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[6]),8);
        bufp->chgCData(oldp+150,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[7]),8);
        bufp->chgCData(oldp+151,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[8]),8);
        bufp->chgCData(oldp+152,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[9]),8);
        bufp->chgCData(oldp+153,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[10]),8);
        bufp->chgCData(oldp+154,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[11]),8);
        bufp->chgCData(oldp+155,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[12]),8);
        bufp->chgCData(oldp+156,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[13]),8);
        bufp->chgCData(oldp+157,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[14]),8);
        bufp->chgCData(oldp+158,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[15]),8);
        bufp->chgCData(oldp+159,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0]),8);
        bufp->chgCData(oldp+160,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[1]),8);
        bufp->chgCData(oldp+161,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[2]),8);
        bufp->chgCData(oldp+162,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[3]),8);
        bufp->chgCData(oldp+163,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[4]),8);
        bufp->chgCData(oldp+164,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[5]),8);
        bufp->chgCData(oldp+165,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[6]),8);
        bufp->chgCData(oldp+166,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[7]),8);
        bufp->chgCData(oldp+167,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[8]),8);
        bufp->chgCData(oldp+168,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[9]),8);
        bufp->chgCData(oldp+169,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[10]),8);
        bufp->chgCData(oldp+170,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[11]),8);
        bufp->chgCData(oldp+171,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[12]),8);
        bufp->chgCData(oldp+172,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[13]),8);
        bufp->chgCData(oldp+173,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[14]),8);
        bufp->chgCData(oldp+174,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[15]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+175,(vlSelf->tb_random_gemm__DOT__interface_control),5);
        bufp->chgBit(oldp+176,(vlSelf->tb_random_gemm__DOT__interface_rdwr));
        bufp->chgBit(oldp+177,(vlSelf->tb_random_gemm__DOT__interface_en));
        bufp->chgIData(oldp+178,(((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))
                                   ? vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr
                                   : vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)),32);
        bufp->chgCData(oldp+179,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[0U])),8);
        bufp->chgCData(oldp+180,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+181,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+182,((vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+183,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[1U])),8);
        bufp->chgCData(oldp+184,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+185,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+186,((vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+187,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[2U])),8);
        bufp->chgCData(oldp+188,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+189,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+190,((vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+191,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[3U])),8);
        bufp->chgCData(oldp+192,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+193,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+194,((vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+195,(vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U]),32);
        bufp->chgIData(oldp+196,(vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U]),32);
        bufp->chgIData(oldp+197,(vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U]),32);
        bufp->chgIData(oldp+198,(vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U]),32);
        bufp->chgWData(oldp+199,(vlSelf->tb_random_gemm__DOT__interface_rd_data),128);
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout) 
                                      >> 2U))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+205,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout))));
        bufp->chgCData(oldp+206,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty),4);
        bufp->chgCData(oldp+207,((0x1fU & vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension)),5);
        bufp->chgCData(oldp+208,((0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+209,((0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                           >> 5U))),5);
        bufp->chgIData(oldp+210,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__fifo
                                 [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr))]),32);
        bufp->chgIData(oldp+211,(vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr),32);
        bufp->chgIData(oldp+212,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__fifo
                                 [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr))]),32);
        bufp->chgIData(oldp+213,(vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride),32);
        bufp->chgIData(oldp+214,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__fifo
                                 [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr))]),32);
        bufp->chgBit(oldp+215,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty));
        bufp->chgBit(oldp+216,(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI));
        bufp->chgBit(oldp+217,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__conf_buff_read));
        bufp->chgBit(oldp+218,((1U & vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control)));
        bufp->chgCData(oldp+219,(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode),2);
        bufp->chgCData(oldp+220,(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result),4);
        bufp->chgBit(oldp+221,(vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_done));
        bufp->chgBit(oldp+222,(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel));
        bufp->chgBit(oldp+223,(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel));
        bufp->chgBit(oldp+224,((1U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control 
                                      >> 1U))));
        bufp->chgCData(oldp+225,(((2U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                         >> 6U)) | 
                                  (1U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                         >> 0xfU)))),2);
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout) 
                                      >> 4U))));
        bufp->chgBit(oldp+227,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+228,(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_en));
        bufp->chgBit(oldp+229,(vlSelf->tb_random_gemm__DOT__DUT__DOT__wfetch));
        bufp->chgBit(oldp+230,(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel_buffered));
        bufp->chgCData(oldp+231,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel),2);
        bufp->chgBit(oldp+232,(vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store));
        bufp->chgBit(oldp+233,(vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store));
        bufp->chgCData(oldp+234,(vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store),5);
        bufp->chgBit(oldp+235,(vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_rdwr_store));
        bufp->chgBit(oldp+236,(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered));
        bufp->chgWData(oldp+237,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data),128);
        bufp->chgWData(oldp+241,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data),128);
        bufp->chgWData(oldp+245,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data),128);
        bufp->chgWData(oldp+249,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data),128);
        bufp->chgBit(oldp+253,(vlSelf->tb_random_gemm__DOT__DUT__DOT__accum_start));
        bufp->chgBit(oldp+254,((4U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+255,((8U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+256,((0xcU < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                 >> 0xaU)))));
        bufp->chgBit(oldp+257,(vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start));
        bufp->chgBit(oldp+258,(vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store));
        bufp->chgIData(oldp+259,(vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr),32);
        bufp->chgBit(oldp+260,(vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store));
        bufp->chgIData(oldp+261,(vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr),32);
        bufp->chgIData(oldp+262,(vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store),32);
        bufp->chgBit(oldp+263,(vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr));
        bufp->chgBit(oldp+264,((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))));
        bufp->chgBit(oldp+265,(vlSelf->tb_random_gemm__DOT__DUT__DOT__we_accum_ctrl));
        bufp->chgIData(oldp+266,(vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr),32);
        bufp->chgCData(oldp+267,(((0x10U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control 
                                            << 4U)) 
                                  | ((8U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control 
                                            << 2U)) 
                                     | (((4U < (0x1fU 
                                                & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                   >> 0xaU))) 
                                         << 2U) | (
                                                   ((8U 
                                                     < 
                                                     (0x1fU 
                                                      & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                         >> 0xaU))) 
                                                    << 1U) 
                                                   | (0xcU 
                                                      < 
                                                      (0x1fU 
                                                       & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                          >> 0xaU)))))))),5);
        bufp->chgCData(oldp+268,(vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout),5);
        bufp->chgBit(oldp+269,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr) 
                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr))));
        bufp->chgBit(oldp+270,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr) 
                                        >> 2U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr) 
                                        >> 2U))) & 
                                ((3U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr)) 
                                 == (3U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr))))));
        bufp->chgCData(oldp+271,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr),3);
        bufp->chgCData(oldp+272,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr),3);
        bufp->chgCData(oldp+273,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo[0]),5);
        bufp->chgCData(oldp+274,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo[1]),5);
        bufp->chgCData(oldp+275,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo[2]),5);
        bufp->chgCData(oldp+276,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo[3]),5);
        bufp->chgBit(oldp+277,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rd_en_true));
        bufp->chgBit(oldp+278,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__cs));
        bufp->chgBit(oldp+279,(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__ns));
        bufp->chgBit(oldp+280,(((~ (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                    >> 0xfU)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__old_valid_Psum_15))));
        bufp->chgBit(oldp+281,((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid)) 
                                      & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum))));
        bufp->chgIData(oldp+282,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U])),24);
        bufp->chgIData(oldp+283,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+284,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+285,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+286,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U])),24);
        bufp->chgIData(oldp+287,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+288,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+289,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+290,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U])),24);
        bufp->chgIData(oldp+291,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+292,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+293,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+294,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U])),24);
        bufp->chgIData(oldp+295,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+296,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+297,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+298,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+299,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+300,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+301,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+302,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+303,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+304,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+305,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+306,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+307,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+308,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+309,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                  >> 8U)),24);
        bufp->chgIData(oldp+310,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+311,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+312,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+313,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                  >> 8U)),24);
        bufp->chgSData(oldp+314,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out),16);
        bufp->chgSData(oldp+315,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out),16);
        bufp->chgCData(oldp+316,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U])),8);
        bufp->chgCData(oldp+317,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+318,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+319,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+320,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U])),8);
        bufp->chgCData(oldp+321,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+322,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+323,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+324,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U])),8);
        bufp->chgCData(oldp+325,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+326,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+327,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+328,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U])),8);
        bufp->chgCData(oldp+329,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+330,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+331,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+332,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U])),8);
        bufp->chgCData(oldp+333,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+334,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+335,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+336,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U])),8);
        bufp->chgCData(oldp+337,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+338,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+339,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+340,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U])),8);
        bufp->chgCData(oldp+341,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+342,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+343,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+344,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U])),8);
        bufp->chgCData(oldp+345,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+346,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+347,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+348,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel),7);
        bufp->chgSData(oldp+349,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel),15);
        bufp->chgBit(oldp+350,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid));
        bufp->chgIData(oldp+351,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum),17);
        bufp->chgSData(oldp+352,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store),14);
        bufp->chgSData(oldp+353,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite),14);
        bufp->chgBit(oldp+354,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                      >> 6U))));
        bufp->chgBit(oldp+355,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+356,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+357,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__old_valid_Psum_15));
        bufp->chgCData(oldp+358,(((8U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                         >> 0xaU)) 
                                  | ((4U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                            >> 7U)) 
                                     | ((2U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                               >> 4U)) 
                                        | (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                                 >> 1U)))))),4);
        bufp->chgCData(oldp+359,(((8U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                         >> 0xaU)) 
                                  | ((4U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                            >> 7U)) 
                                     | ((2U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                               >> 4U)) 
                                        | (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                                 >> 1U)))))),4);
        bufp->chgCData(oldp+360,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid) 
                                   << 3U) | (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid) 
                                              << 2U) 
                                             | (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid) 
                                                 << 1U) 
                                                | (1U 
                                                   & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                                      >> 3U)))))),4);
        bufp->chgBit(oldp+361,((1U & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                      >> 3U))));
        bufp->chgBit(oldp+362,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                      >> 1U))));
        bufp->chgBit(oldp+363,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result))));
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                      >> 1U))));
        bufp->chgBit(oldp+365,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__empty));
        bufp->chgWData(oldp+366,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1),128);
        bufp->chgWData(oldp+370,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1),128);
        bufp->chgBit(oldp+374,((1U & ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                          >> 1U)) & 
                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                       >> 3U)))));
        bufp->chgBit(oldp+375,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__rd_en_1));
        bufp->chgBit(oldp+376,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr))));
        bufp->chgBit(oldp+377,((1U & (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                       >> 1U) & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                                 >> 3U)))));
        bufp->chgBit(oldp+378,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))))));
        bufp->chgCData(oldp+379,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr),5);
        bufp->chgCData(oldp+380,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr),5);
        bufp->chgWData(oldp+381,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[0]),128);
        bufp->chgWData(oldp+385,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[1]),128);
        bufp->chgWData(oldp+389,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[2]),128);
        bufp->chgWData(oldp+393,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[3]),128);
        bufp->chgWData(oldp+397,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[4]),128);
        bufp->chgWData(oldp+401,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[5]),128);
        bufp->chgWData(oldp+405,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[6]),128);
        bufp->chgWData(oldp+409,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[7]),128);
        bufp->chgWData(oldp+413,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[8]),128);
        bufp->chgWData(oldp+417,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[9]),128);
        bufp->chgWData(oldp+421,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[10]),128);
        bufp->chgWData(oldp+425,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[11]),128);
        bufp->chgWData(oldp+429,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[12]),128);
        bufp->chgWData(oldp+433,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[13]),128);
        bufp->chgWData(oldp+437,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[14]),128);
        bufp->chgWData(oldp+441,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[15]),128);
        bufp->chgBit(oldp+445,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))))));
        bufp->chgCData(oldp+446,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr),5);
        bufp->chgCData(oldp+447,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr),5);
        bufp->chgWData(oldp+448,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[0]),128);
        bufp->chgWData(oldp+452,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[1]),128);
        bufp->chgWData(oldp+456,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[2]),128);
        bufp->chgWData(oldp+460,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[3]),128);
        bufp->chgWData(oldp+464,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[4]),128);
        bufp->chgWData(oldp+468,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[5]),128);
        bufp->chgWData(oldp+472,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[6]),128);
        bufp->chgWData(oldp+476,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[7]),128);
        bufp->chgWData(oldp+480,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[8]),128);
        bufp->chgWData(oldp+484,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[9]),128);
        bufp->chgWData(oldp+488,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[10]),128);
        bufp->chgWData(oldp+492,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[11]),128);
        bufp->chgWData(oldp+496,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[12]),128);
        bufp->chgWData(oldp+500,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[13]),128);
        bufp->chgWData(oldp+504,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[14]),128);
        bufp->chgWData(oldp+508,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[15]),128);
        bufp->chgBit(oldp+512,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid));
        bufp->chgBit(oldp+513,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                      >> 5U))));
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result) 
                                      >> 1U))));
        bufp->chgBit(oldp+515,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                      >> 5U))));
        bufp->chgBit(oldp+516,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__empty));
        bufp->chgWData(oldp+517,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1),128);
        bufp->chgWData(oldp+521,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1),128);
        bufp->chgBit(oldp+525,(((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                    >> 5U)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+526,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__rd_en_1));
        bufp->chgBit(oldp+527,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr))));
        bufp->chgBit(oldp+528,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                 >> 5U) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+529,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))))));
        bufp->chgCData(oldp+530,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr),5);
        bufp->chgCData(oldp+531,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr),5);
        bufp->chgWData(oldp+532,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[0]),128);
        bufp->chgWData(oldp+536,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[1]),128);
        bufp->chgWData(oldp+540,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[2]),128);
        bufp->chgWData(oldp+544,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[3]),128);
        bufp->chgWData(oldp+548,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[4]),128);
        bufp->chgWData(oldp+552,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[5]),128);
        bufp->chgWData(oldp+556,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[6]),128);
        bufp->chgWData(oldp+560,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[7]),128);
        bufp->chgWData(oldp+564,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[8]),128);
        bufp->chgWData(oldp+568,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[9]),128);
        bufp->chgWData(oldp+572,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[10]),128);
        bufp->chgWData(oldp+576,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[11]),128);
        bufp->chgWData(oldp+580,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[12]),128);
        bufp->chgWData(oldp+584,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[13]),128);
        bufp->chgWData(oldp+588,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[14]),128);
        bufp->chgWData(oldp+592,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[15]),128);
        bufp->chgBit(oldp+596,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))))));
        bufp->chgCData(oldp+597,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr),5);
        bufp->chgCData(oldp+598,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr),5);
        bufp->chgWData(oldp+599,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[0]),128);
        bufp->chgWData(oldp+603,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[1]),128);
        bufp->chgWData(oldp+607,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[2]),128);
        bufp->chgWData(oldp+611,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[3]),128);
        bufp->chgWData(oldp+615,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[4]),128);
        bufp->chgWData(oldp+619,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[5]),128);
        bufp->chgWData(oldp+623,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[6]),128);
        bufp->chgWData(oldp+627,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[7]),128);
        bufp->chgWData(oldp+631,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[8]),128);
        bufp->chgWData(oldp+635,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[9]),128);
        bufp->chgWData(oldp+639,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[10]),128);
        bufp->chgWData(oldp+643,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[11]),128);
        bufp->chgWData(oldp+647,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[12]),128);
        bufp->chgWData(oldp+651,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[13]),128);
        bufp->chgWData(oldp+655,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[14]),128);
        bufp->chgWData(oldp+659,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[15]),128);
        bufp->chgBit(oldp+663,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid));
        bufp->chgBit(oldp+664,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                      >> 9U))));
        bufp->chgBit(oldp+665,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result) 
                                      >> 2U))));
        bufp->chgBit(oldp+666,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                      >> 9U))));
        bufp->chgBit(oldp+667,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__empty));
        bufp->chgWData(oldp+668,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1),128);
        bufp->chgWData(oldp+672,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1),128);
        bufp->chgBit(oldp+676,(((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                    >> 9U)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+677,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__rd_en_1));
        bufp->chgBit(oldp+678,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr))));
        bufp->chgBit(oldp+679,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                 >> 9U) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+680,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))))));
        bufp->chgCData(oldp+681,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr),5);
        bufp->chgCData(oldp+682,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr),5);
        bufp->chgWData(oldp+683,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[0]),128);
        bufp->chgWData(oldp+687,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[1]),128);
        bufp->chgWData(oldp+691,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[2]),128);
        bufp->chgWData(oldp+695,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[3]),128);
        bufp->chgWData(oldp+699,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[4]),128);
        bufp->chgWData(oldp+703,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[5]),128);
        bufp->chgWData(oldp+707,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[6]),128);
        bufp->chgWData(oldp+711,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[7]),128);
        bufp->chgWData(oldp+715,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[8]),128);
        bufp->chgWData(oldp+719,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[9]),128);
        bufp->chgWData(oldp+723,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[10]),128);
        bufp->chgWData(oldp+727,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[11]),128);
        bufp->chgWData(oldp+731,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[12]),128);
        bufp->chgWData(oldp+735,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[13]),128);
        bufp->chgWData(oldp+739,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[14]),128);
        bufp->chgWData(oldp+743,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[15]),128);
        bufp->chgBit(oldp+747,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))))));
        bufp->chgCData(oldp+748,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr),5);
        bufp->chgCData(oldp+749,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr),5);
        bufp->chgWData(oldp+750,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[0]),128);
        bufp->chgWData(oldp+754,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[1]),128);
        bufp->chgWData(oldp+758,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[2]),128);
        bufp->chgWData(oldp+762,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[3]),128);
        bufp->chgWData(oldp+766,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[4]),128);
        bufp->chgWData(oldp+770,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[5]),128);
        bufp->chgWData(oldp+774,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[6]),128);
        bufp->chgWData(oldp+778,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[7]),128);
        bufp->chgWData(oldp+782,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[8]),128);
        bufp->chgWData(oldp+786,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[9]),128);
        bufp->chgWData(oldp+790,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[10]),128);
        bufp->chgWData(oldp+794,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[11]),128);
        bufp->chgWData(oldp+798,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[12]),128);
        bufp->chgWData(oldp+802,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[13]),128);
        bufp->chgWData(oldp+806,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[14]),128);
        bufp->chgWData(oldp+810,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[15]),128);
        bufp->chgBit(oldp+814,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid));
        bufp->chgBit(oldp+815,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+816,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result) 
                                      >> 3U))));
        bufp->chgBit(oldp+817,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+818,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__empty));
        bufp->chgWData(oldp+819,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1),128);
        bufp->chgWData(oldp+823,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1),128);
        bufp->chgBit(oldp+827,(((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                    >> 0xdU)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+828,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__rd_en_1));
        bufp->chgBit(oldp+829,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr))));
        bufp->chgBit(oldp+830,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_store) 
                                 >> 0xdU) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid))));
        bufp->chgBit(oldp+831,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))))));
        bufp->chgCData(oldp+832,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr),5);
        bufp->chgCData(oldp+833,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr),5);
        bufp->chgWData(oldp+834,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[0]),128);
        bufp->chgWData(oldp+838,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[1]),128);
        bufp->chgWData(oldp+842,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[2]),128);
        bufp->chgWData(oldp+846,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[3]),128);
        bufp->chgWData(oldp+850,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[4]),128);
        bufp->chgWData(oldp+854,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[5]),128);
        bufp->chgWData(oldp+858,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[6]),128);
        bufp->chgWData(oldp+862,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[7]),128);
        bufp->chgWData(oldp+866,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[8]),128);
        bufp->chgWData(oldp+870,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[9]),128);
        bufp->chgWData(oldp+874,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[10]),128);
        bufp->chgWData(oldp+878,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[11]),128);
        bufp->chgWData(oldp+882,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[12]),128);
        bufp->chgWData(oldp+886,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[13]),128);
        bufp->chgWData(oldp+890,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[14]),128);
        bufp->chgWData(oldp+894,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo[15]),128);
        bufp->chgBit(oldp+898,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                                        >> 4U)) != 
                                 (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                        >> 4U))) & 
                                ((0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                 == (0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))))));
        bufp->chgCData(oldp+899,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr),5);
        bufp->chgCData(oldp+900,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr),5);
        bufp->chgWData(oldp+901,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[0]),128);
        bufp->chgWData(oldp+905,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[1]),128);
        bufp->chgWData(oldp+909,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[2]),128);
        bufp->chgWData(oldp+913,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[3]),128);
        bufp->chgWData(oldp+917,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[4]),128);
        bufp->chgWData(oldp+921,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[5]),128);
        bufp->chgWData(oldp+925,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[6]),128);
        bufp->chgWData(oldp+929,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[7]),128);
        bufp->chgWData(oldp+933,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[8]),128);
        bufp->chgWData(oldp+937,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[9]),128);
        bufp->chgWData(oldp+941,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[10]),128);
        bufp->chgWData(oldp+945,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[11]),128);
        bufp->chgWData(oldp+949,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[12]),128);
        bufp->chgWData(oldp+953,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[13]),128);
        bufp->chgWData(oldp+957,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[14]),128);
        bufp->chgWData(oldp+961,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo[15]),128);
        bufp->chgIData(oldp+965,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U])),24);
        bufp->chgIData(oldp+966,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+967,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),24);
        bufp->chgIData(oldp+968,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                << 8U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+969,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+970,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+971,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+972,((0xffffffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal))),24);
        bufp->chgIData(oldp+973,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+974,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+975,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+976,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U])),24);
        bufp->chgIData(oldp+977,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+978,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),24);
        bufp->chgIData(oldp+979,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                << 8U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+980,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+981,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+982,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+983,((0xffffffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal))),24);
        bufp->chgIData(oldp+984,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+985,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+986,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+987,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U])),24);
        bufp->chgIData(oldp+988,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+989,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),24);
        bufp->chgIData(oldp+990,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                << 8U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+991,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+992,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U] 
                                                  >> 0x18U)))),24);
        bufp->chgIData(oldp+993,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+994,((0xffffffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal))),24);
        bufp->chgIData(oldp+995,((0xffffffU & (IData)(
                                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                       >> 0x18U)))),24);
        bufp->chgIData(oldp+996,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+997,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgIData(oldp+998,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U])),24);
        bufp->chgIData(oldp+999,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                << 0x10U) 
                                               | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                  >> 0x10U)))),24);
        bufp->chgIData(oldp+1000,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),24);
        bufp->chgIData(oldp+1001,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1002,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1003,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1004,((0xffffffU & (IData)(
                                                       (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1005,((0xffffffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal))),24);
        bufp->chgIData(oldp+1006,((0xffffffU & (IData)(
                                                       (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                        >> 0x18U)))),24);
        bufp->chgIData(oldp+1007,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1008,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal),24);
        bufp->chgBit(oldp+1009,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1010,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1011,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1012,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1013,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1014,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1015,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1016,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal))));
        bufp->chgBit(oldp+1017,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1018,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1019,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1020,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1021,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1022,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1023,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1024,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1025,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1026,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1027,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal))));
        bufp->chgBit(oldp+1028,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1029,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1030,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1031,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1032,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1033,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1034,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1035,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1036,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1038,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1039,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1040,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1042,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel) 
                                    << 1U) | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel_buffered))),8);
        bufp->chgSData(oldp+1043,((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel) 
                                    << 1U) | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered))),16);
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1051,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgCData(oldp+1052,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))),8);
        bufp->chgCData(oldp+1053,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1054,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1057,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out),8);
        bufp->chgCData(oldp+1062,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out))),8);
        bufp->chgCData(oldp+1063,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1064,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1065,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1066,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1067,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1068,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1069,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x38U)))),8);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1074,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1075,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1076,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+1077,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgCData(oldp+1078,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))),8);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+1087,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch),8);
        bufp->chgCData(oldp+1088,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata))),8);
        bufp->chgCData(oldp+1089,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1090,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1091,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1092,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1093,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1094,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1095,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x38U)))),8);
        bufp->chgIData(oldp+1096,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U])),24);
        bufp->chgIData(oldp+1097,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1098,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1099,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+1100,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U])),24);
        bufp->chgIData(oldp+1101,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1102,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1103,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                   >> 8U)),24);
        bufp->chgCData(oldp+1104,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en),8);
        bufp->chgCData(oldp+1105,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data))),8);
        bufp->chgCData(oldp+1106,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1107,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1108,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1109,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1110,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1111,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1112,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1113,(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch),8);
        bufp->chgCData(oldp+1114,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata))),8);
        bufp->chgCData(oldp+1115,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1116,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1117,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1118,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1119,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1120,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1121,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out),8);
        bufp->chgCData(oldp+1123,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out))),8);
        bufp->chgCData(oldp+1124,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1125,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1126,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1127,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1128,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1129,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1130,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x38U)))),8);
        bufp->chgIData(oldp+1131,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U])),24);
        bufp->chgIData(oldp+1132,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1133,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1134,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+1135,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U])),24);
        bufp->chgIData(oldp+1136,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+1137,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+1138,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                   >> 8U)),24);
        bufp->chgBit(oldp+1139,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 8U))));
        bufp->chgBit(oldp+1140,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 9U))));
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1142,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1146,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1147,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))));
        bufp->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 1U))));
        bufp->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 2U))));
        bufp->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 3U))));
        bufp->chgBit(oldp+1151,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 4U))));
        bufp->chgBit(oldp+1152,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 5U))));
        bufp->chgBit(oldp+1153,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 6U))));
        bufp->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 7U))));
        bufp->chgBit(oldp+1155,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))));
        bufp->chgBit(oldp+1156,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 1U))));
        bufp->chgBit(oldp+1157,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 2U))));
        bufp->chgBit(oldp+1158,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 3U))));
        bufp->chgBit(oldp+1159,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 4U))));
        bufp->chgBit(oldp+1160,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 5U))));
        bufp->chgBit(oldp+1161,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 6U))));
        bufp->chgBit(oldp+1162,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 7U))));
        bufp->chgCData(oldp+1163,(((0xfeU & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel) 
                                             << 1U)) 
                                   | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered))),8);
        bufp->chgBit(oldp+1164,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out))));
        bufp->chgBit(oldp+1165,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 1U))));
        bufp->chgBit(oldp+1166,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 2U))));
        bufp->chgBit(oldp+1167,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 3U))));
        bufp->chgBit(oldp+1168,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 4U))));
        bufp->chgBit(oldp+1169,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 5U))));
        bufp->chgBit(oldp+1170,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 6U))));
        bufp->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 7U))));
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1174,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1175,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1176,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1178,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1180,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch))));
        bufp->chgBit(oldp+1181,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 1U))));
        bufp->chgBit(oldp+1182,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 2U))));
        bufp->chgBit(oldp+1183,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 3U))));
        bufp->chgBit(oldp+1184,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 4U))));
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 5U))));
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 6U))));
        bufp->chgBit(oldp+1187,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch) 
                                       >> 7U))));
        bufp->chgCData(oldp+1188,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U])),8);
        bufp->chgCData(oldp+1189,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1190,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1191,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1192,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U])),8);
        bufp->chgCData(oldp+1193,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1194,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1195,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1196,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U])),8);
        bufp->chgCData(oldp+1197,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1198,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1199,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1200,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U])),8);
        bufp->chgCData(oldp+1201,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1202,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1203,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1204,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U])),8);
        bufp->chgCData(oldp+1205,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1206,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1207,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1208,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U])),8);
        bufp->chgCData(oldp+1209,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1210,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1211,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1212,((0xffU & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel) 
                                            >> 7U))),8);
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 8U))));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 9U))));
        bufp->chgBit(oldp+1215,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1216,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1217,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1218,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1219,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1220,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1225,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1226,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1227,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1228,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgBit(oldp+1229,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch))));
        bufp->chgBit(oldp+1230,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 1U))));
        bufp->chgBit(oldp+1231,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 2U))));
        bufp->chgBit(oldp+1232,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 3U))));
        bufp->chgBit(oldp+1233,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 4U))));
        bufp->chgBit(oldp+1234,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 5U))));
        bufp->chgBit(oldp+1235,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 6U))));
        bufp->chgBit(oldp+1236,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch) 
                                       >> 7U))));
        bufp->chgCData(oldp+1237,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U])),8);
        bufp->chgCData(oldp+1238,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1239,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1240,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1241,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U])),8);
        bufp->chgCData(oldp+1242,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1243,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1244,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                   >> 0x18U)),8);
        bufp->chgBit(oldp+1245,((8U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                 >> 5U)))));
        bufp->chgBit(oldp+1246,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1247,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_full));
        bufp->chgBit(oldp+1248,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1249,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr))))));
        bufp->chgBit(oldp+1250,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1251,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr))))));
        bufp->chgBit(oldp+1252,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1253,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr))))));
        bufp->chgBit(oldp+1254,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1255,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr))))));
        bufp->chgIData(oldp+1256,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control),32);
        bufp->chgBit(oldp+1257,(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr) 
                                 == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr))));
        bufp->chgBit(oldp+1258,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr))))));
        bufp->chgIData(oldp+1259,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension),32);
        bufp->chgBit(oldp+1260,((((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr) 
                                         >> 1U)) != 
                                  (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr) 
                                         >> 1U))) & 
                                 ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr)) 
                                  == (1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr))))));
        bufp->chgCData(oldp+1261,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1262,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1263,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1264,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1265,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1266,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1267,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1268,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1269,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1270,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1271,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1272,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1273,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1274,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1275,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1276,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1277,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1278,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1279,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1280,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1281,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1282,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1283,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1284,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__fifo[1]),32);
        bufp->chgCData(oldp+1285,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr),2);
        bufp->chgCData(oldp+1286,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr),2);
        bufp->chgIData(oldp+1287,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__fifo[0]),32);
        bufp->chgIData(oldp+1288,(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__fifo[1]),32);
        bufp->chgBit(oldp+1289,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__prefetch_done));
        bufp->chgBit(oldp+1290,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__if_en));
        bufp->chgBit(oldp+1291,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__wfetch));
        bufp->chgBit(oldp+1292,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter));
        bufp->chgBit(oldp+1293,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter));
        bufp->chgBit(oldp+1294,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B));
        bufp->chgBit(oldp+1295,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A));
        bufp->chgCData(oldp+1296,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns),3);
        bufp->chgCData(oldp+1297,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs),3);
        bufp->chgIData(oldp+1298,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__count),32);
        bufp->chgCData(oldp+1299,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs),3);
        bufp->chgCData(oldp+1300,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns),3);
        bufp->chgCData(oldp+1301,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count),5);
        bufp->chgBit(oldp+1302,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf));
        bufp->chgBit(oldp+1303,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en));
        bufp->chgBit(oldp+1304,(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_clr));
        bufp->chgCData(oldp+1305,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb
                                  [vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl]),8);
        bufp->chgCData(oldp+1306,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb
                                  [(0xfU & ((IData)(1U) 
                                            + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl)))]),8);
        bufp->chgCData(oldp+1307,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb
                                  [(0xfU & ((IData)(2U) 
                                            + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl)))]),8);
        bufp->chgCData(oldp+1308,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb
                                  [(0xfU & ((IData)(3U) 
                                            + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl)))]),8);
        bufp->chgSData(oldp+1309,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl),16);
        bufp->chgCData(oldp+1310,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[0]),8);
        bufp->chgCData(oldp+1311,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[1]),8);
        bufp->chgCData(oldp+1312,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[2]),8);
        bufp->chgCData(oldp+1313,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[3]),8);
        bufp->chgCData(oldp+1314,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[4]),8);
        bufp->chgCData(oldp+1315,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[5]),8);
        bufp->chgCData(oldp+1316,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[6]),8);
        bufp->chgCData(oldp+1317,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[7]),8);
        bufp->chgCData(oldp+1318,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[8]),8);
        bufp->chgCData(oldp+1319,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[9]),8);
        bufp->chgCData(oldp+1320,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[10]),8);
        bufp->chgCData(oldp+1321,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[11]),8);
        bufp->chgCData(oldp+1322,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[12]),8);
        bufp->chgCData(oldp+1323,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[13]),8);
        bufp->chgCData(oldp+1324,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[14]),8);
        bufp->chgCData(oldp+1325,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta[15]),8);
        bufp->chgCData(oldp+1326,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[0]),8);
        bufp->chgCData(oldp+1327,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[1]),8);
        bufp->chgCData(oldp+1328,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[2]),8);
        bufp->chgCData(oldp+1329,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[3]),8);
        bufp->chgCData(oldp+1330,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[4]),8);
        bufp->chgCData(oldp+1331,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[5]),8);
        bufp->chgCData(oldp+1332,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[6]),8);
        bufp->chgCData(oldp+1333,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[7]),8);
        bufp->chgCData(oldp+1334,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[8]),8);
        bufp->chgCData(oldp+1335,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[9]),8);
        bufp->chgCData(oldp+1336,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[10]),8);
        bufp->chgCData(oldp+1337,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[11]),8);
        bufp->chgCData(oldp+1338,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[12]),8);
        bufp->chgCData(oldp+1339,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[13]),8);
        bufp->chgCData(oldp+1340,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[14]),8);
        bufp->chgCData(oldp+1341,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_doutb[15]),8);
        bufp->chgCData(oldp+1342,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl),4);
        bufp->chgCData(oldp+1343,(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr_ppl),4);
        bufp->chgCData(oldp+1344,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1345,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1346,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1347,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1348,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1349,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1350,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1351,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1352,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1353,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1354,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1355,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1356,((vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1357,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1358,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1359,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1360,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1361,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1362,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1363,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1364,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1365,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1366,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1367,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1368,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1369,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[3U])),8);
        bufp->chgCData(oldp+1370,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1371,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1372,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1373,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1374,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1375,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1376,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1377,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1378,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1379,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1380,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1381,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1382,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1383,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1384,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1385,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1386,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1387,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1388,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1389,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1390,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1391,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1392,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1393,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1394,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1395,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1396,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1397,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1398,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1399,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1400,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1401,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1402,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1403,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1404,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1405,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1406,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1407,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1408,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1409,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1410,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1411,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1412,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1413,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1414,((vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1415,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1416,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1417,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1418,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1419,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1420,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1421,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1422,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1423,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1424,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1425,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1426,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1427,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1428,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1429,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1430,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1431,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1432,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal),8);
        bufp->chgCData(oldp+1433,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal),8);
        bufp->chgCData(oldp+1434,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1435,((0xffU & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1436,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1437,((0xffU & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1438,((vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1439,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1440,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal)),8);
        bufp->chgCData(oldp+1441,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1442,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1443,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[1U])),8);
        bufp->chgCData(oldp+1444,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1445,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal)),8);
        bufp->chgCData(oldp+1446,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1447,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1448,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1449,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1450,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1451,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1452,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1453,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1454,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1455,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1456,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1457,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1458,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1459,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1460,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1461,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1462,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1463,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1464,((vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1465,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1466,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1467,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1468,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1469,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1470,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1471,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1472,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1473,((0xffU & vlSelf->tb_random_gemm__DOT__interface_rd_data[2U])),8);
        bufp->chgCData(oldp+1474,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1475,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1476,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1477,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1478,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1479,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1480,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1481,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1482,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1483,((0xffU & (vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1484,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1485,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1486,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1487,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1488,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1489,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1490,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1491,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1492,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1493,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1494,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1495,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1496,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1497,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1498,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1499,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1500,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1501,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1502,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1503,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1504,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1505,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1506,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1507,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1508,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1509,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1510,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1511,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1512,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1513,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1514,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1515,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1516,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1517,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1518,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1519,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1520,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1521,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1522,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1523,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1524,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1525,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1526,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1527,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1528,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1529,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1530,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1531,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1532,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1533,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1534,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1535,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1536,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1537,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1538,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1539,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1540,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1541,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1542,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1543,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1544,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1545,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1546,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1547,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1548,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1549,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1550,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1551,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1552,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1553,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1554,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1555,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1556,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1557,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1558,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1559,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1560,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1561,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1562,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1563,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1564,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1565,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1566,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1567,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1568,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1569,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1570,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1571,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1572,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U])),8);
        bufp->chgCData(oldp+1573,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1574,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal),8);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal),8);
        bufp->chgCData(oldp+1577,((0xffU & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1578,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1579,((0xffU & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1580,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1581,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal)),8);
        bufp->chgCData(oldp+1582,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1583,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1584,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1585,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal)),8);
        bufp->chgCData(oldp+1586,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1587,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1588,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1589,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1590,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1591,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1592,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1593,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1594,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1595,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1596,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1597,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1598,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1599,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1600,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1601,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1602,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1603,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1604,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1605,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1606,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1607,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1608,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1609,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1610,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1611,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal))),8);
        bufp->chgCData(oldp+1612,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1613,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1614,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+1615,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+1616,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+1617,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+1618,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+1619,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgCData(oldp+1620,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U])),8);
        bufp->chgCData(oldp+1621,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1622,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1623,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1624,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U])),8);
        bufp->chgCData(oldp+1625,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1626,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1627,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1628,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal[2U])),8);
        bufp->chgBit(oldp+1629,(vlSelf->tb_random_gemm__DOT__DUT__DOT__wfetch));
        bufp->chgBit(oldp+1630,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out))));
        bufp->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 1U))));
        bufp->chgBit(oldp+1632,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 2U))));
        bufp->chgBit(oldp+1633,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 3U))));
        bufp->chgBit(oldp+1634,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 4U))));
        bufp->chgBit(oldp+1635,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 5U))));
        bufp->chgBit(oldp+1636,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 6U))));
        bufp->chgBit(oldp+1637,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 7U))));
        bufp->chgBit(oldp+1638,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 8U))));
        bufp->chgBit(oldp+1639,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 9U))));
        bufp->chgBit(oldp+1640,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1641,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1642,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1643,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1644,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1645,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1646,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1647,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1648,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1650,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1651,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1652,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1653,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1654,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1655,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1656,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1657,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1658,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1659,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1660,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1661,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1662,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1663,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1664,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1665,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1666,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1670,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1671,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1675,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1676,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1677,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1678,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1680,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1681,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1683,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1684,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1686,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1687,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1688,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1689,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1690,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1691,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1692,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1693,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1695,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1697,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1699,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1700,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1701,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1702,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1703,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1704,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1705,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1707,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1708,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1709,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1710,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1711,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1712,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1715,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1716,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1717,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1718,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1719,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1720,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1721,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1722,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1723,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1724,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1726,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1727,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal));
        bufp->chgBit(oldp+1728,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal));
        bufp->chgBit(oldp+1729,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1730,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1731,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1732,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1733,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1735,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1737,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1738,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1739,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1742,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1743,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1744,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1745,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1746,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1748,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1749,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1750,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1751,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1752,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1753,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1754,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1755,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1756,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1757,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1758,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1759,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1760,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1761,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1762,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1763,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1764,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1766,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1767,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1769,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1770,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1771,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1772,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1775,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1776,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1777,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1778,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1780,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1781,(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_en));
        bufp->chgBit(oldp+1782,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))));
        bufp->chgBit(oldp+1783,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 1U))));
        bufp->chgBit(oldp+1784,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 2U))));
        bufp->chgBit(oldp+1785,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 3U))));
        bufp->chgBit(oldp+1786,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 4U))));
        bufp->chgBit(oldp+1787,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 5U))));
        bufp->chgBit(oldp+1788,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 6U))));
        bufp->chgBit(oldp+1789,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 7U))));
        bufp->chgBit(oldp+1790,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 8U))));
        bufp->chgBit(oldp+1791,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 9U))));
        bufp->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1793,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1794,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1795,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1796,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1797,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1798,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1799,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1800,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1801,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1803,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1804,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1805,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1806,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1807,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1808,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__10__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1809,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1810,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1811,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1812,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1813,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1814,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1815,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1816,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1817,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1818,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1819,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1820,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__11__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1821,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1822,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1823,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1824,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1827,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1828,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1829,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1831,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1832,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1833,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__12__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1834,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1835,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1836,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1837,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1838,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1839,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1840,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1841,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1842,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1843,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1844,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1845,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1846,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1847,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__13__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1848,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1849,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1850,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1851,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1852,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1853,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1854,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1856,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1858,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1859,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1860,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1862,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__14__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1863,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1864,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1865,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1866,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1867,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1868,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1869,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1872,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1873,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 9U))));
        bufp->chgBit(oldp+1874,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1875,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1876,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1877,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1878,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__15__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1879,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal));
        bufp->chgBit(oldp+1880,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal));
        bufp->chgBit(oldp+1881,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1882,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1883,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1884,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1885,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1886,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1887,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__3__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1888,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1889,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1890,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1891,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1892,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__4__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1894,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1896,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1898,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__5__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1899,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1900,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1901,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1902,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1903,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1904,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1905,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__6__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1906,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1907,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1908,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1909,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1910,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1911,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1912,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1913,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__7__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1914,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1915,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1916,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1918,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1919,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1920,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1921,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__8__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1923,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgBit(oldp+1924,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal))));
        bufp->chgBit(oldp+1925,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 1U))));
        bufp->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 2U))));
        bufp->chgBit(oldp+1927,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 3U))));
        bufp->chgBit(oldp+1928,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 4U))));
        bufp->chgBit(oldp+1929,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 5U))));
        bufp->chgBit(oldp+1930,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 6U))));
        bufp->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 7U))));
        bufp->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.__PVT__genblk1__BRA__9__KET____DOT__pipeline_gen_instance__DOT__internal) 
                                       >> 8U))));
        bufp->chgCData(oldp+1933,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))),8);
        bufp->chgCData(oldp+1934,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out))),8);
        bufp->chgCData(oldp+1935,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0U])),8);
        bufp->chgCData(oldp+1936,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1937,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1938,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1939,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[1U])),8);
        bufp->chgCData(oldp+1940,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1941,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1942,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1943,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[2U])),8);
        bufp->chgCData(oldp+1944,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1945,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1946,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1947,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[3U])),8);
        bufp->chgCData(oldp+1948,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1949,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1950,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1951,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[4U])),8);
        bufp->chgCData(oldp+1952,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1953,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1954,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1955,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[5U])),8);
        bufp->chgCData(oldp+1956,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1957,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1958,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1959,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[6U])),8);
        bufp->chgCData(oldp+1960,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1961,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1962,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1963,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[7U])),8);
        bufp->chgCData(oldp+1964,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1965,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1966,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1967,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[8U])),8);
        bufp->chgCData(oldp+1968,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1969,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1970,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1971,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[9U])),8);
        bufp->chgCData(oldp+1972,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1973,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1974,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1975,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xaU])),8);
        bufp->chgCData(oldp+1976,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1977,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1978,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1979,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xbU])),8);
        bufp->chgCData(oldp+1980,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1981,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1982,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1983,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xcU])),8);
        bufp->chgCData(oldp+1984,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1985,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1986,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1987,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xdU])),8);
        bufp->chgCData(oldp+1988,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1989,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1990,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1991,((0x7fU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready))),7);
        bufp->chgCData(oldp+1992,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 7U)))),7);
        bufp->chgCData(oldp+1993,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0xeU)))),7);
        bufp->chgCData(oldp+1994,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0x15U)))),7);
        bufp->chgCData(oldp+1995,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0x1cU)))),7);
        bufp->chgCData(oldp+1996,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0x23U)))),7);
        bufp->chgCData(oldp+1997,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0x2aU)))),7);
        bufp->chgCData(oldp+1998,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__A_ready 
                                                    >> 0x31U)))),7);
        bufp->chgCData(oldp+1999,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0U])),8);
        bufp->chgCData(oldp+2000,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2001,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2002,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2003,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[1U])),8);
        bufp->chgCData(oldp+2004,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2005,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2006,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2007,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[2U])),8);
        bufp->chgCData(oldp+2008,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2009,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2010,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2011,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[3U])),8);
        bufp->chgCData(oldp+2012,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2013,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2014,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2015,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[4U])),8);
        bufp->chgCData(oldp+2016,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2017,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2018,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2019,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[5U])),8);
        bufp->chgCData(oldp+2020,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2021,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2022,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2023,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[6U])),8);
        bufp->chgCData(oldp+2024,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2025,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2026,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2027,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[7U])),8);
        bufp->chgCData(oldp+2028,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2029,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2030,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2031,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[8U])),8);
        bufp->chgCData(oldp+2032,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2033,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2034,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2035,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[9U])),8);
        bufp->chgCData(oldp+2036,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2037,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2038,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2039,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xaU])),8);
        bufp->chgCData(oldp+2040,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2041,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2042,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2043,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xbU])),8);
        bufp->chgCData(oldp+2044,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2045,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2046,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2047,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xcU])),8);
        bufp->chgCData(oldp+2048,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2049,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2050,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2051,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xdU])),8);
        bufp->chgCData(oldp+2052,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2053,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2054,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2055,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready))),8);
        bufp->chgCData(oldp+2056,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+2057,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+2058,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+2059,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+2060,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+2061,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__W_ready 
                                                    >> 0x30U)))),8);
        bufp->chgIData(oldp+2062,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0U])),24);
        bufp->chgIData(oldp+2063,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2064,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2065,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2066,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[3U])),24);
        bufp->chgIData(oldp+2067,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2068,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2069,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2070,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[6U])),24);
        bufp->chgIData(oldp+2071,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[7U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[6U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2072,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[8U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[7U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2073,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[8U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2074,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[9U])),24);
        bufp->chgIData(oldp+2075,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xaU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[9U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2076,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xbU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xaU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2077,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xbU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2078,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xcU])),24);
        bufp->chgIData(oldp+2079,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xdU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xcU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2080,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xeU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xdU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2081,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xeU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2082,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xfU])),24);
        bufp->chgIData(oldp+2083,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x10U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0xfU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2084,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x11U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x10U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2085,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x11U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2086,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x12U])),24);
        bufp->chgIData(oldp+2087,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x13U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x12U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2088,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x14U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x13U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2089,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x14U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2090,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x15U])),24);
        bufp->chgIData(oldp+2091,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x16U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x15U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2092,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x17U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x16U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2093,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x17U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2094,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x18U])),24);
        bufp->chgIData(oldp+2095,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x19U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x18U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2096,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1aU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x19U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2097,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1aU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2098,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1bU])),24);
        bufp->chgIData(oldp+2099,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1cU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1bU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2100,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1dU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1cU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2101,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1dU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2102,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1eU])),24);
        bufp->chgIData(oldp+2103,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1fU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1eU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2104,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x20U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x1fU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2105,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x20U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2106,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x21U])),24);
        bufp->chgIData(oldp+2107,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x22U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x21U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2108,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x23U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x22U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2109,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x23U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2110,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x24U])),24);
        bufp->chgIData(oldp+2111,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x25U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x24U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2112,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x26U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x25U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2113,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x26U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2114,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x27U])),24);
        bufp->chgIData(oldp+2115,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x28U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x27U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2116,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x29U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x28U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2117,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__PVT__P_data[0x29U] 
                                   >> 8U)),24);
        bufp->chgBit(oldp+2118,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))));
        bufp->chgBit(oldp+2119,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2120,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U])),8);
        bufp->chgCData(oldp+2121,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2122,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2123,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2124,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U])),8);
        bufp->chgCData(oldp+2125,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2126,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2127,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2128,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2129,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2130,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2131,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2132,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2133,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2135,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2138,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2139,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2140,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2142,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2144,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2145,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2146,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2147,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2148,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2149,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2150,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2151,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2152,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U])),8);
        bufp->chgCData(oldp+2153,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2154,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2155,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2156,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2157,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2158,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2159,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2160,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2161,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2162,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2163,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2164,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2165,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2166,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2167,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2168,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2169,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2170,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2171,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2172,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2173,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2174,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2175,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2176,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 1U))));
        bufp->chgBit(oldp+2177,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2178,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2179,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2180,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2182,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2183,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2184,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2185,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2186,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2187,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2188,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2189,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2190,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2191,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2192,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2193,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2194,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2195,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2196,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2197,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2198,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2199,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2200,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2201,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2202,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2203,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2205,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2206,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2207,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2208,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2209,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2210,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2211,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2212,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2213,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2214,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2215,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2216,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2217,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2218,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2219,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2220,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2221,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2222,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2223,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2225,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2226,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 2U))));
        bufp->chgBit(oldp+2227,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2228,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2229,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2230,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2231,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2232,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2233,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2234,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2235,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2236,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2237,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2238,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2239,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2240,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2241,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2242,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2243,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2245,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2246,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2247,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2248,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2249,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2250,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2251,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2252,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2253,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2255,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2256,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2257,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2258,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2259,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2260,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2261,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2262,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2263,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2264,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2265,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2266,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2267,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2268,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2269,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2270,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2271,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2272,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2273,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2274,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2275,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2276,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 3U))));
        bufp->chgBit(oldp+2277,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2278,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2279,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2280,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2282,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2283,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2284,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2285,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2286,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2287,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2288,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2289,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2290,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2291,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2292,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2293,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2294,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2295,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2296,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2297,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2298,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2299,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2300,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2301,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2302,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2303,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2305,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2306,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2307,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2308,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2309,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2310,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2311,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2312,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2313,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2314,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2315,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2316,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2317,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2318,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2319,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2320,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2321,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2322,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2323,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2324,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2325,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2326,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 4U))));
        bufp->chgBit(oldp+2327,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2328,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U])),8);
        bufp->chgCData(oldp+2329,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2330,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2331,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2332,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2333,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2334,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2335,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2336,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2337,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2338,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2339,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2340,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2341,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2342,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2343,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2344,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2345,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2346,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2347,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2348,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2349,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2350,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2351,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2352,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2353,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2355,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2356,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2357,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2358,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2359,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2360,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2361,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2362,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2363,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2364,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2365,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2366,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2367,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2368,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2369,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2370,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2371,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2372,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2373,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2374,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2375,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2376,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 5U))));
        bufp->chgBit(oldp+2377,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2378,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2379,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2380,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2382,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2383,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2384,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2385,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2386,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2387,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2388,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2389,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2390,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2391,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2392,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2393,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2395,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2396,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2397,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2398,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2399,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2400,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2401,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2402,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2403,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2405,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2406,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2407,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2408,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2409,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2410,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2411,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2412,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2413,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2414,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2415,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2416,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2417,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2418,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2419,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2420,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2421,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2422,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2423,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2424,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2425,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2426,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 6U))));
        bufp->chgBit(oldp+2427,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2428,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2429,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2430,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2432,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2433,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2434,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2435,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2436,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2437,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2438,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2439,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2440,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2441,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2442,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2443,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2444,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2445,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2446,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2447,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2448,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2449,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2450,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2451,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2452,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2453,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2456,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2457,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2458,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2459,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2460,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2461,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2462,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2463,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2464,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2465,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2466,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2467,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2468,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2469,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2470,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2471,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2472,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2473,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2474,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2475,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2476,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                       >> 7U))));
        bufp->chgBit(oldp+2477,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2478,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2479,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2480,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2481,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2482,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2483,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2484,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2485,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2486,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2487,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2488,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2489,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2490,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2491,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2492,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2493,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2494,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2495,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2496,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2497,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2498,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2499,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2500,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2501,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2502,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2503,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2504,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2505,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2506,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2507,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2508,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2509,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2510,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2511,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2513,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2514,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2515,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2516,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2517,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2518,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2519,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2520,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2521,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2522,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2523,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2524,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2525,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgCData(oldp+2526,((0xffU & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2527,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2528,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2529,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2530,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2531,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2532,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2533,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2534,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+2535,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))),8);
        bufp->chgCData(oldp+2536,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0U])),8);
        bufp->chgCData(oldp+2537,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2538,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2539,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2540,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[1U])),8);
        bufp->chgCData(oldp+2541,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2542,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2543,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2544,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[2U])),8);
        bufp->chgCData(oldp+2545,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2546,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2547,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2548,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[3U])),8);
        bufp->chgCData(oldp+2549,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2550,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2551,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2552,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[4U])),8);
        bufp->chgCData(oldp+2553,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2554,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2555,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2556,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[5U])),8);
        bufp->chgCData(oldp+2557,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2558,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2559,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2560,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[6U])),8);
        bufp->chgCData(oldp+2561,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2562,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2563,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2564,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[7U])),8);
        bufp->chgCData(oldp+2565,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2566,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2567,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2568,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[8U])),8);
        bufp->chgCData(oldp+2569,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2570,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2571,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2572,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[9U])),8);
        bufp->chgCData(oldp+2573,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2574,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2575,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2576,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xaU])),8);
        bufp->chgCData(oldp+2577,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2578,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2579,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2580,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xbU])),8);
        bufp->chgCData(oldp+2581,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2582,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2583,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2584,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xcU])),8);
        bufp->chgCData(oldp+2585,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2586,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2587,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2588,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xdU])),8);
        bufp->chgCData(oldp+2589,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2590,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2591,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2592,((0x7fU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready))),7);
        bufp->chgCData(oldp+2593,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 7U)))),7);
        bufp->chgCData(oldp+2594,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0xeU)))),7);
        bufp->chgCData(oldp+2595,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0x15U)))),7);
        bufp->chgCData(oldp+2596,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0x1cU)))),7);
        bufp->chgCData(oldp+2597,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0x23U)))),7);
        bufp->chgCData(oldp+2598,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0x2aU)))),7);
        bufp->chgCData(oldp+2599,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__A_ready 
                                                    >> 0x31U)))),7);
        bufp->chgCData(oldp+2600,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0U])),8);
        bufp->chgCData(oldp+2601,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2602,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2603,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2604,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[1U])),8);
        bufp->chgCData(oldp+2605,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2606,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2607,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2608,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[2U])),8);
        bufp->chgCData(oldp+2609,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2610,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2611,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2612,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[3U])),8);
        bufp->chgCData(oldp+2613,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2614,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2615,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2616,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[4U])),8);
        bufp->chgCData(oldp+2617,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2618,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2619,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2620,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[5U])),8);
        bufp->chgCData(oldp+2621,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2622,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2623,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2624,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[6U])),8);
        bufp->chgCData(oldp+2625,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2626,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2627,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2628,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[7U])),8);
        bufp->chgCData(oldp+2629,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2630,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2631,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2632,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[8U])),8);
        bufp->chgCData(oldp+2633,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2634,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2635,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2636,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[9U])),8);
        bufp->chgCData(oldp+2637,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2638,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2639,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2640,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xaU])),8);
        bufp->chgCData(oldp+2641,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2642,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2643,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2644,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xbU])),8);
        bufp->chgCData(oldp+2645,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2646,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2647,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2648,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xcU])),8);
        bufp->chgCData(oldp+2649,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2650,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2651,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2652,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xdU])),8);
        bufp->chgCData(oldp+2653,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2654,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2655,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2656,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready))),8);
        bufp->chgCData(oldp+2657,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+2658,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+2659,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+2660,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+2661,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+2662,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__W_ready 
                                                    >> 0x30U)))),8);
        bufp->chgIData(oldp+2663,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0U])),24);
        bufp->chgIData(oldp+2664,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2665,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2666,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2667,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[3U])),24);
        bufp->chgIData(oldp+2668,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2669,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2670,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2671,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[6U])),24);
        bufp->chgIData(oldp+2672,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[7U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[6U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2673,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[8U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[7U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2674,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[8U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2675,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[9U])),24);
        bufp->chgIData(oldp+2676,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xaU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[9U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2677,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xbU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xaU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2678,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xbU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2679,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xcU])),24);
        bufp->chgIData(oldp+2680,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xdU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xcU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2681,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xeU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xdU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2682,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xeU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2683,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xfU])),24);
        bufp->chgIData(oldp+2684,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x10U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0xfU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2685,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x11U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x10U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2686,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x11U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2687,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x12U])),24);
        bufp->chgIData(oldp+2688,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x13U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x12U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2689,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x14U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x13U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2690,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x14U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2691,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x15U])),24);
        bufp->chgIData(oldp+2692,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x16U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x15U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2693,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x17U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x16U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2694,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x17U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2695,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x18U])),24);
        bufp->chgIData(oldp+2696,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x19U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x18U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2697,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1aU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x19U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2698,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1aU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2699,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1bU])),24);
        bufp->chgIData(oldp+2700,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1cU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1bU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2701,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1dU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1cU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2702,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1dU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2703,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1eU])),24);
        bufp->chgIData(oldp+2704,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1fU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1eU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2705,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x20U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x1fU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2706,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x20U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2707,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x21U])),24);
        bufp->chgIData(oldp+2708,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x22U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x21U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2709,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x23U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x22U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2710,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x23U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2711,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x24U])),24);
        bufp->chgIData(oldp+2712,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x25U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x24U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2713,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x26U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x25U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2714,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x26U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+2715,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x27U])),24);
        bufp->chgIData(oldp+2716,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x28U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x27U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+2717,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x29U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x28U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+2718,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__PVT__P_data[0x29U] 
                                   >> 8U)),24);
        bufp->chgBit(oldp+2719,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out))));
        bufp->chgBit(oldp+2720,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2721,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out))),8);
        bufp->chgCData(oldp+2722,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2723,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2724,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2725,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U])),8);
        bufp->chgCData(oldp+2726,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2727,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2728,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2729,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2730,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2732,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2733,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2734,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2735,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2736,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2737,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2738,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2739,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2740,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2741,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2742,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2743,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2744,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2745,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2746,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2747,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2748,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2749,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2750,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2751,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2752,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2753,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U])),8);
        bufp->chgCData(oldp+2754,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2755,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2756,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2757,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2758,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2759,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2760,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2761,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2762,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2763,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2764,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2765,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2766,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2767,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2768,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2769,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2770,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2771,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2772,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2773,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2774,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2775,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2776,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2777,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 1U))));
        bufp->chgBit(oldp+2778,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2779,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+2780,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2781,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2782,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2783,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2784,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2785,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2786,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2787,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2788,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2789,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2790,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2791,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2792,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2793,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2794,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2795,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2796,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2797,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2798,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2799,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2800,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2801,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2802,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2803,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2804,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2805,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2806,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2807,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2808,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2809,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2810,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2811,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2812,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2813,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2814,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2815,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2816,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2817,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2818,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2819,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2820,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2821,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2822,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2823,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2824,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2825,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2826,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2827,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 2U))));
        bufp->chgBit(oldp+2828,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2829,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+2830,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2831,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2832,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2834,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2835,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2836,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2837,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2838,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2839,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2840,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2841,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2842,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2843,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2844,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2845,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2846,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2847,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2848,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2849,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2850,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2851,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2852,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2853,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2854,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2855,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2856,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2857,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2858,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2859,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2860,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2861,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2862,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2863,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2864,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2865,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2866,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2867,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2868,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2869,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2870,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2871,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2872,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2873,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2874,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2875,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2876,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2877,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 3U))));
        bufp->chgBit(oldp+2878,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2879,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+2880,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2881,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2882,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2883,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2884,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2885,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2886,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2887,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2888,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2889,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2890,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2891,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2892,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2893,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2894,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2895,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2896,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2897,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2898,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2899,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2900,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2901,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2902,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2903,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2904,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2905,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2906,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2907,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2908,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2909,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2910,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2911,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2912,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2913,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2914,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2915,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2916,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2917,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2918,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2919,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2920,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2921,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2922,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2923,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2924,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2925,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2926,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2927,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 4U))));
        bufp->chgBit(oldp+2928,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2929,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+2930,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2932,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2933,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2934,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2935,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2936,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2937,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2938,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2939,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2940,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2941,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2942,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2943,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2944,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2945,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2946,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2947,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2948,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2949,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2950,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2951,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2952,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2953,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2954,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2955,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2956,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2957,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2958,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2959,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2960,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2961,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2962,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2963,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2964,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2965,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2966,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2967,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2968,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2969,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2970,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2971,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2972,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2973,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2974,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2975,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2976,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2977,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 5U))));
        bufp->chgBit(oldp+2978,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2979,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+2980,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2981,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2982,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2983,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2984,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2985,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2986,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2987,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2988,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2989,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2990,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2991,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2992,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2993,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+2994,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+2995,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+2996,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+2997,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+2998,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+2999,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3000,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3001,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3002,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3003,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3004,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3005,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3006,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3007,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3008,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3009,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3010,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3011,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3012,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3013,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3014,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3015,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3016,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3017,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3018,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3019,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3020,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3021,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3022,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3023,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3024,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3025,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3026,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3027,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 6U))));
        bufp->chgBit(oldp+3028,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3029,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+3030,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3031,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3032,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3033,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3034,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3035,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3036,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3037,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3038,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3039,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3040,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3041,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3042,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3043,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3044,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3045,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3046,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3047,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3048,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3049,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3050,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3051,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3052,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3053,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3054,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3055,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3056,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3057,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3058,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3059,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3060,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3061,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3062,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3063,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3064,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3065,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3066,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3067,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3068,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3069,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3070,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3071,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3072,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3073,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3074,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3075,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3076,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3077,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_en_out) 
                                       >> 7U))));
        bufp->chgBit(oldp+3078,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3079,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.if_data_out 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+3080,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3081,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3082,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3083,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3084,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3085,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3086,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3087,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3088,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3089,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3090,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3091,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3092,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3093,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3094,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3095,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3096,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3097,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3098,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3099,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3100,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3101,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3102,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3103,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3104,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3105,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3106,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3107,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3108,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3109,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3110,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3111,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3112,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3113,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3114,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3115,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3116,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3117,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3118,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3119,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3120,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3121,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3122,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3123,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3124,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3125,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3126,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+3127,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U])),24);
        bufp->chgIData(oldp+3128,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3129,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3130,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3131,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U])),24);
        bufp->chgIData(oldp+3132,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3133,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3134,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                   >> 8U)),24);
        bufp->chgCData(oldp+3135,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))),8);
        bufp->chgCData(oldp+3136,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3137,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3138,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3139,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3140,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3141,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3142,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3143,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3144,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0U])),8);
        bufp->chgCData(oldp+3145,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3146,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3147,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3148,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[1U])),8);
        bufp->chgCData(oldp+3149,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3150,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3151,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3152,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[2U])),8);
        bufp->chgCData(oldp+3153,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3154,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3155,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3156,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[3U])),8);
        bufp->chgCData(oldp+3157,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3158,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3159,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3160,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[4U])),8);
        bufp->chgCData(oldp+3161,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3162,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3163,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3164,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[5U])),8);
        bufp->chgCData(oldp+3165,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3166,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3167,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3168,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[6U])),8);
        bufp->chgCData(oldp+3169,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3170,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3171,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3172,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[7U])),8);
        bufp->chgCData(oldp+3173,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3174,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3175,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3176,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[8U])),8);
        bufp->chgCData(oldp+3177,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3178,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3179,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3180,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[9U])),8);
        bufp->chgCData(oldp+3181,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3182,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3183,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3184,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xaU])),8);
        bufp->chgCData(oldp+3185,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3186,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3187,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3188,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xbU])),8);
        bufp->chgCData(oldp+3189,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3190,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3191,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3192,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xcU])),8);
        bufp->chgCData(oldp+3193,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3194,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3195,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3196,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xdU])),8);
        bufp->chgCData(oldp+3197,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3198,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3199,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3200,((0x7fU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready))),7);
        bufp->chgCData(oldp+3201,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 7U)))),7);
        bufp->chgCData(oldp+3202,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0xeU)))),7);
        bufp->chgCData(oldp+3203,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0x15U)))),7);
        bufp->chgCData(oldp+3204,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0x1cU)))),7);
        bufp->chgCData(oldp+3205,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0x23U)))),7);
        bufp->chgCData(oldp+3206,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0x2aU)))),7);
        bufp->chgCData(oldp+3207,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__A_ready 
                                                    >> 0x31U)))),7);
        bufp->chgCData(oldp+3208,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0U])),8);
        bufp->chgCData(oldp+3209,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3210,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3211,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3212,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[1U])),8);
        bufp->chgCData(oldp+3213,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3214,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3215,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3216,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[2U])),8);
        bufp->chgCData(oldp+3217,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3218,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3219,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3220,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[3U])),8);
        bufp->chgCData(oldp+3221,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3222,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3223,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3224,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[4U])),8);
        bufp->chgCData(oldp+3225,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3226,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3227,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3228,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[5U])),8);
        bufp->chgCData(oldp+3229,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3230,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3231,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3232,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[6U])),8);
        bufp->chgCData(oldp+3233,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3234,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3235,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3236,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[7U])),8);
        bufp->chgCData(oldp+3237,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3238,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3239,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3240,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[8U])),8);
        bufp->chgCData(oldp+3241,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3242,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3243,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3244,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[9U])),8);
        bufp->chgCData(oldp+3245,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3246,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3247,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3248,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xaU])),8);
        bufp->chgCData(oldp+3249,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3250,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3251,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3252,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xbU])),8);
        bufp->chgCData(oldp+3253,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3254,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3255,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3256,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xcU])),8);
        bufp->chgCData(oldp+3257,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3258,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3259,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3260,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xdU])),8);
        bufp->chgCData(oldp+3261,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3262,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3263,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3264,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready))),8);
        bufp->chgCData(oldp+3265,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3266,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3267,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+3268,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+3269,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+3270,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__W_ready 
                                                    >> 0x30U)))),8);
        bufp->chgIData(oldp+3271,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0U])),24);
        bufp->chgIData(oldp+3272,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3273,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3274,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3275,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[3U])),24);
        bufp->chgIData(oldp+3276,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3277,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3278,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3279,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[6U])),24);
        bufp->chgIData(oldp+3280,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[7U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[6U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3281,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[8U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[7U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3282,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[8U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3283,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[9U])),24);
        bufp->chgIData(oldp+3284,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xaU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[9U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3285,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xbU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xaU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3286,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xbU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3287,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xcU])),24);
        bufp->chgIData(oldp+3288,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xdU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xcU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3289,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xeU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xdU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3290,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xeU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3291,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xfU])),24);
        bufp->chgIData(oldp+3292,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x10U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0xfU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3293,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x11U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x10U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3294,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x11U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3295,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x12U])),24);
        bufp->chgIData(oldp+3296,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x13U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x12U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3297,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x14U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x13U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3298,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x14U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3299,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x15U])),24);
        bufp->chgIData(oldp+3300,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x16U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x15U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3301,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x17U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x16U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3302,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x17U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3303,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x18U])),24);
        bufp->chgIData(oldp+3304,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x19U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x18U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3305,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1aU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x19U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3306,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1aU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3307,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1bU])),24);
        bufp->chgIData(oldp+3308,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1cU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1bU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3309,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1dU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1cU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3310,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1dU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3311,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1eU])),24);
        bufp->chgIData(oldp+3312,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1fU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1eU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3313,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x20U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x1fU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3314,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x20U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3315,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x21U])),24);
        bufp->chgIData(oldp+3316,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x22U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x21U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3317,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x23U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x22U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3318,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x23U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3319,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x24U])),24);
        bufp->chgIData(oldp+3320,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x25U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x24U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3321,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x26U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x25U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3322,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x26U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3323,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x27U])),24);
        bufp->chgIData(oldp+3324,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x28U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x27U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3325,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x29U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x28U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3326,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__PVT__P_data[0x29U] 
                                   >> 8U)),24);
        bufp->chgBit(oldp+3327,((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en))));
        bufp->chgBit(oldp+3328,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3329,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data))),8);
        bufp->chgCData(oldp+3330,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3331,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3332,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3333,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata))),8);
        bufp->chgCData(oldp+3334,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3335,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U])),24);
        bufp->chgIData(oldp+3336,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3337,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3338,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3339,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3340,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3341,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3342,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3343,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3344,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3345,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3346,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3347,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3348,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3349,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3350,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3351,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3352,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3353,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3354,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3355,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3356,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3357,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+3358,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3359,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3360,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3361,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3362,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3363,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3364,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3365,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+3366,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3367,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U])),24);
        bufp->chgIData(oldp+3368,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3369,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3370,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3371,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3372,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3373,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+3374,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3375,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3376,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3377,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3378,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3379,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3380,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3381,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+3382,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3383,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3384,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3385,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3386,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3387,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3388,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3389,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+3390,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3391,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3392,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3393,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 1U))));
        bufp->chgBit(oldp+3394,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3395,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3396,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3397,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3398,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3399,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3400,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3401,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3402,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3403,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3404,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3405,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3406,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3407,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3408,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3409,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3410,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3411,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3412,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3413,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3414,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3415,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3416,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3417,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3418,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3419,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3420,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3421,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3422,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3423,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3424,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3425,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3426,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3427,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3428,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3429,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3430,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3431,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3432,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3433,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3434,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3435,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3436,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3437,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3438,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3439,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3440,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3441,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3442,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3443,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 2U))));
        bufp->chgBit(oldp+3444,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3445,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3446,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3447,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3448,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3449,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3450,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3451,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3452,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3453,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3454,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3455,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3456,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3457,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3458,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3459,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3460,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3461,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3462,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3463,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3464,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3465,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3466,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3467,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3468,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3469,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3470,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3471,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3472,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3473,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3474,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3475,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3476,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3477,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3478,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3479,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3480,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3481,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3482,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3483,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3484,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3485,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3486,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3487,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3488,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3489,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3490,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3491,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3492,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3493,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 3U))));
        bufp->chgBit(oldp+3494,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3495,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+3496,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3497,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3498,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3499,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3500,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3501,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3502,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3503,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3504,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3505,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3506,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3507,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3508,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3509,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3510,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3511,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3512,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3513,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3514,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3515,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3516,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3517,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3518,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3519,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3520,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3521,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3522,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3523,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3524,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3525,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3526,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3527,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3528,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3529,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3530,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3531,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3532,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3533,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3534,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3535,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3536,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3537,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3538,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3539,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3540,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3541,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3542,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3543,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 4U))));
        bufp->chgBit(oldp+3544,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3545,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+3546,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3547,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3548,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3549,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3550,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3551,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3552,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3553,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3554,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3555,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3556,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3557,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3558,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3559,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3560,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3561,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3562,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3563,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3564,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3565,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3566,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3567,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3568,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3569,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3570,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3571,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3572,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3573,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3574,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3575,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3576,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3577,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3578,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3579,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3580,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3581,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3582,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3583,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3584,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3585,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3586,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3587,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3588,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3589,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3590,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3591,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3592,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3593,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 5U))));
        bufp->chgBit(oldp+3594,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3595,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+3596,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3597,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3598,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3599,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3600,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3601,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3602,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3603,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3604,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3605,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3606,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3607,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3608,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3609,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3610,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3611,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3612,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3613,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3614,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3615,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3616,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3617,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3618,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3619,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3620,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3621,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3622,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3623,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3624,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3625,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3626,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3627,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3628,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3629,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3630,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3631,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3632,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3633,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3634,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3635,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3636,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3637,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3638,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3639,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3640,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3641,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3642,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3643,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 6U))));
        bufp->chgBit(oldp+3644,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3645,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+3646,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3647,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3648,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3649,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3650,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3651,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3652,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3653,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3654,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3655,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3656,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3657,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3658,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3659,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3660,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3661,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3662,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3663,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3664,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3665,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3666,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3667,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3668,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3669,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3670,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3671,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3672,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3673,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3674,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3675,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3676,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3677,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3678,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3679,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3680,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3681,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3682,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3683,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3684,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3685,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3686,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3687,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3688,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3689,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3690,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3691,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3692,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3693,((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en) 
                                       >> 7U))));
        bufp->chgBit(oldp+3694,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3695,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+3696,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3697,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3698,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3699,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3700,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3701,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3702,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3703,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3704,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3705,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3706,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3707,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3708,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3709,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3710,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3711,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3712,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3713,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3714,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3715,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3716,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3717,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3718,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3719,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3720,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3721,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3722,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3723,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3724,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3725,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3726,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3727,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3728,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3729,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3730,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3731,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3732,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3733,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3734,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3735,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3736,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3737,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3738,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3739,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3740,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3741,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3742,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgIData(oldp+3743,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U])),24);
        bufp->chgIData(oldp+3744,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3745,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3746,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3747,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U])),24);
        bufp->chgIData(oldp+3748,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3749,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3750,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                   >> 8U)),24);
        bufp->chgCData(oldp+3751,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3752,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3753,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3754,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3755,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3756,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3757,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3758,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgCData(oldp+3759,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready))))))))),8);
        bufp->chgCData(oldp+3760,((((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                    << 7U) | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                  << 5U) 
                                                 | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                     << 4U) 
                                                    | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))),8);
        bufp->chgCData(oldp+3761,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3762,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3763,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3764,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3765,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3766,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3767,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3768,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgCData(oldp+3769,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0U])),8);
        bufp->chgCData(oldp+3770,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3771,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3772,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3773,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[1U])),8);
        bufp->chgCData(oldp+3774,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3775,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3776,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3777,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[2U])),8);
        bufp->chgCData(oldp+3778,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3779,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3780,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3781,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[3U])),8);
        bufp->chgCData(oldp+3782,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3783,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3784,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3785,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[4U])),8);
        bufp->chgCData(oldp+3786,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3787,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3788,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3789,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[5U])),8);
        bufp->chgCData(oldp+3790,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3791,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3792,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3793,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[6U])),8);
        bufp->chgCData(oldp+3794,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3795,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3796,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3797,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[7U])),8);
        bufp->chgCData(oldp+3798,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3799,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3800,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3801,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[8U])),8);
        bufp->chgCData(oldp+3802,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3803,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3804,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3805,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[9U])),8);
        bufp->chgCData(oldp+3806,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3807,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3808,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3809,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xaU])),8);
        bufp->chgCData(oldp+3810,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3811,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3812,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3813,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xbU])),8);
        bufp->chgCData(oldp+3814,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3815,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3816,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3817,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xcU])),8);
        bufp->chgCData(oldp+3818,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3819,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3820,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3821,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xdU])),8);
        bufp->chgCData(oldp+3822,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3823,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3824,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3825,((0x7fU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready))),7);
        bufp->chgCData(oldp+3826,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 7U)))),7);
        bufp->chgCData(oldp+3827,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0xeU)))),7);
        bufp->chgCData(oldp+3828,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0x15U)))),7);
        bufp->chgCData(oldp+3829,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0x1cU)))),7);
        bufp->chgCData(oldp+3830,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0x23U)))),7);
        bufp->chgCData(oldp+3831,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0x2aU)))),7);
        bufp->chgCData(oldp+3832,((0x7fU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__A_ready 
                                                    >> 0x31U)))),7);
        bufp->chgCData(oldp+3833,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0U])),8);
        bufp->chgCData(oldp+3834,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3835,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3836,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3837,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[1U])),8);
        bufp->chgCData(oldp+3838,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3839,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3840,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3841,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[2U])),8);
        bufp->chgCData(oldp+3842,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3843,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3844,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3845,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[3U])),8);
        bufp->chgCData(oldp+3846,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3847,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3848,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3849,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[4U])),8);
        bufp->chgCData(oldp+3850,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3851,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3852,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3853,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[5U])),8);
        bufp->chgCData(oldp+3854,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3855,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3856,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3857,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[6U])),8);
        bufp->chgCData(oldp+3858,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3859,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3860,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3861,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[7U])),8);
        bufp->chgCData(oldp+3862,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3863,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3864,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3865,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[8U])),8);
        bufp->chgCData(oldp+3866,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3867,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3868,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3869,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[9U])),8);
        bufp->chgCData(oldp+3870,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3871,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3872,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3873,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xaU])),8);
        bufp->chgCData(oldp+3874,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3875,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3876,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3877,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xbU])),8);
        bufp->chgCData(oldp+3878,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3879,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3880,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3881,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xcU])),8);
        bufp->chgCData(oldp+3882,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3883,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3884,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3885,((0xffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xdU])),8);
        bufp->chgCData(oldp+3886,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3887,((0xffU & (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3888,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_data[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3889,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready))),8);
        bufp->chgCData(oldp+3890,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3891,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3892,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+3893,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+3894,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+3895,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__W_ready 
                                                    >> 0x30U)))),8);
        bufp->chgIData(oldp+3896,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0U])),24);
        bufp->chgIData(oldp+3897,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3898,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3899,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3900,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[3U])),24);
        bufp->chgIData(oldp+3901,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3902,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[5U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3903,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3904,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[6U])),24);
        bufp->chgIData(oldp+3905,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[7U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[6U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3906,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[8U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[7U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3907,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[8U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3908,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[9U])),24);
        bufp->chgIData(oldp+3909,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xaU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[9U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3910,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xbU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xaU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3911,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xbU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3912,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xcU])),24);
        bufp->chgIData(oldp+3913,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xdU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xcU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3914,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xeU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xdU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3915,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xeU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3916,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xfU])),24);
        bufp->chgIData(oldp+3917,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x10U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0xfU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3918,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x11U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x10U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3919,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x11U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3920,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x12U])),24);
        bufp->chgIData(oldp+3921,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x13U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x12U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3922,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x14U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x13U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3923,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x14U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3924,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x15U])),24);
        bufp->chgIData(oldp+3925,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x16U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x15U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3926,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x17U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x16U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3927,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x17U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3928,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x18U])),24);
        bufp->chgIData(oldp+3929,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x19U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x18U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3930,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1aU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x19U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3931,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1aU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3932,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1bU])),24);
        bufp->chgIData(oldp+3933,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1cU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1bU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3934,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1dU] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1cU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3935,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1dU] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3936,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1eU])),24);
        bufp->chgIData(oldp+3937,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1fU] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1eU] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3938,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x20U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x1fU] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3939,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x20U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3940,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x21U])),24);
        bufp->chgIData(oldp+3941,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x22U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x21U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3942,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x23U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x22U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3943,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x23U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3944,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x24U])),24);
        bufp->chgIData(oldp+3945,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x25U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x24U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3946,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x26U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x25U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3947,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x26U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3948,((0xffffffU & vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x27U])),24);
        bufp->chgIData(oldp+3949,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x28U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x27U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3950,((0xffffffU & ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x29U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x28U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3951,((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__PVT__P_data[0x29U] 
                                   >> 8U)),24);
        bufp->chgBit(oldp+3952,((1U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out))));
        bufp->chgBit(oldp+3953,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3954,((0xffU & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out))),8);
        bufp->chgCData(oldp+3955,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3956,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3957,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3958,((0xffU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata))),8);
        bufp->chgCData(oldp+3959,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3960,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U])),24);
        bufp->chgIData(oldp+3961,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3962,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3963,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3964,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3965,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3966,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3967,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3968,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+3969,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3970,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3971,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3972,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3973,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3974,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3975,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3976,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+3977,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3978,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3979,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3980,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3981,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3982,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+3983,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3984,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+3985,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3986,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3987,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3988,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3989,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3990,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+3991,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+3992,((0xffffffU & vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U])),24);
        bufp->chgIData(oldp+3993,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+3994,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+3995,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+3996,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+3997,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+3998,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+3999,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4000,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                                 << 8U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U] 
                                                   >> 0x18U)))),24);
        bufp->chgIData(oldp+4001,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4002,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4003,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4004,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4005,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4006,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+4007,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4008,((0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
                                                   >> 0x10U)))),24);
        bufp->chgIData(oldp+4009,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4010,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4011,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4012,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4013,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4014,((0xffU & (IData)(
                                                   (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+4015,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4016,((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
                                   >> 8U)),24);
        bufp->chgIData(oldp+4017,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4018,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 1U))));
        bufp->chgBit(oldp+4019,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4020,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+4021,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4022,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4023,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4024,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4025,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4026,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4027,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4028,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4029,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4030,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4031,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4032,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4033,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4034,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4035,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4036,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4037,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4038,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4039,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4040,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4041,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4042,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4043,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4044,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4045,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4046,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4047,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4048,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4049,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4050,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4051,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4052,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4053,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4054,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4055,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4056,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4057,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4058,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4059,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4060,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4061,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4062,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4063,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4064,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4065,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4066,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4067,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4068,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 2U))));
        bufp->chgBit(oldp+4069,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4070,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+4071,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4072,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4073,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4074,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4075,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4076,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4077,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4078,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4079,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4080,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4081,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4082,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4083,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4084,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4085,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4086,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4087,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4088,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4089,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4090,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4091,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4092,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4093,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4094,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4095,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4096,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4097,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4098,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4099,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4100,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4101,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4102,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4103,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4104,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4105,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4106,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4107,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4108,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4109,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4110,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4111,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4112,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4113,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4114,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4115,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4116,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4117,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4118,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 3U))));
        bufp->chgBit(oldp+4119,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4120,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+4121,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4122,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4123,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4124,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4125,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4126,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4127,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4128,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4129,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4130,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4131,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4132,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4133,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4134,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4135,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4136,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4137,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4138,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4139,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4140,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4141,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4142,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4143,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4144,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4145,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4146,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4147,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4148,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4149,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4150,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4151,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4152,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4153,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4154,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4155,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4156,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4157,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4158,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4159,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4160,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4161,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4162,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4163,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4164,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4165,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4166,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4167,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4168,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 4U))));
        bufp->chgBit(oldp+4169,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4170,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+4171,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4172,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4173,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4174,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4175,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4176,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4177,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4178,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4179,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4180,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4181,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4182,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4183,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4184,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4185,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4186,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4187,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4188,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4189,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4190,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4191,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4192,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4193,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4194,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4195,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4196,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4197,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4198,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4199,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4200,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4201,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4202,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4203,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4204,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4205,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4206,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4207,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4208,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4209,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4210,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4211,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4212,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4213,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4214,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4215,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4216,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4217,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4218,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 5U))));
        bufp->chgBit(oldp+4219,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4220,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+4221,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4222,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4223,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4224,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4225,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4226,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4227,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4228,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4229,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4230,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4231,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4232,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4233,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4234,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4235,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4236,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4237,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4238,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4239,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4240,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4241,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4242,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4243,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4244,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4245,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4246,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4247,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4248,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4249,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4250,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4251,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4252,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4253,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4254,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4255,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4256,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4257,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4258,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4259,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4260,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4261,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4262,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4263,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4264,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4265,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4266,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4267,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4268,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 6U))));
        bufp->chgBit(oldp+4269,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4270,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+4271,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4272,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4273,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4274,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4275,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4276,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4277,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4278,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4279,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4280,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4281,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4282,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4283,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4284,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4285,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4286,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4287,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4288,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4289,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4290,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4291,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4292,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4293,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4294,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4295,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4296,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4297,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4298,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4299,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4300,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4301,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4302,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4303,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4304,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4305,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4306,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4307,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4308,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4309,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4310,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4311,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4312,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4313,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4314,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4315,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4316,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4317,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__genblk3__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4318,((1U & ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_en_out) 
                                       >> 7U))));
        bufp->chgBit(oldp+4319,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4320,((0xffU & (IData)(
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.if_data_out 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+4321,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4322,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4323,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4324,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4325,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4326,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4327,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4328,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4329,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4330,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4331,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4332,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4333,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4334,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4335,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4336,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4337,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4338,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4339,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4340,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4341,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4342,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4343,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4344,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4345,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4346,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4347,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4348,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4349,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4350,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4351,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4352,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4353,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4354,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4355,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4356,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4357,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4358,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4359,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4360,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4361,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
        bufp->chgBit(oldp+4362,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_ready));
        bufp->chgCData(oldp+4363,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__A_out),8);
        bufp->chgBit(oldp+4364,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellinp__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_en));
        bufp->chgBit(oldp+4365,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready));
        bufp->chgCData(oldp+4366,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out),8);
        bufp->chgIData(oldp+4367,(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out),24);
    }
    bufp->chgBit(oldp+4368,(vlSelf->clk));
    bufp->chgBit(oldp+4369,(vlSelf->rst));
    bufp->chgIData(oldp+4370,(vlSelf->tb_random_gemm__DOT__old_sel_for_test),32);
    bufp->chgIData(oldp+4371,(vlSelf->tb_random_gemm__DOT__cycles_count),32);
}

void Vtb_random_gemm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root__trace_cleanup\n"); );
    // Init
    Vtb_random_gemm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_random_gemm___024root*>(voidSelf);
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
