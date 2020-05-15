# 1 "C:/Users/ajaiswal/Downloads/project13-master/mq.c"
# 1 "C:/Users/ajaiswal/Downloads/project13-master/mq.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/mq.c" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/mq.h" 1



# 1 "C:/Users/ajaiswal/Downloads/project13-master/gf31.h" 1



typedef unsigned short gf31;



gf31 mod31(gf31 x);



void vgf31_unique(gf31 *out, gf31 *in);



void vgf31_shorten_unique(gf31 *out, gf31 *in);



void gf31_nrand(gf31 *out, const int len, const unsigned char *seed, const int seedlen);




void gf31_nrand_schar(signed char *out, const int len, const unsigned char *seed, const int seedlen);




void gf31_nunpack(gf31 *out, const unsigned char *in, const unsigned int n);




void gf31_npack(unsigned char *out, const gf31 *in, const unsigned int n);
# 5 "C:/Users/ajaiswal/Downloads/project13-master/mq.h" 2





void MQ(gf31 *fx, const gf31 *x, const signed char *F);





void G(gf31 *fx, const gf31 *x, const gf31 *y, const signed char *F);
# 2 "C:/Users/ajaiswal/Downloads/project13-master/mq.c" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/params.h" 1
# 3 "C:/Users/ajaiswal/Downloads/project13-master/mq.c" 2


inline static
void generate_quadratic_terms( gf31 * xij , const gf31 * x )
{
    int i, j, k;
    k=0;
    generate_quadratic_terms_label26:for(i=0;i<48;i++) {
        for(j=0;j<=i;j++) {
            xij[k] = mod31(x[i]*x[j]);
            k++;
        }
    }
}


inline static
void generate_xiyj_p_xjyi_terms( gf31 * xij , const gf31 * x , const gf31 * y )
{
    int i, j, k;
    k=0;
    generate_xiyj_p_xjyi_terms_label27:for(i=0;i<48;i++) {
        for(j=0;j<=i;j++) {
            xij[k] = mod31(x[i]*y[j]+x[j]*y[i]);
            k++;
        }
    }
}





void MQ(gf31 *fx, const gf31 *x, const signed char *F)
{
    int i, j;
    gf31 _xij[48*(48 +1) >> 1];
    int r[48] = {0};

    generate_quadratic_terms(_xij, x);

    MQ_label28:for (i = 0; i < 48; i += 2) {
        MQ_label0:for (j = 0; j < 48; j++) {
            r[j] += ((int)x[i])*((int)F[i*48 + 2*j]) +
                    ((int)x[i+1])*((int)F[i*48 + 2*j + 1]);
        }
    }

    for (i = 0; i < (48*(48 +1)) >> 1; i += 2) {
        MQ_label1:for (j = 0; j < 48; j++) {
            r[j] += ((int)_xij[i])*((int)F[48*48 + i*48 + 2*j]) +
                    ((int)_xij[i+1])*((int)F[48*48 + i*48 + 2*j + 1]);
        }
    }

    MQ_label29:for (i = 0; i < 48; i++) {
        fx[i] = mod31((r[i] >> 15) + (r[i] & 0x7FFF));
    }
}





void G(gf31 *fx, const gf31 *x, const gf31 *y, const signed char *F)
{
    int i, j;
    gf31 _xij[48*(48 +1) >> 1];
    int r[48] = {0};

    generate_xiyj_p_xjyi_terms(_xij, x, y);

    G_label30:for (i = 0; i < (48*(48 +1)) >> 1; i += 2) {
        G_label2:for (j = 0; j < 48; j++) {
            r[j] += ((int)_xij[i])*((int)F[48*48 + i*48 + 2*j]) +
                    ((int)_xij[i+1])*((int)F[48*48 + i*48 + 2*j + 1]);
        }
    }

    G_label31:for (i = 0; i < 48; i++) {
        fx[i] = mod31((r[i] >> 15) + (r[i] & 0x7FFF));
    }
}
