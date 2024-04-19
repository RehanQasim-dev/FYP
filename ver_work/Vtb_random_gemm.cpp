// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_random_gemm.h"
#include "Vtb_random_gemm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_random_gemm::Vtb_random_gemm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_random_gemm__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_data_setup}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__weight_valid_setup}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_data_setup}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__input_valid_setup}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core0}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core1}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core2}
    , __PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3{vlSymsp->TOP.__PVT__tb_random_gemm__DOT__DUT__DOT__datapath_instance__DOT__super_sys_instance__DOT__core3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_random_gemm::Vtb_random_gemm(const char* _vcname__)
    : Vtb_random_gemm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_random_gemm::~Vtb_random_gemm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_random_gemm___024root___eval_debug_assertions(Vtb_random_gemm___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_random_gemm___024root___eval_static(Vtb_random_gemm___024root* vlSelf);
void Vtb_random_gemm___024root___eval_initial(Vtb_random_gemm___024root* vlSelf);
void Vtb_random_gemm___024root___eval_settle(Vtb_random_gemm___024root* vlSelf);
void Vtb_random_gemm___024root___eval(Vtb_random_gemm___024root* vlSelf);

void Vtb_random_gemm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_random_gemm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_random_gemm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_random_gemm___024root___eval_static(&(vlSymsp->TOP));
        Vtb_random_gemm___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_random_gemm___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_random_gemm___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_random_gemm::eventsPending() { return false; }

uint64_t Vtb_random_gemm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_random_gemm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_random_gemm___024root___eval_final(Vtb_random_gemm___024root* vlSelf);

VL_ATTR_COLD void Vtb_random_gemm::final() {
    Vtb_random_gemm___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_random_gemm::hierName() const { return vlSymsp->name(); }
const char* Vtb_random_gemm::modelName() const { return "Vtb_random_gemm"; }
unsigned Vtb_random_gemm::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtb_random_gemm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_random_gemm___024root__trace_init_top(Vtb_random_gemm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_random_gemm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_random_gemm___024root*>(voidSelf);
    Vtb_random_gemm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_random_gemm___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_random_gemm___024root__trace_register(Vtb_random_gemm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_random_gemm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_random_gemm::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_random_gemm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
