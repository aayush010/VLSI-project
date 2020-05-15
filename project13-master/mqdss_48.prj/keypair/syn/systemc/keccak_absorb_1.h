// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _keccak_absorb_1_HH_
#define _keccak_absorb_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "keccak_absorb_t.h"

namespace ap_rtl {

struct keccak_absorb_1 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > s_address0;
    sc_out< sc_logic > s_ce0;
    sc_out< sc_logic > s_we0;
    sc_out< sc_lv<64> > s_d0;
    sc_in< sc_lv<64> > s_q0;
    sc_out< sc_lv<5> > m_address0;
    sc_out< sc_logic > m_ce0;
    sc_in< sc_lv<8> > m_q0;


    // Module declarations
    keccak_absorb_1(sc_module_name name);
    SC_HAS_PROCESS(keccak_absorb_1);

    ~keccak_absorb_1();

    sc_trace_file* mVcdFile;

    keccak_absorb_t* t_U;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > i_2_reg_160;
    sc_signal< sc_lv<1> > icmp_ln352_fu_212_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > i_fu_218_p2;
    sc_signal< sc_lv<1> > icmp_ln354_fu_224_p2;
    sc_signal< sc_lv<1> > icmp_ln354_reg_357;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<5> > add_ln354_fu_230_p2;
    sc_signal< sc_lv<5> > add_ln354_reg_361;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln358_fu_259_p1;
    sc_signal< sc_lv<64> > zext_ln358_reg_377;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<5> > i_6_fu_269_p2;
    sc_signal< sc_lv<5> > i_6_reg_385;
    sc_signal< sc_lv<8> > shl_ln_fu_275_p3;
    sc_signal< sc_lv<8> > shl_ln_reg_390;
    sc_signal< sc_lv<1> > icmp_ln358_fu_263_p2;
    sc_signal< sc_lv<4> > i_7_fu_293_p2;
    sc_signal< sc_lv<4> > i_7_reg_398;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln19_fu_287_p2;
    sc_signal< sc_lv<5> > s_addr_reg_408;
    sc_signal< sc_lv<64> > r_fu_335_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<8> > t_address0;
    sc_signal< sc_logic > t_ce0;
    sc_signal< sc_logic > t_we0;
    sc_signal< sc_lv<8> > t_d0;
    sc_signal< sc_lv<8> > t_q0;
    sc_signal< sc_lv<8> > t_address1;
    sc_signal< sc_logic > t_ce1;
    sc_signal< sc_logic > t_we1;
    sc_signal< sc_lv<8> > t_d1;
    sc_signal< sc_lv<8> > t_q1;
    sc_signal< sc_lv<8> > i_1_reg_149;
    sc_signal< sc_lv<5> > ap_phi_mux_i_2_phi_fu_164_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<5> > i_3_reg_172;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > r_0_i_reg_183;
    sc_signal< sc_lv<4> > i_0_i_reg_195;
    sc_signal< sc_lv<64> > zext_ln352_fu_207_p1;
    sc_signal< sc_lv<64> > zext_ln355_fu_242_p1;
    sc_signal< sc_lv<64> > zext_ln354_fu_247_p1;
    sc_signal< sc_lv<64> > zext_ln20_fu_304_p1;
    sc_signal< sc_lv<5> > xor_ln355_fu_236_p2;
    sc_signal< sc_lv<8> > zext_ln19_fu_283_p1;
    sc_signal< sc_lv<8> > add_ln20_fu_299_p2;
    sc_signal< sc_lv<3> > trunc_ln20_fu_313_p1;
    sc_signal< sc_lv<6> > shl_ln2_fu_317_p3;
    sc_signal< sc_lv<64> > zext_ln20_3_fu_309_p1;
    sc_signal< sc_lv<64> > zext_ln20_4_fu_325_p1;
    sc_signal< sc_lv<64> > shl_ln20_fu_329_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_pp0_stage0;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<9> ap_ST_fsm_state10;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_87;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_1F;
    static const sc_lv<8> ap_const_lv8_88;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<5> ap_const_lv5_11;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln20_fu_299_p2();
    void thread_add_ln354_fu_230_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_2_phi_fu_164_p4();
    void thread_ap_ready();
    void thread_i_6_fu_269_p2();
    void thread_i_7_fu_293_p2();
    void thread_i_fu_218_p2();
    void thread_icmp_ln19_fu_287_p2();
    void thread_icmp_ln352_fu_212_p2();
    void thread_icmp_ln354_fu_224_p2();
    void thread_icmp_ln358_fu_263_p2();
    void thread_m_address0();
    void thread_m_ce0();
    void thread_r_fu_335_p2();
    void thread_s_address0();
    void thread_s_ce0();
    void thread_s_d0();
    void thread_s_we0();
    void thread_shl_ln20_fu_329_p2();
    void thread_shl_ln2_fu_317_p3();
    void thread_shl_ln_fu_275_p3();
    void thread_t_address0();
    void thread_t_address1();
    void thread_t_ce0();
    void thread_t_ce1();
    void thread_t_d0();
    void thread_t_d1();
    void thread_t_we0();
    void thread_t_we1();
    void thread_trunc_ln20_fu_313_p1();
    void thread_xor_ln355_fu_236_p2();
    void thread_zext_ln19_fu_283_p1();
    void thread_zext_ln20_3_fu_309_p1();
    void thread_zext_ln20_4_fu_325_p1();
    void thread_zext_ln20_fu_304_p1();
    void thread_zext_ln352_fu_207_p1();
    void thread_zext_ln354_fu_247_p1();
    void thread_zext_ln355_fu_242_p1();
    void thread_zext_ln358_fu_259_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
