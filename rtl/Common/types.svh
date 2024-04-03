import Config::*;
typedef struct packed {
  logic valid;
  logic [W_BITWIDTH-1:0] data;
} type_input;

typedef struct packed {
  logic valid;
  logic [P_BITWIDTH-1:0] data;
} type_Psum;
