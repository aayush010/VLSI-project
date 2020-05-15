// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "generate_quadratic_t.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic generate_quadratic_t::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic generate_quadratic_t::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> generate_quadratic_t::ap_ST_fsm_state1 = "1";
const sc_lv<5> generate_quadratic_t::ap_ST_fsm_state2 = "10";
const sc_lv<5> generate_quadratic_t::ap_ST_fsm_state3 = "100";
const sc_lv<5> generate_quadratic_t::ap_ST_fsm_state4 = "1000";
const sc_lv<5> generate_quadratic_t::ap_ST_fsm_state5 = "10000";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_1 = "1";
const sc_lv<1> generate_quadratic_t::ap_const_lv1_0 = "0";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_2 = "10";
const sc_lv<1> generate_quadratic_t::ap_const_lv1_1 = "1";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_3 = "11";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_4 = "100";
const sc_lv<6> generate_quadratic_t::ap_const_lv6_1 = "1";
const sc_lv<6> generate_quadratic_t::ap_const_lv6_0 = "000000";
const sc_lv<12> generate_quadratic_t::ap_const_lv12_0 = "000000000000";
const sc_lv<6> generate_quadratic_t::ap_const_lv6_31 = "110001";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_5 = "101";
const sc_lv<32> generate_quadratic_t::ap_const_lv32_9 = "1001";
const sc_lv<6> generate_quadratic_t::ap_const_lv6_1F = "11111";
const sc_lv<6> generate_quadratic_t::ap_const_lv6_3F = "111111";
const sc_lv<12> generate_quadratic_t::ap_const_lv12_1 = "1";
const bool generate_quadratic_t::ap_const_boolean_1 = true;

