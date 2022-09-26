/*
Weight and threshold memory initialization for Vivado HLS
PEs = 4, SIMD width = 16, threshold bits = 28
weight mem depth = 36, thres mem depth = 4, alpha mem depth = 4
layer sizes (neurons, synapses per neuron): 
(16, 144) 
padded neurons for each layer: 
0 
padded synapses for each layer: 
0 
*/

static ap_uint<16> weightMem1[4][36] = {
{
0x519a,
0x5808,
0xd101,
0xc98b,
0x5004,
0x1080,
0x19ef,
0xd8c3,
0xd4cb,
0xddde,
0xc0c7,
0xd886,
0x1e79,
0xe73,
0x98f5,
0xe7d,
0x630,
0x30,
0x477a,
0x467c,
0x883f,
0x777,
0x409a,
0x1890,
0xe725,
0x5988,
0x5088,
0x5181,
0x988b,
0x88,
0x367,
0x4c9,
0x17de,
0x8769,
0x77f,
0x477a
},{
0x111d,
0xe55,
0x8fa1,
0xd816,
0x9655,
0x761,
0x9a14,
0x9641,
0xc7aa,
0xc082,
0x4838,
0x9b1c,
0x92a5,
0x4ea,
0x16de,
0x9fa1,
0xcf6f,
0x4f7e,
0x9ee5,
0x7ed,
0x4fee,
0x5c10,
0x8d12,
0xcb1c,
0x5893,
0xd813,
0x9091,
0x771,
0xccf8,
0x1cda,
0x8773,
0x4f73,
0x4f7b,
0xc6e2,
0x8f2d,
0x4825
},{
0x8055,
0x12c6,
0x5a1e,
0xdd55,
0xcde3,
0xcf3a,
0x14b1,
0x8cb2,
0x481c,
0xffb,
0x671,
0x90a2,
0x8f3f,
0x8d15,
0xc9c3,
0x891c,
0xd841,
0xd884,
0x433c,
0xd81b,
0xd546,
0x48be,
0x1090,
0x9659,
0x5e3,
0x4e0,
0x16f8,
0x2e3,
0x9647,
0x7ff,
0x90cb,
0xd779,
0x4f7e,
0x9490,
0xce3c,
0xe2c
},{
0xf6a,
0x4ca2,
0xdb82,
0x476d,
0x5bef,
0xdb8a,
0xc77d,
0xc33c,
0xd95f,
0xdd1f,
0x9936,
0xf2f4,
0xdf7b,
0xca51,
0x8d77,
0x4a5a,
0x1255,
0x1654,
0x58a1,
0xd893,
0xd5d2,
0xdd9,
0x8f77,
0x1f7d,
0x873a,
0xcf7f,
0x8f7f,
0x850,
0x12d0,
0x5620,
0x9881,
0xd183,
0x56fa,
0xc97a,
0xddfb,
0xdddf
}
};
static ap_fixed<28, 16> alphaMem1[2] = {
258.0244,
88.417076
};
static ap_fixed<28, 16> thresMem1[4][4] = {
{
-9261.168,
2656.7783,
5.0759277,
-7163.829
},{
-1342.1936,
1488.118,
3030.0789,
168.20996
},{
-232.46277,
-178.8158,
1978.4124,
-2771.462
},{
-1558.052,
-3920.564,
1776.8506,
-125.71875
}
};
static ap_fixed<28, 16> means_out1[4][4] = {
{
4069.607,
3789.9072,
2819.5884,
2348.2551
},{
2791.035,
2766.6316,
3109.5974,
3621.5266
},{
3272.4797,
2982.436,
2072.4336,
1684.5575
},{
2499.278,
2397.7136,
1998.2408,
2694.2383
}
};