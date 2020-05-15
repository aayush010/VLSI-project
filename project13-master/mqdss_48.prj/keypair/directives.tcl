############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_dataflow "vgf31_unique/vgf31_unique_label0"
set_directive_pipeline "gf31_nrand_schar/gf31_nrand_schar_label1"
set_directive_dataflow "gf31_npack/gf31_npack_label3"
set_directive_pipeline "KeyExpansion/KeyExpansion_label1"
set_directive_pipeline "KeyExpansion/KeyExpansion_label0"
set_directive_pipeline "AddRoundKey/AddRoundKey_label0"
set_directive_pipeline "AddRoundKey/AddRoundKey_label1"
set_directive_pipeline "Cipher/Cipher_label6"
set_directive_pipeline "InvCipher/InvCipher_label7"
set_directive_pipeline "XorWithIv/XorWithIv_label8"
set_directive_pipeline "AES_CBC_encrypt_buffer/AES_CBC_encrypt_buffer_label9"
set_directive_pipeline "AES_CBC_decrypt_buffer/AES_CBC_decrypt_buffer_label10"
set_directive_pipeline "AES_CTR_xcrypt_buffer/AES_CTR_xcrypt_buffer_label11"
set_directive_pipeline "KeccakF1600_StatePermute/KeccakF1600_StatePermute_label0"
set_directive_unroll "keccak_absorb/keccak_absorb_label1"
set_directive_pipeline "keccak_absorb/keccak_absorb_label2"
set_directive_dataflow "keccak_absorb/keccak_absorb_label3"
set_directive_pipeline "keccak_absorb/keccak_absorb_label0"
set_directive_pipeline "keccak_absorb/keccak_absorb_label4"
set_directive_dataflow "keccak_squeezeblocks/keccak_squeezeblocks_label6"
set_directive_pipeline "keccak_squeezeblocks/keccak_squeezeblocks_label0"
set_directive_pipeline "crypto_sign_keypair/crypto_sign_keypair_label6"
set_directive_pipeline "randombytes/randombytes_label10"
set_directive_pipeline "randombytes/randombytes_label11"
set_directive_pipeline "randombytes/randombytes_label12"
set_directive_pipeline "randombytes_sign/randombytes_sign_label13"
set_directive_pipeline "AES256_CTR_DRBG_Update/AES256_CTR_DRBG_Update_label16"
set_directive_pipeline "crypto_sign_open/crypto_sign_open_label25"
set_directive_dependence -type inter -dependent true "generate_quadratic_terms/generate_quadratic_terms_label26"
set_directive_dataflow "generate_xiyj_p_xjyi_terms/generate_xiyj_p_xjyi_terms_label27"
set_directive_pipeline "MQ/MQ_label29"
set_directive_pipeline "G/G_label30"
set_directive_occurrence "G/G_label31"
set_directive_pipeline "crypto_sign/crypto_sign_label32"
set_directive_pipeline "crypto_sign/crypto_sign_label33"
set_directive_dataflow "crypto_sign/crypto_sign_label34"
set_directive_pipeline "crypto_sign_open/crypto_sign_open_label35"
set_directive_dataflow "crypto_sign_open/crypto_sign_open_label36"
set_directive_inline "crypto_sign_open/crypto_sign_open_label37"
set_directive_pipeline "crypto_sign_open/crypto_sign_open_label38"
set_directive_pipeline "crypto_sign_open/crypto_sign_open_label39"
set_directive_pipeline "print_aes256_struct/print_aes256_struct_label0"
set_directive_pipeline "seedexpander/seedexpander_label1"
set_directive_pipeline "seedexpander/seedexpander_label2"
set_directive_pipeline "write_aes256_struct/write_aes256_struct_label3"
set_directive_pipeline "fprint_aes256_struct/fprint_aes256_struct_label4"
set_directive_pipeline "print_aes256_struct/print_aes256_struct_label5"