generate_quadratic_t::generate_quadratic_t(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln10_fu_180_p2);
    sensitive << ( indvars_iv_reg_79 );

    SC_METHOD(thread_add_ln13_fu_310_p2);
    sensitive << ( k_1_reg_125 );

    SC_METHOD(thread_add_ln20_fu_222_p2);
    sensitive << ( t_fu_200_p1 );
    sensitive << ( trunc_ln_fu_208_p4 );

    SC_METHOD(thread_add_ln23_fu_269_p2);
    sensitive << ( add_ln20_reg_352 );
    sensitive << ( zext_ln23_2_fu_266_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln10_fu_140_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln10_fu_140_p2 );

    SC_METHOD(thread_i_fu_146_p2);
    sensitive << ( i_0_reg_91 );

    SC_METHOD(thread_icmp_ln10_fu_140_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( indvars_iv_reg_79 );

    SC_METHOD(thread_icmp_ln11_fu_163_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( indvars_iv_reg_79 );
    sensitive << ( j_0_reg_114 );

    SC_METHOD(thread_icmp_ln24_fu_284_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( t_3_fu_278_p2 );

    SC_METHOD(thread_j_fu_169_p2);
    sensitive << ( j_0_reg_114 );

    SC_METHOD(thread_k_fu_152_p2);
    sensitive << ( k_0_reg_102 );
    sensitive << ( zext_ln10_fu_136_p1 );

    SC_METHOD(thread_mul_ln12_fu_194_p0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( mul_ln12_fu_194_p00 );

    SC_METHOD(thread_mul_ln12_fu_194_p00);
    sensitive << ( x_q0 );

    SC_METHOD(thread_mul_ln12_fu_194_p1);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( mul_ln12_fu_194_p10 );

    SC_METHOD(thread_mul_ln12_fu_194_p10);
    sensitive << ( x_q1 );

    SC_METHOD(thread_mul_ln12_fu_194_p2);
    sensitive << ( mul_ln12_fu_194_p0 );
    sensitive << ( mul_ln12_fu_194_p1 );

    SC_METHOD(thread_select_ln24_fu_290_p3);
    sensitive << ( icmp_ln24_fu_284_p2 );

    SC_METHOD(thread_t_1_fu_228_p2);
    sensitive << ( zext_ln14_fu_204_p1 );
    sensitive << ( zext_ln16_fu_218_p1 );

    SC_METHOD(thread_t_2_fu_248_p2);
    sensitive << ( zext_ln22_1_fu_242_p1 );
    sensitive << ( zext_ln22_fu_245_p1 );

    SC_METHOD(thread_t_3_fu_278_p2);
    sensitive << ( zext_ln23_1_fu_262_p1 );
    sensitive << ( zext_ln23_fu_274_p1 );

    SC_METHOD(thread_t_fu_200_p1);
    sensitive << ( mul_ln12_fu_194_p2 );

    SC_METHOD(thread_tmp_6_fu_254_p3);
    sensitive << ( t_2_fu_248_p2 );

    SC_METHOD(thread_trunc_ln_fu_208_p4);
    sensitive << ( mul_ln12_fu_194_p2 );

    SC_METHOD(thread_x_address0);
    sensitive << ( x_addr_reg_329 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_x_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln12_1_fu_175_p1 );

    SC_METHOD(thread_x_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_x_ce1);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_xij_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( zext_ln12_2_fu_305_p1 );

    SC_METHOD(thread_xij_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_xij_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( t_3_fu_278_p2 );
    sensitive << ( select_ln24_fu_290_p3 );

    SC_METHOD(thread_xij_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_zext_ln10_fu_136_p1);
    sensitive << ( indvars_iv_reg_79 );

    SC_METHOD(thread_zext_ln12_1_fu_175_p1);
    sensitive << ( j_0_reg_114 );

    SC_METHOD(thread_zext_ln12_2_fu_305_p1);
    sensitive << ( k_1_reg_125 );

    SC_METHOD(thread_zext_ln12_fu_158_p1);
    sensitive << ( i_0_reg_91 );

    SC_METHOD(thread_zext_ln14_fu_204_p1);
    sensitive << ( t_fu_200_p1 );

    SC_METHOD(thread_zext_ln16_fu_218_p1);
    sensitive << ( trunc_ln_fu_208_p4 );

    SC_METHOD(thread_zext_ln22_1_fu_242_p1);
    sensitive << ( tmp_reg_358 );

    SC_METHOD(thread_zext_ln22_fu_245_p1);
    sensitive << ( add_ln20_reg_352 );

    SC_METHOD(thread_zext_ln23_1_fu_262_p1);
    sensitive << ( tmp_6_fu_254_p3 );

    SC_METHOD(thread_zext_ln23_2_fu_266_p1);
    sensitive << ( tmp_reg_358 );

    SC_METHOD(thread_zext_ln23_fu_274_p1);
    sensitive << ( add_ln23_fu_269_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln10_fu_140_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln11_fu_163_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "generate_quadratic_t_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, xij_address0, "(port)xij_address0");
    sc_trace(mVcdFile, xij_ce0, "(port)xij_ce0");
    sc_trace(mVcdFile, xij_we0, "(port)xij_we0");
    sc_trace(mVcdFile, xij_d0, "(port)xij_d0");
    sc_trace(mVcdFile, x_address0, "(port)x_address0");
    sc_trace(mVcdFile, x_ce0, "(port)x_ce0");
    sc_trace(mVcdFile, x_q0, "(port)x_q0");
    sc_trace(mVcdFile, x_address1, "(port)x_address1");
    sc_trace(mVcdFile, x_ce1, "(port)x_ce1");
    sc_trace(mVcdFile, x_q1, "(port)x_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_146_p2, "i_fu_146_p2");
    sc_trace(mVcdFile, i_reg_319, "i_reg_319");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, k_fu_152_p2, "k_fu_152_p2");
    sc_trace(mVcdFile, k_reg_324, "k_reg_324");
    sc_trace(mVcdFile, icmp_ln10_fu_140_p2, "icmp_ln10_fu_140_p2");
    sc_trace(mVcdFile, x_addr_reg_329, "x_addr_reg_329");
    sc_trace(mVcdFile, j_fu_169_p2, "j_fu_169_p2");
    sc_trace(mVcdFile, j_reg_337, "j_reg_337");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_ln11_fu_163_p2, "icmp_ln11_fu_163_p2");
    sc_trace(mVcdFile, add_ln10_fu_180_p2, "add_ln10_fu_180_p2");
    sc_trace(mVcdFile, add_ln20_fu_222_p2, "add_ln20_fu_222_p2");
    sc_trace(mVcdFile, add_ln20_reg_352, "add_ln20_reg_352");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_reg_358, "tmp_reg_358");
    sc_trace(mVcdFile, add_ln13_fu_310_p2, "add_ln13_fu_310_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, indvars_iv_reg_79, "indvars_iv_reg_79");
    sc_trace(mVcdFile, i_0_reg_91, "i_0_reg_91");
    sc_trace(mVcdFile, k_0_reg_102, "k_0_reg_102");
    sc_trace(mVcdFile, j_0_reg_114, "j_0_reg_114");
    sc_trace(mVcdFile, k_1_reg_125, "k_1_reg_125");
    sc_trace(mVcdFile, zext_ln12_fu_158_p1, "zext_ln12_fu_158_p1");
    sc_trace(mVcdFile, zext_ln12_1_fu_175_p1, "zext_ln12_1_fu_175_p1");
    sc_trace(mVcdFile, zext_ln12_2_fu_305_p1, "zext_ln12_2_fu_305_p1");
    sc_trace(mVcdFile, zext_ln10_fu_136_p1, "zext_ln10_fu_136_p1");
    sc_trace(mVcdFile, mul_ln12_fu_194_p0, "mul_ln12_fu_194_p0");
    sc_trace(mVcdFile, mul_ln12_fu_194_p1, "mul_ln12_fu_194_p1");
    sc_trace(mVcdFile, mul_ln12_fu_194_p2, "mul_ln12_fu_194_p2");
    sc_trace(mVcdFile, t_fu_200_p1, "t_fu_200_p1");
    sc_trace(mVcdFile, trunc_ln_fu_208_p4, "trunc_ln_fu_208_p4");
    sc_trace(mVcdFile, zext_ln14_fu_204_p1, "zext_ln14_fu_204_p1");
    sc_trace(mVcdFile, zext_ln16_fu_218_p1, "zext_ln16_fu_218_p1");
    sc_trace(mVcdFile, t_1_fu_228_p2, "t_1_fu_228_p2");
    sc_trace(mVcdFile, zext_ln22_1_fu_242_p1, "zext_ln22_1_fu_242_p1");
    sc_trace(mVcdFile, zext_ln22_fu_245_p1, "zext_ln22_fu_245_p1");
    sc_trace(mVcdFile, t_2_fu_248_p2, "t_2_fu_248_p2");
    sc_trace(mVcdFile, tmp_6_fu_254_p3, "tmp_6_fu_254_p3");
    sc_trace(mVcdFile, zext_ln23_2_fu_266_p1, "zext_ln23_2_fu_266_p1");
    sc_trace(mVcdFile, add_ln23_fu_269_p2, "add_ln23_fu_269_p2");
    sc_trace(mVcdFile, zext_ln23_1_fu_262_p1, "zext_ln23_1_fu_262_p1");
    sc_trace(mVcdFile, zext_ln23_fu_274_p1, "zext_ln23_fu_274_p1");
    sc_trace(mVcdFile, t_3_fu_278_p2, "t_3_fu_278_p2");
    sc_trace(mVcdFile, icmp_ln24_fu_284_p2, "icmp_ln24_fu_284_p2");
    sc_trace(mVcdFile, select_ln24_fu_290_p3, "select_ln24_fu_290_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, mul_ln12_fu_194_p00, "mul_ln12_fu_194_p00");
    sc_trace(mVcdFile, mul_ln12_fu_194_p10, "mul_ln12_fu_194_p10");
#endif

    }
}

generate_quadratic_t::~generate_quadratic_t() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void generate_quadratic_t::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_91 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(icmp_ln11_fu_163_p2.read(), ap_const_lv1_1))) {
        i_0_reg_91 = i_reg_319.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvars_iv_reg_79 = ap_const_lv6_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(icmp_ln11_fu_163_p2.read(), ap_const_lv1_1))) {
        indvars_iv_reg_79 = add_ln10_fu_180_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        j_0_reg_114 = j_reg_337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_0))) {
        j_0_reg_114 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_0_reg_102 = ap_const_lv12_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(icmp_ln11_fu_163_p2.read(), ap_const_lv1_1))) {
        k_0_reg_102 = k_reg_324.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        k_1_reg_125 = add_ln13_fu_310_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_0))) {
        k_1_reg_125 = k_0_reg_102.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln20_reg_352 = add_ln20_fu_222_p2.read();
        tmp_reg_358 = t_1_fu_228_p2.read().range(5, 5);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_319 = i_fu_146_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_337 = j_fu_169_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_0))) {
        k_reg_324 = k_fu_152_p2.read();
        x_addr_reg_329 =  (sc_lv<6>) (zext_ln12_fu_158_p1.read());
    }
}

