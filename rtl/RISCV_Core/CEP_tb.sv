module CEP_tb;
logic  reset, timer_en, ext_inter;
logic  [7:0] an;
logic [6:0] a_to_g;
logic clk = 0;

initial begin
    forever #1 clk <=~clk;
end
CEP dut (clk, reset, timer_en, ext_inter, an, a_to_g);
initial begin
    @(posedge clk) reset=0;

    @(posedge clk) reset=1;
    @(posedge clk)
    @(posedge clk) reset=0;

end




endmodule