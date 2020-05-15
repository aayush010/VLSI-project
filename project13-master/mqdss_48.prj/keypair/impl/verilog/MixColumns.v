// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module MixColumns (
        ap_ready,
        state_0_0_read,
        state_0_1_read,
        state_0_2_read,
        state_0_3_read,
        state_1_0_read,
        state_1_1_read,
        state_1_2_read,
        state_1_3_read,
        state_2_0_read,
        state_2_1_read,
        state_2_2_read,
        state_2_3_read,
        state_3_0_read,
        state_3_1_read,
        state_3_2_read,
        state_3_3_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5,
        ap_return_6,
        ap_return_7,
        ap_return_8,
        ap_return_9,
        ap_return_10,
        ap_return_11,
        ap_return_12,
        ap_return_13,
        ap_return_14,
        ap_return_15
);


output   ap_ready;
input  [7:0] state_0_0_read;
input  [7:0] state_0_1_read;
input  [7:0] state_0_2_read;
input  [7:0] state_0_3_read;
input  [7:0] state_1_0_read;
input  [7:0] state_1_1_read;
input  [7:0] state_1_2_read;
input  [7:0] state_1_3_read;
input  [7:0] state_2_0_read;
input  [7:0] state_2_1_read;
input  [7:0] state_2_2_read;
input  [7:0] state_2_3_read;
input  [7:0] state_3_0_read;
input  [7:0] state_3_1_read;
input  [7:0] state_3_2_read;
input  [7:0] state_3_3_read;
output  [7:0] ap_return_0;
output  [7:0] ap_return_1;
output  [7:0] ap_return_2;
output  [7:0] ap_return_3;
output  [7:0] ap_return_4;
output  [7:0] ap_return_5;
output  [7:0] ap_return_6;
output  [7:0] ap_return_7;
output  [7:0] ap_return_8;
output  [7:0] ap_return_9;
output  [7:0] ap_return_10;
output  [7:0] ap_return_11;
output  [7:0] ap_return_12;
output  [7:0] ap_return_13;
output  [7:0] ap_return_14;
output  [7:0] ap_return_15;

