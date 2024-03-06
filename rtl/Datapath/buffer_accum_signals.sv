module buffer_accum_signals (
    input logic clk,
    rst,
    input logic [1:0] mode,
    input logic [1:0] mode_FV_if,
    input logic store,
    overwrite,
    output logic store_buffered,
    overwrite_buffered
);
  logic en;
  always_ff @(posedge clk) begin
    if (en) begin
      store_buffered <= store;
      overwrite_buffered <= overwrite;
    end
  end
  logic [1:0] mode_FV_if_old;
  always_ff @(posedge clk) begin
    mode_FV_if_old <= mode_FV_if;
  end
  always_comb begin
    if (mode == 0 || mode == 2) en = mode_FV_if_old[1] && ~mode_FV_if[1];
    else en = mode_FV_if_old[0] && ~mode_FV_if[0];
  end
endmodule
