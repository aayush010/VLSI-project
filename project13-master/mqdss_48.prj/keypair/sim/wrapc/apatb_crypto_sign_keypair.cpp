// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct {
        unsigned char Key[32];
        unsigned char V[16];
        int reseed_counter;
       } AES256_CTR_DRBG_struct;

extern AES256_CTR_DRBG_struct DRBG_ctx;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "pk"
#define AUTOTB_TVIN_pk  "../tv/cdatafile/c.crypto_sign_keypair.autotvin_pk.dat"
#define AUTOTB_TVOUT_pk  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_pk.dat"
// wrapc file define: "sk"
#define AUTOTB_TVIN_sk  "../tv/cdatafile/c.crypto_sign_keypair.autotvin_sk.dat"
#define AUTOTB_TVOUT_sk  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_sk.dat"
// wrapc file define: "DRBG_ctx_V"
#define AUTOTB_TVIN_DRBG_ctx_V  "../tv/cdatafile/c.crypto_sign_keypair.autotvin_DRBG_ctx_V.dat"
#define AUTOTB_TVOUT_DRBG_ctx_V  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_DRBG_ctx_V.dat"
// wrapc file define: "DRBG_ctx_Key"
#define AUTOTB_TVIN_DRBG_ctx_Key  "../tv/cdatafile/c.crypto_sign_keypair.autotvin_DRBG_ctx_Key.dat"
#define AUTOTB_TVOUT_DRBG_ctx_Key  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_DRBG_ctx_Key.dat"
// wrapc file define: "DRBG_ctx_reseed_counter"
#define AUTOTB_TVIN_DRBG_ctx_reseed_counter  "../tv/cdatafile/c.crypto_sign_keypair.autotvin_DRBG_ctx_reseed_counter.dat"
#define AUTOTB_TVOUT_DRBG_ctx_reseed_counter  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_DRBG_ctx_reseed_counter.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.crypto_sign_keypair.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "pk"
#define AUTOTB_TVOUT_PC_pk  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_pk.dat"
// tvout file define: "sk"
#define AUTOTB_TVOUT_PC_sk  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_sk.dat"
// tvout file define: "DRBG_ctx_V"
#define AUTOTB_TVOUT_PC_DRBG_ctx_V  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_DRBG_ctx_V.dat"
// tvout file define: "DRBG_ctx_Key"
#define AUTOTB_TVOUT_PC_DRBG_ctx_Key  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_DRBG_ctx_Key.dat"
// tvout file define: "DRBG_ctx_reseed_counter"
#define AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_DRBG_ctx_reseed_counter.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.crypto_sign_keypair.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			pk_depth = 0;
			sk_depth = 0;
			DRBG_ctx_V_depth = 0;
			DRBG_ctx_Key_depth = 0;
			DRBG_ctx_reseed_counter_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{pk " << pk_depth << "}\n";
			total_list << "{sk " << sk_depth << "}\n";
			total_list << "{DRBG_ctx_V " << DRBG_ctx_V_depth << "}\n";
			total_list << "{DRBG_ctx_Key " << DRBG_ctx_Key_depth << "}\n";
			total_list << "{DRBG_ctx_reseed_counter " << DRBG_ctx_reseed_counter_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int pk_depth;
		int sk_depth;
		int DRBG_ctx_V_depth;
		int DRBG_ctx_Key_depth;
		int DRBG_ctx_reseed_counter_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" int crypto_sign_keypair (
char pk[46],
char sk[16]);

