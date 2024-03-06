module test_des (
    input logic a,
    b,
    sel,
    output y
);
  assign y = 1'bz;
  assign y = 1'bx;
endmodule

module test ();
  logic a, b, y, sel;
  test_des test_des_instance (
      .a  (a),
      .b  (b),
      .sel(sel),
      .y  (y)
  );
  initial begin
    a   = 0;
    b   = 1;
    sel = 0;
    #3;
    $display("y=%d", y);
  end
endmodule
