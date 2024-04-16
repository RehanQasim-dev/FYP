
verilator   ?= verilator
ver-library ?= ver_work
defines     ?= 
max_cycles ?= 100000
vcd        ?= 1
imem ?= ./rtl/Script/build/ICACHE.mem
dmem ?= ./rtl/Script/build/DCACHE.mem


incdir 	:= 	rtl/
list_incdir := $(foreach dir, ${incdir}, +incdir+$(dir))



src_core := ./rtl/RISCV_Core/CEP.sv 						\
			./rtl/RISCV_Core/RISC_V.sv			\
	   $(wildcard ./rtl/RISCV_Core/Datapath/*.sv)							\
	   $(wildcard ./rtl/RISCV_Core/Decoders/*.sv)						\
	   $(wildcard ./rtl/RISCV_Core/Utilities/*.sv)				
	 
	  

src_gemm :=  ./rtl/tb_random_gemm.sv							\
	   $(wildcard ./rtl/Common/*.*)							\
	   $(wildcard ./rtl/Controller/*.sv)						\
	   $(wildcard ./rtl/Datapath/*.sv)						\
	   $(wildcard ./rtl/Utilities/*.sv)			\
	   $(wildcard ./rtl/RISCV_Core/Datapath/*.sv)							\
	   $(wildcard ./rtl/RISCV_Core/Decoders/*.sv)						\
	   $(wildcard ./rtl/RISCV_Core/*.sv)						\
	   $(wildcard ./rtl/RISCV_Core/Utilities/*.sv)			
 			
	  
	  
	  
      


verilate_command_core := $(verilator) +define+$(defines) \
					--cc $(src_core) $(list_incdir)	\
					--top-module CEP			\
					-Wno-TIMESCALEMOD 			\
					-Wno-MULTIDRIVEN 			\
					-Wno-CASEOVERLAP 			\
        				-Wno-WIDTH  			\
					-Wno-UNOPTFLAT 				\
					-Wno-IMPLICIT 				\
					-Wno-PINMISSING 			\
					--timing	\
					--Mdir $(ver-library)				\
					--exe bench/tb_CEP.cpp		\
					--trace-structs --trace
					
verilate_command_gemm := $(verilator) 	+define+$(defines)		\
					--cc $(src_gemm) $(list_incdir)	\
					--top-module tb_random_gemm			\
					-Wno-TIMESCALEMOD 			\
					-Wno-MULTIDRIVEN 			\
					-Wno-CASEOVERLAP 			\
        				-Wno-WIDTH  			\
					-Wno-MODDUP	\
					-Wno-WIDTHCONCAT \
					-Wno-CMPCONST	\
					-Wno-CASEINCOMPLETE	\
					-Wno-INITIALDLY	\
					-Wno-LATCH	\
					-Wno-UNOPTFLAT 				\
					-Wno-IMPLICIT 				\
					-Wno-PINMISSING 			\
					--timing	\
					--Mdir $(ver-library)			\
					--exe bench/tb_random_gemm.cpp		\
					--trace-structs --trace


verilate_core: 
	@echo "Building verilator model"
	$(verilate_command_core)
	cd $(ver-library) && $(MAKE) -f VCEP.mk
	@echo "hello entering simulation"
	$(ver-library)/VCEP  +max_cycles=$(max_cycles) +vcd=$(vcd)


verilate_gemm:
	@echo "Building verilator model"
	$(verilate_command_gemm)
	cd $(ver-library) && $(MAKE) -f Vtb_random_gemm.mk
	@echo "hello entering simulation"
	$(ver-library)/Vtb_random_gemm  +max_cycles=$(max_cycles) +vcd=$(vcd)


clean-all:
	rm -rf ver_work/ *.log *.vcd 					\
	verif/*work/


