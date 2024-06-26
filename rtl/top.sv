module top (
    input clk,
    rst,
    output logic is_gemm_addr_late

);

  logic system_bus_en, system_bus_rdwr;
  logic [31:0]
      system_bus_rd_data, system_bus_wr_data, gemm_conf_read, mem_read_data, gemm_conf_read_ppl;
  logic [31:0] system_bus_addr;
  logic [4:0] interface_control;
  logic interface_rdwr;
  logic interface_en;
  logic [31:0] interface_addr;
  logic [127:0] interface_rd_data;
  logic [127:0] interface_wr_data;
  logic [3:0] system_bus_mask;
  RISC_V RISC_V_instance (
      .clk(clk),
      .rst(rst),
      .timer_en(0),
      .ext_inter(0),
      //        .reset(rst),
      //       .interrupt(1'b0),
      .system_bus_en(system_bus_en),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_rd_data(system_bus_rd_data),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr(system_bus_addr),
      .system_bus_mask(system_bus_mask)
  );
  assign is_gemm_addr = system_bus_addr[31:28] == 4'b1001;
  always_ff @(posedge clk) begin : blockName
    is_gemm_addr_late  <= is_gemm_addr;
    gemm_conf_read_ppl <= gemm_conf_read;
  end
  assign system_bus_rd_data = is_gemm_addr_late ? gemm_conf_read_ppl : mem_read_data;
  assign en_gemm_conf = system_bus_en && is_gemm_addr;
  assign en_Dmem = system_bus_en && (~is_gemm_addr);
  memory #(
      .NUM_RAMS(16),
      .A_WID(9),
      .D_WID(8)
  ) memory_instance (
      .clk(clk),
      .system_bus_en(en_Dmem),
      .system_bus_mask(system_bus_mask),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_rd_data(mem_read_data),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr({system_bus_addr[31:2], 2'd0}),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_control(interface_control),
      .interface_addr(interface_addr),
      .interface_wr_data(interface_wr_data),
      .interface_rd_data(interface_rd_data)
  );

  gemm gemm_instance (
      .clk(clk),
      .rst(rst),
      .system_bus_en(en_gemm_conf),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_rd_data(gemm_conf_read),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr({system_bus_addr[31:2], 2'd0}),
      .interface_control(interface_control),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_addr(interface_addr),
      .interface_rd_data(interface_rd_data),
      .interface_wr_data(interface_wr_data)
  );
endmodule
