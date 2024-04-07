import Config::*;
`define base_addr 32'h9000_0000

module tb_random_gemm;
  logic clk, rst, system_bus_en, system_bus_rdwr;
  logic [31:0] system_bus_rd_data, system_bus_wr_data;
  logic [31:0] system_bus_addr;
  logic [4:0] interface_control;
  logic interface_rdwr;
  logic interface_en;
  logic [31:0] interface_addr;
  logic [127:0] interface_rd_data;
  logic [3:0][31:0] interface_wr_data;
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

  // Additional test input signals
  logic [31:0] test_interface_addr;
  logic [127:0] test_interface_wr_data;
  logic [4:0] test_interface_control;
  logic test_interface_en;
  logic test_interface_rdwr;
  logic sel_for_test;

  // Define internal signals
  logic [31:0] selected_interface_addr;
  logic [127:0] selected_interface_wr_data;
  logic [4:0] selected_interface_control;
  logic selected_interface_en;
  logic selected_interface_rdwr;

  // Multiplexer to choose between test and original interface signals
  assign selected_interface_addr = sel_for_test ? test_interface_addr : interface_addr;
  assign selected_interface_wr_data = sel_for_test ? test_interface_wr_data : interface_wr_data;
  assign selected_interface_control = sel_for_test ? test_interface_control : interface_control; // Assuming default control value if not provided
  assign selected_interface_en = sel_for_test ? test_interface_en : interface_en; // Assuming default enable value if not provided
  assign selected_interface_rdwr = sel_for_test ? test_interface_rdwr : interface_rdwr; // Assuming default rdwr value if not provided
  memory #(
      .NUM_RAMS(16),
      .A_WID(10),
      .D_WID(8)
  ) memory_instance (
      .clk(clk),
      .interface_rdwr(selected_interface_rdwr),
      .interface_en(selected_interface_en),
      .interface_control(selected_interface_control),
      .interface_addr(selected_interface_addr),
      .interface_wr_data(selected_interface_wr_data),
      .interface_rd_data(interface_rd_data)
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
  int i, j;
  int M, K, N;
  int nsize, msize, ksize;
  bit last, first;
  int Tile_A_Address, Tile_B_Address, Tile_C_Address;
  // SystemVerilog does not support dynamic array sizes in module scope, 
  // so we use the maximum expected sizes and only use portions as needed.
  localparam MAX_SIZE = 22;  // Maximum dimension size for matrices
  localparam MAX_VAL = 8;  // Maximum value for matrix elements
  logic [MAX_SIZE-1:0][ 7:0] A[MAX_SIZE];
  logic [MAX_SIZE-1:0][ 7:0] B[MAX_SIZE];
  logic [MAX_SIZE-1:0][31:0] C[MAX_SIZE];
  int A_addr, B_addr, C_addr;
  /////////////////////////////////////////////Unit Testing/////////////////////////////////////////////
  initial begin
    rst <= 1;
    @(posedge clk);
    rst <= 0;
    sel_for_test <= 1;
    @(posedge clk);
    for (int test_no = 0; test_no < 2; test_no++) begin
      $display(
          "------------------------------------Test No %d--------------------------------------",
          test_no + 1);
      M = $urandom_range(20, MAX_SIZE);
      N = $urandom_range(20, MAX_SIZE);
      K = $urandom_range(20, MAX_SIZE);

      A_addr = 0;
      B_addr = M * K;
      C_addr = B_addr + K * N;

      for (int i = 0; i < M; i++) begin
        for (int j = 0; j < K; j++) begin
          A[i][j] = $urandom_range(0, MAX_VAL);
        end
      end
      for (int i = 0; i < K; i++) begin
        for (int j = 0; j < N; j++) begin
          B[i][j] = $urandom_range(0, MAX_VAL);
        end
      end
      $display("A=%p", A);
      $display("B=%p", B);

      for (i = 0; i < M; i++) begin
        for (j = 0; j < N; j++) begin
          C[i][j] = 0;
          for (k = 0; k < K; k++) begin
            C[i][j] += A[i][k] * B[k][j];
          end
        end
      end
      $display("C=%p", C);
      //////////////////////////////////////////send A Matrix///////////////////////////////////////////////
      for (i = 0; i < M; i++) begin
      for (j = 0; j < N; j+=blkk) begin
      
        test_interface_addr <= A_addr + i * K;
        test_interface_wr_data <= A[i];
        test_interface_control <= K;
        test_interface_en <= 1;
        test_interface_rdwr <= 1;
        sel_for_test <= 1;
        @(posedge clk);
      end
      //////////////////////////////////////////send B Matrix///////////////////////////////////////////////
      for (i = 0; i < K; i++) begin
        test_interface_addr <= B_addr + i * N;
        test_interface_wr_data <= B[i];
        test_interface_control <= N;
        test_interface_en <= 1;
        test_interface_rdwr <= 1;
        sel_for_test <= 1;
        @(posedge clk);
      end
      //////////////////////////////////////////Do Configurations///////////////////////////////////////////////
      sel_for_test <= 0;
      for (n = 0; n < N; n += blkn) begin
        // $display("n= %d=", n);

        nsize = (n + blkn <= N) ? blkn : N % blkn;


        for (m = 0; m < M; m += blkm) begin
          msize = (m + blkm <= M) ? blkm : M % blkm;
          // $display("m = %d", m);
          for (k = 0; k < K; k += blkk) begin
            // $display("k = %d", k);
            last = (k + blkk >= K);
            first = k == 0;
            ksize = (k + blkk <= K) ? blkk : K % blkk;
            Tile_A_Address = A_addr + k + m * K;
            Tile_B_Address = B_addr + n + k * N + (ksize - 1) * N;
            Tile_C_Address = C_addr + n + m * K;
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
            // $display("Tile_A_addr= %d", Tile_A_Address);
            @(posedge clk);
            system_bus_addr <= `base_addr + 4;
            system_bus_wr_data <= Tile_B_Address;  //tile_B_addr
            // $display("Tile_B_addr= %d", Tile_B_Address);
            @(posedge clk);
            system_bus_addr <= `base_addr + 8;
            system_bus_wr_data <= Tile_C_Address;  //tile_C_addr
            // $display("Tile_C_addr= %d", Tile_C_Address);

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
            @(posedge clk);
            $display("check");
            while (system_bus_rd_data == 1'b1) begin
              @(posedge clk);
              // Wait for the GEMM operation to complete;
            end
            $display("check2");

          end
        end
      end
      system_bus_en   <= 1;
      system_bus_rdwr <= 0;
      system_bus_addr <= `base_addr + 24;  //check if GEMM is done
      @(posedge clk);
      // $display("test1");
      while (system_bus_rd_data != 1'b1) begin
        @(posedge clk);
        // Wait for the GEMM operation to complete;
      end
      // $display("test2");

    end
    $finish;
  end

  int count_rows_compared;
  int total_tiles;

  initial begin
    forever begin
      count_rows_compared <= 0;
      @(negedge sel_for_test);
      total_tiles = ((N + SUPER_SYS_COLS - 1) / SUPER_SYS_COLS) * ((K + SUPER_SYS_ROWS - 1) / SUPER_SYS_ROWS);

      // total_tiles <= 1;
      // $display("total tiles:", total_tiles);

      repeat (total_tiles) begin
        // $display("msize= %d , nsize=%d", msize, nsize);

        while (count_rows_compared < msize) begin
          $display("count_rows_compared = %d", count_rows_compared);
          for (int i = 0; i < nsize; i++) begin
            if (i % 4 == 0) begin
              @(posedge clk);
              while (!(interface_en && interface_rdwr)) begin
                @(posedge clk);
                // $display("hii guys");
              end
            end

            // $display("en = %d , rdwr = %d", interface_en, interface_rdwr);
            $display("C[count_rows_compared][%d]=%d, interface_wr_data[%d]=%d", i,
                     C[count_rows_compared][i], i, interface_wr_data[i%4]);
            if (C[count_rows_compared][i] != interface_wr_data[i%4]) begin
              // Your comparison logic here
              // For example, if you want to print a message when there's a mismatch:
              $display("Mismatch found at index %d", i);
            end
          end
          count_rows_compared++;
        end
      end
      $display("Tile Test Passed");
    end
    $display("Matrix Test Passed");
  end

  //Value change dump

  initial begin
    $dumpfile("tb_top_dump.vcd");
    $dumpvars(1, DUT);
  end
endmodule
