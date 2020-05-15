#ifndef MQDSS_API_H
#define MQDSS_API_H

#include "params.h"

#define CRYPTO_ALGNAME "MQDSS"

#define CRYPTO_SECRETKEYBYTES SK_BYTES
#define CRYPTO_PUBLICKEYBYTES PK_BYTES
#define CRYPTO_BYTES SIG_LEN

/*
 * Generates an MQDSS key pair.
 */
int crypto_sign_keypair(unsigned char *pk, unsigned char *sk);

/**
 * Takes a message m and its length mlen, writes the signature followed by
 * the message to sm and CRYPTO_BYTES + mlen to smlen.
 */
int crypto_sign(unsigned char sm[3300+CRYPTO_BYTES], unsigned long long smlen[1],
                const unsigned char m[3300], unsigned long long mlen,
                const unsigned char sk[SK_BYTES]);


/**
 * Verifies a given signature-message pair under a given public key.
 * Expects m to have at least smlen bytes available (as is convention in the
 * SUPERCOP API).
 */
int crypto_sign_open(unsigned char m[3300], unsigned long long mlen[1],
                     const unsigned char sm[3300+CRYPTO_BYTES], unsigned long long smlen,
                     const unsigned char pk[PK_BYTES]);


#endif
