`include "memory.sv"

module memory_tb;
  logic clk, system_bus_en, system_bus_rdwr;
  logic [3:0] system_bus_mask;
  logic [3:0][7:0] system_bus_rd_data;
  logic [3:0][7:0] system_bus_wr_data;
  logic [31:0] system_bus_addr;
  logic interface_rdwr;
  logic interface_en;
  logic [4:0] interface_control;
  logic [31:0] interface_addr;
  logic [15:0][7:0] din;
  logic [15:0][7:0] bank_dout;
  memory memory_instance (
      .clk(clk),
      .system_bus_en(system_bus_en),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_mask(system_bus_mask),
      .system_bus_rd_data(system_bus_rd_data),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr(system_bus_addr),
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
    //write
    repeat (50) begin  // Repeat 3 times
      // Write operation
      system_bus_en   <= 1;
      system_bus_rdwr <= 1;
      system_bus_addr <= $urandom_range(1000);  // Generate random address
      system_bus_mask <= $urandom_range(15);
      system_bus_wr_data = $random;  // Generate random write data
      @(posedge clk);
      // Read operation
      system_bus_en   <= 1;
      system_bus_rdwr <= 0;
      system_bus_mask <= 0;
      @(posedge clk);
      #1;  // Wait 1 time unit
    end
    $finish;
  end

  //Monitor values at posedge
  always @(posedge clk) begin
    $display(" ");
    $display("----------------------------------------------------------");
  end

  //Value change dump


endmodule
