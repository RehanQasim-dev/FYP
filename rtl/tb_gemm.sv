`include "top.sv"
import Config::*;
`define base_addr 32'h9000_0000

module tb_gemm;
  logic clk, rst, system_bus_en, system_bus_rdwr;
  logic [31:0] system_bus_rd_data, system_bus_wr_data;
  logic [31:0] system_bus_addr;
  logic [4:0] interface_control;
  logic interface_rdwr;
  logic interface_en;
  logic [31:0] interface_addr;
  logic [127:0] interface_rd_data;
  logic [127:0] interface_wr_data;
  localparam M = 16;
  localparam K = 16;
  localparam N = 16;
  //addresses
  localparam A = 0;
  // localparam B = M * K + (ksize - 1) * nsize;
  localparam B = M * K;
  localparam C = (M * K + K * N);
  gemm DUT (
      .clk(clk),
      .rst(rst),
      .system_bus_en(system_bus_en),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_rd_data(system_bus_rd_data),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr(system_bus_addr),
      .interface_control(interface_control),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_addr(interface_addr),
      .interface_rd_data(interface_rd_data),
      .interface_wr_data(interface_wr_data)
  );


  memory #(
      .NUM_RAMS(16),
      .A_WID(7),
      .D_WID(8)
  ) memory_instance (
      .clk(clk),
      .system_bus_en(0),
      .system_bus_rdwr(system_bus_rdwr),
      .system_bus_rd_data(),
      .system_bus_wr_data(system_bus_wr_data),
      .system_bus_addr(system_bus_addr),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_control(interface_control),
      .interface_addr(interface_addr),
      .din(interface_wr_data),
      .bank_dout(interface_rd_data)
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
  localparam blkn = SUPER_SYS_ROWS;
  localparam blkk = SUPER_SYS_COLS;
  localparam blkm = 16;
  int n, m, k;
  int nsize, msize, ksize;
  bit last, first;
  int Tile_A_Address, Tile_B_Address, Tile_C_Address;
  initial begin
    //configuration
    rst <= 1;
    @(posedge clk);
    rst <= 0;
    for (n = 0; n < N; n += blkn) begin
      nsize = (n + blkn <= N) ? blkn : N % blkn;

      for (m = 0; m < M; m += blkm) begin
        msize = (m + blkm <= M) ? blkm : M % blkm;

        for (k = 0; k < K; k += blkk) begin
          $display("n= %d, m= %d, k= %d", n, m, k);
          last = (k + blkk >= K);
          first = k == 0;
          ksize = (k + blkk <= K) ? blkk : K % blkk;
          Tile_A_Address = A + k + m * K;
          Tile_B_Address = B + n + k * N + (ksize - 1) * N;
          Tile_C_Address = C + n + m * K;
          @(posedge clk);
          system_bus_en <= 1;
          system_bus_rdwr <= 1;
          system_bus_addr <= `base_addr + 12;  //tile_A_stride
          system_bus_wr_data <= K;
          @(posedge clk);
          system_bus_addr <= `base_addr + 16;  //tile_B_stride
          system_bus_wr_data <= N;
          @(posedge clk);
          system_bus_en <= 1;
          system_bus_rdwr <= 1;
          system_bus_wr_data <= Tile_A_Address;  //tile_A_addr
          system_bus_addr <= `base_addr;
          $display("Tile_A_addr= %d", Tile_A_Address);
          @(posedge clk);
          system_bus_addr <= `base_addr + 4;
          system_bus_wr_data <= Tile_B_Address;  //tile_B_addr
          $display("Tile_B_addr= %d", Tile_B_Address);
          @(posedge clk);
          system_bus_addr <= `base_addr + 8;
          system_bus_wr_data <= Tile_C_Address;  //tile_C_addr
          $display("Tile_C_addr= %d", Tile_C_Address);

          @(posedge clk);
          system_bus_addr <= `base_addr + 20;  //GEMM_control
          system_bus_wr_data <= first << 1 | last;
          @(posedge clk);
          system_bus_addr <= `base_addr + 24;  //GEMM_DIM
          system_bus_wr_data <= msize | ksize << 5 | nsize << 10;
          $display("msize=%d, nsize=%d, ksize=%d", msize, nsize, ksize);
          @(posedge clk);
          system_bus_en   <= 1;
          system_bus_rdwr <= 0;
          system_bus_addr <= `base_addr;  //check if GEMM is FULLL
          #1;
          while (system_bus_rd_data == 1'b1) begin
            #1;
            // Wait for the GEMM operation to complete;
          end
        end
      end
      system_bus_en   <= 1;
      system_bus_rdwr <= 0;
      system_bus_addr <= `base_addr + 24;  //check if GEMM is done
      #1;
      while (system_bus_rd_data != 1'b1) begin
        #1;
        // Wait for the GEMM operation to complete;
      end
    end



    //
    @(posedge clk);
    system_bus_en <= 0;
    repeat (30) @(posedge clk);
    $finish;
  end

  //Monitor values at posedge
  always @(posedge clk) begin
    $display(" ");
    $display("----------------------------------------------------------");
  end

  //Value change dump

  initial begin
    $dumpfile("tb_top_dump.vcd");
    $dumpvars(1, DUT);
  end
endmodule
