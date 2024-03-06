module Main_controller (
    input logic clk,
    input logic rst,
    input logic [3:0] buffer_empty,  // Buffer empty status signal
    input logic [4:0] msize,  // Size parameter m
    input logic [4:0] nsize,  // Size parameter n
    input logic [4:0] ksize,  // Size parameter k (ensure this is correctly used or defined)
    input logic [31:0] tile_A_addr,  // Tile A address
    input logic [31:0] tile_B_addr,  // Tile B address
    input logic [31:0] tile_A_stride,  // Stride for Tile A
    input logic [31:0] tile_B_stride,  // Tile B stride
    input logic [31:0] tile_C_addr,  // Tile C address
    input logic conf_empty,  // Configuration empty signal
    input logic ready_for_HI,  // Signal indicating readiness for high importance tasks
    input logic [1:0] mode,  // Operating mode
    input logic conf_buff_read,  // Configuration buffer read signal
    input logic store,  // Store operation signal
    output logic [4:0] interface_control,
    output logic interface_rdwr,
    output logic interface_en,
    output logic [3:0] rd_result,
    output logic [31:0] interface_addr,
    output logic prefetch_done
);
  logic gt4, gt8, gt12;  // Greater than 4, 8, 12 signals
  assign gt4  = nsize > 4;
  assign gt8  = nsize > 8;
  assign gt12 = nsize > 12;
  // Internal signals for Load_Ex_controller
  logic        done_store;  // Signal indicating completion of store operation
  logic [31:0] current_addr;  // Current address
  logic        can_store;  // Signal to indicate if storing is possible
  logic [31:0] next_addr;  // Next address to generate
  logic        gen_addr;  // Generate address signal

  // Instantiate Load_Ex_controller
  Load_Ex_controller my_controller (
      .rst(rst),
      .clk(clk),
      .done_store(done_store),
      .store(store),
      .conf_empty(conf_empty),
      .ready_for_HI(ready_for_HI),
      .mode(mode),
      .current_addr(current_addr),
      .tile_B_addr(tile_B_addr),
      .tile_A_addr(tile_A_addr),
      .tile_B_stride(tile_B_stride),
      .tile_A_stride(tile_A_stride),
      .msize(msize),
      .nsize(nsize),
      .ksize(ksize),
      .can_store(can_store),
      .interface_rdwr(interface_rdwr),
      .interface_en(interface_en),
      .interface_control(interface_control),
      .conf_buff_read(conf_buff_read),
      .next_addr(next_addr),
      .gen_addr(gen_addr),
      .prefetch_done(prefetch_done)
  );

  logic [31:0] current_store_addr;  // Current address

  // Instantiate store_controller
  store_controller my_store_controller (
      .clk(clk),
      .rst(rst),
      .can_do_store(can_store),
      .buffer_empty(buffer_empty),
      .msize(msize),
      .nsize(nsize),
      .gt4(gt4),
      .gt8(gt8),
      .gt12(gt12),
      .tile_C_addr(tile_C_addr),
      .tile_B_stride(tile_B_stride),
      .current_row_addr(current_addr),
      .rd_result(rd_result),
      .gen_addr(gen_addr),
      .interface_en(interface_en),
      .interface_control(interface_control),
      .next_row_addr(next_addr),
      .current_addr(current_store_addr),
      .interface_rdwr(interface_rdwr),
      .done_store(done_store)
  );

  assign interface_addr = can_store ? current_store_addr : current_addr;
  always_ff @(posedge clk) begin
    if (rst) current_addr <= 0;
    else if (gen_addr) current_addr <= next_addr;
  end
endmodule
