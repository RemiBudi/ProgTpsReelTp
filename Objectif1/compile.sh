heptc fftc.epi

heptc print.epi

heptc scan.epi

heptc twiddle.epi

heptc typecomplex.epi

heptc -target c butterfly.ept

touch pervasives.h

gcc -Wall -I ./ typecomplex.c twiddle.c print.c scan.c butterfly_c/butterfly.c fftc.c main.c -o main -lm
