-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity keccak_absorb_2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    s_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    s_ce0 : OUT STD_LOGIC;
    s_we0 : OUT STD_LOGIC;
    s_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
    s_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
    m_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    m_ce0 : OUT STD_LOGIC;
    m_q0 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of keccak_absorb_2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv8_10 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv64_87 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000010000111";
    constant ap_const_lv64_10 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000010000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv8_1F : STD_LOGIC_VECTOR (7 downto 0) := "00011111";
    constant ap_const_lv8_88 : STD_LOGIC_VECTOR (7 downto 0) := "10001000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv8_80 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv5_11 : STD_LOGIC_VECTOR (4 downto 0) := "10001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_2_reg_160 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln352_fu_211_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal i_fu_217_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln354_fu_223_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln354_reg_345 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state3_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal add_ln354_fu_229_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal zext_ln354_fu_235_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln354_reg_354 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln358_fu_247_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln358_reg_370 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal i_4_fu_257_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_4_reg_378 : STD_LOGIC_VECTOR (4 downto 0);
    signal shl_ln_fu_263_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal shl_ln_reg_383 : STD_LOGIC_VECTOR (7 downto 0);
    signal icmp_ln358_fu_251_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_5_fu_281_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_5_reg_391 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal icmp_ln19_fu_275_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal s_addr_reg_401 : STD_LOGIC_VECTOR (4 downto 0);
    signal r_fu_323_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state3 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal t_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal t_ce0 : STD_LOGIC;
    signal t_we0 : STD_LOGIC;
    signal t_d0 : STD_LOGIC_VECTOR (7 downto 0);
    signal t_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal t_address1 : STD_LOGIC_VECTOR (7 downto 0);
    signal t_ce1 : STD_LOGIC;
    signal t_we1 : STD_LOGIC;
    signal t_d1 : STD_LOGIC_VECTOR (7 downto 0);
    signal t_q1 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_1_reg_149 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_3_reg_171 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal r_0_i_reg_182 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_0_i_reg_194 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln352_fu_206_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal zext_ln20_fu_292_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln19_fu_271_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln20_fu_287_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln20_fu_301_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal shl_ln1_fu_305_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln20_1_fu_297_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln20_2_fu_313_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal shl_ln20_fu_317_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;

    component keccak_absorb_t IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (7 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0);
        address1 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (7 downto 0);
        q1 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    t_U : component keccak_absorb_t
    generic map (
        DataWidth => 8,
        AddressRange => 200,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => t_address0,
        ce0 => t_ce0,
        we0 => t_we0,
        d0 => t_d0,
        q0 => t_q0,
        address1 => t_address1,
        ce1 => t_ce1,
        we1 => t_we1,
        d1 => t_d1,
        q1 => t_q1);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state3) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((icmp_ln352_fu_211_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state3) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state3);
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif (((icmp_ln352_fu_211_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_0_i_reg_194_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                i_0_i_reg_194 <= i_5_reg_391;
            elsif (((icmp_ln358_fu_251_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                i_0_i_reg_194 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    i_1_reg_149_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_1_reg_149 <= ap_const_lv8_10;
            elsif (((icmp_ln352_fu_211_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_1_reg_149 <= i_fu_217_p2;
            end if; 
        end if;
    end process;

    i_2_reg_160_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln352_fu_211_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_2_reg_160 <= ap_const_lv5_0;
            elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln354_fu_223_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                i_2_reg_160 <= add_ln354_fu_229_p2;
            end if; 
        end if;
    end process;

    i_3_reg_171_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
                i_3_reg_171 <= i_4_reg_378;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                i_3_reg_171 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    r_0_i_reg_182_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                r_0_i_reg_182 <= r_fu_323_p2;
            elsif (((icmp_ln358_fu_251_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                r_0_i_reg_182 <= ap_const_lv64_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                i_4_reg_378 <= i_4_fu_257_p2;
                    zext_ln358_reg_370(4 downto 0) <= zext_ln358_fu_247_p1(4 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                i_5_reg_391 <= i_5_fu_281_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln354_reg_345 <= icmp_ln354_fu_223_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state8) and (icmp_ln19_fu_275_p2 = ap_const_lv1_1))) then
                s_addr_reg_401 <= zext_ln358_reg_370(5 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln358_fu_251_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    shl_ln_reg_383(7 downto 3) <= shl_ln_fu_263_p3(7 downto 3);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln354_fu_223_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                    zext_ln354_reg_354(4 downto 0) <= zext_ln354_fu_235_p1(4 downto 0);
            end if;
        end if;
    end process;
    zext_ln354_reg_354(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    zext_ln358_reg_370(63 downto 5) <= "00000000000000000000000000000000000000000000000000000000000";
    shl_ln_reg_383(2 downto 0) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, icmp_ln352_fu_211_p2, ap_CS_fsm_state2, icmp_ln354_fu_223_p2, ap_enable_reg_pp0_iter0, ap_CS_fsm_state7, icmp_ln358_fu_251_p2, ap_CS_fsm_state8, icmp_ln19_fu_275_p2, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln352_fu_211_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if (not(((icmp_ln354_fu_223_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((icmp_ln354_fu_223_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state7) and (icmp_ln358_fu_251_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state8) and (icmp_ln19_fu_275_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state10;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    add_ln20_fu_287_p2 <= std_logic_vector(unsigned(zext_ln19_fu_271_p1) + unsigned(shl_ln_reg_383));
    add_ln354_fu_229_p2 <= std_logic_vector(unsigned(i_2_reg_160) + unsigned(ap_const_lv5_1));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(8);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state5 <= ap_CS_fsm(3);
    ap_CS_fsm_state6 <= ap_CS_fsm(4);
    ap_CS_fsm_state7 <= ap_CS_fsm(5);
    ap_CS_fsm_state8 <= ap_CS_fsm(6);
    ap_CS_fsm_state9 <= ap_CS_fsm(7);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state3_assign_proc : process(icmp_ln354_fu_223_p2)
    begin
        if ((icmp_ln354_fu_223_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state3 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state3 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state7, icmp_ln358_fu_251_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state7) and (icmp_ln358_fu_251_p2 = ap_const_lv1_1)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state7, icmp_ln358_fu_251_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) and (icmp_ln358_fu_251_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_4_fu_257_p2 <= std_logic_vector(unsigned(i_3_reg_171) + unsigned(ap_const_lv5_1));
    i_5_fu_281_p2 <= std_logic_vector(unsigned(i_0_i_reg_194) + unsigned(ap_const_lv4_1));
    i_fu_217_p2 <= std_logic_vector(unsigned(i_1_reg_149) + unsigned(ap_const_lv8_1));
    icmp_ln19_fu_275_p2 <= "1" when (i_0_i_reg_194 = ap_const_lv4_8) else "0";
    icmp_ln352_fu_211_p2 <= "1" when (i_1_reg_149 = ap_const_lv8_88) else "0";
    icmp_ln354_fu_223_p2 <= "1" when (i_2_reg_160 = ap_const_lv5_10) else "0";
    icmp_ln358_fu_251_p2 <= "1" when (i_3_reg_171 = ap_const_lv5_11) else "0";
    m_address0 <= zext_ln354_fu_235_p1(6 - 1 downto 0);

    m_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            m_ce0 <= ap_const_logic_1;
        else 
            m_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    r_fu_323_p2 <= (shl_ln20_fu_317_p2 or r_0_i_reg_182);

    s_address0_assign_proc : process(zext_ln358_reg_370, ap_CS_fsm_state8, s_addr_reg_401, ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            s_address0 <= s_addr_reg_401;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            s_address0 <= zext_ln358_reg_370(5 - 1 downto 0);
        else 
            s_address0 <= "XXXXX";
        end if; 
    end process;


    s_ce0_assign_proc : process(ap_CS_fsm_state8, ap_CS_fsm_state10)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state10) or (ap_const_logic_1 = ap_CS_fsm_state8))) then 
            s_ce0 <= ap_const_logic_1;
        else 
            s_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    s_d0 <= (s_q0 xor r_0_i_reg_182);

    s_we0_assign_proc : process(ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            s_we0 <= ap_const_logic_1;
        else 
            s_we0 <= ap_const_logic_0;
        end if; 
    end process;

    shl_ln1_fu_305_p3 <= (trunc_ln20_fu_301_p1 & ap_const_lv3_0);
    shl_ln20_fu_317_p2 <= std_logic_vector(shift_left(unsigned(zext_ln20_1_fu_297_p1),to_integer(unsigned('0' & zext_ln20_2_fu_313_p1(31-1 downto 0)))));
    shl_ln_fu_263_p3 <= (i_3_reg_171 & ap_const_lv3_0);

    t_address0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_pp0_stage0, zext_ln354_reg_354, ap_CS_fsm_state5, ap_enable_reg_pp0_iter1, ap_CS_fsm_state6, zext_ln352_fu_206_p1, ap_block_pp0_stage0)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            t_address0 <= ap_const_lv64_10(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            t_address0 <= ap_const_lv64_87(8 - 1 downto 0);
        elsif (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            t_address0 <= zext_ln354_reg_354(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            t_address0 <= zext_ln352_fu_206_p1(8 - 1 downto 0);
        else 
            t_address0 <= "XXXXXXXX";
        end if; 
    end process;


    t_address1_assign_proc : process(ap_CS_fsm_state8, ap_CS_fsm_state6, zext_ln20_fu_292_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            t_address1 <= zext_ln20_fu_292_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            t_address1 <= ap_const_lv64_87(8 - 1 downto 0);
        else 
            t_address1 <= "XXXXXXXX";
        end if; 
    end process;


    t_ce0_assign_proc : process(ap_CS_fsm_state2, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_CS_fsm_state5, ap_enable_reg_pp0_iter1, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state6) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1)))) then 
            t_ce0 <= ap_const_logic_1;
        else 
            t_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    t_ce1_assign_proc : process(ap_CS_fsm_state8, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state8))) then 
            t_ce1 <= ap_const_logic_1;
        else 
            t_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    t_d0_assign_proc : process(m_q0, ap_CS_fsm_state2, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1, ap_CS_fsm_state6, ap_block_pp0_stage0)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            t_d0 <= ap_const_lv8_1F;
        elsif (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            t_d0 <= m_q0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            t_d0 <= ap_const_lv8_0;
        else 
            t_d0 <= "XXXXXXXX";
        end if; 
    end process;

    t_d1 <= (t_q0 or ap_const_lv8_80);

    t_we0_assign_proc : process(icmp_ln352_fu_211_p2, ap_CS_fsm_state2, icmp_ln354_reg_345, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1, ap_CS_fsm_state6)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln354_reg_345 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1)) or ((icmp_ln352_fu_211_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            t_we0 <= ap_const_logic_1;
        else 
            t_we0 <= ap_const_logic_0;
        end if; 
    end process;


    t_we1_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            t_we1 <= ap_const_logic_1;
        else 
            t_we1 <= ap_const_logic_0;
        end if; 
    end process;

    trunc_ln20_fu_301_p1 <= i_0_i_reg_194(3 - 1 downto 0);
    zext_ln19_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_i_reg_194),8));
    zext_ln20_1_fu_297_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(t_q1),64));
    zext_ln20_2_fu_313_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(shl_ln1_fu_305_p3),64));
    zext_ln20_fu_292_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln20_fu_287_p2),64));
    zext_ln352_fu_206_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_1_reg_149),64));
    zext_ln354_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_2_reg_160),64));
    zext_ln358_fu_247_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_3_reg_171),64));
end behav;
