heptc print.epi

heptc -target c exo3.ept

gcc -Wall -I ./ print.c exo3_c/exo3.c main.c -o main
