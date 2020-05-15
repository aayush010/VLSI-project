// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module gf31_nrand_schar (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        out_r_address0,
        out_r_ce0,
        out_r_we0,
        out_r_d0,
        seed_address0,
        seed_ce0,
        seed_q0
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_pp0_stage0 = 8'd64;
parameter    ap_ST_fsm_state9 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [15:0] out_r_address0;
output   out_r_ce0;
output   out_r_we0;
output  [4:0] out_r_d0;
output  [5:0] seed_address0;
output   seed_ce0;
input  [7:0] seed_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out_r_ce0;
reg out_r_we0;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg  signed [31:0] j_0_reg_115;
wire   [4:0] add_ln76_fu_150_p2;
wire    ap_CS_fsm_state2;
reg   [31:0] grp_load_fu_141_p1;
reg  signed [31:0] i_10_load_1_reg_244;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_state7_pp0_stage0_iter0;
wire    ap_block_state8_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [0:0] and_ln83_fu_178_p2;
wire   [31:0] j_fu_184_p2;
wire    ap_CS_fsm_state6;
wire    grp_keccak_squeezeblocks_fu_126_ap_ready;
wire    grp_keccak_squeezeblocks_fu_126_ap_done;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state7;
reg    ap_enable_reg_pp0_iter1;
reg   [4:0] shakestate_address0;
reg    shakestate_ce0;
reg    shakestate_we0;
reg   [63:0] shakestate_d0;
wire   [63:0] shakestate_q0;
reg    shakestate_ce1;
reg    shakestate_we1;
wire   [63:0] shakestate_q1;
reg   [7:0] output_assign_address0;
reg    output_assign_ce0;
reg    output_assign_we0;
wire   [7:0] output_assign_q0;
reg    output_assign_ce1;
reg    output_assign_we1;
wire    grp_keccak_squeezeblocks_fu_126_ap_start;
wire    grp_keccak_squeezeblocks_fu_126_ap_idle;
wire   [7:0] grp_keccak_squeezeblocks_fu_126_h_address0;
wire    grp_keccak_squeezeblocks_fu_126_h_ce0;
wire    grp_keccak_squeezeblocks_fu_126_h_we0;
wire   [7:0] grp_keccak_squeezeblocks_fu_126_h_d0;
wire   [7:0] grp_keccak_squeezeblocks_fu_126_h_address1;
wire    grp_keccak_squeezeblocks_fu_126_h_ce1;
wire    grp_keccak_squeezeblocks_fu_126_h_we1;
wire   [7:0] grp_keccak_squeezeblocks_fu_126_h_d1;
wire   [4:0] grp_keccak_squeezeblocks_fu_126_s_address0;
wire    grp_keccak_squeezeblocks_fu_126_s_ce0;
wire    grp_keccak_squeezeblocks_fu_126_s_we0;
wire   [63:0] grp_keccak_squeezeblocks_fu_126_s_d0;
wire   [4:0] grp_keccak_squeezeblocks_fu_126_s_address1;
wire    grp_keccak_squeezeblocks_fu_126_s_ce1;
wire    grp_keccak_squeezeblocks_fu_126_s_we1;
wire   [63:0] grp_keccak_squeezeblocks_fu_126_s_d1;
wire    grp_keccak_absorb_2_fu_134_ap_start;
wire    grp_keccak_absorb_2_fu_134_ap_done;
wire    grp_keccak_absorb_2_fu_134_ap_idle;
wire    grp_keccak_absorb_2_fu_134_ap_ready;
wire   [4:0] grp_keccak_absorb_2_fu_134_s_address0;
wire    grp_keccak_absorb_2_fu_134_s_ce0;
wire    grp_keccak_absorb_2_fu_134_s_we0;
wire   [63:0] grp_keccak_absorb_2_fu_134_s_d0;
wire   [5:0] grp_keccak_absorb_2_fu_134_m_address0;
wire    grp_keccak_absorb_2_fu_134_m_ce0;
reg   [4:0] phi_ln76_reg_104;
wire   [0:0] icmp_ln76_fu_161_p2;
reg    grp_keccak_squeezeblocks_fu_126_ap_start_reg;
wire    ap_CS_fsm_state5;
wire   [0:0] grp_fu_144_p2;
reg    grp_keccak_absorb_2_fu_134_ap_start_reg;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire   [63:0] zext_ln76_fu_156_p1;
wire  signed [63:0] sext_ln84_fu_190_p1;
wire    ap_block_pp0_stage0;
wire  signed [63:0] sext_ln85_fu_212_p1;
wire   [0:0] icmp_ln84_fu_199_p2;
reg   [31:0] i_10_fu_62;
wire   [31:0] i_fu_216_p2;
reg   [31:0] ap_sig_allocacmp_i_10_load_1;
wire   [0:0] icmp_ln83_1_fu_172_p2;
wire   [4:0] empty_35_fu_195_p1;
reg   [7:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 grp_keccak_squeezeblocks_fu_126_ap_start_reg = 1'b0;
#0 grp_keccak_absorb_2_fu_134_ap_start_reg = 1'b0;
end

gf31_nrand_schar_g8j #(
    .DataWidth( 64 ),
    .AddressRange( 25 ),
    .AddressWidth( 5 ))
