heptc externc.epi

heptc -target c fun_g.ept

heptc -target c exo2.ept

gcc -Wall -I /home/lopht/lib/heptagon/c/ -I ./ -I ./fun_g_c main.c externc.c fun_g_c/fun_g.c exo2_c/exo2.c -o main

