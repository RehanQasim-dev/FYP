interface interface_dbus;
  logic en, rdwr;
  logic [3:0] mask;
  logic [3:0][7:0] rd_data;
  logic [3:0][7:0] wr_data;
  logic [31:0] addr;
  modport slave(input en, rdwr, mask, wr_data, addr, output rd_data);
  modport master(output en, rdwr, mask, wr_data, addr, input rd_data);
endinterface
// interface Axi_stream #(
//     parameter DATA_WIDTH = 32
// );

// interface Axi_stream_no_ready #(
//     parameter DATA_WIDTH = 32
// );

//   logic [DATA_WIDTH-1:0] axi_data;
//   logic axi_valid;  // Indicates that axi_data is valid

//   modport slave(input axi_data, axi_valid);
//   modport master(output axi_data, axi_valid);
// endinterface

// interface Axi_stream #(
//     parameter DATA_WIDTH = 32
// );

//   logic [DATA_WIDTH-1:0] axi_data;
//   logic axi_valid;  // Indicates that axi_data is valid
//   logic axi_ready; // If axi_valid (master) and axi_ready (slave) are asserted, axi_data is consumed 

//   modport slave(input axi_data, axi_valid, output axi_ready);
//   modport master(output axi_data, axi_valid, input axi_ready);

// endinterface

