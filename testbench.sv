// `include "memory_test.sv"

module testbench;

  logic clk;
  logic interface_rdwr;
  logic interface_en;
  logic [4:0] interface_control;
  logic [31:0] interface_addr;
  logic [7:0] din[15:0];
  logic [7:0] bank_dout[15:0];
  memory_test memory_test_instance (
      .clk(clk),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_control(interface_control),
      .interface_addr(interface_addr),
      .din(din),
      .bank_dout(bank_dout)
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
    interface_addr = 0;
    interface_en   = 1;
    interface_rdwr = 0;
    @(posedge clk);
        interface_addr = 1;
    @(posedge clk);
        interface_addr = 2;
            @(posedge clk);
        interface_addr = 3;
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
    $dumpfile("testbench_dump.vcd");
    $dumpvars(1, DUT);
  end
endmodule