void generate_quadratic_t::thread_add_ln10_fu_180_p2() {
    add_ln10_fu_180_p2 = (!indvars_iv_reg_79.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvars_iv_reg_79.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void generate_quadratic_t::thread_add_ln13_fu_310_p2() {
    add_ln13_fu_310_p2 = (!ap_const_lv12_1.is_01() || !k_1_reg_125.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_biguint<12>(k_1_reg_125.read()));
}

void generate_quadratic_t::thread_add_ln20_fu_222_p2() {
    add_ln20_fu_222_p2 = (!t_fu_200_p1.read().is_01() || !trunc_ln_fu_208_p4.read().is_01())? sc_lv<5>(): (sc_biguint<5>(t_fu_200_p1.read()) + sc_biguint<5>(trunc_ln_fu_208_p4.read()));
}

void generate_quadratic_t::thread_add_ln23_fu_269_p2() {
    add_ln23_fu_269_p2 = (!add_ln20_reg_352.read().is_01() || !zext_ln23_2_fu_266_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(add_ln20_reg_352.read()) + sc_biguint<5>(zext_ln23_2_fu_266_p1.read()));
}

void generate_quadratic_t::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void generate_quadratic_t::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void generate_quadratic_t::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void generate_quadratic_t::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void generate_quadratic_t::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void generate_quadratic_t::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_i_fu_146_p2() {
    i_fu_146_p2 = (!i_0_reg_91.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_0_reg_91.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void generate_quadratic_t::thread_icmp_ln10_fu_140_p2() {
    icmp_ln10_fu_140_p2 = (!indvars_iv_reg_79.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): sc_lv<1>(indvars_iv_reg_79.read() == ap_const_lv6_31);
}

void generate_quadratic_t::thread_icmp_ln11_fu_163_p2() {
    icmp_ln11_fu_163_p2 = (!j_0_reg_114.read().is_01() || !indvars_iv_reg_79.read().is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_114.read() == indvars_iv_reg_79.read());
}

void generate_quadratic_t::thread_icmp_ln24_fu_284_p2() {
    icmp_ln24_fu_284_p2 = (!t_3_fu_278_p2.read().is_01() || !ap_const_lv6_1F.is_01())? sc_lv<1>(): sc_lv<1>(t_3_fu_278_p2.read() != ap_const_lv6_1F);
}

void generate_quadratic_t::thread_j_fu_169_p2() {
    j_fu_169_p2 = (!j_0_reg_114.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_0_reg_114.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void generate_quadratic_t::thread_k_fu_152_p2() {
    k_fu_152_p2 = (!zext_ln10_fu_136_p1.read().is_01() || !k_0_reg_102.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln10_fu_136_p1.read()) + sc_biguint<12>(k_0_reg_102.read()));
}

void generate_quadratic_t::thread_mul_ln12_fu_194_p0() {
    mul_ln12_fu_194_p0 =  (sc_lv<5>) (mul_ln12_fu_194_p00.read());
}

void generate_quadratic_t::thread_mul_ln12_fu_194_p00() {
    mul_ln12_fu_194_p00 = esl_zext<10,5>(x_q0.read());
}

void generate_quadratic_t::thread_mul_ln12_fu_194_p1() {
    mul_ln12_fu_194_p1 =  (sc_lv<5>) (mul_ln12_fu_194_p10.read());
}

void generate_quadratic_t::thread_mul_ln12_fu_194_p10() {
    mul_ln12_fu_194_p10 = esl_zext<10,5>(x_q1.read());
}

void generate_quadratic_t::thread_mul_ln12_fu_194_p2() {
    mul_ln12_fu_194_p2 = (!mul_ln12_fu_194_p0.read().is_01() || !mul_ln12_fu_194_p1.read().is_01())? sc_lv<10>(): sc_biguint<5>(mul_ln12_fu_194_p0.read()) * sc_biguint<5>(mul_ln12_fu_194_p1.read());
}

void generate_quadratic_t::thread_select_ln24_fu_290_p3() {
    select_ln24_fu_290_p3 = (!icmp_ln24_fu_284_p2.read()[0].is_01())? sc_lv<6>(): ((icmp_ln24_fu_284_p2.read()[0].to_bool())? ap_const_lv6_3F: ap_const_lv6_0);
}

void generate_quadratic_t::thread_t_1_fu_228_p2() {
    t_1_fu_228_p2 = (!zext_ln14_fu_204_p1.read().is_01() || !zext_ln16_fu_218_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln14_fu_204_p1.read()) + sc_biguint<6>(zext_ln16_fu_218_p1.read()));
}

void generate_quadratic_t::thread_t_2_fu_248_p2() {
    t_2_fu_248_p2 = (!zext_ln22_1_fu_242_p1.read().is_01() || !zext_ln22_fu_245_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln22_1_fu_242_p1.read()) + sc_biguint<6>(zext_ln22_fu_245_p1.read()));
}

void generate_quadratic_t::thread_t_3_fu_278_p2() {
    t_3_fu_278_p2 = (!zext_ln23_1_fu_262_p1.read().is_01() || !zext_ln23_fu_274_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln23_1_fu_262_p1.read()) + sc_biguint<6>(zext_ln23_fu_274_p1.read()));
}

void generate_quadratic_t::thread_t_fu_200_p1() {
    t_fu_200_p1 = mul_ln12_fu_194_p2.read().range(5-1, 0);
}

void generate_quadratic_t::thread_tmp_6_fu_254_p3() {
    tmp_6_fu_254_p3 = t_2_fu_248_p2.read().range(5, 5);
}

void generate_quadratic_t::thread_trunc_ln_fu_208_p4() {
    trunc_ln_fu_208_p4 = mul_ln12_fu_194_p2.read().range(9, 5);
}

void generate_quadratic_t::thread_x_address0() {
    x_address0 = x_addr_reg_329.read();
}

void generate_quadratic_t::thread_x_address1() {
    x_address1 =  (sc_lv<6>) (zext_ln12_1_fu_175_p1.read());
}

void generate_quadratic_t::thread_x_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        x_ce0 = ap_const_logic_1;
    } else {
        x_ce0 = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_x_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        x_ce1 = ap_const_logic_1;
    } else {
        x_ce1 = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_xij_address0() {
    xij_address0 =  (sc_lv<11>) (zext_ln12_2_fu_305_p1.read());
}

void generate_quadratic_t::thread_xij_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xij_ce0 = ap_const_logic_1;
    } else {
        xij_ce0 = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_xij_d0() {
    xij_d0 = (t_3_fu_278_p2.read() & select_ln24_fu_290_p3.read());
}

void generate_quadratic_t::thread_xij_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        xij_we0 = ap_const_logic_1;
    } else {
        xij_we0 = ap_const_logic_0;
    }
}