wire   [7:0] xor_ln313_fu_142_p2;
wire   [7:0] xor_ln313_1_fu_148_p2;
wire   [0:0] tmp_fu_166_p3;
wire   [7:0] select_ln302_fu_174_p3;
wire   [7:0] shl_ln302_fu_160_p2;
wire   [7:0] xor_ln313_2_fu_154_p2;
wire   [7:0] xor_ln314_1_fu_188_p2;
wire   [7:0] xor_ln314_fu_182_p2;
wire   [7:0] xor_ln315_2_fu_200_p2;
wire   [0:0] tmp_8_fu_212_p3;
wire   [7:0] select_ln302_1_fu_220_p3;
wire   [7:0] shl_ln302_1_fu_206_p2;
wire   [7:0] xor_ln315_1_fu_234_p2;
wire   [7:0] xor_ln315_fu_228_p2;
wire   [7:0] xor_ln316_2_fu_246_p2;
wire   [0:0] tmp_9_fu_258_p3;
wire   [7:0] select_ln302_2_fu_266_p3;
wire   [7:0] shl_ln302_2_fu_252_p2;
wire   [7:0] xor_ln316_1_fu_280_p2;
wire   [7:0] xor_ln316_fu_274_p2;
wire   [7:0] xor_ln317_1_fu_292_p2;
wire   [0:0] tmp_10_fu_304_p3;
wire   [7:0] shl_ln302_3_fu_298_p2;
wire   [7:0] xor_ln317_fu_320_p2;
wire   [7:0] select_ln302_3_fu_312_p3;
wire   [7:0] xor_ln313_9_fu_332_p2;
wire   [7:0] xor_ln313_3_fu_338_p2;
wire   [0:0] tmp_11_fu_356_p3;
wire   [7:0] select_ln302_4_fu_364_p3;
wire   [7:0] shl_ln302_4_fu_350_p2;
wire   [7:0] xor_ln313_4_fu_344_p2;
wire   [7:0] xor_ln314_4_fu_378_p2;
wire   [7:0] xor_ln314_3_fu_372_p2;
wire   [7:0] xor_ln315_6_fu_390_p2;
wire   [0:0] tmp_12_fu_402_p3;
wire   [7:0] select_ln302_5_fu_410_p3;
wire   [7:0] shl_ln302_5_fu_396_p2;
wire   [7:0] xor_ln315_5_fu_424_p2;
wire   [7:0] xor_ln315_4_fu_418_p2;
wire   [7:0] xor_ln316_6_fu_436_p2;
wire   [0:0] tmp_13_fu_448_p3;
wire   [7:0] select_ln302_6_fu_456_p3;
wire   [7:0] shl_ln302_6_fu_442_p2;
wire   [7:0] xor_ln316_5_fu_470_p2;
wire   [7:0] xor_ln316_4_fu_464_p2;
wire   [7:0] xor_ln317_4_fu_482_p2;
wire   [0:0] tmp_14_fu_494_p3;
wire   [7:0] shl_ln302_7_fu_488_p2;
wire   [7:0] xor_ln317_3_fu_510_p2;
wire   [7:0] select_ln302_7_fu_502_p3;
wire   [7:0] xor_ln313_10_fu_522_p2;
wire   [7:0] xor_ln313_5_fu_528_p2;
wire   [0:0] tmp_15_fu_546_p3;
wire   [7:0] select_ln302_8_fu_554_p3;
wire   [7:0] shl_ln302_8_fu_540_p2;
wire   [7:0] xor_ln313_6_fu_534_p2;
wire   [7:0] xor_ln314_7_fu_568_p2;
wire   [7:0] xor_ln314_6_fu_562_p2;
wire   [7:0] xor_ln315_10_fu_580_p2;
wire   [0:0] tmp_16_fu_592_p3;
wire   [7:0] select_ln302_9_fu_600_p3;
wire   [7:0] shl_ln302_9_fu_586_p2;
wire   [7:0] xor_ln315_9_fu_614_p2;
wire   [7:0] xor_ln315_8_fu_608_p2;
wire   [7:0] xor_ln316_10_fu_626_p2;
wire   [0:0] tmp_17_fu_638_p3;
wire   [7:0] select_ln302_10_fu_646_p3;
wire   [7:0] shl_ln302_10_fu_632_p2;
wire   [7:0] xor_ln316_9_fu_660_p2;
wire   [7:0] xor_ln316_8_fu_654_p2;
wire   [7:0] xor_ln317_7_fu_672_p2;
wire   [0:0] tmp_18_fu_684_p3;
wire   [7:0] shl_ln302_11_fu_678_p2;
wire   [7:0] xor_ln317_6_fu_700_p2;
wire   [7:0] select_ln302_11_fu_692_p3;
wire   [7:0] xor_ln313_11_fu_712_p2;
wire   [7:0] xor_ln313_7_fu_718_p2;
wire   [0:0] tmp_19_fu_736_p3;
wire   [7:0] select_ln302_12_fu_744_p3;
wire   [7:0] shl_ln302_12_fu_730_p2;
wire   [7:0] xor_ln313_8_fu_724_p2;
wire   [7:0] xor_ln314_10_fu_758_p2;
wire   [7:0] xor_ln314_9_fu_752_p2;
wire   [7:0] xor_ln315_14_fu_770_p2;
wire   [0:0] tmp_20_fu_782_p3;
wire   [7:0] select_ln302_13_fu_790_p3;
wire   [7:0] shl_ln302_13_fu_776_p2;
wire   [7:0] xor_ln315_13_fu_804_p2;
wire   [7:0] xor_ln315_12_fu_798_p2;
wire   [7:0] xor_ln316_14_fu_816_p2;
wire   [0:0] tmp_21_fu_828_p3;
wire   [7:0] select_ln302_14_fu_836_p3;
wire   [7:0] shl_ln302_14_fu_822_p2;
wire   [7:0] xor_ln316_13_fu_850_p2;
wire   [7:0] xor_ln316_12_fu_844_p2;
wire   [7:0] xor_ln317_10_fu_862_p2;
wire   [0:0] tmp_22_fu_874_p3;
wire   [7:0] shl_ln302_15_fu_868_p2;
wire   [7:0] xor_ln317_9_fu_890_p2;
wire   [7:0] select_ln302_15_fu_882_p3;
wire   [7:0] xor_ln314_2_fu_194_p2;
wire   [7:0] xor_ln315_3_fu_240_p2;
wire   [7:0] xor_ln316_3_fu_286_p2;
wire   [7:0] xor_ln317_2_fu_326_p2;
wire   [7:0] xor_ln314_5_fu_384_p2;
wire   [7:0] xor_ln315_7_fu_430_p2;
wire   [7:0] xor_ln316_7_fu_476_p2;
wire   [7:0] xor_ln317_5_fu_516_p2;
wire   [7:0] xor_ln314_8_fu_574_p2;
wire   [7:0] xor_ln315_11_fu_620_p2;
wire   [7:0] xor_ln316_11_fu_666_p2;
wire   [7:0] xor_ln317_8_fu_706_p2;
wire   [7:0] xor_ln314_11_fu_764_p2;
wire   [7:0] xor_ln315_15_fu_810_p2;
wire   [7:0] xor_ln316_15_fu_856_p2;
wire   [7:0] xor_ln317_11_fu_896_p2;

