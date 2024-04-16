module Instrmem (
    input  logic [31:0] addr_i,
    output logic [31:0] instruction_o
);
  logic [31:0] instrmem[1024];
  initial begin
    $readmemh("/home/abdul_waheed/Music/FYP/rtl/Script/build/ICACHE.mem", instrmem);
  end

  assign instruction_o = instrmem[addr_i[11:2]];
endmodule

