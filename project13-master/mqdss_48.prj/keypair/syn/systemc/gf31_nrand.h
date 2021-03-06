// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _gf31_nrand_HH_
#define _gf31_nrand_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "keccak_squeezeblocks.h"
#include "keccak_absorb_1.h"
#include "gf31_nrand_schar_g8j.h"
#include "gf31_nrand_schar_hbi.h"

namespace ap_rtl {

struct gf31_nrand : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > out_r_address0;
    sc_out< sc_logic > out_r_ce0;
    sc_out< sc_logic > out_r_we0;
    sc_out< sc_lv<5> > out_r_d0;
    sc_out< sc_lv<5> > seed_address0;
    sc_out< sc_logic > seed_ce0;
    sc_in< sc_lv<8> > seed_q0;


    // Module declarations
    gf31_nrand(sc_module_name name);
    SC_HAS_PROCESS(gf31_nrand);

    ~gf31_nrand();

    sc_trace_file* mVcdFile;

    gf31_nrand_schar_g8j* shakestate_U;
    gf31_nrand_schar_hbi* output_assign_U;
    keccak_squeezeblocks* grp_keccak_squeezeblocks_fu_118;
    keccak_absorb_1* grp_keccak_absorb_1_fu_126;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > add_ln54_fu_142_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > i_11_load_1_reg_230;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > j_fu_176_p2;
    sc_signal< sc_lv<32> > j_reg_239;
    sc_signal< sc_lv<1> > and_ln61_fu_170_p2;
    sc_signal< sc_lv<5> > shakestate_address0;
    sc_signal< sc_logic > shakestate_ce0;
    sc_signal< sc_logic > shakestate_we0;
    sc_signal< sc_lv<64> > shakestate_d0;
    sc_signal< sc_lv<64> > shakestate_q0;
    sc_signal< sc_logic > shakestate_ce1;
    sc_signal< sc_logic > shakestate_we1;
    sc_signal< sc_lv<64> > shakestate_q1;
    sc_signal< sc_lv<8> > output_assign_address0;
    sc_signal< sc_logic > output_assign_ce0;
    sc_signal< sc_logic > output_assign_we0;
    sc_signal< sc_lv<8> > output_assign_q0;
    sc_signal< sc_logic > output_assign_ce1;
    sc_signal< sc_logic > output_assign_we1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_ap_start;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_ap_done;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_ap_idle;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_ap_ready;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_fu_118_h_address0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_h_ce0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_h_we0;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_fu_118_h_d0;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_fu_118_h_address1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_h_ce1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_h_we1;
    sc_signal< sc_lv<8> > grp_keccak_squeezeblocks_fu_118_h_d1;
    sc_signal< sc_lv<5> > grp_keccak_squeezeblocks_fu_118_s_address0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_s_ce0;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_s_we0;
    sc_signal< sc_lv<64> > grp_keccak_squeezeblocks_fu_118_s_d0;
    sc_signal< sc_lv<5> > grp_keccak_squeezeblocks_fu_118_s_address1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_s_ce1;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_s_we1;
    sc_signal< sc_lv<64> > grp_keccak_squeezeblocks_fu_118_s_d1;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_ap_start;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_ap_done;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_ap_idle;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_ap_ready;
    sc_signal< sc_lv<5> > grp_keccak_absorb_1_fu_126_s_address0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_s_ce0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_s_we0;
    sc_signal< sc_lv<64> > grp_keccak_absorb_1_fu_126_s_d0;
    sc_signal< sc_lv<5> > grp_keccak_absorb_1_fu_126_m_address0;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_m_ce0;
    sc_signal< sc_lv<5> > phi_ln54_reg_96;
    sc_signal< sc_lv<1> > icmp_ln54_fu_153_p2;
    sc_signal< sc_lv<32> > j_0_reg_107;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > grp_keccak_squeezeblocks_fu_118_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > grp_fu_136_p2;
    sc_signal< sc_logic > grp_keccak_absorb_1_fu_126_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln54_fu_148_p1;
    sc_signal< sc_lv<64> > sext_ln62_fu_182_p1;
    sc_signal< sc_lv<64> > sext_ln63_fu_198_p1;
    sc_signal< sc_lv<1> > icmp_ln62_fu_192_p2;
    sc_signal< sc_lv<32> > i_11_fu_54;
    sc_signal< sc_lv<32> > i_fu_202_p2;
    sc_signal< sc_lv<5> > empty_38_fu_187_p1;
    sc_signal< sc_lv<1> > icmp_ln61_1_fu_164_p2;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<32> ap_const_lv32_88;
    static const sc_lv<5> ap_const_lv5_1F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln54_fu_142_p2();
    void thread_and_ln61_fu_170_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_empty_38_fu_187_p1();
    void thread_grp_fu_136_p2();
    void thread_grp_keccak_absorb_1_fu_126_ap_start();
    void thread_grp_keccak_squeezeblocks_fu_118_ap_start();
    void thread_i_fu_202_p2();
    void thread_icmp_ln54_fu_153_p2();
    void thread_icmp_ln61_1_fu_164_p2();
    void thread_icmp_ln62_fu_192_p2();
    void thread_j_fu_176_p2();
    void thread_out_r_address0();
    void thread_out_r_ce0();
    void thread_out_r_d0();
    void thread_out_r_we0();
    void thread_output_assign_address0();
    void thread_output_assign_ce0();
    void thread_output_assign_ce1();
    void thread_output_assign_we0();
    void thread_output_assign_we1();
    void thread_seed_address0();
    void thread_seed_ce0();
    void thread_sext_ln62_fu_182_p1();
    void thread_sext_ln63_fu_198_p1();
    void thread_shakestate_address0();
    void thread_shakestate_ce0();
    void thread_shakestate_ce1();
    void thread_shakestate_d0();
    void thread_shakestate_we0();
    void thread_shakestate_we1();
    void thread_zext_ln54_fu_148_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
