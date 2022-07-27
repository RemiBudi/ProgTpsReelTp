heptc externc.epi

heptc -target c main.ept
cd main_c 
touch pervasives.h
cd ..

gcc -Wall -I ./ externc.c main_c/main.c main.c -o main
