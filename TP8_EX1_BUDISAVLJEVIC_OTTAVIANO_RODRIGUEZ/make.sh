heptc sndio.epi

heptc -target c myprog.ept
cd myprog_c
touch pervasives.h
cd ..

gcc -Wall -I ./ sndio.c myprog_c/myprog.c main.c -o myprog
