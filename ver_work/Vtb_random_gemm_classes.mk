# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_random_gemm.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_random_gemm \
	Vtb_random_gemm___024root__DepSet_h28bfc5d6__0 \
	Vtb_random_gemm___024root__DepSet_h9ca26d84__0 \
	Vtb_random_gemm_systolic_setup__P10__DepSet_h6ed6a72b__0 \
	Vtb_random_gemm_systolic_setup__D1_P10__DepSet_he6948b86__0 \
	Vtb_random_gemm_systolic__DepSet_h197ea910__0 \
	Vtb_random_gemm_systolic__DepSet_h197ea910__1 \
	Vtb_random_gemm_systolic__DepSet_h6be198c6__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_random_gemm__ConstPool_0 \
	Vtb_random_gemm___024root__Slow \
	Vtb_random_gemm___024root__DepSet_h28bfc5d6__0__Slow \
	Vtb_random_gemm___024root__DepSet_h9ca26d84__0__Slow \
	Vtb_random_gemm___024unit__Slow \
	Vtb_random_gemm___024unit__DepSet_ha9aac11f__0__Slow \
	Vtb_random_gemm_systolic_setup__P10__Slow \
	Vtb_random_gemm_systolic_setup__P10__DepSet_hde798eef__0__Slow \
	Vtb_random_gemm_systolic_setup__D1_P10__Slow \
	Vtb_random_gemm_systolic_setup__D1_P10__DepSet_h56bbbb54__0__Slow \
	Vtb_random_gemm_systolic__Slow \
	Vtb_random_gemm_systolic__DepSet_h197ea910__0__Slow \
	Vtb_random_gemm_systolic__DepSet_h6be198c6__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_random_gemm__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_random_gemm__Syms \
	Vtb_random_gemm__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
