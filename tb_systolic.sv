module tb_systolic;

  logic clk, rst;
  systolic DUT (
      .clk(clk),
      .rst(rst),
      .if_en(3),
      .wfetch(0),
      .if_data(0),
      .wdata(0),
      .bias(0),
      .of_data(of_data),
      .if_data_out(if_data_out),
      .if_en_out(if_en_out),
      .wfetch_out(wfetch_out),
      .wdata_out(wdata_out)
  );
  //   systolic_copy DUT (
  //       .clk(clk),
  //       .rst(rst),
  //       .if_en(3),
  //       .wfetch(3),
  //       .if_data(),
  //       .wdata(),
  //       .bias(bias),
  //       .of_data(of_data)
  //   );
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
    rst <= 1;
    @(posedge clk);
    rst <= 0;
    @(posedge clk);
    //
    @(posedge clk);
    repeat (2) @(posedge clk);
    $finish;
  end

  //Monitor values at posedge
  always @(posedge clk) begin
    $display(" ");
    $display("----------------------------------------------------------");
  end

  //Value change dump

  initial begin
    $dumpfile("tb_systolic_dump.vcd");
    $dumpvars(1, DUT);
  end
endmodule
