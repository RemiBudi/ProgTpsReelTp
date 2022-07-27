#include <math.h>
#include <complex.h>
#include "twiddle.h"
#include "typecomplex.h"


void Twiddle__init_twiddle1024_step(Typecomplex__complex*twiddle) {
  int i,span ;
  // Init the twiddles
  for(span=1;span<=512;span<<=1) {
    float primitive_root = -Typecomplex__pi/span ;
    for(i=0;i<span;i++) {
      Typecomplex__complex t =
	{
	  .re = cosf(primitive_root*i) ,
	  .im = sinf(primitive_root*i)
	} ;
      twiddle[span+i] = t ;
    }
  }
}