assign ap_ready = 1'b1;

assign ap_return_0 = xor_ln314_2_fu_194_p2;

assign ap_return_1 = xor_ln315_3_fu_240_p2;

assign ap_return_10 = xor_ln316_11_fu_666_p2;

assign ap_return_11 = xor_ln317_8_fu_706_p2;

assign ap_return_12 = xor_ln314_11_fu_764_p2;

assign ap_return_13 = xor_ln315_15_fu_810_p2;

assign ap_return_14 = xor_ln316_15_fu_856_p2;

assign ap_return_15 = xor_ln317_11_fu_896_p2;

assign ap_return_2 = xor_ln316_3_fu_286_p2;

assign ap_return_3 = xor_ln317_2_fu_326_p2;

assign ap_return_4 = xor_ln314_5_fu_384_p2;

assign ap_return_5 = xor_ln315_7_fu_430_p2;

assign ap_return_6 = xor_ln316_7_fu_476_p2;

assign ap_return_7 = xor_ln317_5_fu_516_p2;

assign ap_return_8 = xor_ln314_8_fu_574_p2;

assign ap_return_9 = xor_ln315_11_fu_620_p2;

assign select_ln302_10_fu_646_p3 = ((tmp_17_fu_638_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_11_fu_692_p3 = ((tmp_18_fu_684_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_12_fu_744_p3 = ((tmp_19_fu_736_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_13_fu_790_p3 = ((tmp_20_fu_782_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_14_fu_836_p3 = ((tmp_21_fu_828_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_15_fu_882_p3 = ((tmp_22_fu_874_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_1_fu_220_p3 = ((tmp_8_fu_212_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_2_fu_266_p3 = ((tmp_9_fu_258_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_3_fu_312_p3 = ((tmp_10_fu_304_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_4_fu_364_p3 = ((tmp_11_fu_356_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_5_fu_410_p3 = ((tmp_12_fu_402_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_6_fu_456_p3 = ((tmp_13_fu_448_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_7_fu_502_p3 = ((tmp_14_fu_494_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_8_fu_554_p3 = ((tmp_15_fu_546_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_9_fu_600_p3 = ((tmp_16_fu_592_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign select_ln302_fu_174_p3 = ((tmp_fu_166_p3[0:0] === 1'b1) ? 8'd27 : 8'd0);

assign shl_ln302_10_fu_632_p2 = xor_ln316_10_fu_626_p2 << 8'd1;

assign shl_ln302_11_fu_678_p2 = xor_ln317_7_fu_672_p2 << 8'd1;

assign shl_ln302_12_fu_730_p2 = xor_ln313_11_fu_712_p2 << 8'd1;

assign shl_ln302_13_fu_776_p2 = xor_ln315_14_fu_770_p2 << 8'd1;

assign shl_ln302_14_fu_822_p2 = xor_ln316_14_fu_816_p2 << 8'd1;

assign shl_ln302_15_fu_868_p2 = xor_ln317_10_fu_862_p2 << 8'd1;

assign shl_ln302_1_fu_206_p2 = xor_ln315_2_fu_200_p2 << 8'd1;

assign shl_ln302_2_fu_252_p2 = xor_ln316_2_fu_246_p2 << 8'd1;

assign shl_ln302_3_fu_298_p2 = xor_ln317_1_fu_292_p2 << 8'd1;

assign shl_ln302_4_fu_350_p2 = xor_ln313_9_fu_332_p2 << 8'd1;

assign shl_ln302_5_fu_396_p2 = xor_ln315_6_fu_390_p2 << 8'd1;

assign shl_ln302_6_fu_442_p2 = xor_ln316_6_fu_436_p2 << 8'd1;

assign shl_ln302_7_fu_488_p2 = xor_ln317_4_fu_482_p2 << 8'd1;

assign shl_ln302_8_fu_540_p2 = xor_ln313_10_fu_522_p2 << 8'd1;

assign shl_ln302_9_fu_586_p2 = xor_ln315_10_fu_580_p2 << 8'd1;

assign shl_ln302_fu_160_p2 = xor_ln313_fu_142_p2 << 8'd1;

assign tmp_10_fu_304_p3 = xor_ln317_1_fu_292_p2[32'd7];

assign tmp_11_fu_356_p3 = xor_ln313_9_fu_332_p2[32'd7];

assign tmp_12_fu_402_p3 = xor_ln315_6_fu_390_p2[32'd7];

assign tmp_13_fu_448_p3 = xor_ln316_6_fu_436_p2[32'd7];

assign tmp_14_fu_494_p3 = xor_ln317_4_fu_482_p2[32'd7];

assign tmp_15_fu_546_p3 = xor_ln313_10_fu_522_p2[32'd7];

assign tmp_16_fu_592_p3 = xor_ln315_10_fu_580_p2[32'd7];

assign tmp_17_fu_638_p3 = xor_ln316_10_fu_626_p2[32'd7];

assign tmp_18_fu_684_p3 = xor_ln317_7_fu_672_p2[32'd7];

assign tmp_19_fu_736_p3 = xor_ln313_11_fu_712_p2[32'd7];

assign tmp_20_fu_782_p3 = xor_ln315_14_fu_770_p2[32'd7];

assign tmp_21_fu_828_p3 = xor_ln316_14_fu_816_p2[32'd7];

assign tmp_22_fu_874_p3 = xor_ln317_10_fu_862_p2[32'd7];

assign tmp_8_fu_212_p3 = xor_ln315_2_fu_200_p2[32'd7];

assign tmp_9_fu_258_p3 = xor_ln316_2_fu_246_p2[32'd7];

assign tmp_fu_166_p3 = xor_ln313_fu_142_p2[32'd7];

assign xor_ln313_10_fu_522_p2 = (state_2_1_read ^ state_2_0_read);

assign xor_ln313_11_fu_712_p2 = (state_3_1_read ^ state_3_0_read);

assign xor_ln313_1_fu_148_p2 = (xor_ln313_fu_142_p2 ^ state_0_2_read);

assign xor_ln313_2_fu_154_p2 = (xor_ln313_1_fu_148_p2 ^ state_0_3_read);

assign xor_ln313_3_fu_338_p2 = (xor_ln313_9_fu_332_p2 ^ state_1_2_read);

assign xor_ln313_4_fu_344_p2 = (xor_ln313_3_fu_338_p2 ^ state_1_3_read);

assign xor_ln313_5_fu_528_p2 = (xor_ln313_10_fu_522_p2 ^ state_2_2_read);

assign xor_ln313_6_fu_534_p2 = (xor_ln313_5_fu_528_p2 ^ state_2_3_read);

assign xor_ln313_7_fu_718_p2 = (xor_ln313_11_fu_712_p2 ^ state_3_2_read);

assign xor_ln313_8_fu_724_p2 = (xor_ln313_7_fu_718_p2 ^ state_3_3_read);

assign xor_ln313_9_fu_332_p2 = (state_1_1_read ^ state_1_0_read);

assign xor_ln313_fu_142_p2 = (state_0_1_read ^ state_0_0_read);

assign xor_ln314_10_fu_758_p2 = (xor_ln313_8_fu_724_p2 ^ state_3_0_read);

assign xor_ln314_11_fu_764_p2 = (xor_ln314_9_fu_752_p2 ^ xor_ln314_10_fu_758_p2);

assign xor_ln314_1_fu_188_p2 = (xor_ln313_2_fu_154_p2 ^ state_0_0_read);

assign xor_ln314_2_fu_194_p2 = (xor_ln314_fu_182_p2 ^ xor_ln314_1_fu_188_p2);

assign xor_ln314_3_fu_372_p2 = (shl_ln302_4_fu_350_p2 ^ select_ln302_4_fu_364_p3);

assign xor_ln314_4_fu_378_p2 = (xor_ln313_4_fu_344_p2 ^ state_1_0_read);

assign xor_ln314_5_fu_384_p2 = (xor_ln314_4_fu_378_p2 ^ xor_ln314_3_fu_372_p2);

assign xor_ln314_6_fu_562_p2 = (shl_ln302_8_fu_540_p2 ^ select_ln302_8_fu_554_p3);

assign xor_ln314_7_fu_568_p2 = (xor_ln313_6_fu_534_p2 ^ state_2_0_read);

assign xor_ln314_8_fu_574_p2 = (xor_ln314_7_fu_568_p2 ^ xor_ln314_6_fu_562_p2);

assign xor_ln314_9_fu_752_p2 = (shl_ln302_12_fu_730_p2 ^ select_ln302_12_fu_744_p3);

assign xor_ln314_fu_182_p2 = (shl_ln302_fu_160_p2 ^ select_ln302_fu_174_p3);

assign xor_ln315_10_fu_580_p2 = (state_2_2_read ^ state_2_1_read);

assign xor_ln315_11_fu_620_p2 = (xor_ln315_9_fu_614_p2 ^ xor_ln315_8_fu_608_p2);

assign xor_ln315_12_fu_798_p2 = (shl_ln302_13_fu_776_p2 ^ select_ln302_13_fu_790_p3);

assign xor_ln315_13_fu_804_p2 = (xor_ln313_8_fu_724_p2 ^ state_3_1_read);

assign xor_ln315_14_fu_770_p2 = (state_3_2_read ^ state_3_1_read);

assign xor_ln315_15_fu_810_p2 = (xor_ln315_13_fu_804_p2 ^ xor_ln315_12_fu_798_p2);

assign xor_ln315_1_fu_234_p2 = (xor_ln313_2_fu_154_p2 ^ state_0_1_read);

assign xor_ln315_2_fu_200_p2 = (state_0_2_read ^ state_0_1_read);

assign xor_ln315_3_fu_240_p2 = (xor_ln315_fu_228_p2 ^ xor_ln315_1_fu_234_p2);

assign xor_ln315_4_fu_418_p2 = (shl_ln302_5_fu_396_p2 ^ select_ln302_5_fu_410_p3);

assign xor_ln315_5_fu_424_p2 = (xor_ln313_4_fu_344_p2 ^ state_1_1_read);

assign xor_ln315_6_fu_390_p2 = (state_1_2_read ^ state_1_1_read);

assign xor_ln315_7_fu_430_p2 = (xor_ln315_5_fu_424_p2 ^ xor_ln315_4_fu_418_p2);

assign xor_ln315_8_fu_608_p2 = (shl_ln302_9_fu_586_p2 ^ select_ln302_9_fu_600_p3);

assign xor_ln315_9_fu_614_p2 = (xor_ln313_6_fu_534_p2 ^ state_2_1_read);

assign xor_ln315_fu_228_p2 = (shl_ln302_1_fu_206_p2 ^ select_ln302_1_fu_220_p3);

assign xor_ln316_10_fu_626_p2 = (state_2_3_read ^ state_2_2_read);

assign xor_ln316_11_fu_666_p2 = (xor_ln316_9_fu_660_p2 ^ xor_ln316_8_fu_654_p2);

assign xor_ln316_12_fu_844_p2 = (shl_ln302_14_fu_822_p2 ^ select_ln302_14_fu_836_p3);

assign xor_ln316_13_fu_850_p2 = (xor_ln313_11_fu_712_p2 ^ state_3_3_read);

assign xor_ln316_14_fu_816_p2 = (state_3_3_read ^ state_3_2_read);

assign xor_ln316_15_fu_856_p2 = (xor_ln316_13_fu_850_p2 ^ xor_ln316_12_fu_844_p2);

assign xor_ln316_1_fu_280_p2 = (xor_ln313_fu_142_p2 ^ state_0_3_read);

assign xor_ln316_2_fu_246_p2 = (state_0_3_read ^ state_0_2_read);

assign xor_ln316_3_fu_286_p2 = (xor_ln316_fu_274_p2 ^ xor_ln316_1_fu_280_p2);

assign xor_ln316_4_fu_464_p2 = (shl_ln302_6_fu_442_p2 ^ select_ln302_6_fu_456_p3);

assign xor_ln316_5_fu_470_p2 = (xor_ln313_9_fu_332_p2 ^ state_1_3_read);

assign xor_ln316_6_fu_436_p2 = (state_1_3_read ^ state_1_2_read);

assign xor_ln316_7_fu_476_p2 = (xor_ln316_5_fu_470_p2 ^ xor_ln316_4_fu_464_p2);

assign xor_ln316_8_fu_654_p2 = (shl_ln302_10_fu_632_p2 ^ select_ln302_10_fu_646_p3);

assign xor_ln316_9_fu_660_p2 = (xor_ln313_10_fu_522_p2 ^ state_2_3_read);

assign xor_ln316_fu_274_p2 = (shl_ln302_2_fu_252_p2 ^ select_ln302_2_fu_266_p3);

assign xor_ln317_10_fu_862_p2 = (state_3_3_read ^ state_3_0_read);

assign xor_ln317_11_fu_896_p2 = (xor_ln317_9_fu_890_p2 ^ select_ln302_15_fu_882_p3);

assign xor_ln317_1_fu_292_p2 = (state_0_3_read ^ state_0_0_read);

assign xor_ln317_2_fu_326_p2 = (xor_ln317_fu_320_p2 ^ select_ln302_3_fu_312_p3);

assign xor_ln317_3_fu_510_p2 = (xor_ln313_3_fu_338_p2 ^ shl_ln302_7_fu_488_p2);

assign xor_ln317_4_fu_482_p2 = (state_1_3_read ^ state_1_0_read);

assign xor_ln317_5_fu_516_p2 = (xor_ln317_3_fu_510_p2 ^ select_ln302_7_fu_502_p3);

assign xor_ln317_6_fu_700_p2 = (xor_ln313_5_fu_528_p2 ^ shl_ln302_11_fu_678_p2);

assign xor_ln317_7_fu_672_p2 = (state_2_3_read ^ state_2_0_read);

assign xor_ln317_8_fu_706_p2 = (xor_ln317_6_fu_700_p2 ^ select_ln302_11_fu_692_p3);

assign xor_ln317_9_fu_890_p2 = (xor_ln313_7_fu_718_p2 ^ shl_ln302_15_fu_868_p2);

assign xor_ln317_fu_320_p2 = (xor_ln313_1_fu_148_p2 ^ shl_ln302_3_fu_298_p2);

endmodule //MixColumns
