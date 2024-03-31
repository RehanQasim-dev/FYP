//`include "data_mem.sv"
//`include "CSR_reg.sv"
module wb_stage (
    input logic clk,
    rst,
    mem_wr,
    mem_read,
    csr_reg_wr,
    csr_reg_r,
    is_mret,
    input logic [31:0] ALU_o,
    input logic [1:0] wb_sel,
    input logic [31:0] PC,
    mem_wr_data,
    instruction,
    rdata1,
    input logic [3:0] interrupt,
    output logic [31:0] wb_data,
    epc,
    output logic epc_taken,
    // loaded,
    //system bus interfaace
    output logic system_bus_en,
    system_bus_rdwr,
    input logic [31:0] system_bus_rd_data,
    output logic [31:0] system_bus_wr_data,
    system_bus_addr,
    output logic [3:0] system_bus_mask
);
  logic [31:0] data_to_load, csr_read_data;
  logic [ 2:0] func3;
  logic [ 1:0] mem_col;
  logic [11:0] csr_addr;
  localparam I_type = 5'b00100;
  localparam Load_type = 5'b00000;
  localparam B_type = 5'b11000;
  localparam S_type = 5'b01000;
  localparam J_type = 5'b11011;
  localparam Jalr_type = 5'b11001;
  localparam lui_type = 5'b01101;
  localparam auipc_type = 5'b00101;
  assign func3 = instruction[14:12];
  assign mem_col = ALU_o[1:0];
  assign csr_addr = instruction[31:20];
  always_comb begin
    case (wb_sel)
      2'b00:   wb_data = PC + 4;
      2'b01:   wb_data = ALU_o;
      2'b10:   wb_data = data_to_load;
      2'b11:   wb_data = csr_read_data;
      default: wb_data = 'x;
    endcase
  end
  // always_ff @(posedge clk) begin
  //   if (wb_sel == 2'b01) loaded <= 1'b0;
  //   else loaded <= loaded + 1'b1;
  // end

  LS_controller LS_controller_instance (
      .func3(func3),
      .addr(mem_col),
      .rdata2(mem_wr_data),
      .wdata_mem(system_bus_wr_data),
      .mask(system_bus_mask),
      .system_bus_rd_data(system_bus_rd_data),
      .data_to_load(data_to_load)
  );
  assign system_bus_en   = mem_wr || mem_read;
  assign system_bus_rdwr = mem_wr;
  assign system_bus_addr = ALU_o;
  CSR_reg CSR_reg_instance (
      .clk(clk),
      .rst(rst),
      .reg_wr(csr_reg_wr),
      .reg_r(csr_reg_r),
      .PC(PC),
      .addr(csr_addr),
      .interrupt(interrupt),
      .wdata_csr(rdata1),
      .is_mret(is_mret),
      .rdata(csr_read_data),
      .epc(epc),
      .epc_taken(epc_taken)
  );
endmodule
