`include "divider.sv"

module divider_tb;
  logic clk, rst, done_o, start_i;
  logic [31:0] opr1_i, opr2_i, rem_o, quo_o;
  divider divider_instance (
      .clk(clk),
      .rst(rst),
      .start_i(start_i),
      .opr1_i(opr1_i),
      .opr2_i(opr2_i),
      .done_o(done_o),
      .quo_o(quo_o),
      .rem_o(rem_o)
  );
  //clock generation
  localparam CLK_PERIOD = 10;
  initial begin
    clk <= 0;
    forever begin
      #(CLK_PERIOD / 2);
      clk <= ~clk;
    end
  end
  //Testbench

  initial begin
    rst <= 0;
    @(posedge clk);
    @(posedge clk);
    rst <= 1;
    opr1_i <= 32'd8;
    opr2_i <= 32'd3;
    start_i <= 1;

    @(posedge clk);
    repeat (50) @(posedge clk);
    $finish;
  end

  //Monitor values at posedge
  always @(posedge clk) begin
    $display(" ");
    $display("----------------------------------------------------------");
  end

  //Value change dump

  initial begin
    $dumpfile("divider_dump.vcd");
    $dumpvars(0, divider_tb);
  end
endmodule