extern "C" int AESL_WRAP_crypto_sign_keypair (
char pk[46],
char sk[16])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;

		// output port post check: "pk"
		aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // data

			sc_bv<8> *pk_pc_buffer = new sc_bv<8>[46];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'pk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					pk_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_pk, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_pk))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: pk
				{
					// bitslice(7, 0)
					// {
						// celement: pk(7, 0)
						// {
							sc_lv<8>* pk_lv0_0_45_1 = new sc_lv<8>[46];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: pk(7, 0)
						{
							// carray: (0) => (45) @ (1)
							for (int i_0 = 0; i_0 <= 45; i_0 += 1)
							{
								if (&(pk[0]) != NULL) // check the null address if the c port is array or others
								{
									pk_lv0_0_45_1[hls_map_index].range(7, 0) = sc_bv<8>(pk_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: pk(7, 0)
						{
							// carray: (0) => (45) @ (1)
							for (int i_0 = 0; i_0 <= 45; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : pk[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : pk[0]
								// output_left_conversion : pk[i_0]
								// output_type_conversion : (pk_lv0_0_45_1[hls_map_index]).to_uint64()
								if (&(pk[0]) != NULL) // check the null address if the c port is array or others
								{
									pk[i_0] = (pk_lv0_0_45_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] pk_pc_buffer;
		}

		// output port post check: "sk"
		aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // data

			sc_bv<8> *sk_pc_buffer = new sc_bv<8>[16];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'sk', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					sk_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_sk, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_sk))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: sk
				{
					// bitslice(7, 0)
					// {
						// celement: sk(7, 0)
						// {
							sc_lv<8>* sk_lv0_0_15_1 = new sc_lv<8>[16];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: sk(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								if (&(sk[0]) != NULL) // check the null address if the c port is array or others
								{
									sk_lv0_0_15_1[hls_map_index].range(7, 0) = sc_bv<8>(sk_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: sk(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : sk[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : sk[0]
								// output_left_conversion : sk[i_0]
								// output_type_conversion : (sk_lv0_0_15_1[hls_map_index]).to_uint64()
								if (&(sk[0]) != NULL) // check the null address if the c port is array or others
								{
									sk[i_0] = (sk_lv0_0_15_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] sk_pc_buffer;
		}

		// output port post check: "DRBG_ctx_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_V, AESL_token); // data

			sc_bv<8> *DRBG_ctx_V_pc_buffer = new sc_bv<8>[16];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					DRBG_ctx_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_DRBG_ctx_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: DRBG_ctx_V
				{
					// bitslice(7, 0)
					// {
						// celement: DRBG_ctx.V(7, 0)
						// {
							sc_lv<8>* DRBG_ctx_V_lv0_0_15_1 = new sc_lv<8>[16];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.V(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								if (&(DRBG_ctx.V[0]) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx_V_lv0_0_15_1[hls_map_index].range(7, 0) = sc_bv<8>(DRBG_ctx_V_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.V(7, 0)
						{
							// carray: (0) => (15) @ (1)
							for (int i_0 = 0; i_0 <= 15; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : DRBG_ctx.V[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : DRBG_ctx.V[0]
								// output_left_conversion : DRBG_ctx.V[i_0]
								// output_type_conversion : (DRBG_ctx_V_lv0_0_15_1[hls_map_index]).to_uint64()
								if (&(DRBG_ctx.V[0]) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx.V[i_0] = (DRBG_ctx_V_lv0_0_15_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] DRBG_ctx_V_pc_buffer;
		}

		// output port post check: "DRBG_ctx_Key"
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_Key, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_Key, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_Key, AESL_token); // data

			sc_bv<8> *DRBG_ctx_Key_pc_buffer = new sc_bv<8>[32];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_Key', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_Key', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					DRBG_ctx_Key_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_Key, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_DRBG_ctx_Key))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: DRBG_ctx_Key
				{
					// bitslice(7, 0)
					// {
						// celement: DRBG_ctx.Key(7, 0)
						// {
							sc_lv<8>* DRBG_ctx_Key_lv0_0_31_1 = new sc_lv<8>[32];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.Key(7, 0)
						{
							// carray: (0) => (31) @ (1)
							for (int i_0 = 0; i_0 <= 31; i_0 += 1)
							{
								if (&(DRBG_ctx.Key[0]) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx_Key_lv0_0_31_1[hls_map_index].range(7, 0) = sc_bv<8>(DRBG_ctx_Key_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.Key(7, 0)
						{
							// carray: (0) => (31) @ (1)
							for (int i_0 = 0; i_0 <= 31; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : DRBG_ctx.Key[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : DRBG_ctx.Key[0]
								// output_left_conversion : DRBG_ctx.Key[i_0]
								// output_type_conversion : (DRBG_ctx_Key_lv0_0_31_1[hls_map_index]).to_uint64()
								if (&(DRBG_ctx.Key[0]) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx.Key[i_0] = (DRBG_ctx_Key_lv0_0_31_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] DRBG_ctx_Key_pc_buffer;
		}

		// output port post check: "DRBG_ctx_reseed_counter"
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter, AESL_token); // data

			sc_bv<32> *DRBG_ctx_reseed_counter_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_reseed_counter', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'DRBG_ctx_reseed_counter', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					DRBG_ctx_reseed_counter_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_DRBG_ctx_reseed_counter))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: DRBG_ctx_reseed_counter
				{
					// bitslice(31, 0)
					// {
						// celement: DRBG_ctx.reseed_counter(31, 0)
						// {
							sc_lv<32>* DRBG_ctx_reseed_counter_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.reseed_counter(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(DRBG_ctx.reseed_counter) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx_reseed_counter_lv0_0_0_1[hls_map_index].range(31, 0) = sc_bv<32>(DRBG_ctx_reseed_counter_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: DRBG_ctx.reseed_counter(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : DRBG_ctx.reseed_counter
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : DRBG_ctx.reseed_counter
								// output_left_conversion : DRBG_ctx.reseed_counter
								// output_type_conversion : (DRBG_ctx_reseed_counter_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(DRBG_ctx.reseed_counter) != NULL) // check the null address if the c port is array or others
								{
									DRBG_ctx.reseed_counter = (DRBG_ctx_reseed_counter_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] DRBG_ctx_reseed_counter_pc_buffer;
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "pk"
		char* tvin_pk = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pk);
		char* tvout_pk = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_pk);

		// "sk"
		char* tvin_sk = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sk);
		char* tvout_sk = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_sk);

		// "DRBG_ctx_V"
		char* tvin_DRBG_ctx_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_DRBG_ctx_V);
		char* tvout_DRBG_ctx_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_DRBG_ctx_V);

		// "DRBG_ctx_Key"
		char* tvin_DRBG_ctx_Key = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_DRBG_ctx_Key);
		char* tvout_DRBG_ctx_Key = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_DRBG_ctx_Key);

		// "DRBG_ctx_reseed_counter"
		char* tvin_DRBG_ctx_reseed_counter = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_DRBG_ctx_reseed_counter);
		char* tvout_DRBG_ctx_reseed_counter = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_DRBG_ctx_reseed_counter);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_pk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		sc_bv<8>* pk_tvin_wrapc_buffer = new sc_bv<8>[46];

		// RTL Name: pk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: pk(7, 0)
				{
					// carray: (0) => (45) @ (1)
					for (int i_0 = 0; i_0 <= 45; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pk[0]
						// regulate_c_name       : pk
						// input_type_conversion : pk[i_0]
						if (&(pk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> pk_tmp_mem;
							pk_tmp_mem = pk[i_0];
							pk_tvin_wrapc_buffer[hls_map_index].range(7, 0) = pk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 46; i++)
		{
			sprintf(tvin_pk, "%s\n", (pk_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);
		}

		tcl_file.set_num(46, &tcl_file.pk_depth);
		sprintf(tvin_pk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		// release memory allocation
		delete [] pk_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);

		sc_bv<8>* sk_tvin_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: sk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: sk(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sk[0]
						// regulate_c_name       : sk
						// input_type_conversion : sk[i_0]
						if (&(sk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> sk_tmp_mem;
							sk_tmp_mem = sk[i_0];
							sk_tvin_wrapc_buffer[hls_map_index].range(7, 0) = sk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvin_sk, "%s\n", (sk_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);
		}

		tcl_file.set_num(16, &tcl_file.sk_depth);
		sprintf(tvin_sk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sk, tvin_sk);

		// release memory allocation
		delete [] sk_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_DRBG_ctx_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_V, tvin_DRBG_ctx_V);

		sc_bv<8>* DRBG_ctx_V_tvin_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: DRBG_ctx_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.V(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.V[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.V[0]
						// regulate_c_name       : DRBG_ctx_V
						// input_type_conversion : DRBG_ctx.V[i_0]
						if (&(DRBG_ctx.V[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> DRBG_ctx_V_tmp_mem;
							DRBG_ctx_V_tmp_mem = DRBG_ctx.V[i_0];
							DRBG_ctx_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = DRBG_ctx_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvin_DRBG_ctx_V, "%s\n", (DRBG_ctx_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_V, tvin_DRBG_ctx_V);
		}

		tcl_file.set_num(16, &tcl_file.DRBG_ctx_V_depth);
		sprintf(tvin_DRBG_ctx_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_V, tvin_DRBG_ctx_V);

		// release memory allocation
		delete [] DRBG_ctx_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_DRBG_ctx_Key, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_Key, tvin_DRBG_ctx_Key);

		sc_bv<8>* DRBG_ctx_Key_tvin_wrapc_buffer = new sc_bv<8>[32];

		// RTL Name: DRBG_ctx_Key
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.Key(7, 0)
				{
					// carray: (0) => (31) @ (1)
					for (int i_0 = 0; i_0 <= 31; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.Key[0]
						// regulate_c_name       : DRBG_ctx_Key
						// input_type_conversion : DRBG_ctx.Key[i_0]
						if (&(DRBG_ctx.Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> DRBG_ctx_Key_tmp_mem;
							DRBG_ctx_Key_tmp_mem = DRBG_ctx.Key[i_0];
							DRBG_ctx_Key_tvin_wrapc_buffer[hls_map_index].range(7, 0) = DRBG_ctx_Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 32; i++)
		{
			sprintf(tvin_DRBG_ctx_Key, "%s\n", (DRBG_ctx_Key_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_Key, tvin_DRBG_ctx_Key);
		}

		tcl_file.set_num(32, &tcl_file.DRBG_ctx_Key_depth);
		sprintf(tvin_DRBG_ctx_Key, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_Key, tvin_DRBG_ctx_Key);

		// release memory allocation
		delete [] DRBG_ctx_Key_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_DRBG_ctx_reseed_counter, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_reseed_counter, tvin_DRBG_ctx_reseed_counter);

		sc_bv<32>* DRBG_ctx_reseed_counter_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: DRBG_ctx_reseed_counter
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.reseed_counter(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.reseed_counter
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.reseed_counter
						// regulate_c_name       : DRBG_ctx_reseed_counter
						// input_type_conversion : DRBG_ctx.reseed_counter
						if (&(DRBG_ctx.reseed_counter) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> DRBG_ctx_reseed_counter_tmp_mem;
							DRBG_ctx_reseed_counter_tmp_mem = DRBG_ctx.reseed_counter;
							DRBG_ctx_reseed_counter_tvin_wrapc_buffer[hls_map_index].range(31, 0) = DRBG_ctx_reseed_counter_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_DRBG_ctx_reseed_counter, "%s\n", (DRBG_ctx_reseed_counter_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_reseed_counter, tvin_DRBG_ctx_reseed_counter);
		}

		tcl_file.set_num(1, &tcl_file.DRBG_ctx_reseed_counter_depth);
		sprintf(tvin_DRBG_ctx_reseed_counter, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_DRBG_ctx_reseed_counter, tvin_DRBG_ctx_reseed_counter);

		// release memory allocation
		delete [] DRBG_ctx_reseed_counter_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = crypto_sign_keypair(pk, sk);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_pk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);

		sc_bv<8>* pk_tvout_wrapc_buffer = new sc_bv<8>[46];

		// RTL Name: pk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: pk(7, 0)
				{
					// carray: (0) => (45) @ (1)
					for (int i_0 = 0; i_0 <= 45; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pk[0]
						// regulate_c_name       : pk
						// input_type_conversion : pk[i_0]
						if (&(pk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> pk_tmp_mem;
							pk_tmp_mem = pk[i_0];
							pk_tvout_wrapc_buffer[hls_map_index].range(7, 0) = pk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 46; i++)
		{
			sprintf(tvout_pk, "%s\n", (pk_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);
		}

		tcl_file.set_num(46, &tcl_file.pk_depth);
		sprintf(tvout_pk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_pk, tvout_pk);

		// release memory allocation
		delete [] pk_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_sk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);

		sc_bv<8>* sk_tvout_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: sk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: sk(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sk[0]
						// regulate_c_name       : sk
						// input_type_conversion : sk[i_0]
						if (&(sk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> sk_tmp_mem;
							sk_tmp_mem = sk[i_0];
							sk_tvout_wrapc_buffer[hls_map_index].range(7, 0) = sk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvout_sk, "%s\n", (sk_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);
		}

		tcl_file.set_num(16, &tcl_file.sk_depth);
		sprintf(tvout_sk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_sk, tvout_sk);

		// release memory allocation
		delete [] sk_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_DRBG_ctx_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_V, tvout_DRBG_ctx_V);

		sc_bv<8>* DRBG_ctx_V_tvout_wrapc_buffer = new sc_bv<8>[16];

		// RTL Name: DRBG_ctx_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.V(7, 0)
				{
					// carray: (0) => (15) @ (1)
					for (int i_0 = 0; i_0 <= 15; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.V[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.V[0]
						// regulate_c_name       : DRBG_ctx_V
						// input_type_conversion : DRBG_ctx.V[i_0]
						if (&(DRBG_ctx.V[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> DRBG_ctx_V_tmp_mem;
							DRBG_ctx_V_tmp_mem = DRBG_ctx.V[i_0];
							DRBG_ctx_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = DRBG_ctx_V_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 16; i++)
		{
			sprintf(tvout_DRBG_ctx_V, "%s\n", (DRBG_ctx_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_V, tvout_DRBG_ctx_V);
		}

		tcl_file.set_num(16, &tcl_file.DRBG_ctx_V_depth);
		sprintf(tvout_DRBG_ctx_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_V, tvout_DRBG_ctx_V);

		// release memory allocation
		delete [] DRBG_ctx_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_DRBG_ctx_Key, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_Key, tvout_DRBG_ctx_Key);

		sc_bv<8>* DRBG_ctx_Key_tvout_wrapc_buffer = new sc_bv<8>[32];

		// RTL Name: DRBG_ctx_Key
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.Key(7, 0)
				{
					// carray: (0) => (31) @ (1)
					for (int i_0 = 0; i_0 <= 31; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.Key[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.Key[0]
						// regulate_c_name       : DRBG_ctx_Key
						// input_type_conversion : DRBG_ctx.Key[i_0]
						if (&(DRBG_ctx.Key[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> DRBG_ctx_Key_tmp_mem;
							DRBG_ctx_Key_tmp_mem = DRBG_ctx.Key[i_0];
							DRBG_ctx_Key_tvout_wrapc_buffer[hls_map_index].range(7, 0) = DRBG_ctx_Key_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 32; i++)
		{
			sprintf(tvout_DRBG_ctx_Key, "%s\n", (DRBG_ctx_Key_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_Key, tvout_DRBG_ctx_Key);
		}

		tcl_file.set_num(32, &tcl_file.DRBG_ctx_Key_depth);
		sprintf(tvout_DRBG_ctx_Key, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_Key, tvout_DRBG_ctx_Key);

		// release memory allocation
		delete [] DRBG_ctx_Key_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_DRBG_ctx_reseed_counter, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_reseed_counter, tvout_DRBG_ctx_reseed_counter);

		sc_bv<32>* DRBG_ctx_reseed_counter_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: DRBG_ctx_reseed_counter
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: DRBG_ctx.reseed_counter(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : DRBG_ctx.reseed_counter
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : DRBG_ctx.reseed_counter
						// regulate_c_name       : DRBG_ctx_reseed_counter
						// input_type_conversion : DRBG_ctx.reseed_counter
						if (&(DRBG_ctx.reseed_counter) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> DRBG_ctx_reseed_counter_tmp_mem;
							DRBG_ctx_reseed_counter_tmp_mem = DRBG_ctx.reseed_counter;
							DRBG_ctx_reseed_counter_tvout_wrapc_buffer[hls_map_index].range(31, 0) = DRBG_ctx_reseed_counter_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_DRBG_ctx_reseed_counter, "%s\n", (DRBG_ctx_reseed_counter_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_reseed_counter, tvout_DRBG_ctx_reseed_counter);
		}

		tcl_file.set_num(1, &tcl_file.DRBG_ctx_reseed_counter_depth);
		sprintf(tvout_DRBG_ctx_reseed_counter, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_DRBG_ctx_reseed_counter, tvout_DRBG_ctx_reseed_counter);

		// release memory allocation
		delete [] DRBG_ctx_reseed_counter_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "pk"
		delete [] tvin_pk;
		delete [] tvout_pk;
		// release memory allocation: "sk"
		delete [] tvin_sk;
		delete [] tvout_sk;
		// release memory allocation: "DRBG_ctx_V"
		delete [] tvin_DRBG_ctx_V;
		delete [] tvout_DRBG_ctx_V;
		// release memory allocation: "DRBG_ctx_Key"
		delete [] tvin_DRBG_ctx_Key;
		delete [] tvout_DRBG_ctx_Key;
		// release memory allocation: "DRBG_ctx_reseed_counter"
		delete [] tvin_DRBG_ctx_reseed_counter;
		delete [] tvout_DRBG_ctx_reseed_counter;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

