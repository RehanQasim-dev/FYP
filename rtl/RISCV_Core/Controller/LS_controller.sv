module LS_controller (
    input  logic [ 2:0] func3,
    input  logic [ 1:0] addr,
    input  logic [31:0] rdata2,
    output logic [31:0] wdata_mem,
    output logic [ 3:0] mask,
    input  logic [31:0] system_bus_rd_data,
    output logic [31:0] data_to_load

);
  localparam b = 3'b000;
  localparam h = 3'b001;
  localparam w = 3'b010;
  localparam bu = 3'b100;
  localparam hu = 3'b101;
  logic [2:0] load_op;

  always_comb begin
    case (func3)
      b: begin
        case (addr)
          2'b00: begin
            mask = 4'b0001;
            wdata_mem = {{24{1'b0}}, {rdata2[7:0]}};
          end
          2'b01: begin
            mask = 4'b0010;
            wdata_mem = {{16{1'b0}}, {rdata2[7:0]}, {8{1'b0}}};
          end
          2'b10: begin
            mask = 4'b0100;
            wdata_mem = {{8{1'b0}}, {rdata2[7:0]}, {16{1'b0}}};
          end
          2'b11: begin
            mask = 4'b1000;
            wdata_mem = {{rdata2[7:0]}, {24{1'b0}}};
          end
          default: begin
            mask = 'x;
            wdata_mem = 'x;
          end
        endcase
        load_op = 3'b000;
      end
      h: begin
        case (addr[1])
          0: begin
            mask = 4'b0011;
            wdata_mem = {{16{1'b0}}, {rdata2[15:0]}};
          end
          1: begin
            mask = 4'b1100;
            wdata_mem = {{rdata2[15:0]}, {16{1'b0}}};
          end
          default: begin
            mask = 'x;
            wdata_mem = 'x;
          end
        endcase
        load_op = 3'b001;
      end
      w: begin
        mask = 4'b1111;
        wdata_mem = rdata2;
        load_op = 3'b010;
      end
      bu: begin
        mask = 'x;
        wdata_mem = rdata2;
        load_op = 3'b011;
      end
      hu: begin
        mask = 'x;
        wdata_mem = rdata2;
        load_op = 3'b100;
      end
      default: begin
        mask = 'x;
        wdata_mem = rdata2;
        load_op = 3'b100;
      end
    endcase
  end

  //Reading data_memory
  always_comb begin
    case (load_op)
      3'b000: begin
        case (addr[1:0])
          2'b00:   data_to_load = {{24{system_bus_rd_data[7]}}, system_bus_rd_data[7:0]};
          2'b01:   data_to_load = {{24{system_bus_rd_data[15]}}, system_bus_rd_data[15:8]};
          2'b10:   data_to_load = {{24{system_bus_rd_data[23]}}, system_bus_rd_data[23:16]};
          2'b11:   data_to_load = {{24{system_bus_rd_data[31]}}, system_bus_rd_data[31:24]};
          default: data_to_load = 'x;
        endcase
      end
      3'b001: begin
        case (addr[1])
          0: data_to_load = {{16{system_bus_rd_data[15]}}, system_bus_rd_data[15:0]};
          1: data_to_load = {{16{system_bus_rd_data[31]}}, system_bus_rd_data[31:16]};
          default: data_to_load = 'x;
        endcase
      end
      3'b010: begin
        data_to_load = system_bus_rd_data;
      end
      3'b011: begin
        case (addr[1:0])
          2'b00:   data_to_load = {{24{1'b0}}, system_bus_rd_data[7:0]};
          2'b01:   data_to_load = {{24{1'b0}}, system_bus_rd_data[15:8]};
          2'b10:   data_to_load = {{24{1'b0}}, system_bus_rd_data[23:16]};
          2'b11:   data_to_load = {{24{1'b0}}, system_bus_rd_data[31:24]};
          default: data_to_load = 'x;
        endcase
      end
      3'b100: begin
        case (addr[1])
          1'b0: data_to_load = {{16{1'b0}}, system_bus_rd_data[15:0]};
          1'b1: data_to_load = {{16{1'b0}}, system_bus_rd_data[31:16]};
          default: data_to_load = 'x;
        endcase
      end
      default: data_to_load = 'x;
    endcase
  end
endmodule
