module soc (
    input logic clk, rst,
     output logic [7:0] an,
    output logic [6:0] a_to_g
);

logic clk_50, clk_25;

    tff divider_1 (clk, rst, clk_25);
   
    top top_instance (clk_25,rst, an, a_to_g);
    
endmodule