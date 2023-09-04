localparam BN18_CH = 64;
localparam BN18_BW_A = 5;
localparam BN18_BW_B = 15;
localparam BN18_RSHIFT = 8;
localparam BN18_BW_IN = 16;
localparam BN18_BW_OUT = 1;
localparam BN18_MAXVAL = 1;
reg [BN18_CH-1:0][BN18_BW_A-1:0] bn18_a = { 5'h06, 5'h0b, 5'h09, 5'h0a, 5'h07, 5'h07, 5'h08, 5'h08, 5'h0a, 5'h07, 5'h0a, 5'h05, 5'h0b, 5'h07, 5'h0a, 5'h07, 5'h08, 5'h05, 5'h08, 5'h07, 5'h08, 5'h07, 5'h09, 5'h06, 5'h0a, 5'h06, 5'h0b, 5'h08, 5'h08, 5'h09, 5'h06, 5'h07, 5'h06, 5'h0c, 5'h08, 5'h08, 5'h07, 5'h06, 5'h05, 5'h08, 5'h07, 5'h09, 5'h09, 5'h05, 5'h07, 5'h07, 5'h07, 5'h04, 5'h0f, 5'h06, 5'h05, 5'h0a, 5'h0a, 5'h06, 5'h08, 5'h0a, 5'h08, 5'h07, 5'h07, 5'h0b, 5'h06, 5'h06, 5'h07, 5'h09 };
reg [BN18_CH-1:0][BN18_BW_B-1:0] bn18_b = { 15'h1cb6, 15'h72a8, 15'h301c, 15'h6b0c, 15'h0b65, 15'h150d, 15'h7e9b, 15'h73ce, 15'h7fb6, 15'h011b, 15'h39e3, 15'h0058, 15'h2dd1, 15'h243a, 15'h2bf2, 15'h0c42, 15'h0dc5, 15'h7c5e, 15'h26dd, 15'h276f, 15'h2f88, 15'h130f, 15'h1536, 15'h143a, 15'h029f, 15'h0518, 15'h25b5, 15'h7840, 15'h7c23, 15'h340c, 15'h13f1, 15'h6c3d, 15'h2224, 15'h0a72, 15'h276d, 15'h219a, 15'h01ec, 15'h04a8, 15'h06f8, 15'h0be1, 15'h1ae6, 15'h759f, 15'h132c, 15'h009b, 15'h513b, 15'h7eeb, 15'h6bcf, 15'h086e, 15'h2b18, 15'h141e, 15'h154f, 15'h2ce0, 15'h5ab1, 15'h0f46, 15'h2776, 15'h6a56, 15'h7d38, 15'h7ee2, 15'h7fe3, 15'h7b89, 15'h0fb8, 15'h78bf, 15'h0842, 15'h2edc };