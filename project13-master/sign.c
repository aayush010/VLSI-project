#include <string.h>
#include <assert.h>
#include <stdint.h>
#include "rng.h"
#include "api.h"
#include "params.h"
#include "mq.h"
#include "gf31.h"
#include "fips202.h"

/* Takes an array of len bytes and computes a hash digest.
   This is used as a hash function in the Fiat-Shamir transform. */
void H(unsigned char *out, const unsigned char *in, const unsigned int len)
{
    shake256(out, HASH_BYTES, in, len);
}

/* Takes two arrays of N packed elements and an array of M packed elements,
   and computes a HASH_BYTES commitment. */
void com_0(unsigned char *c,
           const unsigned char *rho,
           const unsigned char *inn, const unsigned char *inn2,
           const unsigned char *inm)
{
    unsigned char buffer[HASH_BYTES + 2*NPACKED_BYTES + MPACKED_BYTES];
    int loop;
    com_0_label2:for(loop=0;loop<HASH_BYTES;loop++)
    	buffer[loop]=rho[loop];
    for(loop=0;loop<NPACKED_BYTES;loop++)
    	buffer[loop+ HASH_BYTES]=inn[loop];
    com_0_label8:for(loop=0;loop<NPACKED_BYTES;loop++)
    	buffer[loop + HASH_BYTES + NPACKED_BYTES]=inn2[loop];
    com_0_label3:for(loop=0;loop<MPACKED_BYTES;loop++)
    	buffer[loop + HASH_BYTES + 2*NPACKED_BYTES]=inm[loop];
    //memcpy(buffer, rho, HASH_BYTES);
    //memcpy(buffer + HASH_BYTES, inn, NPACKED_BYTES);
    //memcpy(buffer + HASH_BYTES + NPACKED_BYTES, inn2, NPACKED_BYTES);
    //memcpy(buffer + HASH_BYTES + 2*NPACKED_BYTES, inm, MPACKED_BYTES);
    shake256(c, HASH_BYTES, buffer, HASH_BYTES + 2*NPACKED_BYTES + MPACKED_BYTES);
}

/* Takes an array of N packed elements and an array of M packed elements,
   and computes a HASH_BYTES commitment. */
void com_1(unsigned char *c,
           const unsigned char *rho,
           const unsigned char *inn, const unsigned char *inm)
{
    unsigned char buffer[HASH_BYTES + NPACKED_BYTES + MPACKED_BYTES];
    int loop;
    com_1_label7:for(loop=0;loop<HASH_BYTES;loop++)
    	buffer[loop]=rho[loop];
    com_1_label4:for(loop=0;loop<NPACKED_BYTES;loop++)
    	buffer[loop+ HASH_BYTES]=inn[loop];
    com_1_label5:for(loop=0;loop<MPACKED_BYTES;loop++)
    	buffer[loop + HASH_BYTES + NPACKED_BYTES]=inm[loop];
    //memcpy(buffer, rho, HASH_BYTES);
    //memcpy(buffer + HASH_BYTES, inn, NPACKED_BYTES);
    //memcpy(buffer + HASH_BYTES + NPACKED_BYTES, inm, MPACKED_BYTES);
    shake256(c, HASH_BYTES, buffer, HASH_BYTES + NPACKED_BYTES + MPACKED_BYTES);
}

/*
 * Generates an MQDSS key pair.
 */
int crypto_sign_keypair(unsigned char pk[PK_BYTES], unsigned char sk[SK_BYTES])
{
    signed char F[F_LEN];
    unsigned char skbuf[SEED_BYTES * 2];
    gf31 sk_gf31[N];
    gf31 pk_gf31[M];
    int loop;

    // Expand sk to obtain a seed for F and the secret input s.
    // We also expand to obtain a value for sampling r0, t0 and e0 during
    //  signature generation, but that is not relevant here.
    randombytes(sk, SEED_BYTES);
    shake256(skbuf, SEED_BYTES * 2, sk, SEED_BYTES);

    //memcpy(pk, skbuf, SEED_BYTES);
    crypto_sign_keypair_label6:for(loop=0;loop<SEED_BYTES;loop++)
    	pk[loop]=skbuf[loop];
    gf31_nrand_schar(F, F_LEN, pk, SEED_BYTES);
    gf31_nrand(sk_gf31, N, skbuf + SEED_BYTES, SEED_BYTES);
    MQ(pk_gf31, sk_gf31, F);
    vgf31_unique(pk_gf31, pk_gf31);
    gf31_npack(pk + SEED_BYTES, pk_gf31, M);

    return 0;
}

