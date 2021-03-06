// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dataflow_in_loop_vgf (
        out_r_address0,
        out_r_ce0,
        out_r_d0,
        out_r_q0,
        out_r_we0,
        out_r_address1,
        out_r_ce1,
        out_r_d1,
        out_r_q1,
        out_r_we1,
        i_0_i_i,
        ap_clk,
        ap_rst,
        i_0_i_i_ap_vld,
        ap_start,
        ap_done,
        ap_ready,
        ap_idle,
        ap_continue
);


output  [5:0] out_r_address0;
output   out_r_ce0;
output  [15:0] out_r_d0;
input  [15:0] out_r_q0;
output   out_r_we0;
output  [5:0] out_r_address1;
output   out_r_ce1;
output  [15:0] out_r_d1;
input  [15:0] out_r_q1;
output   out_r_we1;
input  [5:0] i_0_i_i;
input   ap_clk;
input   ap_rst;
input   i_0_i_i_ap_vld;
input   ap_start;
output   ap_done;
output   ap_ready;
output   ap_idle;
input   ap_continue;

wire    Block_entry_proc_pro_1_U0_ap_start;
wire    Block_entry_proc_pro_1_U0_ap_done;
wire    Block_entry_proc_pro_1_U0_ap_continue;
wire    Block_entry_proc_pro_1_U0_ap_idle;
wire    Block_entry_proc_pro_1_U0_ap_ready;
wire   [5:0] Block_entry_proc_pro_1_U0_out_r_address0;
wire    Block_entry_proc_pro_1_U0_out_r_ce0;
wire    Block_entry_proc_pro_1_U0_out_r_we0;
wire   [15:0] Block_entry_proc_pro_1_U0_out_r_d0;
wire    ap_sync_continue;
wire    ap_sync_done;
wire    ap_sync_ready;
wire    Block_entry_proc_pro_1_U0_start_full_n;
wire    Block_entry_proc_pro_1_U0_start_write;

Block_entry_proc_pro_1 Block_entry_proc_pro_1_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(Block_entry_proc_pro_1_U0_ap_start),
    .ap_done(Block_entry_proc_pro_1_U0_ap_done),
    .ap_continue(Block_entry_proc_pro_1_U0_ap_continue),
    .ap_idle(Block_entry_proc_pro_1_U0_ap_idle),
    .ap_ready(Block_entry_proc_pro_1_U0_ap_ready),
    .out_r_address0(Block_entry_proc_pro_1_U0_out_r_address0),
    .out_r_ce0(Block_entry_proc_pro_1_U0_out_r_ce0),
    .out_r_we0(Block_entry_proc_pro_1_U0_out_r_we0),
    .out_r_d0(Block_entry_proc_pro_1_U0_out_r_d0),
    .out_r_q0(out_r_q0),
    .i_0_i_i(i_0_i_i)
);

assign Block_entry_proc_pro_1_U0_ap_continue = ap_continue;

assign Block_entry_proc_pro_1_U0_ap_start = ap_start;

assign Block_entry_proc_pro_1_U0_start_full_n = 1'b1;

assign Block_entry_proc_pro_1_U0_start_write = 1'b0;

assign ap_done = Block_entry_proc_pro_1_U0_ap_done;

assign ap_idle = Block_entry_proc_pro_1_U0_ap_idle;

assign ap_ready = Block_entry_proc_pro_1_U0_ap_ready;

assign ap_sync_continue = ap_continue;

assign ap_sync_done = Block_entry_proc_pro_1_U0_ap_done;

assign ap_sync_ready = Block_entry_proc_pro_1_U0_ap_ready;

assign out_r_address0 = Block_entry_proc_pro_1_U0_out_r_address0;

assign out_r_address1 = 6'd0;

assign out_r_ce0 = Block_entry_proc_pro_1_U0_out_r_ce0;

assign out_r_ce1 = 1'b0;

assign out_r_d0 = Block_entry_proc_pro_1_U0_out_r_d0;

assign out_r_d1 = 16'd0;

assign out_r_we0 = Block_entry_proc_pro_1_U0_out_r_we0;

assign out_r_we1 = 1'b0;

endmodule //dataflow_in_loop_vgf
