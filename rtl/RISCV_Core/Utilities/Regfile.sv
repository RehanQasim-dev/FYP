module Regfile (
    input logic rst,
    clk,
    write_en,
    input logic [4:0] rs1_in,
    rs2_in,
    rd,
    input logic [31:0] write_data,
    output logic [31:0] rs1_out,
    rs2_out
);
  logic [31:0] register_memory[31:0];
  // initial begin
  //   // register_memory = '{default: 0};
  //   // $readmemh("/Study/6th semester/Computer Architecture/Pipeline/src/Memory Files/registervalues.mem", register_memory);
  // end

  logic valid_write_en;
  //validations
  assign valid_write_en = |rd & write_en;
  assign rs1_out = register_memory[rs1_in];
  assign rs2_out = register_memory[rs2_in];
  always_ff @(negedge clk)  // make reset for two cycles at the start
    if (rst) register_memory = '{default: '0};
    else if (valid_write_en) register_memory[rd] <= write_data;
endmodule
