/* --- Generated the 12/10/2020 at 20:28 --- */
/* --- heptagon compiler, version 1.00.06 (compiled wed. dec. 4 22:24:42 CET 2019) --- */
/* --- Command line: heptc -target c butterfly.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "butterfly.h"

void Butterfly__complex_add_step(Typecomplex__complex* i1,
                                 Typecomplex__complex* i2,
                                 Typecomplex__complex* o) {
  
  float v_1;
  float v;
  v_1 = (i1->im+i2->im);
  v = (i1->re+i2->re);
  o->re = v;
  o->im = v_1;;
}

void Butterfly__twid_step(Typecomplex__complex* i1, Typecomplex__complex* i2,
                          Typecomplex__complex* tw, Typecomplex__complex* o) {
  
  float v_8;
  float v_7;
  float v_6;
  float v_5;
  float v_4;
  float v_3;
  float v_2;
  float v;
  Typecomplex__complex tmp;
  v_2 = (i1->im-i2->im);
  v = (i1->re-i2->re);
  tmp.re = v;
  tmp.im = v_2;
  v_7 = (tmp.im*tw->re);
  v_6 = (tmp.re*tw->im);
  v_8 = (v_6+v_7);
  v_4 = (tmp.im*tw->im);
  v_3 = (tmp.re*tw->re);
  v_5 = (v_3-v_4);
  o->re = v_5;
  o->im = v_8;;
}

void Butterfly__norm_params_16_000000__step(Typecomplex__complex* i,
                                            Typecomplex__complex* o) {
  
  float v_9;
  float v;
  v_9 = (i->im/16.000000);
  v = (i->re/16.000000);
  o->re = v;
  o->im = v_9;;
}

void Butterfly__norm_params_8_000000__step(Typecomplex__complex* i,
                                           Typecomplex__complex* o) {
  
  float v_9;
  float v;
  v_9 = (i->im/8.000000);
  v = (i->re/8.000000);
  o->re = v;
  o->im = v_9;;
}

void Butterfly__bf_params_8__step(Typecomplex__complex i1[8],
                                  Typecomplex__complex i2[8],
                                  Typecomplex__complex o1[8],
                                  Typecomplex__complex o2[8]) {
  
  Typecomplex__complex v[8];
  {
    int i_33;
    for (i_33 = 0; i_33 < 8; ++i_33) {
      v[i_33] = Twiddle__twiddle[(i_33+8)];
    }
  };
  {
    int i_32;
    for (i_32 = 0; i_32 < 8; ++i_32) {
      Butterfly__twid_step(&i1[i_32], &i2[i_32], &v[i_32], &o2[i_32]);
    }
  };
  {
    int i;
    for (i = 0; i < 8; ++i) {
      Butterfly__complex_add_step(&i1[i], &i2[i], &o1[i]);
    }
  };;
}

void Butterfly__bf_params_4__step(Typecomplex__complex i1[4],
                                  Typecomplex__complex i2[4],
                                  Typecomplex__complex o1[4],
                                  Typecomplex__complex o2[4]) {
  
  Typecomplex__complex v[4];
  {
    int i_31;
    for (i_31 = 0; i_31 < 4; ++i_31) {
      v[i_31] = Twiddle__twiddle[(i_31+4)];
    }
  };
  {
    int i_30;
    for (i_30 = 0; i_30 < 4; ++i_30) {
      Butterfly__twid_step(&i1[i_30], &i2[i_30], &v[i_30], &o2[i_30]);
    }
  };
  {
    int i;
    for (i = 0; i < 4; ++i) {
      Butterfly__complex_add_step(&i1[i], &i2[i], &o1[i]);
    }
  };;
}

void Butterfly__bf_params_2__step(Typecomplex__complex i1[2],
                                  Typecomplex__complex i2[2],
                                  Typecomplex__complex o1[2],
                                  Typecomplex__complex o2[2]) {
  
  Typecomplex__complex v[2];
  {
    int i_29;
    for (i_29 = 0; i_29 < 2; ++i_29) {
      v[i_29] = Twiddle__twiddle[(i_29+2)];
    }
  };
  {
    int i_28;
    for (i_28 = 0; i_28 < 2; ++i_28) {
      Butterfly__twid_step(&i1[i_28], &i2[i_28], &v[i_28], &o2[i_28]);
    }
  };
  {
    int i;
    for (i = 0; i < 2; ++i) {
      Butterfly__complex_add_step(&i1[i], &i2[i], &o1[i]);
    }
  };;
}

void Butterfly__bf_params_1__step(Typecomplex__complex i1[1],
                                  Typecomplex__complex i2[1],
                                  Typecomplex__complex o1[1],
                                  Typecomplex__complex o2[1]) {
  
  Typecomplex__complex v[1];
  {
    int i_27;
    for (i_27 = 0; i_27 < 1; ++i_27) {
      v[i_27] = Twiddle__twiddle[(i_27+1)];
    }
  };
  {
    int i_26;
    for (i_26 = 0; i_26 < 1; ++i_26) {
      Butterfly__twid_step(&i1[i_26], &i2[i_26], &v[i_26], &o2[i_26]);
    }
  };
  {
    int i;
    for (i = 0; i < 1; ++i) {
      Butterfly__complex_add_step(&i1[i], &i2[i], &o1[i]);
    }
  };;
}

void Butterfly__fft_aux2_step(Typecomplex__complex i[2],
                              Typecomplex__complex out[2]) {
  
  Typecomplex__complex v_10;
  Typecomplex__complex v;
  Typecomplex__complex i1[1];
  Typecomplex__complex i2[1];
  Typecomplex__complex o1[1];
  Typecomplex__complex o2[1];
  v_10 = i[1];
  i2[0] = v_10;
  v = i[0];
  i1[0] = v;
  Butterfly__bf_params_1__step(i1, i2, o1, o2);
  {
    int i_24;
    for (i_24 = 0; i_24 < 1; ++i_24) {
      out[i_24] = o1[i_24];
    }
  };
  {
    int i_25;
    for (i_25 = 0; i_25 < 1; ++i_25) {
      out[(1+i_25)] = o2[i_25];
    }
  };;
}

void Butterfly__fft_aux4_step(Typecomplex__complex i[4],
                              Typecomplex__complex out[4]) {
  
  Typecomplex__complex i1[2];
  Typecomplex__complex i2[2];
  Typecomplex__complex o1[2];
  Typecomplex__complex o2[2];
  Typecomplex__complex tmp1[2];
  Typecomplex__complex tmp2[2];
  {
    int i_23;
    for (i_23 = 0; i_23 < 2; ++i_23) {
      i2[i_23] = i[(i_23+2)];
    }
  };
  {
    int i_22;
    for (i_22 = 0; i_22 < 2; ++i_22) {
      i1[i_22] = i[(i_22+0)];
    }
  };
  Butterfly__bf_params_2__step(i1, i2, tmp1, tmp2);
  Butterfly__fft_aux2_step(tmp2, o2);
  Butterfly__fft_aux2_step(tmp1, o1);
  {
    int i_20;
    for (i_20 = 0; i_20 < 2; ++i_20) {
      out[i_20] = o1[i_20];
    }
  };
  {
    int i_21;
    for (i_21 = 0; i_21 < 2; ++i_21) {
      out[(2+i_21)] = o2[i_21];
    }
  };;
}

void Butterfly__fft_aux8_step(Typecomplex__complex i[8],
                              Typecomplex__complex out[8]) {
  
  Typecomplex__complex i1[4];
  Typecomplex__complex i2[4];
  Typecomplex__complex o1[4];
  Typecomplex__complex o2[4];
  Typecomplex__complex tmp1[4];
  Typecomplex__complex tmp2[4];
  {
    int i_19;
    for (i_19 = 0; i_19 < 4; ++i_19) {
      i2[i_19] = i[(i_19+4)];
    }
  };
  {
    int i_18;
    for (i_18 = 0; i_18 < 4; ++i_18) {
      i1[i_18] = i[(i_18+0)];
    }
  };
  Butterfly__bf_params_4__step(i1, i2, tmp1, tmp2);
  Butterfly__fft_aux4_step(tmp2, o2);
  Butterfly__fft_aux4_step(tmp1, o1);
  {
    int i_16;
    for (i_16 = 0; i_16 < 4; ++i_16) {
      out[i_16] = o1[i_16];
    }
  };
  {
    int i_17;
    for (i_17 = 0; i_17 < 4; ++i_17) {
      out[(4+i_17)] = o2[i_17];
    }
  };;
}

void Butterfly__fft_aux16_step(Typecomplex__complex i[16],
                               Typecomplex__complex out[16]) {
  
  Typecomplex__complex i1[8];
  Typecomplex__complex i2[8];
  Typecomplex__complex o1[8];
  Typecomplex__complex o2[8];
  Typecomplex__complex tmp1[8];
  Typecomplex__complex tmp2[8];
  {
    int i_15;
    for (i_15 = 0; i_15 < 8; ++i_15) {
      i2[i_15] = i[(i_15+8)];
    }
  };
  {
    int i_14;
    for (i_14 = 0; i_14 < 8; ++i_14) {
      i1[i_14] = i[(i_14+0)];
    }
  };
  Butterfly__bf_params_8__step(i1, i2, tmp1, tmp2);
  Butterfly__fft_aux8_step(tmp2, o2);
  Butterfly__fft_aux8_step(tmp1, o1);
  {
    int i_12;
    for (i_12 = 0; i_12 < 8; ++i_12) {
      out[i_12] = o1[i_12];
    }
  };
  {
    int i_13;
    for (i_13 = 0; i_13 < 8; ++i_13) {
      out[(8+i_13)] = o2[i_13];
    }
  };;
}

void Butterfly__fft8_step(Typecomplex__complex i[8],
                          Typecomplex__complex o[8]) {
  
  Typecomplex__complex tmp[8];
  Typecomplex__complex norma[8];
  Butterfly__fft_aux8_step(i, tmp);
  {
    int i_11;
    for (i_11 = 0; i_11 < 8; ++i_11) {
      Butterfly__norm_params_8_000000__step(&tmp[i_11], &norma[i_11]);
    }
  };
  Fftc__bitrev8_step(norma, o);
  Print__printVector8_step(o);;
}

void Butterfly__fft16_step(Typecomplex__complex i[16],
                           Typecomplex__complex o[16]) {
  
  Typecomplex__complex tmp[16];
  Typecomplex__complex norma[16];
  Butterfly__fft_aux16_step(i, tmp);
  {
    int i_10;
    for (i_10 = 0; i_10 < 16; ++i_10) {
      Butterfly__norm_params_16_000000__step(&tmp[i_10], &norma[i_10]);
    }
  };
  Fftc__bitrev16_step(norma, o);
  Print__printVector16_step(o);;
}

void Butterfly__main_step() {
  
  Typecomplex__complex result16_false[16];
  Typecomplex__complex result8_false[8];
  Typecomplex__complex fftVect16_false[16];
  Typecomplex__complex fftVect8_false[8];
  Typecomplex__complex result16_true[16];
  Typecomplex__complex result8_true[8];
  Typecomplex__complex fftVect16_true[16];
  Typecomplex__complex fftVect8_true[8];
  bool ck;
  Typecomplex__complex fftVect8[8];
  Typecomplex__complex fftVect16[16];
  int n;
  Typecomplex__complex result8[8];
  Typecomplex__complex result16[16];
  Scan__scanSize_step(&n);
  ck = (n==8);
  if (ck) {
    result16_true[0].im = 0.000000;
    result16_true[0].re = 0.000000;
    result16_true[1].im = 0.000000;
    result16_true[1].re = 0.000000;
    result16_true[2].im = 0.000000;
    result16_true[2].re = 0.000000;
    result16_true[3].im = 0.000000;
    result16_true[3].re = 0.000000;
    result16_true[4].im = 0.000000;
    result16_true[4].re = 0.000000;
    result16_true[5].im = 0.000000;
    result16_true[5].re = 0.000000;
    result16_true[6].im = 0.000000;
    result16_true[6].re = 0.000000;
    result16_true[7].im = 0.000000;
    result16_true[7].re = 0.000000;
    result16_true[8].im = 0.000000;
    result16_true[8].re = 0.000000;
    result16_true[9].im = 0.000000;
    result16_true[9].re = 0.000000;
    result16_true[10].im = 0.000000;
    result16_true[10].re = 0.000000;
    result16_true[11].im = 0.000000;
    result16_true[11].re = 0.000000;
    result16_true[12].im = 0.000000;
    result16_true[12].re = 0.000000;
    result16_true[13].im = 0.000000;
    result16_true[13].re = 0.000000;
    result16_true[14].im = 0.000000;
    result16_true[14].re = 0.000000;
    result16_true[15].im = 0.000000;
    result16_true[15].re = 0.000000;
    fftVect16_true[0].im = 0.000000;
    fftVect16_true[0].re = 0.000000;
    fftVect16_true[1].im = 0.000000;
    fftVect16_true[1].re = 0.000000;
    fftVect16_true[2].im = 0.000000;
    fftVect16_true[2].re = 0.000000;
    fftVect16_true[3].im = 0.000000;
    fftVect16_true[3].re = 0.000000;
    fftVect16_true[4].im = 0.000000;
    fftVect16_true[4].re = 0.000000;
    fftVect16_true[5].im = 0.000000;
    fftVect16_true[5].re = 0.000000;
    fftVect16_true[6].im = 0.000000;
    fftVect16_true[6].re = 0.000000;
    fftVect16_true[7].im = 0.000000;
    fftVect16_true[7].re = 0.000000;
    fftVect16_true[8].im = 0.000000;
    fftVect16_true[8].re = 0.000000;
    fftVect16_true[9].im = 0.000000;
    fftVect16_true[9].re = 0.000000;
    fftVect16_true[10].im = 0.000000;
    fftVect16_true[10].re = 0.000000;
    fftVect16_true[11].im = 0.000000;
    fftVect16_true[11].re = 0.000000;
    fftVect16_true[12].im = 0.000000;
    fftVect16_true[12].re = 0.000000;
    fftVect16_true[13].im = 0.000000;
    fftVect16_true[13].re = 0.000000;
    fftVect16_true[14].im = 0.000000;
    fftVect16_true[14].re = 0.000000;
    fftVect16_true[15].im = 0.000000;
    fftVect16_true[15].re = 0.000000;
    Scan__scanVect8_step(fftVect8_true);
    {
      int _1;
      for (_1 = 0; _1 < 8; ++_1) {
        fftVect8[_1] = fftVect8_true[_1];
      }
    };
    Butterfly__fft8_step(fftVect8, result8_true);
    {
      int _2;
      for (_2 = 0; _2 < 8; ++_2) {
        result8[_2] = result8_true[_2];
      }
    };
    {
      int _3;
      for (_3 = 0; _3 < 16; ++_3) {
        fftVect16[_3] = fftVect16_true[_3];
      }
    };
    {
      int _4;
      for (_4 = 0; _4 < 16; ++_4) {
        result16[_4] = result16_true[_4];
      }
    };
  } else {
    result8_false[0].im = 0.000000;
    result8_false[0].re = 0.000000;
    result8_false[1].im = 0.000000;
    result8_false[1].re = 0.000000;
    result8_false[2].im = 0.000000;
    result8_false[2].re = 0.000000;
    result8_false[3].im = 0.000000;
    result8_false[3].re = 0.000000;
    result8_false[4].im = 0.000000;
    result8_false[4].re = 0.000000;
    result8_false[5].im = 0.000000;
    result8_false[5].re = 0.000000;
    result8_false[6].im = 0.000000;
    result8_false[6].re = 0.000000;
    result8_false[7].im = 0.000000;
    result8_false[7].re = 0.000000;
    fftVect8_false[0].im = 0.000000;
    fftVect8_false[0].re = 0.000000;
    fftVect8_false[1].im = 0.000000;
    fftVect8_false[1].re = 0.000000;
    fftVect8_false[2].im = 0.000000;
    fftVect8_false[2].re = 0.000000;
    fftVect8_false[3].im = 0.000000;
    fftVect8_false[3].re = 0.000000;
    fftVect8_false[4].im = 0.000000;
    fftVect8_false[4].re = 0.000000;
    fftVect8_false[5].im = 0.000000;
    fftVect8_false[5].re = 0.000000;
    fftVect8_false[6].im = 0.000000;
    fftVect8_false[6].re = 0.000000;
    fftVect8_false[7].im = 0.000000;
    fftVect8_false[7].re = 0.000000;
    {
      int _5;
      for (_5 = 0; _5 < 8; ++_5) {
        fftVect8[_5] = fftVect8_false[_5];
      }
    };
    {
      int _6;
      for (_6 = 0; _6 < 8; ++_6) {
        result8[_6] = result8_false[_6];
      }
    };
    Scan__scanVect16_step(fftVect16_false);
    {
      int _7;
      for (_7 = 0; _7 < 16; ++_7) {
        fftVect16[_7] = fftVect16_false[_7];
      }
    };
    Butterfly__fft16_step(fftVect16, result16_false);
    {
      int _8;
      for (_8 = 0; _8 < 16; ++_8) {
        result16[_8] = result16_false[_8];
      }
    };
  };;
}

