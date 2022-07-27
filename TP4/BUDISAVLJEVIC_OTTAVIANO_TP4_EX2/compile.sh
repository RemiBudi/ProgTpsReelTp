heptc typecomplex.epi

heptc print.epi

heptc fftc.epi

heptc scan.epi

heptc twiddle.epi

heptc -target c butterfly.ept

touch pervasives.h

gcc -I ./ typecomplex.c twiddle.c print.c scan.c butterfly_c/butterfly.c fftc.c main.c -o main -lm

./main
