// 3-D Ram Inference Example (True Dual port)
// File:rams_tdp_3d.sv
module memory #(
    parameter NUM_RAMS = 16,
    A_WID = 3,
    D_WID = 8
) (
    input logic clk,
    system_bus_en,
    system_bus_rdwr,
    output logic [3:0][D_WID-1:0]system_bus_rd_data,
    input logic [3:0][D_WID-1:0] system_bus_wr_data,
    [31:0] system_bus_addr,
    input logic interface_rdwr,
    input logic interface_en,
    input logic [4:0] interface_control,
    input logic [31:0] interface_addr,
    input logic [NUM_RAMS-1:0][D_WID-1:0] din,
    output logic [NUM_RAMS-1:0][D_WID-1:0] bank_dout
);

  logic [15:0] mask;  // 16-bit output mask
  logic [D_WID-1:0] bank_din[NUM_RAMS-1:0];
  logic [D_WID-1:0] dout[NUM_RAMS-1:0];
  logic [31:0] bank_addr[NUM_RAMS-1:0];
  logic [15:0] bank_mask;
  logic [3:0] starting_addr;

  always_ff @(posedge clk) begin : blockName
    starting_addr <= interface_addr[3:0];
  end
  logic [31:0] true_addr;
  logic [15:0]true_en,bank_en,bank_wren;
  logic [NUM_RAMS-1:0][D_WID-1:0] true_datain;
  assign system_bus_rd_data=bank_dout[3:0];
  assign true_addr=system_bus_en?system_bus_addr:interface_addr;
  genvar i;
  for (i = 0; i<16 ;i++ ) begin
    assign bank_wren[i]=system_bus_en?system_bus_rdwr:interface_rdwr && mask[i];
  if (i<4)begin
      assign true_datain[i]=system_bus_en?system_bus_wr_data[i]:din[i];
      assign true_en[i]=system_bus_en?1'b1:interface_en; end
  else begin
      assign true_datain[i]=din[i];
      assign true_en[i]=system_bus_en?1'b0:interface_en;
  end
  end

    for (i = 0; i < NUM_RAMS; i++) begin
           assign bank_mask[i] = bank_wren[(i+true_addr[3:0])%16];
           assign bank_en[i] = true_en[(i+true_addr[3:0])%16];
           assign bank_din[i]  = true_datain[(i+true_addr[3:0])%16];
          //  assign bank_addr[i] = true_addr[31:4] + i < interface_addr[3:0];
          assign bank_addr[i] = {4'b0,true_addr[31:4]} + (i < interface_addr[3:0]);
    end
    for (i = 0; i < NUM_RAMS; i++) begin
          assign bank_dout[i] = dout[(i+starting_addr)%16];
    end

    always_comb begin
    mask = 0;  // Initialize all bits to 0
    for (int i = 1; i <= 16; i++) begin
      // Set the bit to 1 if it's position is greater than the input value
      if (i <= interface_control) begin
        mask[i-1] = 1'b1;
      end
    end
  end
  logic [D_WID-1:0] mem[2**A_WID-1:0][NUM_RAMS-1:0];
  initial begin
    $readmemh("memory.mem", mem);
  end
  // PORT_A
  generate
    for (i = 0; i < NUM_RAMS; i = i + 1) begin : port_a_ops
      always @(posedge clk) begin
        if (bank_en[i]) begin
          if (bank_wren[i]) begin
            mem[bank_addr[i]][i] <= bank_din[i];
          end
          dout[i] <= mem[bank_addr[i]][i];
        end
      end
    end
  endgenerate
  // generate
  //   for (i = 0; i < NUM_RAMS; i++) begin
  //     always_comb begin
  //       case (interface_addr[3:0])
  //         0: begin
  //           bank_mask[i] = bank_wren[i];
  //           bank_en[i]  = true_en[i];
  //           bank_din[i]  = true_datain[i];
  //           bank_addr[i] = true_addr[31:4];
            
  //         end
  //         1: begin
  //           bank_mask[i] = bank_wren[(i+1)%16];
  //           bank_en[i] = true_en[(i+1)%16];
  //           bank_din[i]  = true_datain[(i+1)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 1;
  //         end
  //         2: begin
  //           bank_mask[i] = bank_wren[(i+2)%16];
  //           bank_en[i]  = true_en[(i+2)%16];
  //           bank_din[i]  = true_datain[(i+2)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 2;
  //         end
  //         3: begin
  //           bank_mask[i] = bank_wren[(i+3)%16];
  //           bank_en[i]  = true_en[(i+3)%16];
  //           bank_din[i]  = true_datain[(i+3)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 3;
  //         end
  //         4: begin
  //           bank_mask[i] = bank_wren[(i+4)%16];
  //           bank_en[i]  = true_en[(i+4)%16];
  //           bank_din[i]  = true_datain[(i+4)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 4;
  //         end
  //         5: begin
  //           bank_mask[i] = bank_wren[(i+5)%16];
  //           bank_en[i]  = true_en[(i+5)%16];
  //           bank_din[i]  = true_datain[(i+5)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 5;
  //         end
  //         6: begin
  //           bank_mask[i] = bank_wren[(i+6)%16];
  //           bank_en[i]  = true_en[(i+6)%16];
  //           bank_din[i]  = true_datain[(i+6)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 6;
  //         end
  //         7: begin
  //           bank_mask[i] = bank_wren[(i+7)%16];
  //           bank_en[i]  = true_en[(i+7)%16];
  //           bank_din[i]  = true_datain[(i+7)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 7;
  //         end
  //         8: begin
  //           bank_mask[i] = bank_wren[(i+8)%16];
  //           bank_en[i]  = true_en[(i+8)%16];
  //           bank_din[i]  = true_datain[(i+8)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 8;
  //         end
  //         9: begin
  //           bank_mask[i] = bank_wren[(i+9)%16];
  //           bank_en[i] = true_en[(i+9)%16];
  //           bank_din[i]  = true_datain[(i+9)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 9;
  //         end
  //         10: begin
  //           bank_mask[i] = bank_wren[(i+8)%16];
  //           bank_en[i] = true_en[(i+8)%16];
  //           bank_din[i]  = true_datain[(i+10)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 10;
  //         end
  //         11: begin
  //           bank_mask[i] = bank_wren[(i+11)%16];
  //           bank_en[i] = true_en[(i+11)%16];
  //           bank_din[i]  = true_datain[(i+11)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 11;
  //         end
  //         12: begin
  //           bank_mask[i] = bank_wren[(i+12)%16];
  //           bank_en[i] = true_en[(i+12)%16];
  //           bank_din[i]  = true_datain[(i+12)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 12;
  //         end
  //         13: begin
  //           bank_mask[i] = bank_wren[(i+13)%16];
  //           bank_en[i] = true_en[(i+13)%16];

  //           bank_din[i]  = true_datain[(i+13)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 13;
  //         end
  //         14: begin
  //           bank_mask[i] = bank_wren[(i+14)%16];

  //           bank_en[i] = true_en[(i+14)%16];
  //           bank_din[i]  = true_datain[(i+14)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 14;
  //         end
  //         15: begin
  //           bank_mask[i] = bank_wren[(i+15)%16];

  //           bank_en[i] = true_en[(i+15)%16];
  //           bank_din[i]  = true_datain[(i+15)%16];
  //           bank_addr[i] = true_addr[31:4] + i < 15;
  //         end
  //       endcase
  //     end
  //   end
  // endgenerate

  // generate
  //   for (i = 0; i < NUM_RAMS; i++) begin
  //     always_comb begin
  //       case (starting_addr)
  //         0: begin
  //           bank_dout[i] = dout[i];
  //         end
  //         1: begin
  //           bank_dout[i] = dout[(i+1)%16];
  //         end
  //         2: begin
  //           bank_dout[i] = dout[(i+2)%16];
  //         end
  //         3: begin
  //           bank_dout[i] = dout[(i+3)%16];
  //         end
  //         4: begin
  //           bank_dout[i] = dout[(i+4)%16];
  //         end
  //         5: begin
  //           bank_dout[i] = dout[(i+5)%16];
  //         end
  //         6: begin
  //           bank_dout[i] = dout[(i+6)%16];
  //         end
  //         7: begin
  //           bank_dout[i] = dout[(i+7)%16];
  //         end
  //         8: begin
  //           bank_dout[i] = dout[(i+8)%16];
  //         end
  //         9: begin
  //           bank_dout[i] = dout[(i+9)%16];
  //         end
  //         10: begin
  //           bank_dout[i] = dout[(i+10)%16];
  //         end
  //         11: begin
  //           bank_dout[i] = dout[(i+11)%16];
  //         end
  //         12: begin
  //           bank_dout[i] = dout[(i+12)%16];
  //         end
  //         13: begin
  //           bank_dout[i] = dout[(i+13)%16];
  //         end
  //         14: begin
  //           bank_dout[i] = dout[(i+14)%16];
  //         end
  //         15: begin
  //           bank_dout[i] = dout[(i+15)%16];
  //         end
  //       endcase
  //     end
  //   end
  // endgenerate
  

  // //PORT_B
  // generate
  //   for (i = 0; i < NUM_RAMS; i = i + 1) begin : port_b_ops
  //     always @(posedge clk) begin
  //       if (enb[i]) begin
  //         if (web[i]) begin
  //           mem[i][addrb[i]] <= dinb[i];
  //         end
  //         doutb[i] <= mem[i][addrb[i]];
  //       end
  //     end
  //   end
  // endgenerate

endmodule
