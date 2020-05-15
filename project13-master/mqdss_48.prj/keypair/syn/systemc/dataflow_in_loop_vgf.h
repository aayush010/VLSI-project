// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dataflow_in_loop_vgf_HH_
#define _dataflow_in_loop_vgf_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Block_entry_proc_pro_1.h"

namespace ap_rtl {

struct dataflow_in_loop_vgf : public sc_module {
    // Port declarations 19
    sc_out< sc_lv<6> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_lv<16> > out_r_d0;
    sc_in< sc_lv<16> > out_r_q0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<6> > out_r_address1;
    sc_out< sc_logic > out_r_ce1;
    sc_out< sc_lv<16> > out_r_d1;
    sc_in< sc_lv<16> > out_r_q1;
    sc_out< sc_logic > out_r_we1;
    sc_in< sc_lv<6> > i_0_i_i;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > i_0_i_i_ap_vld;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;
    sc_in< sc_logic > ap_continue;


    // Module declarations
    dataflow_in_loop_vgf(sc_module_name name);
    SC_HAS_PROCESS(dataflow_in_loop_vgf);

    ~dataflow_in_loop_vgf();

    sc_trace_file* mVcdFile;

    Block_entry_proc_pro_1* Block_entry_proc_pro_1_U0;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_ap_start;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_ap_done;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_ap_continue;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_ap_idle;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_ap_ready;
    sc_signal< sc_lv<6> > Block_entry_proc_pro_1_U0_out_r_address0;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_out_r_ce0;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_out_r_we0;
    sc_signal< sc_lv<16> > Block_entry_proc_pro_1_U0_out_r_d0;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_start_full_n;
    sc_signal< sc_logic > Block_entry_proc_pro_1_U0_start_write;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_logic ap_const_logic_1;
    // Thread declarations
    void thread_Block_entry_proc_pro_1_U0_ap_continue();
    void thread_Block_entry_proc_pro_1_U0_ap_start();
    void thread_Block_entry_proc_pro_1_U0_start_full_n();
    void thread_Block_entry_proc_pro_1_U0_start_write();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_out_r_address0();
    void thread_out_r_address1();
    void thread_out_r_ce0();
    void thread_out_r_ce1();
    void thread_out_r_d0();
    void thread_out_r_d1();
    void thread_out_r_we0();
    void thread_out_r_we1();
};

}

using namespace ap_rtl;

#endif