/**
 * Takes a message m and its length mlen, writes the signature followed by
 * the message to sm and CRYPTO_BYTES + mlen to smlen.
 */
int crypto_sign(unsigned char sm[3300+CRYPTO_BYTES], unsigned long long smlen[1],
                const unsigned char m[3300], unsigned long long mlen,
                const unsigned char sk[SK_BYTES])
{
    signed char F[F_LEN];
    unsigned char skbuf[SEED_BYTES * 4];
    gf31 pk_gf31[M];
    unsigned char pk[SEED_BYTES + MPACKED_BYTES];
    // Concatenated for convenient hashing.
    unsigned char D_sigma0_h0_sigma1[HASH_BYTES * 3 + ROUNDS * (NPACKED_BYTES + MPACKED_BYTES)];
    unsigned char *D = D_sigma0_h0_sigma1;
    unsigned char *sigma0 = D_sigma0_h0_sigma1 + HASH_BYTES;
    unsigned char *h0 = D_sigma0_h0_sigma1 + 2*HASH_BYTES;
    unsigned char *t1packed = D_sigma0_h0_sigma1 + 3*HASH_BYTES;
    unsigned char *e1packed = D_sigma0_h0_sigma1 + 3*HASH_BYTES + ROUNDS * NPACKED_BYTES;
    uint64_t shakestate[25] = {0};
    unsigned char shakeblock[SHAKE256_RATE];
    unsigned char h1[((ROUNDS + 7) & ~7) >> 3];
    unsigned char rnd_seed[HASH_BYTES + SEED_BYTES];
    unsigned char rho[2 * ROUNDS * HASH_BYTES];
    unsigned char *rho0 = rho;
    unsigned char *rho1 = rho + ROUNDS * HASH_BYTES;
    gf31 sk_gf31[N];
    gf31 rnd[(2 * N + M) * ROUNDS];  // Concatenated for easy RNG.
    gf31 *r0 = rnd;
    gf31 *t0 = rnd + N * ROUNDS;
    gf31 *e0 = rnd + 2 * N * ROUNDS;
    gf31 r1[N * ROUNDS];
    gf31 t1[N * ROUNDS];
    gf31 e1[M * ROUNDS];
    gf31 gx[M * ROUNDS];
    unsigned char packbuf0[NPACKED_BYTES];
    unsigned char packbuf1[NPACKED_BYTES];
    unsigned char packbuf2[MPACKED_BYTES];
    unsigned char c[HASH_BYTES * ROUNDS * 2];
    gf31 alpha;
    int alpha_count = 0;
    unsigned char b;
    int i, j;
    int loop;

    shake256(skbuf, SEED_BYTES * 4, sk, SEED_BYTES);

    gf31_nrand_schar(F, F_LEN, skbuf, SEED_BYTES);

    assert(SIG_LEN > SEED_BYTES);
    //memcpy(sm + SIG_LEN - SEED_BYTES, sk, SEED_BYTES);
    //memcpy(sm + SIG_LEN, m, mlen);
    crypto_sign_label9:for(loop=0;loop<SEED_BYTES;loop++)
    	sm[SIG_LEN-SEED_BYTES + loop]=sk[loop];
    for(loop=0;loop<mlen;loop++)
    	sm[SIG_LEN + loop]=m[loop];
    H(sm, sm + SIG_LEN - SEED_BYTES, mlen + SEED_BYTES);  // Compute R.

    //memcpy(pk, skbuf, SEED_BYTES);
    for(loop=0;loop<SEED_BYTES;loop++)
    	pk[loop]=skbuf[loop];
    gf31_nrand(sk_gf31, N, skbuf + SEED_BYTES, SEED_BYTES);
    MQ(pk_gf31, sk_gf31, F);
    vgf31_unique(pk_gf31, pk_gf31);
    gf31_npack(pk + SEED_BYTES, pk_gf31, M);

    //memcpy(sm + SIG_LEN - HASH_BYTES - PK_BYTES, pk, PK_BYTES);
    //memcpy(sm + SIG_LEN - HASH_BYTES, sm, HASH_BYTES);
    for(loop=0;loop<PK_BYTES;loop++)
    	sm[SIG_LEN - HASH_BYTES - PK_BYTES + loop]=pk[loop];
    crypto_sign_label19:for(loop=0;loop<HASH_BYTES;loop++)
    	sm[SIG_LEN - HASH_BYTES + loop]=sm[loop];
    H(D, sm + SIG_LEN - HASH_BYTES - PK_BYTES, mlen + PK_BYTES + HASH_BYTES);

    sm += HASH_BYTES;  // Compensate for prefixed R.

    //memcpy(rnd_seed, skbuf + 2*SEED_BYTES, SEED_BYTES);
    //memcpy(rnd_seed + SEED_BYTES, D, HASH_BYTES);
    crypto_sign_label20:for(loop=0;loop<SEED_BYTES;loop++)
    	rnd_seed[loop]=skbuf[2*SEED_BYTES+loop];
    for(loop=0;loop<HASH_BYTES;loop++)
    	rnd_seed[SEED_BYTES+loop]=D[loop];
    shake256(rho, 2 * ROUNDS * HASH_BYTES, rnd_seed, SEED_BYTES + HASH_BYTES);

    //memcpy(rnd_seed, skbuf + 3*SEED_BYTES, SEED_BYTES);
    //memcpy(rnd_seed + SEED_BYTES, D, HASH_BYTES);
    crypto_sign_label21:for(loop=0;loop<SEED_BYTES;loop++)
     	rnd_seed[loop]=skbuf[3*SEED_BYTES+loop];
    for(loop=0;loop<HASH_BYTES;loop++)
     	rnd_seed[SEED_BYTES+loop]=D[loop];
    gf31_nrand(rnd, (2 * N + M) * ROUNDS, rnd_seed, SEED_BYTES + HASH_BYTES);

    crypto_sign_label22:for (i = 0; i < ROUNDS; i++) {
        crypto_sign_label18:for (j = 0; j < N; j++) {
            r1[j + i*N] = 31 + sk_gf31[j] - r0[j + i*N];
        }
        G(gx + i*M, t0 + i*N, r1 + i*N, F);
    }
    for (i = 0; i < ROUNDS * M; i++) {
        gx[i] += e0[i];
    }
    crypto_sign_label23:for (i = 0; i < ROUNDS; i++) {
        gf31_npack(packbuf0, r0 + i*N, N);
        gf31_npack(packbuf1, t0 + i*N, N);
        gf31_npack(packbuf2, e0 + i*M, M);
        com_0(c + HASH_BYTES * (2*i + 0), rho0 + i*HASH_BYTES, packbuf0, packbuf1, packbuf2);
        vgf31_shorten_unique(r1 + i*N, r1 + i*N);
        vgf31_shorten_unique(gx + i*M, gx + i*M);
        gf31_npack(packbuf0, r1 + i*N, N);
        gf31_npack(packbuf1, gx + i*M, M);
        com_1(c + HASH_BYTES * (2*i + 1), rho1 + i*HASH_BYTES, packbuf0, packbuf1);
    }

    H(sigma0, c, HASH_BYTES * ROUNDS * 2);  // Compute sigma_0.
    shake256_absorb(shakestate, D_sigma0_h0_sigma1, 2 * HASH_BYTES);
    shake256_squeezeblocks(shakeblock, 1, shakestate);

    //memcpy(h0, shakeblock, HASH_BYTES);
    for(loop=0;loop<HASH_BYTES;loop++)
     	h0[loop]=shakeblock[loop];

    //memcpy(sm, sigma0, HASH_BYTES);
    for(loop=0;loop<HASH_BYTES;loop++)
     	sm[loop]=sigma0[loop];
    sm += HASH_BYTES;  // Compensate for sigma_0.

    crypto_sign_label32:for (i = 0; i < ROUNDS; i++) {
        do {
            alpha = shakeblock[alpha_count] & 31;
            alpha_count++;
            if (alpha_count == SHAKE256_RATE) {
                alpha_count = 0;
                shake256_squeezeblocks(shakeblock, 1, shakestate);
            }
        } while (alpha == 31);
        for (j = 0; j < N; j++) {
            t1[i*N + j] = alpha * r0[j + i*N] - t0[j + i*N] + 31;
        }
        MQ(e1 + i*M, r0 + i*N, F);
        for (j = 0; j < N; j++) {
            e1[i*N + j] = alpha * e1[j + i*M] - e0[j + i*M] + 31;
        }
        vgf31_shorten_unique(t1 + i*N, t1 + i*N);
        vgf31_shorten_unique(e1 + i*N, e1 + i*N);
    }
    gf31_npack(t1packed, t1, N * ROUNDS);
    gf31_npack(e1packed, e1, M * ROUNDS);

    //memcpy(sm, t1packed, NPACKED_BYTES * ROUNDS);
    crypto_sign_label33:for(loop=0;loop<NPACKED_BYTES * ROUNDS;loop++)
     	sm[loop]=t1packed[loop];
    sm += NPACKED_BYTES * ROUNDS;
    //memcpy(sm, e1packed, MPACKED_BYTES * ROUNDS);
    for(loop=0;loop<NPACKED_BYTES * ROUNDS;loop++)
     	sm[loop]=e1packed[loop];
    sm += MPACKED_BYTES * ROUNDS;

    shake256(h1, ((ROUNDS + 7) & ~7) >> 3, D_sigma0_h0_sigma1, 3*HASH_BYTES + ROUNDS*(NPACKED_BYTES + MPACKED_BYTES));

    crypto_sign_label34:for (i = 0; i < ROUNDS; i++) {
        b = (h1[(i >> 3)] >> (i & 7)) & 1;
        if (b == 0) {
            gf31_npack(sm, r0+i*N, N);
        } else if (b == 1) {
            gf31_npack(sm, r1+i*N, N);
        }
        //memcpy(sm + NPACKED_BYTES, c + HASH_BYTES * (2*i + (1 - b)), HASH_BYTES);
        //memcpy(sm + NPACKED_BYTES + HASH_BYTES, rho + (i + b * ROUNDS) * HASH_BYTES, HASH_BYTES);
        for(loop=0;loop<HASH_BYTES;loop++)
         	sm[NPACKED_BYTES+loop]=c[HASH_BYTES * (2*i + (1 - b)) + loop];
        for(loop=0;loop<HASH_BYTES;loop++)
         	sm[NPACKED_BYTES + HASH_BYTES+loop]=rho[(i + b * ROUNDS) * HASH_BYTES + loop];
        sm += NPACKED_BYTES + 2*HASH_BYTES;
    }
    *smlen = SIG_LEN + mlen;
    return 0;
}

