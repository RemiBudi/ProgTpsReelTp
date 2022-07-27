heptc sndio.epi
heptc fftc.epi
heptc complex.epi

heptc -target c myprog.ept
cd myprog_c
touch pervasives.h
cd ..

gcc -Wall -I ./ complex.c fftc.c sndio.c myprog_c/myprog.c main.c -o myprog -lm
