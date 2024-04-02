// 3-D Ram Inference Example (True Dual port)
// File:rams_tdp_3d.sv
module memory #(
    parameter NUM_RAMS = 16,
    A_WID = 10,
    D_WID = 8
) (
    input logic clk,
    //portA
    system_bus_en,
    system_bus_rdwr,
    input logic [3:0]system_bus_mask,
    output logic [3:0][D_WID-1:0]system_bus_rd_data,
    input logic [3:0][D_WID-1:0] system_bus_wr_data,
    [31:0] system_bus_addr,
    //portB
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
  logic [A_WID-1:0] bank_addr[NUM_RAMS-1:0];
  logic [15:0] bank_mask;
  logic [3:0] starting_addr;


  logic [31:0] true_addr;
  logic [15:0]true_en,bank_en,bank_wren;
  logic [NUM_RAMS-1:0][D_WID-1:0] true_datain;
  assign system_bus_rd_data=bank_dout[3:0];
  assign true_addr=system_bus_en?system_bus_addr:interface_addr;
    always_ff @(posedge clk) begin : blockName
    starting_addr <= true_addr[3:0];
  end
  genvar i;
  for (i = 0; i<16 ;i++ ) begin
  if (i<4)begin
      assign true_datain[i]=system_bus_en?system_bus_wr_data[i]:din[i];
      assign true_en[i]=system_bus_en?1'b1:interface_en;
      assign bank_wren[i]=system_bus_en?system_bus_rdwr && system_bus_mask[i] :interface_rdwr && mask[i];
      end
  else begin
      assign true_datain[i]=din[i];
      assign true_en[i]=system_bus_en?1'b0:interface_en;
      assign bank_wren[i]=system_bus_en?1'b0:interface_rdwr && mask[i];
  end
  end

    for (i = 0; i < NUM_RAMS; i++) begin
           assign bank_mask[i] = bank_wren[(16+i-true_addr[3:0])%16];
           assign bank_en[i] = true_en[(16+i-true_addr[3:0])%16];
           assign bank_din[i]  = true_datain[(16+i-true_addr[3:0])%16];
          // assign bank_mask[(i+true_addr[3:0])%16] = bank_wren[i];
          //  assign bank_en[(i+true_addr[3:0])%16] = true_en[i];
          //  assign bank_din[(i+true_addr[3:0])%16]  = true_datain[i];
          //  assign bank_addr[(i+true_addr[3:0])%16] = true_addr[31:4] + i < interface_addr[3:0];
          assign bank_addr[i] = {4'b0,true_addr[31:4]} + (i < true_addr[3:0]);
          // assign bank_addr[i] = {4'b0,true_addr[31:4]};
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
    $readmemh("DCACHE.mem", mem);
  end
  // PORT_A
  generate
    for (i = 0; i < NUM_RAMS; i = i + 1) begin : port_a_ops
      always @(posedge clk) begin
        if (bank_en[i]) begin
          if (bank_mask[i]) begin
            mem[bank_addr[i]][i] <= bank_din[i];
          end
          dout[i] <= mem[bank_addr[i]][i];
        end
      end
    end
  endgenerate

  
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