shakestate_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shakestate_address0),
    .ce0(shakestate_ce0),
    .we0(shakestate_we0),
    .d0(shakestate_d0),
    .q0(shakestate_q0),
    .address1(grp_keccak_squeezeblocks_fu_126_s_address1),
    .ce1(shakestate_ce1),
    .we1(shakestate_we1),
    .d1(grp_keccak_squeezeblocks_fu_126_s_d1),
    .q1(shakestate_q1)
);

gf31_nrand_schar_hbi #(
    .DataWidth( 8 ),
    .AddressRange( 136 ),
    .AddressWidth( 8 ))
output_assign_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(output_assign_address0),
    .ce0(output_assign_ce0),
    .we0(output_assign_we0),
    .d0(grp_keccak_squeezeblocks_fu_126_h_d0),
    .q0(output_assign_q0),
    .address1(grp_keccak_squeezeblocks_fu_126_h_address1),
    .ce1(output_assign_ce1),
    .we1(output_assign_we1),
    .d1(grp_keccak_squeezeblocks_fu_126_h_d1)
);

keccak_squeezeblocks grp_keccak_squeezeblocks_fu_126(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_keccak_squeezeblocks_fu_126_ap_start),
    .ap_done(grp_keccak_squeezeblocks_fu_126_ap_done),
    .ap_idle(grp_keccak_squeezeblocks_fu_126_ap_idle),
    .ap_ready(grp_keccak_squeezeblocks_fu_126_ap_ready),
    .h_address0(grp_keccak_squeezeblocks_fu_126_h_address0),
    .h_ce0(grp_keccak_squeezeblocks_fu_126_h_ce0),
    .h_we0(grp_keccak_squeezeblocks_fu_126_h_we0),
    .h_d0(grp_keccak_squeezeblocks_fu_126_h_d0),
    .h_address1(grp_keccak_squeezeblocks_fu_126_h_address1),
    .h_ce1(grp_keccak_squeezeblocks_fu_126_h_ce1),
    .h_we1(grp_keccak_squeezeblocks_fu_126_h_we1),
    .h_d1(grp_keccak_squeezeblocks_fu_126_h_d1),
    .s_address0(grp_keccak_squeezeblocks_fu_126_s_address0),
    .s_ce0(grp_keccak_squeezeblocks_fu_126_s_ce0),
    .s_we0(grp_keccak_squeezeblocks_fu_126_s_we0),
    .s_d0(grp_keccak_squeezeblocks_fu_126_s_d0),
    .s_q0(shakestate_q0),
    .s_address1(grp_keccak_squeezeblocks_fu_126_s_address1),
    .s_ce1(grp_keccak_squeezeblocks_fu_126_s_ce1),
    .s_we1(grp_keccak_squeezeblocks_fu_126_s_we1),
    .s_d1(grp_keccak_squeezeblocks_fu_126_s_d1),
    .s_q1(shakestate_q1)
);

