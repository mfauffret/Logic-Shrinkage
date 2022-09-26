/*
Weight and threshold memory initialization for Vivado HLS
PEs = 4, SIMD width = 32, threshold bits = 28
weight mem depth = 72, thres mem depth = 8, alpha mem depth = 8
layer sizes (neurons, synapses per neuron): 
(32, 288) 
padded neurons for each layer: 
0 
padded synapses for each layer: 
0 
*/

static ap_uint<32> weightMem3[4][72] = {
{
0x1f47feb3,
0x7507d69d,
0x7dd58f0d,
0x8621f0f2,
0x633930b5,
0x798dab25,
0x877ad8d2,
0xc7fa15a2,
0x5bc8b1b4,
0x12bf32e,
0x47405803,
0xc20bd005,
0xf905713a,
0x75d6cccf,
0x67d6c8a1,
0xda3131ba,
0x79b5313f,
0x3bbca1ad,
0x7748b0d,
0x8cf605e1,
0xdf5a3da9,
0x515a34d,
0xc4309d5e,
0xc8f825a8,
0x510d272b,
0xe5958b0d,
0xe4dc0d0f,
0x2947ef6b,
0x296a6e01,
0xb2b6c50,
0x7934f17e,
0x698f8246,
0x8a49f680,
0x7815637f,
0x791fca56,
0x8d4e2e00,
0x3ba1cb9d,
0xbaa30c19,
0xb7811cd9,
0x1b45e269,
0x8f633c29,
0x9fe385a5,
0x799d613f,
0x71e6a3a9,
0x79f4a3ad,
0x79dd692d,
0x53c29abc,
0x33dca9f6,
0x741f273a,
0xe07f22ff,
0x24dca372,
0xcc2b1600,
0xc8ba2530,
0xc8b83030,
0x3b017f2f,
0x360ee8e6,
0x35d280e5,
0x3a7977fb,
0x30bd2933,
0x789d2177,
0x74cebefa,
0x58063f7b,
0xf40a34df,
0x5654d94f,
0xc2d2568d,
0x57da0181,
0x73b4632f,
0x77be88bf,
0x359429a4,
0xf93176bb,
0x79297e7b,
0x48b93a70
},{
0x1a21ec75,
0x921d655,
0x1937ab36,
0xc3ead4d2,
0xe3fac3a0,
0x84fecfe0,
0x25fac185,
0x26d4cba5,
0x2484ebe4,
0x943a53a2,
0xbc3752c2,
0x2dba1e6c,
0xfc281ade,
0x943b16d6,
0xadbb2628,
0x37235ade,
0xc72bd0c6,
0x8eaa36a0,
0x7805ea2b,
0x30a5ea51,
0x82bba0f1,
0x6801fa6b,
0xa6b3d220,
0x47f821b1,
0x6533da46,
0x65dca9a4,
0x74dc21b4,
0x309dc33c,
0x149c29ae,
0x121469ad,
0xcb69f310,
0x92236f79,
0xb26075f9,
0x892a5e52,
0x866316d2,
0xc36a54d2,
0xcda224eb,
0xd398e29e,
0x5c84c3ba,
0xcfba0794,
0xcad42e5c,
0xfd80369e,
0xe4a21608,
0x8db21e0c,
0xcda0960a,
0xfddc1d0c,
0x74871e8f,
0x7dde874e,
0xffd81da0,
0x79835640,
0x74ba524e,
0xeee20cc2,
0xa263d482,
0x22abd684,
0x8ca33c20,
0x2283038,
0x123bb170,
0xcde20cc2,
0x82f85830,
0xc279f4f5,
0xedb5cd2c,
0xcc724949,
0x86734d8d,
0x936211ba,
0x71dce1b7,
0x8b8aa08,
0xc2723483,
0x6a5de0f7,
0xe8837e4a,
0xc7bb5c01,
0xfbb95e52,
0xdd23de0b
},{
0xb6d42d60,
0x92664581,
0x4707f64e,
0x36d4e977,
0x361ec50,
0x732bda57,
0x125de0d7,
0x462b54d3,
0x4f23d687,
0x6bddc1fd,
0xc6dc3db4,
0xcede7cc3,
0x78dce3ff,
0x789d6bee,
0x78865727,
0x704cefc6,
0x6e546fe2,
0x7a7a65a6,
0xcfab8730,
0xaf9ce5f4,
0xd49c2feb,
0x4eb3be70,
0x63fa31f4,
0xd008eef2,
0x76de21a5,
0x30d4a9e9,
0x1a86cb67,
0x77dfcf87,
0xddd49883,
0x56df508e,
0x7b0174b0,
0x59bbca54,
0x721b0052,
0x46fed8d6,
0x665ac0d2,
0x32dec991,
0xdf8e0fac,
0xae5c8fce,
0xbcf423f9,
0x9da60e28,
0xbc7007ec,
0xbf3627ec,
0x8da70e09,
0x8da4060c,
0xefe427a5,
0xadb817df,
0xedb916b8,
0xf59c45b7,
0x752a8b4e,
0xfc3a1722,
0xb0dc6120,
0x7515c30d,
0xbcd40d0c,
0x90d82d30,
0x101bfa7a,
0x8c026a18,
0xb822d23a,
0x1042fa32,
0xd20b1242,
0xc52b96cb,
0x1505c257,
0xc7589388,
0xcdf413ad,
0x2ed4c85f,
0x37c29dcd,
0x6dfca1b4,
0x78f4727b,
0xebacb17e,
0xe9b902fc,
0x60fcabf3,
0xc0f83a5e,
0xccbb72c8
},{
0x754fcca5,
0x86ee3e21,
0x22675b4,
0x6d5ee5ae,
0xc4cc2d29,
0x9031521d,
0x7d9da17f,
0x699c2b7a,
0x48a15259,
0x3eb4cc98,
0xb6924e09,
0xb5d6a574,
0x1b40d8ba,
0x3e47bc21,
0xb7383175,
0x3040a97f,
0xc04ca17b,
0xc35ca0fd,
0xc1bd97df,
0xd4b89b9d,
0xcda89f8a,
0xc8b107be,
0x90151708,
0x4da117c9,
0xe5200f29,
0xcde32729,
0xeda01608,
0x3343b227,
0x9263f421,
0x17157d39,
0xb1a3b077,
0xf168a0f9,
0x302fb939,
0x71bca07f,
0xf09822db,
0xb1d18129,
0xa0ba2c70,
0x10abd242,
0xfd1b83a2,
0x9622db10,
0x3601d235,
0x75dd83be,
0xe4e2d8a0,
0x7f74f1b5,
0x7dfc29f4,
0xcc6c569a,
0x55dddfcf,
0xc756afcb,
0x72bb75aa,
0x7287db3f,
0x3c94cf4a,
0xf8fa35b8,
0x38ac73aa,
0x78a3d65e,
0xbed23c00,
0xdeef7a40,
0x87fc25b6,
0x5ec0de00,
0x674b72e5,
0x67fca1b6,
0x71d469ef,
0x75d4e1b7,
0x789cab76,
0x332dc35c,
0x477ec193,
0xcedc27a9,
0x7827d21f,
0x6d75835d,
0xd8dc2f7e,
0x600ee7f6,
0x60dc2b3d,
0xc8dc6dbf
}
};
static ap_fixed<28, 16> alphaMem3[2] = {
4.580536,
1.9002783
};
static ap_fixed<28, 16> thresMem3[4][8] = {
{
156.19656,
293.96844,
112.63904,
163.67276,
90.75601,
19.320274,
-3.6495209,
178.46335
},{
238.89957,
-249.68002,
269.659,
-55.130623,
-146.76917,
96.20067,
-75.6689,
196.61255
},{
89.49107,
288.52106,
103.27664,
298.98035,
-148.45828,
-11.95166,
-130.36662,
122.72523
},{
164.45865,
34.061794,
-170.81921,
-45.98449,
136.65904,
134.4861,
238.1466,
159.24173
}
};
static ap_fixed<28, 16> means_out3[4][8] = {
{
77.283875,
60.96559,
78.40642,
83.62363,
79.985596,
54.43405,
61.4964,
74.89969
},{
74.2532,
93.18384,
58.92549,
63.68751,
69.604706,
62.434128,
81.92767,
56.426086
},{
57.29774,
65.34476,
60.296085,
71.48091,
73.54608,
85.50095,
58.143673,
75.33058
},{
64.32271,
64.06159,
67.9429,
52.21163,
53.86474,
69.53559,
69.80776,
57.777027
}
};