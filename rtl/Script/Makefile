
verilator   ?= verilator
ver-library ?= ver_work
defines     ?= 
max_cycles ?= 100000
vcd        ?= 1
imem ?= rtl/Script/build/ICACHE.mem
dmem ?= rtl/Script/build/DCACHE.mem



src_core := rtl/RISCV_CORE/CEP.sv							\
	   $(wildcard rtl/RISCV_CORE/Datapath/*.sv)							\
	   $(wildcard rtl/RISCV_CORE/Decoders/*.sv)						\
	   $(wildcard rtl/RISCV_CORE/*.sv)						\
	   $(wildcard rtl/RISCV_CORE/Utilities/x7segb8.sv)				
	 
	  

src_gemm := rtl/top.sv							\
	   $(wildcard rtl/Common/*.*)							\
	   $(wildcard rtl/Controller/*.sv)						\
	   $(wildcard rtl/Datapath/*.sv)						\
	   $(wildcard rtl/RISCV_CORE/Datapath/*.sv)							\
	   $(wildcard rtl/RISCV_CORE/Decoders/*.sv)						\
	   $(wildcard rtl/RISCV_CORE/*.sv)						\
	   $(wildcard rtl/RISCV_CORE/Utilities/x7segb8.sv)			
 			
	  
	  
	  
      


verilate_command_core := $(verilator) 			\
					--cc $(src_core) 	\
					--top-module CEP			\
					-Wno-TIMESCALEMOD 			\
					-Wno-MULTIDRIVEN 			\
					-Wno-CASEOVERLAP 			\
        				-Wno-WIDTH  			\
					-Wno-UNOPTFLAT 				\
					-Wno-IMPLICIT 				\
					-Wno-PINMISSING 			\
					--Mdir $(ver-library)			\
					--exe bench/tb_CEP.cpp		\
					--trace-structs --trace
					
verilate_command_gemm := $(verilator) 			\
					--cc $(src_gemm) 	\
					--top-module top			\
					-Wno-TIMESCALEMOD 			\
					-Wno-MULTIDRIVEN 			\
					-Wno-CASEOVERLAP 			\
        				-Wno-WIDTH  			\
					-Wno-UNOPTFLAT 				\
					-Wno-IMPLICIT 				\
					-Wno-PINMISSING 			\
					--Mdir $(ver-library)			\
					--exe bench/tb_top.cpp		\
					--trace-structs --trace


verilate_core: 
	@echo "Building verilator model"
	$(verilate_command_core)
	cd $(ver-library) && $(MAKE) -f tb_CEP.mk
	@echo "hello entering simulation"
	$(ver-library)/tb_CEP +imem=$(imem) +dmem=$(dmem) +max_cycles=$(max_cycles) +vcd=$(vcd)


verilate_gemm:
	@echo "Building verilator model"
	$(verilate_command_gemm)
	cd $(ver-library) && $(MAKE) -f tb_top.mk
	@echo "hello entering simulation"
	$(ver-library)/tb_top +imem=$(imem) +dmem=$(dmem) +max_cycles=$(max_cycles) +vcd=$(vcd)


clean-all:
	rm -rf ver_work/ *.log *.vcd 					\
	verif/*work/