void generate_quadratic_t::thread_zext_ln10_fu_136_p1() {
    zext_ln10_fu_136_p1 = esl_zext<12,6>(indvars_iv_reg_79.read());
}

void generate_quadratic_t::thread_zext_ln12_1_fu_175_p1() {
    zext_ln12_1_fu_175_p1 = esl_zext<64,6>(j_0_reg_114.read());
}

void generate_quadratic_t::thread_zext_ln12_2_fu_305_p1() {
    zext_ln12_2_fu_305_p1 = esl_zext<64,12>(k_1_reg_125.read());
}

void generate_quadratic_t::thread_zext_ln12_fu_158_p1() {
    zext_ln12_fu_158_p1 = esl_zext<64,6>(i_0_reg_91.read());
}

void generate_quadratic_t::thread_zext_ln14_fu_204_p1() {
    zext_ln14_fu_204_p1 = esl_zext<6,5>(t_fu_200_p1.read());
}

void generate_quadratic_t::thread_zext_ln16_fu_218_p1() {
    zext_ln16_fu_218_p1 = esl_zext<6,5>(trunc_ln_fu_208_p4.read());
}

void generate_quadratic_t::thread_zext_ln22_1_fu_242_p1() {
    zext_ln22_1_fu_242_p1 = esl_zext<6,1>(tmp_reg_358.read());
}

void generate_quadratic_t::thread_zext_ln22_fu_245_p1() {
    zext_ln22_fu_245_p1 = esl_zext<6,5>(add_ln20_reg_352.read());
}

void generate_quadratic_t::thread_zext_ln23_1_fu_262_p1() {
    zext_ln23_1_fu_262_p1 = esl_zext<6,1>(tmp_6_fu_254_p3.read());
}

void generate_quadratic_t::thread_zext_ln23_2_fu_266_p1() {
    zext_ln23_2_fu_266_p1 = esl_zext<5,1>(tmp_reg_358.read());
}

void generate_quadratic_t::thread_zext_ln23_fu_274_p1() {
    zext_ln23_fu_274_p1 = esl_zext<6,5>(add_ln23_fu_269_p2.read());
}

void generate_quadratic_t::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln10_fu_140_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_163_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

