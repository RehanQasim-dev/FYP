interface Axi_stream_no_ready #(
    parameter DATA_WIDTH = 32
);

  logic [DATA_WIDTH-1:0] axi_data;
  logic axi_valid;  // Indicates that axi_data is valid

  modport slave(input axi_data, axi_valid);
  modport master(output axi_data, axi_valid);
endinterface

interface Axi_stream #(
    parameter DATA_WIDTH = 32
);

  logic [DATA_WIDTH-1:0] axi_data;
  logic axi_valid;  // Indicates that axi_data is valid
  logic axi_ready; // If axi_valid (master) and axi_ready (slave) are asserted, axi_data is consumed 

  modport slave(input axi_data, axi_valid, output axi_ready);
  modport master(output axi_data, axi_valid, input axi_ready);

endinterface

interface Axi_lite #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 16
);

  logic [DATA_WIDTH-1:0] axi_rd_data;
  logic [ADDR_WIDTH-1:0] axi_rd_addr;
  logic [DATA_WIDTH-1:0] axi_wr_data;
  logic [ADDR_WIDTH-1:0] axi_wr_addr;
  modport slave(input axi_rd_addr, axi_wr_data, axi_wr_addr, output axi_rd_data);
  modport master(output axi_rd_addr, axi_wr_data, axi_wr_addr, input axi_rd_data);
endinterface
