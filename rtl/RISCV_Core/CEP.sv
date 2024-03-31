module CEP (
    input logic clk,
    input logic rst,
    timer_en,
    ext_inter,
    output logic [7:0] an,
    output logic [6:0] a_to_g
);
  logic gemm_done, gemm_valid;
  logic [31:0] gemm_rdata1, gemm_rdata2, gemm_instruction, result;

  RISC_V RISC_V_instance (
      .clk(clk),
      .rst(rst),
      .timer_en(timer_en),
      .ext_inter(ext_inter),
      .gemm_done(gemm_done),
      .gemm_valid(gemm_valid),
      .gemm_rdata1(gemm_rdata1),
      .gemm_rdata2(gemm_rdata2),
      .gemm_instruction(gemm_instruction)
  );


  x7segb8 x7segb8_instance (
      .x(result),
      .clk(clk),
      .clr(rst),
      .a_to_g(a_to_g),
      .an(an),
      .dp()
  );
endmodule
