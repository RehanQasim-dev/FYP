module Hazard_detection (
    input rst,
    clk,
    input logic reg_wr,
    mem_read,
    // loaded,
    PC_sel,
    epc_taken,
    input logic [4:0] raddr1,
    raddr2,
    rd_wb,
    input logic [1:0] wb_sel,
    input logic wait_for_gemm,
    output logic forw_a,
    forw_b,
    flush,
    stall
);
  logic stall_for_mem_read;
  logic valid;
  assign valid  = |rd_wb;
  assign forw_a = ((raddr1 == rd_wb) & reg_wr) & valid & (wb_sel == 2'b01);
  assign forw_b = ((raddr2 == rd_wb) & reg_wr) & valid & (wb_sel == 2'b01);
  // assign stall = (((raddr1 == rd_wb) | (raddr2 == rd_wb)) & valid & (wb_sel != 2'b01) & (~loaded)) | wait_for_gemm |stall_for_mem_read;
  assign stall  = wait_for_gemm | stall_for_mem_read;
  assign flush  = PC_sel | epc_taken;


  localparam NORMAL = 1'b0;
  localparam STALLED = 1'b1;
  logic cs, ns;

  always_comb begin

    stall_for_mem_read = 0;
    case (cs)
      NORMAL: begin
        if (mem_read) begin
          stall_for_mem_read = 1;
          ns = STALLED;
        end else begin
          stall_for_mem_read = 0;
          ns = NORMAL;
        end
      end
      STALLED: begin
        stall_for_mem_read = 0;
        ns = NORMAL;
      end
    endcase
  end

  always_ff @(posedge clk) begin
    if (rst) cs <= NORMAL;
    else cs <= ns;
  end

endmodule
