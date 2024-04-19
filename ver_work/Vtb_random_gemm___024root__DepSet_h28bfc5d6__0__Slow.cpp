// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_random_gemm.h for the primary calling header

#include "verilated.h"

#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm__Syms.h"
#include "Vtb_random_gemm___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_random_gemm___024root___dump_triggers__stl(Vtb_random_gemm___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_triggers__stl(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_random_gemm___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtb_random_gemm__ConstPool__TABLE_h38bbf373_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_random_gemm__ConstPool__TABLE_h41bf3229_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_random_gemm__ConstPool__TABLE_h1159063b_0;

VL_ATTR_COLD void Vtb_random_gemm___024root___stl_sequent__TOP__0(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h11517458__0;
    // Body
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__if_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__wfetch = 0U;
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_enb 
        = ((0x8000U & (((0xfU & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                        >> (0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                       << 0xfU)) | ((0x4000U & (((0xfU 
                                                  & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(0xeU) 
                                                     - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((0xfU 
                                                     & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(0xdU) 
                                                        - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((0xfU 
                                                & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                               >> (0xfU 
                                                   & ((IData)(0xcU) 
                                                      - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((0xfU 
                                                   & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(0xbU) 
                                                      - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((0xfU 
                                                      & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(0xaU) 
                                                         - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((0xfU 
                                                         & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                        >> 
                                                        (0xfU 
                                                         & ((IData)(9U) 
                                                            - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((0xfU 
                                                            & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(8U) 
                                                               - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((0xfU 
                                                               & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                              >> 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((0xfU 
                                                                  & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                 >> 
                                                                 (0xfU 
                                                                  & ((IData)(6U) 
                                                                     - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((0xfU 
                                                                     & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                    >> 
                                                                    (0xfU 
                                                                     & ((IData)(5U) 
                                                                        - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((0xfU 
                                                                        & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                       >> 
                                                                       (0xfU 
                                                                        & ((IData)(4U) 
                                                                           - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (((0xfU 
                                                                           & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                          >> 
                                                                          (0xfU 
                                                                           & ((IData)(3U) 
                                                                              - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (((0xfU 
                                                                              & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                             >> 
                                                                             (0xfU 
                                                                              & ((IData)(2U) 
                                                                                - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (((0xfU 
                                                                                & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(1U) 
                                                                                - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((0xfU 
                                                                                & (- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_en)))) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & (- vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr)))))))))))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__rd_en_1 
        = (1U & ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
                     >> 1U)) & (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                                >> 3U)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__empty_ 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__empty_ 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__empty_ 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__empty_ 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr) 
                   >> 4U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr) 
                                     >> 4U))) & ((0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__wptr)) 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT____Vcellout__buffer_instance__dout 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__fifo
        [(3U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr))];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr) 
                   >> 2U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr) 
                                     >> 2U))) & ((3U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr)) 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en = 0U;
    if (((IData)(vlSelf->tb_random_gemm__DOT__system_bus_en) 
         & (IData)(vlSelf->tb_random_gemm__DOT__system_bus_rdwr))) {
        if ((0x90000000U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
            if ((0x90000004U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                if ((0x90000008U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                    if ((0x9000000cU != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                        if ((0x90000010U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                            if ((0x90000014U != vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                if ((0x90000018U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_wr_en = 1U;
                                }
                            }
                            if ((0x90000014U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_wr_en = 1U;
                            }
                        }
                        if ((0x90000010U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_stride_wr_en = 1U;
                        }
                    }
                    if ((0x9000000cU == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_stride_wr_en = 1U;
                    }
                }
                if ((0x90000008U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_C_addr_wr_en = 1U;
                }
            }
            if ((0x90000004U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_B_addr_wr_en = 1U;
            }
        }
        if ((0x90000000U == vlSelf->tb_random_gemm__DOT__system_bus_addr)) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_addr_wr_en = 1U;
        }
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_ 
        = ((0xfffffff8U & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_rdwr) 
                            << 3U) & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_mask))) 
           | ((0xfffffffcU & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_rdwr) 
                               << 2U) & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_mask))) 
              | (3U & ((- (IData)((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_rdwr))) 
                       & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_mask)))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid 
        = (IData)(((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                    >> 7U) & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance__DOT__internal) 
                              >> 6U)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid 
        = (IData)(((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                    >> 0xbU) & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance2__DOT__internal) 
                                >> 0xaU)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid 
        = (IData)(((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid_Psum 
                    >> 0xfU) & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__pipeline_gen_instance3__DOT__internal) 
                                >> 0xeU)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[0U] 
        = (IData)((((QData)((IData)(((0x100U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                      ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                    << 0x18U) | (QData)((IData)(((0x80U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                  ? 0U
                                                  : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out)))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[1U] 
        = ((((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((0x100U 
                                                     & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                     ? 0U
                                                     : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                                   << 0x18U) | (QData)((IData)(
                                                               ((0x80U 
                                                                 & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                 ? 0U
                                                                 : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out)))) 
                                 >> 0x20U)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[2U] 
        = ((((0x400U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 8U) | (((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                        ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                      >> 0x10U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[3U] 
        = ((((0x1000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x18U) | ((0x800U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                          ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[4U] 
        = ((((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x10U) | (((0x1000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                           ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                         >> 8U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__bias[5U] 
        = ((((0x4000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 8U) | (((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                        ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                      >> 0x10U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_full 
        = (((1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr) 
                   >> 1U)) != (1U & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr) 
                                     >> 1U))) & ((1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__wptr)) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__accumulator__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[0U] 
        = (IData)((((QData)((IData)(((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                      ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                    << 0x18U) | (QData)((IData)(((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered)
                                                  ? 0U
                                                  : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out)))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[1U] 
        = ((((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x10U) | (IData)(((((QData)((IData)(
                                                   ((1U 
                                                     & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                     ? 0U
                                                     : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__P_out))) 
                                   << 0x18U) | (QData)((IData)(
                                                               ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered)
                                                                 ? 0U
                                                                 : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__P_out)))) 
                                 >> 0x20U)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[2U] 
        = ((((4U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 8U) | (((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                        ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                      >> 0x10U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[3U] 
        = ((((0x10U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x18U) | ((8U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                          ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__P_out));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[4U] 
        = ((((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 0x10U) | (((0x10U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                           ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                         >> 8U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__bias[5U] 
        = ((((0x40U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
              ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__P_out) 
            << 8U) | (((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                        ? 0U : vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__P_out) 
                      >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[1U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (1U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[2U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (2U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[3U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (3U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[4U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (4U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[5U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (5U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[6U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (6U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[7U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (7U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[8U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (8U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[9U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (9U < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xaU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0xaU < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xbU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0xbU < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xcU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0xcU < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xdU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0xdU < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xeU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                      >> 4U) + (0xeU < (0xfU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addrb[0xfU] 
        = (0x3ffU & (vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr 
                     >> 4U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__fifo
        [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_addr_buffer__DOT__rptr))];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__fifo
        [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileB_stride_buffer__DOT__rptr))];
    __Vtemp_h11517458__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x80U 
                                                           & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                           ? 
                                                          vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                          [
                                                          (0xfU 
                                                           & ((IData)(7U) 
                                                              + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((0x40U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                              ? 
                                                             vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                             [
                                                             (0xfU 
                                                              & ((IData)(6U) 
                                                                 + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x20U 
                                                                 & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                 ? 
                                                                vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                [
                                                                (0xfU 
                                                                 & ((IData)(5U) 
                                                                    + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((0x10U 
                                                                    & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                    ? 
                                                                   vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                   [
                                                                   (0xfU 
                                                                    & ((IData)(4U) 
                                                                       + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                       ? 
                                                                      vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                      [
                                                                      (0xfU 
                                                                       & ((IData)(3U) 
                                                                          + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                          ? 
                                                                         vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                         [
                                                                         (0xfU 
                                                                          & ((IData)(2U) 
                                                                             + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                             ? 
                                                                            vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                            [
                                                                            (0xfU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                              ? 
                                                                             vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                             [vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl]
                                                                              : 0U)))))))))));
    __Vtemp_h11517458__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x80U 
                                                            & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                            ? 
                                                           vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                           [
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((0x40U 
                                                               & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                               ? 
                                                              vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                              [
                                                              (0xfU 
                                                               & ((IData)(6U) 
                                                                  + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                  ? 
                                                                 vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                 [
                                                                 (0xfU 
                                                                  & ((IData)(5U) 
                                                                     + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                     ? 
                                                                    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                    [
                                                                    (0xfU 
                                                                     & ((IData)(4U) 
                                                                        + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                        ? 
                                                                       vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                       [
                                                                       (0xfU 
                                                                        & ((IData)(3U) 
                                                                           + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((4U 
                                                                           & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                           ? 
                                                                          vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                          [
                                                                          (0xfU 
                                                                           & ((IData)(2U) 
                                                                              + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                              ? 
                                                                             vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                             [
                                                                             (0xfU 
                                                                              & ((IData)(1U) 
                                                                                + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                                                               ? 
                                                                              vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                                                              [vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl]
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->tb_random_gemm__DOT__interface_rd_data[0U] 
        = __Vtemp_h11517458__0[0U];
    vlSelf->tb_random_gemm__DOT__interface_rd_data[1U] 
        = __Vtemp_h11517458__0[1U];
    vlSelf->tb_random_gemm__DOT__interface_rd_data[2U] 
        = ((((0x800U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
              ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
             [(0xfU & ((IData)(0xbU) + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
              : 0U) << 0x18U) | ((((0x400U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                    ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                   [(0xfU & ((IData)(0xaU) 
                                             + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                    : 0U) << 0x10U) 
                                 | ((((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                       ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                      [(0xfU & ((IData)(9U) 
                                                + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                       : 0U) << 8U) 
                                    | ((0x100U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                        ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                       [(0xfU & ((IData)(8U) 
                                                 + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                        : 0U))));
    vlSelf->tb_random_gemm__DOT__interface_rd_data[3U] 
        = ((((0x8000U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
              ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
             [(0xfU & ((IData)(0xfU) + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
              : 0U) << 0x18U) | ((((0x4000U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                    ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                   [(0xfU & ((IData)(0xeU) 
                                             + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                    : 0U) << 0x10U) 
                                 | ((((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                       ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                      [(0xfU & ((IData)(0xdU) 
                                                + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                       : 0U) << 8U) 
                                    | ((0x1000U & (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask_ppl))
                                        ? vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_douta
                                       [(0xfU & ((IData)(0xcU) 
                                                 + (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__interface_addr_ppl)))]
                                        : 0U))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__fifo
        [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control_buffer__DOT__rptr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0U] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_wr_data);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[1U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_wr_data 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[2U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_wr_data 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[3U] 
        = (vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_wr_data 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[0U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][0U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[1U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][1U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[2U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][2U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[3U] 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__fifo
        [(0xfU & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr))][3U];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__empty 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__rptr) 
           == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__buffer_instance__DOT__wptr));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__fifo
        [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buffer__DOT__rptr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web 
        = ((0x8000U & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                        >> (0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(0xeU) 
                                                     - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(0xdU) 
                                                        - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                               >> (0xfU 
                                                   & ((IData)(0xcU) 
                                                      - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(0xbU) 
                                                      - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                     >> 
                                                     (0xfU 
                                                      & ((IData)(0xaU) 
                                                         - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                        >> 
                                                        (0xfU 
                                                         & ((IData)(9U) 
                                                            - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(8U) 
                                                               - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                              >> 
                                                              (0xfU 
                                                               & ((IData)(7U) 
                                                                  - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                 >> 
                                                                 (0xfU 
                                                                  & ((IData)(6U) 
                                                                     - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                    >> 
                                                                    (0xfU 
                                                                     & ((IData)(5U) 
                                                                        - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                       >> 
                                                                       (0xfU 
                                                                        & ((IData)(4U) 
                                                                           - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                          >> 
                                                                          (0xfU 
                                                                           & ((IData)(3U) 
                                                                              - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                             >> 
                                                                             (0xfU 
                                                                              & ((IData)(2U) 
                                                                                - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(1U) 
                                                                                - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_web_) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & (- vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr)))))))))))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__rd_en_1 
        = ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
               >> 5U)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__acum_buffer_instance__valid));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__rd_en_1 
        = ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
               >> 9U)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__acum_buffer_instance__valid));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__rd_en_1 
        = ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite) 
               >> 0xdU)) & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__acum_buffer_instance__valid));
    if (((IData)(vlSelf->tb_random_gemm__DOT__system_bus_en) 
         & (~ (IData)(vlSelf->tb_random_gemm__DOT__system_bus_rdwr)))) {
        vlSelf->tb_random_gemm__DOT__system_bus_rd_data 
            = ((0x90000000U == vlSelf->tb_random_gemm__DOT__system_bus_addr)
                ? (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_A_buff_full)
                : ((0x90000018U == vlSelf->tb_random_gemm__DOT__system_bus_addr)
                    ? (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)
                    : 0U));
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty 
        = (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__empty) 
            << 3U) | (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__empty) 
                       << 2U) | (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__empty) 
                                  << 1U) | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__empty))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B 
        = ((0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                     >> 5U)) != ((IData)(1U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__count));
    __Vtableidx1 = ((((8U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                       >> 5U))) & (8U 
                                                   < 
                                                   (0x1fU 
                                                    & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                       >> 0xaU)))) 
                     << 2U) | ((((8U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                 >> 5U))) 
                                 & (8U >= (0x1fU & 
                                           (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 0xaU)))) 
                                << 1U) | ((8U < (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                    >> 5U))) 
                                          & (8U < (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                      >> 0xaU))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__mode = Vtb_random_gemm__ConstPool__TABLE_h38bbf373_0
        [__Vtableidx1];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel 
        = Vtb_random_gemm__ConstPool__TABLE_h41bf3229_0
        [__Vtableidx1];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel 
        = Vtb_random_gemm__ConstPool__TABLE_h1159063b_0
        [__Vtableidx1];
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A 
        = ((0x1fU & vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension) 
           != ((IData)(1U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__count));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf 
        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count) 
           == (0x1fU & vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__we_accum_ctrl = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__prefetch_done = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 0U;
    if ((0U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
            if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result 
                    = (1U | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result));
                if ((1U & (~ ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)) 
                              & (4U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                >> 0xaU))))))) {
                    if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                          & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) 
                         & (4U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 0xaU))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = 1U;
                    }
                    if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) 
                                  & (4U >= (0x1fU & 
                                            (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                             >> 0xaU))))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = 1U;
                    }
                }
                vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr 
                    = vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 0U;
            }
        } else if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                          >> 1U)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result 
                    = (2U | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result));
                if ((1U & (~ ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                  >> 1U)) & (8U < (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                      >> 0xaU))))))) {
                    if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                          & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                >> 1U))) & (8U >= (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                      >> 0xaU))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = 1U;
                    }
                    if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                         >> 1U))) & 
                                  (8U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                   >> 0xaU))))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = 1U;
                    }
                }
                vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr 
                    = (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                            >> 1U)) & (8U < (0x1fU 
                                             & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                >> 0xaU))))
                        ? ((IData)(0x10U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)
                        : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                             & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                   >> 1U))) & (8U >= 
                                               (0x1fU 
                                                & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                   >> 0xaU))))
                            ? ((IData)(0x10U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)
                            : ((IData)(0x10U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)));
                vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 1U;
            }
        } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                          >> 2U)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result 
                    = (4U | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result));
                if ((1U & (~ ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                  >> 2U)) & (0xcU < 
                                             (0x1fU 
                                              & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                 >> 0xaU))))))) {
                    if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                          & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                >> 2U))) & (0xcU >= 
                                            (0x1fU 
                                             & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                >> 0xaU))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = 1U;
                    }
                    if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                         >> 2U))) & 
                                  (0xcU >= (0x1fU & 
                                            (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                             >> 0xaU))))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = 1U;
                    }
                }
                vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr 
                    = (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                            >> 2U)) & (0xcU < (0x1fU 
                                               & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                  >> 0xaU))))
                        ? ((IData)(0x20U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)
                        : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                             & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                   >> 2U))) & (0xcU 
                                               >= (0x1fU 
                                                   & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                      >> 0xaU))))
                            ? ((IData)(0x20U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)
                            : ((IData)(0x20U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr)));
                vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 2U;
            }
        } else if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                          >> 3U)))) {
                if ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                           & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                 >> 3U))))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result 
                        = (8U | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result));
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_en = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr 
                        = ((IData)(0x30U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr);
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 3U;
                } else if (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf) 
                            & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                  >> 3U)))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result 
                        = (8U | (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__rd_result));
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr 
                        = ((IData)(0x30U) + vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr);
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel = 3U;
                }
                if ((1U & (~ ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                              & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                    >> 3U)))))) {
                    if (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf) 
                         & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                               >> 3U)))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_clr = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_rdwr_store = 1U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
        = vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store = 0U;
    if ((0U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
        if ((1U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__if_en = 1U;
                if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)) 
                                  & (~ vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store = 1U;
            }
        }
        if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__wfetch = 1U;
            if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__we_accum_ctrl = 1U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__prefetch_done = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        if (vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__count_clr = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
                = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__fifo
                [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileC_addr_buffer__DOT__rptr))];
            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 1U;
        } else {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = 0U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store = 0U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__can_store)))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_rdwr_store = 0U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 0U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns 
            = ((1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))
                ? 1U : (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)) 
                         & (4U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                           >> 0xaU))))
                         ? 2U : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) 
                                  & (4U >= (0x1fU & 
                                            (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                             >> 0xaU))))
                                  ? 1U : 0U)));
        if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)))) {
            if ((1U & (~ ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)) 
                          & (4U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 0xaU))))))) {
                if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                      & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) 
                     & (4U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                        >> 0xaU))))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
                        = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                           + (vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride 
                              << 2U));
                }
            }
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store 
                = (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty)) 
                    & (4U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                      >> 0xaU)))) ? 0x10U
                    : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                         & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) 
                        & (4U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                           >> 0xaU))))
                        ? (0x1cU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                    >> 8U)) : (0x1cU 
                                               & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                  >> 8U))));
        }
    } else if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns 
            = ((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))
                ? 2U : (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                             >> 1U)) & (8U < (0x1fU 
                                              & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                 >> 0xaU))))
                         ? 3U : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                         >> 1U))) & 
                                  (8U >= (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                   >> 0xaU))))
                                  ? 1U : 0U)));
        if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                      >> 1U)))) {
            if ((1U & (~ ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                              >> 1U)) & (8U < (0x1fU 
                                               & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                  >> 0xaU))))))) {
                if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                      & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                            >> 1U))) & (8U >= (0x1fU 
                                               & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                  >> 0xaU))))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
                        = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                           + (vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride 
                              << 2U));
                }
            }
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store 
                = (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                        >> 1U)) & (8U < (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                  >> 0xaU))))
                    ? 0x10U : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                 & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                       >> 1U))) & (8U 
                                                   >= 
                                                   (0x1fU 
                                                    & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                       >> 0xaU))))
                                ? (0x1cU & (((vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                              >> 0xaU) 
                                             - (IData)(4U)) 
                                            << 2U))
                                : (0x1cU & (((vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                              >> 0xaU) 
                                             - (IData)(4U)) 
                                            << 2U))));
        }
    } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns 
            = ((4U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))
                ? 3U : (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                             >> 2U)) & (0xcU < (0x1fU 
                                                & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                   >> 0xaU))))
                         ? 4U : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                   & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                         >> 2U))) & 
                                  (0xcU >= (0x1fU & 
                                            (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                             >> 0xaU))))
                                  ? 1U : 0U)));
        if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                      >> 2U)))) {
            if ((1U & (~ ((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                              >> 2U)) & (0xcU < (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                    >> 0xaU))))))) {
                if ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                      & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                            >> 2U))) & (0xcU >= (0x1fU 
                                                 & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                    >> 0xaU))))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
                        = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                           + (vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride 
                              << 2U));
                }
            }
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store 
                = (((~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                        >> 2U)) & (0xcU < (0x1fU & 
                                           (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 0xaU))))
                    ? 0x10U : ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                                 & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                       >> 2U))) & (0xcU 
                                                   >= 
                                                   (0x1fU 
                                                    & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                                       >> 0xaU))))
                                ? (0x1cU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 8U))
                                : (0x1cU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 8U))));
        }
    } else if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__cs))) {
        if ((8U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = 4U;
        } else if ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                          & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                                >> 3U))))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = 1U;
        } else if (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf) 
                    & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                          >> 3U)))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ns = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                      >> 3U)))) {
            if ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf)) 
                       & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                             >> 3U))))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store = 1U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 1U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store 
                    = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                       + (vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride 
                          << 2U));
                vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store 
                    = (0x1cU & (((vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                  >> 0xaU) - (IData)(4U)) 
                                << 2U));
            } else if (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_store_controller__DOT__ovf) 
                        & (~ ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_empty) 
                              >> 3U)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store = 1U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store 
                    = (0x1cU & (((vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                  >> 0xaU) - (IData)(4U)) 
                                << 2U));
            }
        }
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__conf_buff_read = 0U;
    if ((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel))) {
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[0U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[1U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[2U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__0__KET____DOT__acum_buffer_instance__o_data[3U];
    } else if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel))) {
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[0U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[1U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[2U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__1__KET____DOT__acum_buffer_instance__o_data[3U];
    } else if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel))) {
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[0U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[1U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[2U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__2__KET____DOT__acum_buffer_instance__o_data[3U];
    } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_sel))) {
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[0U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[1U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[2U];
        vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT____Vcellout__genblk1__BRA__3__KET____DOT__acum_buffer_instance__o_data[3U];
    }
    vlSelf->tb_random_gemm__DOT__interface_rdwr = 0U;
    if ((0U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
        if ((1U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)))) {
                    if ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)) 
                               & (~ vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control)))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__conf_buff_read = 1U;
                    }
                }
            } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if (vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__conf_buff_read = 1U;
                }
            }
            if ((2U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    vlSelf->tb_random_gemm__DOT__interface_rdwr 
                        = vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_rdwr_store;
                }
            }
        }
    }
    if (vlSelf->tb_random_gemm__DOT__sel_for_test) {
        vlSelf->tb_random_gemm__DOT__selected_interface_addr 
            = vlSelf->tb_random_gemm__DOT__test_interface_addr;
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[0U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[1U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[2U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT__test_interface_wr_data[3U];
        vlSelf->tb_random_gemm__DOT__selected_interface_rdwr 
            = vlSelf->tb_random_gemm__DOT__test_interface_rdwr;
    } else {
        vlSelf->tb_random_gemm__DOT__selected_interface_addr 
            = ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))
                ? vlSelf->tb_random_gemm__DOT__DUT__DOT__current_store_addr
                : vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr);
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[0U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[0U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[1U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[2U];
        vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
            = vlSelf->tb_random_gemm__DOT____Vcellout__DUT__interface_wr_data[3U];
        vlSelf->tb_random_gemm__DOT__selected_interface_rdwr 
            = vlSelf->tb_random_gemm__DOT__interface_rdwr;
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[1U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (1U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[2U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (2U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[3U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (3U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[4U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (4U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[5U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (5U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[6U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (6U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[7U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (7U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[8U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (8U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[9U] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (9U < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xaU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xaU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xbU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xbU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xcU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xcU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xdU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xdU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xeU] 
        = (0x3ffU & ((vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                      >> 4U) + (0xeU < (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_addra[0xfU] 
        = (0x3ffU & (vlSelf->tb_random_gemm__DOT__selected_interface_addr 
                     >> 4U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x10U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x10U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x10U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[1U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x11U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x11U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x11U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x11U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x11U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[2U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x12U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x12U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x12U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x12U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x12U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[3U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x13U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x13U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x13U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x13U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x13U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[4U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x14U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x14U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x14U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x14U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x14U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[5U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x15U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x15U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x15U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x15U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x15U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[6U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x16U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x16U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x16U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x16U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x16U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[7U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x17U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x17U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x17U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x17U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x17U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[8U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x18U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x18U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x18U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x18U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x18U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[9U] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x19U) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x19U) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x19U) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x19U) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x19U) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xaU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1aU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1aU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1aU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1aU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1aU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xbU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1bU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1bU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1bU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1bU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1bU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xcU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1cU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1cU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1cU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1cU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1cU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xdU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1dU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1dU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1dU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1dU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1dU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xeU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1eU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1eU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1eU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1eU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1eU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dina[0xfU] 
        = (0xffU & (((0U == (0x18U & (((IData)(0x1fU) 
                                       - (0xfU & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                      << 3U))) ? 0U
                      : (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                         (((IData)(7U) + (0x78U & (
                                                   ((IData)(0x1fU) 
                                                    - 
                                                    (0xfU 
                                                     & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                   << 3U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x18U & (((IData)(0x1fU) 
                                                   - 
                                                   (0xfU 
                                                    & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                                  << 3U))))) 
                    | (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[
                       (3U & (((IData)(0x1fU) - (0xfU 
                                                 & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                              >> 2U))] >> (0x18U & 
                                           (((IData)(0x1fU) 
                                             - (0xfU 
                                                & vlSelf->tb_random_gemm__DOT__selected_interface_addr)) 
                                            << 3U)))));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[4U] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[5U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[6U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[7U] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[1U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[8U] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[9U] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xaU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xbU] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[2U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xcU] 
        = (0xffU & vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U]);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xdU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                    >> 8U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xeU] 
        = (0xffU & (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
                    >> 0x10U));
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_[0xfU] 
        = (vlSelf->tb_random_gemm__DOT__selected_interface_wr_data[3U] 
           >> 0x18U);
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & (- vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[1U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(1U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[2U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(2U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[3U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(3U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[4U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(4U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[5U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(5U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[6U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(6U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[7U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(7U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[8U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(8U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[9U] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(9U) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xaU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xaU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xbU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xbU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xcU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xcU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xdU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xdU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xeU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xeU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb[0xfU] 
        = vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_dinb_
        [(0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__memory_instance__DOT__system_bus_addr))];
}

VL_ATTR_COLD void Vtb_random_gemm___024root___stl_sequent__TOP__1(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_hf4bda0c3__0;
    __VdfgTmp_hf4bda0c3__0 = 0;
    // Body
    if ((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                             << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                          >> 0x10U)));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                    >> 0x18U)));
    } else {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
               + (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                             >> 0x10U))));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
               + (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                       >> 0x18U))));
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[2U] 
        = (IData)((((QData)((IData)(((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                      ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                         >> 8U) : (
                                                   vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                                   + 
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                                    >> 8U))))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                  ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                  : 
                                                 (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                  + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__din_1[3U] 
        = (IData)(((((QData)((IData)(((2U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                       ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                          >> 8U) : 
                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                       + (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[2U] 
                                          >> 8U))))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                   ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                   : 
                                                  (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__0__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                   + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__0__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                             << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                          >> 0x10U)));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                    >> 0x18U)));
    } else {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
               + (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                             >> 0x10U))));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
               + (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                       >> 0x18U))));
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[2U] 
        = (IData)((((QData)((IData)(((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                      ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                         >> 8U) : (
                                                   vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                                   + 
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                                    >> 8U))))) 
                    << 0x20U) | (QData)((IData)(((0x20U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                  ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                  : 
                                                 (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                  + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__din_1[3U] 
        = (IData)(((((QData)((IData)(((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                       ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                          >> 8U) : 
                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                       + (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2.of_data[5U] 
                                          >> 8U))))) 
                     << 0x20U) | (QData)((IData)(((0x20U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                   ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                   : 
                                                  (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__1__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                   + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__4__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))) 
                   >> 0x20U));
    if ((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                             << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                          >> 0x10U)));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                    >> 0x18U)));
    } else {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
               + (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                             >> 0x10U))));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
               + (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                       >> 0x18U))));
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[2U] 
        = (IData)((((QData)((IData)(((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                      ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                         >> 8U) : (
                                                   vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                                   + 
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                                    >> 8U))))) 
                    << 0x20U) | (QData)((IData)(((0x200U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                  ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                  : 
                                                 (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                  + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__din_1[3U] 
        = (IData)(((((QData)((IData)(((0x200U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                       ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                          >> 8U) : 
                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                       + (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[2U] 
                                          >> 8U))))) 
                     << 0x20U) | (QData)((IData)(((0x200U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                   ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                   : 
                                                  (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__2__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                   + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__8__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))) 
                   >> 0x20U));
    if ((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))) {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                             << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                          >> 0x10U)));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                    >> 0x18U)));
    } else {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[0U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[0U] 
               + (0xffffffU & ((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[2U] 
                                << 0x10U) | (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__0__KET____DOT__pipeline_gen_instance__DOT__internal[1U] 
                                             >> 0x10U))));
        vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[1U] 
            = (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[1U] 
               + (0xffffffU & (IData)((vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__1__KET____DOT__pipeline_gen_instance__DOT__internal 
                                       >> 0x18U))));
    }
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[2U] 
        = (IData)((((QData)((IData)(((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                      ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                         >> 8U) : (
                                                   vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                                   + 
                                                   (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                                    >> 8U))))) 
                    << 0x20U) | (QData)((IData)(((0x2000U 
                                                  & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                  ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                  : 
                                                 (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                  + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__din_1[3U] 
        = (IData)(((((QData)((IData)(((0x2000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                       ? (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                          >> 8U) : 
                                      (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[3U] 
                                       + (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3.of_data[5U] 
                                          >> 8U))))) 
                     << 0x20U) | (QData)((IData)(((0x2000U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_overwrite))
                                                   ? vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal
                                                   : 
                                                  (vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__accumulator_instance__DOT__genblk1__BRA__3__KET____DOT__acum_buffer_instance__DOT__dout_1[2U] 
                                                   + vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__genblk1__BRA__12__KET____DOT__of_data_setup_inst__DOT__genblk1__BRA__2__KET____DOT__pipeline_gen_instance__DOT__internal))))) 
                   >> 0x20U));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid 
        = (1U & ((0x40U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                  ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                     >> 0xfU) : ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                 >> 7U)));
    __VdfgTmp_hf4bda0c3__0 = (1U & ((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                     ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                        >> 0xeU) : 
                                    ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                     >> 6U)));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI 
        = (IData)((0x200U == (0x300U & (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3_wfetch 
        = ((0x80U & (((0x4000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                       ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                          >> 0xfU) : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                     << 7U)) | ((0x40U & (((0x2000U 
                                            & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                            ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                               >> 0xeU)
                                            : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                          << 6U)) | 
                                ((0x20U & (((0x1000U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                             ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                >> 0xdU)
                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                           << 5U)) 
                                 | ((0x10U & (((0x800U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 0xcU)
                                                : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                              << 4U)) 
                                    | ((8U & (((0x400U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 0xbU)
                                                : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                              << 3U)) 
                                       | ((4U & (((0x200U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 0xaU)
                                                   : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((0x100U 
                                                 & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                 >> 9U)
                                                 : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((0x80U 
                                                    & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_wfetch 
        = ((0x80U & (((0x40U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                       ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                          >> 7U) : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                     << 7U)) | ((0x40U & (((0x20U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                            ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                               >> 6U)
                                            : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                          << 6U)) | 
                                ((0x20U & (((0x10U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                             ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                >> 5U)
                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                           << 5U)) 
                                 | ((0x10U & (((8U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 4U)
                                                : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                              << 4U)) 
                                    | ((8U & (((4U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 3U)
                                                : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                              << 3U)) 
                                       | ((4U & (((2U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                   >> 2U)
                                                   : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((1U 
                                                 & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out) 
                                                 >> 1U)
                                                 : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_ready)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered)
                                                    ? (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup.out)
                                                    : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_ready))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__if_data 
        = (((QData)((IData)((0xffU & ((0x40U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                       ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                           >> 0x18U))
                                       : ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                           >> 0x18U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x20U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                             ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                                   >> 0x10U))
                                             : ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                                   >> 0x10U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x10U 
                                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                             ? 
                                                            ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U] 
                                                                >> 8U))
                                                             : 
                                                            ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U] 
                                                                >> 8U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((8U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                              ? 
                                                             vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[3U]
                                                              : 
                                                             vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[1U])))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((4U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                              ? 
                                                             ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                                 >> 0x18U))
                                                              : 
                                                             ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                                 >> 0x18U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((2U 
                                                                    & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                                    ? 
                                                                   ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                                       >> 0x10U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                                       ? 
                                                                      ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                                        << 0x18U) 
                                                                       | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U] 
                                                                          >> 8U))
                                                                       : 
                                                                      ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U] 
                                                                          >> 8U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel_buffered)
                                                                        ? 
                                                                       vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[2U]
                                                                        : 
                                                                       vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup.out[0U])))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core3__wdata 
        = (((QData)((IData)((0xffU & ((0x4000U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                       ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                           >> 0x18U))
                                       : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x2000U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                             ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                                   >> 0x10U))
                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x1000U 
                                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                             ? 
                                                            ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U] 
                                                                >> 8U))
                                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x800U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                              ? 
                                                             vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[3U]
                                                              : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((0x400U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                              ? 
                                                             ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                                 >> 0x18U))
                                                              : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((0x200U 
                                                                    & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                    ? 
                                                                   ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                                       >> 0x10U))
                                                                    : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((0x100U 
                                                                       & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                       ? 
                                                                      ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                                        << 0x18U) 
                                                                       | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U] 
                                                                          >> 8U))
                                                                       : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((0x80U 
                                                                        & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                        ? 
                                                                       vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[2U]
                                                                        : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out))))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT____Vcellinp__core2__wdata 
        = (((QData)((IData)((0xffU & ((0x40U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                       ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                           >> 0x18U))
                                       : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x20U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                             ? ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                                   >> 0x10U))
                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x10U 
                                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                             ? 
                                                            ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U] 
                                                                >> 8U))
                                                             : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((8U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                              ? 
                                                             vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[1U]
                                                              : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk2__DOT__mac_instance__W_out))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((4U 
                                                              & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                              ? 
                                                             ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                                 >> 0x18U))
                                                              : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((2U 
                                                                    & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                    ? 
                                                                   ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                                       >> 0x10U))
                                                                    : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((1U 
                                                                       & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_w_mux_sel))
                                                                       ? 
                                                                      ((vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                                        << 0x18U) 
                                                                       | (vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U] 
                                                                          >> 8U))
                                                                       : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__mac_instance__W_out)) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__w_mux_sel_buffered)
                                                                        ? 
                                                                       vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup.out[0U]
                                                                        : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0.__Vcellout__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__mac_instance__W_out))))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2_if_en 
        = (((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid) 
            << 7U) | (((IData)(__VdfgTmp_hf4bda0c3__0) 
                       << 6U) | ((0x20U & (((0x10U 
                                             & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                             ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                >> 0xdU)
                                             : ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                >> 5U)) 
                                           << 5U)) 
                                 | ((0x10U & (((8U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 0xcU)
                                                : ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 4U)) 
                                              << 4U)) 
                                    | ((8U & (((4U 
                                                & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                ? ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 0xbU)
                                                : ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 3U)) 
                                              << 3U)) 
                                       | ((4U & (((2U 
                                                   & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 0xaU)
                                                   : 
                                                  ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                   >> 2U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((1U 
                                                 & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__all_if_mux_sel))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                 >> 9U)
                                                 : 
                                                ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                 >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__if_mux_sel_buffered)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup.out))))))))));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__accum_start 
        = ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__valid)) 
           & (IData)(__VdfgTmp_hf4bda0c3__0));
    vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 0U;
    vlSelf->tb_random_gemm__DOT__interface_en = 0U;
    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr = 0U;
    if ((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
        if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 1U;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                = vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr;
        }
        vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns 
            = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)
                ? 0U : 1U);
    } else {
        if ((1U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            if ((2U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if ((3U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                        if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                                       & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                          | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                      & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))))) {
                            if ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                                  & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                     | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                 & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start = 1U;
                            } else if ((((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                         | (1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                                        & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__prefetch_start = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 1U;
            if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B)))) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = 1U;
            }
            if (vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B) {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns = 1U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                    = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                       - vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_stride);
            } else {
                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns = 2U;
                vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                    = vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__fifo
                    [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_addr_buffer__DOT__rptr))];
            }
            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 1U;
        } else {
            if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if (vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns = 2U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 1U;
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                        = (vlSelf->tb_random_gemm__DOT__DUT__DOT__current_addr 
                           + vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__fifo
                           [(1U & (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tileA_stride_buffer__DOT__rptr))]);
                } else {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns 
                        = ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)) 
                                  & (~ vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control)))
                            ? 4U : 3U);
                    if ((1U & (~ ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)) 
                                  & (~ vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control))))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr 
                            = vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store;
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                            = vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store;
                    }
                }
            } else {
                if ((3U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                        if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                                       & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                          | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                      & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))))) {
                            if ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                                  & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                     | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                 & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 0U;
                            } else if ((((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                         | (1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                                        & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__en_size_counter = 1U;
                            }
                        }
                    }
                }
                if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns 
                        = ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store)
                            ? 0U : 3U);
                    if ((1U & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__done_store)))) {
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr 
                            = vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr_store;
                        vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                            = vlSelf->tb_random_gemm__DOT__DUT__DOT__next_row_addr_store;
                    }
                } else if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__ns 
                        = ((((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                             & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                            & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))
                            ? 4U : ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                                      & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                         | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                     & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))
                                     ? 1U : ((((0U 
                                                == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                               | (1U 
                                                  == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                                              & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))
                                              ? 1U : 0U)));
                    if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                                   & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                      | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                  & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))))) {
                        if ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                              & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                 | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                             & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 1U;
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                                = vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr;
                        } else if ((((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                     | (1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                                    & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__gen_addr = 1U;
                            vlSelf->tb_random_gemm__DOT__DUT__DOT__next_addr 
                                = vlSelf->tb_random_gemm__DOT__DUT__DOT__tile_B_addr;
                        }
                    }
                }
            }
            if ((2U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                if ((3U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                    if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
                        if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                                       & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                          | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                      & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))))) {
                            if ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                                  & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                     | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                                 & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = 1U;
                            } else if ((((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                                         | (1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                                        & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                                vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__clr_size_counter = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_random_gemm__DOT__interface_control = 0U;
    if ((0U != (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
        if ((1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            vlSelf->tb_random_gemm__DOT__interface_en = 1U;
            vlSelf->tb_random_gemm__DOT__interface_control 
                = (0x1fU & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_B)
                             ? (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                >> 0xaU) : (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                            >> 0xaU)));
        } else if ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            vlSelf->tb_random_gemm__DOT__interface_en = 1U;
            vlSelf->tb_random_gemm__DOT__interface_control 
                = (0x1fU & ((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)
                             ? (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                >> 5U) : ((1U & ((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__do_read_A)) 
                                                 & (~ vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__GEMM_control)))
                                           ? (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                              >> 5U)
                                           : (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                              >> 5U))));
        } else if ((3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            vlSelf->tb_random_gemm__DOT__interface_en 
                = vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_en_store;
            vlSelf->tb_random_gemm__DOT__interface_control 
                = vlSelf->tb_random_gemm__DOT__DUT__DOT__interface_control_store;
        } else if ((4U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__my_controller__DOT__cs))) {
            if ((1U & (~ (((~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI)) 
                           & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                              | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                          & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))))) {
                if ((((IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__ready_for_HI) 
                      & ((2U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                         | (3U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)))) 
                     & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                    vlSelf->tb_random_gemm__DOT__interface_en = 0U;
                    vlSelf->tb_random_gemm__DOT__interface_control 
                        = (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                    >> 0xaU));
                } else if ((((0U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode)) 
                             | (1U == (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__mode))) 
                            & (~ (IData)(vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension_buff_empty)))) {
                    vlSelf->tb_random_gemm__DOT__interface_control 
                        = (0x1fU & (vlSelf->tb_random_gemm__DOT__DUT__DOT__memory_mapped_instance__DOT__tile_dimension 
                                    >> 5U));
                }
            }
        }
    }
    if (vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__cs) {
        if (vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__cs) {
            vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rd_en_true 
                = vlSelf->tb_random_gemm__DOT__DUT__DOT__accum_start;
            vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__ns = 1U;
        }
    } else {
        vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__rd_en_true = 0U;
        vlSelf->tb_random_gemm__DOT__DUT__DOT__buffer_instance__DOT__ns 
            = vlSelf->tb_random_gemm__DOT__DUT__DOT__accum_start;
    }
    if (vlSelf->tb_random_gemm__DOT__sel_for_test) {
        vlSelf->tb_random_gemm__DOT__selected_interface_en 
            = vlSelf->tb_random_gemm__DOT__test_interface_en;
        vlSelf->tb_random_gemm__DOT__selected_interface_control 
            = vlSelf->tb_random_gemm__DOT__test_interface_control;
    } else {
        vlSelf->tb_random_gemm__DOT__selected_interface_en 
            = vlSelf->tb_random_gemm__DOT__interface_en;
        vlSelf->tb_random_gemm__DOT__selected_interface_control 
            = vlSelf->tb_random_gemm__DOT__interface_control;
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask = 0U;
    if ((1U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (1U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((2U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (2U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((3U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (4U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((4U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (8U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((5U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x10U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((6U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x20U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((7U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x40U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((8U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x80U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((9U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x100U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xaU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x200U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xbU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x400U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xcU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x800U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xdU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x1000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xeU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x2000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0xfU <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x4000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    if ((0x10U <= (IData)(vlSelf->tb_random_gemm__DOT__selected_interface_control))) {
        vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask 
            = (0x8000U | (IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask));
    }
    vlSelf->tb_random_gemm__DOT__memory_instance__DOT__bank_wea 
        = ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
             & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                >> (0xfU & ((IData)(0xfU) - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
            << 0xfU) | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                          & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                             >> (0xfU & ((IData)(0xeU) 
                                         - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                         << 0xeU) | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                       & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                          >> (0xfU 
                                              & ((IData)(0xdU) 
                                                 - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                      << 0xdU) | ((
                                                   ((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                    & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(0xcU) 
                                                           - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                       & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(0xbU) 
                                                              - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                      << 0xbU) 
                                                     | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                          & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                             >> 
                                                             (0xfU 
                                                              & ((IData)(0xaU) 
                                                                 - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                             & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                >> 
                                                                (0xfU 
                                                                 & ((IData)(9U) 
                                                                    - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                   >> 
                                                                   (0xfU 
                                                                    & ((IData)(8U) 
                                                                       - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                   & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                      >> 
                                                                      (0xfU 
                                                                       & ((IData)(7U) 
                                                                          - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                      & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                         >> 
                                                                         (0xfU 
                                                                          & ((IData)(6U) 
                                                                             - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                         & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                            >> 
                                                                            (0xfU 
                                                                             & ((IData)(5U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                            & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                               >> 
                                                                               (0xfU 
                                                                                & ((IData)(4U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                               & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(3U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(2U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & ((IData)(1U) 
                                                                                - vlSelf->tb_random_gemm__DOT__selected_interface_addr)))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->tb_random_gemm__DOT__selected_interface_rdwr) 
                                                                                & ((IData)(vlSelf->tb_random_gemm__DOT__memory_instance__DOT__mask) 
                                                                                >> 
                                                                                (0xfU 
                                                                                & (- vlSelf->tb_random_gemm__DOT__selected_interface_addr)))))))))))))))))));
}

VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__0(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__0(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__0(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__0(Vtb_random_gemm_systolic* vlSelf);
void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__1(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf);
void Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__1(Vtb_random_gemm_systolic_setup__D1_P10* vlSelf);
void Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__1(Vtb_random_gemm_systolic_setup__P10* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__1(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__1(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__1(Vtb_random_gemm_systolic* vlSelf);
VL_ATTR_COLD void Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__1(Vtb_random_gemm_systolic* vlSelf);

VL_ATTR_COLD void Vtb_random_gemm___024root___eval_stl(Vtb_random_gemm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_random_gemm___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_random_gemm___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__0((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__0((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__0((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__0((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1));
        Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup));
        Vtb_random_gemm_systolic_setup__D1_P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup));
        Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup));
        Vtb_random_gemm_systolic_setup__P10___nba_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup));
        Vtb_random_gemm___024root___stl_sequent__TOP__1(vlSelf);
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2));
        Vtb_random_gemm_systolic___stl_sequent__TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3__1((&vlSymsp->TOP__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3));
    }
}
