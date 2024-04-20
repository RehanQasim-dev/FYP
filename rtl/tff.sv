module tff ( input logic clk, rst, output logic  out);
    logic [2:0] d;

        always_ff @( posedge clk, posedge rst ) begin : blockName
            if (rst) d <=0;
            else d<= d + 1'b1;
        end

        assign out = d[2];
    
endmodule 