keccak_absorb_2 grp_keccak_absorb_2_fu_134(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_keccak_absorb_2_fu_134_ap_start),
    .ap_done(grp_keccak_absorb_2_fu_134_ap_done),
    .ap_idle(grp_keccak_absorb_2_fu_134_ap_idle),
    .ap_ready(grp_keccak_absorb_2_fu_134_ap_ready),
    .s_address0(grp_keccak_absorb_2_fu_134_s_address0),
    .s_ce0(grp_keccak_absorb_2_fu_134_s_ce0),
    .s_we0(grp_keccak_absorb_2_fu_134_s_we0),
    .s_d0(grp_keccak_absorb_2_fu_134_s_d0),
    .s_q0(shakestate_q0),
    .m_address0(grp_keccak_absorb_2_fu_134_m_address0),
    .m_ce0(grp_keccak_absorb_2_fu_134_m_ce0),
    .m_q0(seed_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state7) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((grp_keccak_squeezeblocks_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state7))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state7);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((grp_keccak_squeezeblocks_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_keccak_absorb_2_fu_134_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state3)) begin
            grp_keccak_absorb_2_fu_134_ap_start_reg <= 1'b1;
        end else if ((grp_keccak_absorb_2_fu_134_ap_ready == 1'b1)) begin
            grp_keccak_absorb_2_fu_134_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_keccak_squeezeblocks_fu_126_ap_start_reg <= 1'b0;
    end else begin
        if (((grp_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
            grp_keccak_squeezeblocks_fu_126_ap_start_reg <= 1'b1;
        end else if ((grp_keccak_squeezeblocks_fu_126_ap_ready == 1'b1)) begin
            grp_keccak_squeezeblocks_fu_126_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln84_fu_199_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_10_fu_62 <= i_fu_216_p2;
    end else if (((icmp_ln76_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_10_fu_62 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == and_ln83_fu_178_p2) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        j_0_reg_115 <= j_fu_184_p2;
    end else if (((grp_keccak_squeezeblocks_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
        j_0_reg_115 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln76_fu_161_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        phi_ln76_reg_104 <= add_ln76_fu_150_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        phi_ln76_reg_104 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_10_load_1_reg_244 <= grp_load_fu_141_p1;
    end
end

always @ (*) begin
    if ((1'd0 == and_ln83_fu_178_p2)) begin
        ap_condition_pp0_exit_iter0_state7 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state7 = 1'b0;
    end
end

always @ (*) begin
    if ((((grp_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((grp_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln84_fu_199_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_10_load_1 = i_fu_216_p2;
    end else begin
        ap_sig_allocacmp_i_10_load_1 = i_10_fu_62;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_load_fu_141_p1 = ap_sig_allocacmp_i_10_load_1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_load_fu_141_p1 = i_10_fu_62;
    end else begin
        grp_load_fu_141_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        out_r_ce0 = 1'b1;
    end else begin
        out_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln84_fu_199_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        out_r_we0 = 1'b1;
    end else begin
        out_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        output_assign_address0 = sext_ln84_fu_190_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_assign_address0 = grp_keccak_squeezeblocks_fu_126_h_address0;
    end else begin
        output_assign_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        output_assign_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        output_assign_ce0 = grp_keccak_squeezeblocks_fu_126_h_ce0;
    end else begin
        output_assign_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        output_assign_ce1 = grp_keccak_squeezeblocks_fu_126_h_ce1;
    end else begin
        output_assign_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        output_assign_we0 = grp_keccak_squeezeblocks_fu_126_h_we0;
    end else begin
        output_assign_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        output_assign_we1 = grp_keccak_squeezeblocks_fu_126_h_we1;
    end else begin
        output_assign_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        shakestate_address0 = zext_ln76_fu_156_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        shakestate_address0 = grp_keccak_absorb_2_fu_134_s_address0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_address0 = grp_keccak_squeezeblocks_fu_126_s_address0;
    end else begin
        shakestate_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        shakestate_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        shakestate_ce0 = grp_keccak_absorb_2_fu_134_s_ce0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_ce0 = grp_keccak_squeezeblocks_fu_126_s_ce0;
    end else begin
        shakestate_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_ce1 = grp_keccak_squeezeblocks_fu_126_s_ce1;
    end else begin
        shakestate_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        shakestate_d0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        shakestate_d0 = grp_keccak_absorb_2_fu_134_s_d0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_d0 = grp_keccak_squeezeblocks_fu_126_s_d0;
    end else begin
        shakestate_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        shakestate_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        shakestate_we0 = grp_keccak_absorb_2_fu_134_s_we0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_we0 = grp_keccak_squeezeblocks_fu_126_s_we0;
    end else begin
        shakestate_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        shakestate_we1 = grp_keccak_squeezeblocks_fu_126_s_we1;
    end else begin
        shakestate_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln76_fu_161_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (grp_keccak_absorb_2_fu_134_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((grp_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((grp_keccak_squeezeblocks_fu_126_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((1'b0 == ap_block_pp0_stage0_subdone) & (1'd0 == and_ln83_fu_178_p2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'd0 == and_ln83_fu_178_p2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln76_fu_150_p2 = (phi_ln76_reg_104 + 5'd1);

assign and_ln83_fu_178_p2 = (icmp_ln83_1_fu_172_p2 & grp_fu_144_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign empty_35_fu_195_p1 = output_assign_q0[4:0];

assign grp_fu_144_p2 = (($signed(grp_load_fu_141_p1) < $signed(32'd58752)) ? 1'b1 : 1'b0);

assign grp_keccak_absorb_2_fu_134_ap_start = grp_keccak_absorb_2_fu_134_ap_start_reg;

assign grp_keccak_squeezeblocks_fu_126_ap_start = grp_keccak_squeezeblocks_fu_126_ap_start_reg;

assign i_fu_216_p2 = ($signed(i_10_load_1_reg_244) + $signed(32'd1));

assign icmp_ln76_fu_161_p2 = ((phi_ln76_reg_104 == 5'd24) ? 1'b1 : 1'b0);

assign icmp_ln83_1_fu_172_p2 = ((j_0_reg_115 != 32'd136) ? 1'b1 : 1'b0);

assign icmp_ln84_fu_199_p2 = ((empty_35_fu_195_p1 == 5'd31) ? 1'b1 : 1'b0);

assign j_fu_184_p2 = ($signed(j_0_reg_115) + $signed(32'd1));

assign out_r_address0 = sext_ln85_fu_212_p1;

assign out_r_d0 = ($signed(empty_35_fu_195_p1) + $signed(5'd17));

assign seed_address0 = grp_keccak_absorb_2_fu_134_m_address0;

assign seed_ce0 = grp_keccak_absorb_2_fu_134_m_ce0;

assign sext_ln84_fu_190_p1 = j_0_reg_115;

assign sext_ln85_fu_212_p1 = i_10_load_1_reg_244;

assign zext_ln76_fu_156_p1 = phi_ln76_reg_104;

endmodule //gf31_nrand_schar