/**
 * Verifies a given signature-message pair under a given public key.
 * Expects m to have at least smlen bytes available (as is convention in the
 * SUPERCOP API).
 */
int crypto_sign_open(unsigned char m[3300], unsigned long long mlen[1],
                     const unsigned char sm[3300+CRYPTO_BYTES], unsigned long long smlen,
                     const unsigned char pk[PK_BYTES])
{
    gf31 r[N];
    gf31 t[N];
    gf31 e[M];
    signed char F[F_LEN];
    gf31 pk_gf31[M];
    unsigned char sig[SIG_LEN];
    unsigned char *sigptr = sig;
    // Concatenated for convenient hashing.
    unsigned char D_sigma0_h0_sigma1[HASH_BYTES * 3 + ROUNDS * (NPACKED_BYTES + MPACKED_BYTES)];
    unsigned char *D = D_sigma0_h0_sigma1;
    unsigned char *sigma0 = D_sigma0_h0_sigma1 + HASH_BYTES;
    unsigned char *h0 = D_sigma0_h0_sigma1 + 2*HASH_BYTES;
    unsigned char *t1packed = D_sigma0_h0_sigma1 + 3*HASH_BYTES;
    unsigned char *e1packed = D_sigma0_h0_sigma1 + 3*HASH_BYTES + ROUNDS * NPACKED_BYTES;
    unsigned char h1[((ROUNDS + 7) & ~7) >> 3];
    unsigned char c[HASH_BYTES * ROUNDS * 2];
    //memset(c, 0, HASH_BYTES*2);
    gf31 x[N];
    gf31 y[M];
    gf31 z[M];
    unsigned char packbuf0[NPACKED_BYTES];
    unsigned char packbuf1[MPACKED_BYTES];
    uint64_t shakestate[25] = {0};
    unsigned char shakeblock[SHAKE256_RATE];
    int i, j;
    int loop;
    gf31 alpha;
    int alpha_count = 0;
    unsigned char b;

    crypto_sign_open_label35:for(loop=0;loop<HASH_BYTES*2;loop++)
    	c[loop]=0;
    /* The API caller does not necessarily know what size a signature should be
       but MQDSS signatures are always exactly SIG_LEN. */
    if (smlen < SIG_LEN) {
		crypto_sign_open_label36:for(i=0;i<smlen;i++)
			m[i]=0;
		mlen[0] = 0;
		return 1;
        /*memset(m, 0, smlen);
        *mlen = 0;
        return 1;*/
    }

    *mlen = smlen - SIG_LEN;

    /* Create a copy of the signature so that m = sm is not an issue */
    //memcpy(sig, sm, SIG_LEN);
    crypto_sign_open_label37:for(loop=0;loop<SIG_LEN;loop++)
    	sig[loop]=sm[loop];

    /* Put the message all the way at the end of the m buffer, so that we can
     * prepend the required other inputs for the hash function. */
    //memcpy(m + SIG_LEN, sm + SIG_LEN, *mlen);

    //memcpy(m + SIG_LEN - PK_BYTES - HASH_BYTES, pk, PK_BYTES);  // Copy pk to m.
    //memcpy(m + SIG_LEN - HASH_BYTES, sigptr, HASH_BYTES);  // Copy R to m.
    crypto_sign_open_label38:for(loop=0;loop<mlen[0];loop++)
    	m[SIG_LEN+loop]=sm[SIG_LEN+loop];
    for(loop=0;loop<PK_BYTES;loop++)
    	m[SIG_LEN-PK_BYTES-HASH_BYTES+loop]=pk[loop];
    for(loop=0;loop<HASH_BYTES;loop++)
    	m[SIG_LEN-HASH_BYTES+loop]=sigptr[loop];
    H(D, m + SIG_LEN - PK_BYTES - HASH_BYTES, *mlen + PK_BYTES + HASH_BYTES);

    sigptr += HASH_BYTES;

    gf31_nrand_schar(F, F_LEN, pk, SEED_BYTES);
    pk += SEED_BYTES;
    gf31_nunpack(pk_gf31, pk, M);

    //memcpy(sigma0, sigptr, HASH_BYTES);
    for(loop=0;loop<HASH_BYTES;loop++)
    	sigma0[loop]=sigptr[loop];

    shake256_absorb(shakestate, D_sigma0_h0_sigma1, 2 * HASH_BYTES);
    shake256_squeezeblocks(shakeblock, 1, shakestate);

    //memcpy(h0, shakeblock, HASH_BYTES);
    for(loop=0;loop<HASH_BYTES;loop++)
    	h0[loop]=shakeblock[loop];

    sigptr += HASH_BYTES;

    //memcpy(t1packed, sigptr, ROUNDS * NPACKED_BYTES);
    for(loop=0;loop<ROUNDS * NPACKED_BYTES;loop++)
    	t1packed[loop]=sigptr[loop];
    sigptr += ROUNDS*NPACKED_BYTES;
//    memcpy(e1packed, sigptr, ROUNDS * MPACKED_BYTES);
    for(loop=0;loop<ROUNDS * MPACKED_BYTES;loop++)
    	e1packed[loop]=sigptr[loop];
    sigptr += ROUNDS*MPACKED_BYTES;

    shake256(h1, ((ROUNDS + 7) & ~7) >> 3, D_sigma0_h0_sigma1, 3*HASH_BYTES + ROUNDS*(NPACKED_BYTES + MPACKED_BYTES));

    crypto_sign_open_label39:for (i = 0; i < ROUNDS; i++) {
        do {
            alpha = shakeblock[alpha_count] & 31;
            alpha_count++;
            if (alpha_count == SHAKE256_RATE) {
                alpha_count = 0;
                shake256_squeezeblocks(shakeblock, 1, shakestate);
            }
        } while (alpha == 31);
        b = (h1[(i >> 3)] >> (i & 7)) & 1;

        gf31_nunpack(r, sigptr, N);
        gf31_nunpack(t, t1packed + NPACKED_BYTES*i, N);
        gf31_nunpack(e, e1packed + MPACKED_BYTES*i, M);

        if (b == 0) {
            MQ(y, r, F);
            for (j = 0; j < N; j++) {
                x[j] = alpha * r[j] - t[j] + 31;
            }
            for (j = 0; j < N; j++) {
                y[j] = alpha * y[j] - e[j] + 31;
            }
            vgf31_shorten_unique(x, x);
            vgf31_shorten_unique(y, y);
            gf31_npack(packbuf0, x, N);
            gf31_npack(packbuf1, y, M);
            com_0(c + HASH_BYTES*(2*i + 0), sigptr + HASH_BYTES + NPACKED_BYTES, sigptr, packbuf0, packbuf1);
        } else {
            MQ(y, r, F);
            G(z, t, r, F);
            for (j = 0; j < N; j++) {
                y[j] = alpha * (31 + pk_gf31[j] - y[j]) - z[j] - e[j] + 62;
            }
            vgf31_shorten_unique(y, y);
            gf31_npack(packbuf0, y, M);
            com_1(c + HASH_BYTES*(2*i + 1), sigptr + HASH_BYTES + NPACKED_BYTES, sigptr, packbuf0);
        }
        //memcpy(c + HASH_BYTES*(2*i + (1 - b)), sigptr + NPACKED_BYTES, HASH_BYTES);
        for(loop=0;loop<HASH_BYTES;loop++)
        	c[HASH_BYTES*(2*i + (1 - b))+loop]=sigptr[NPACKED_BYTES+loop];
        sigptr += NPACKED_BYTES + 2*HASH_BYTES;
    }

    H(c, c, HASH_BYTES * ROUNDS * 2);
    crypto_sign_open_label25:for(loop=0;loop<HASH_BYTES;loop++) {
    	if(c[loop] != sigma0[loop]) {
    		for(i=0;i<smlen;i++)
    			m[i]=0;
    		mlen[0] = 0;
    		return 1;
    	}
    }
    /*if (memcmp(c, sigma0, HASH_BYTES)) {
        memset(m, 0, smlen);
        *mlen = 0;
        return 1;
    }*/

    /* If verification was successful, move the message to the right place. */
    //memmove(m, m + SIG_LEN, *mlen);
    crypto_sign_open_label24:for(loop=0;loop<mlen[0];loop++)
    	m[loop]=m[SIG_LEN+loop];

    return 0;
}
