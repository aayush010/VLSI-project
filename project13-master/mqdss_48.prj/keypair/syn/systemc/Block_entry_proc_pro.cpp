// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Block_entry_proc_pro.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Block_entry_proc_pro::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Block_entry_proc_pro::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> Block_entry_proc_pro::ap_ST_fsm_state1 = "1";
const sc_lv<32> Block_entry_proc_pro::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<8> Block_entry_proc_pro::ap_const_lv8_0 = "00000000";
const sc_lv<6> Block_entry_proc_pro::ap_const_lv6_10 = "10000";
const bool Block_entry_proc_pro::ap_const_boolean_1 = true;

Block_entry_proc_pro::Block_entry_proc_pro(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln129_fu_36_p2);
    sensitive << ( zext_ln129_fu_32_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_out_r_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( zext_ln129_1_fu_42_p1 );

    SC_METHOD(thread_out_r_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_out_r_d0);
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_out_r_we0);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_zext_ln129_1_fu_42_p1);
    sensitive << ( add_ln129_fu_36_p2 );

    SC_METHOD(thread_zext_ln129_fu_32_p1);
    sensitive << ( loop_0 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "1";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Block_entry_proc_pro_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, out_r_address0, "(port)out_r_address0");
    sc_trace(mVcdFile, out_r_ce0, "(port)out_r_ce0");
    sc_trace(mVcdFile, out_r_we0, "(port)out_r_we0");
    sc_trace(mVcdFile, out_r_d0, "(port)out_r_d0");
    sc_trace(mVcdFile, loop_0, "(port)loop_0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, zext_ln129_1_fu_42_p1, "zext_ln129_1_fu_42_p1");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, zext_ln129_fu_32_p1, "zext_ln129_fu_32_p1");
    sc_trace(mVcdFile, add_ln129_fu_36_p2, "add_ln129_fu_36_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

Block_entry_proc_pro::~Block_entry_proc_pro() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void Block_entry_proc_pro::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
}

void Block_entry_proc_pro::thread_add_ln129_fu_36_p2() {
    add_ln129_fu_36_p2 = (!zext_ln129_fu_32_p1.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln129_fu_32_p1.read()) + sc_biguint<6>(ap_const_lv6_10));
}

void Block_entry_proc_pro::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Block_entry_proc_pro::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Block_entry_proc_pro::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void Block_entry_proc_pro::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Block_entry_proc_pro::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Block_entry_proc_pro::thread_out_r_address0() {
    out_r_address0 =  (sc_lv<6>) (zext_ln129_1_fu_42_p1.read());
}

void Block_entry_proc_pro::thread_out_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_r_ce0 = ap_const_logic_1;
    } else {
        out_r_ce0 = ap_const_logic_0;
    }
}

void Block_entry_proc_pro::thread_out_r_d0() {
    out_r_d0 = ap_const_lv8_0;
}

void Block_entry_proc_pro::thread_out_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        out_r_we0 = ap_const_logic_1;
    } else {
        out_r_we0 = ap_const_logic_0;
    }
}

void Block_entry_proc_pro::thread_zext_ln129_1_fu_42_p1() {
    zext_ln129_1_fu_42_p1 = esl_zext<64,6>(add_ln129_fu_36_p2.read());
}

void Block_entry_proc_pro::thread_zext_ln129_fu_32_p1() {
    zext_ln129_fu_32_p1 = esl_zext<6,5>(loop_0.read());
}

void Block_entry_proc_pro::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

}

