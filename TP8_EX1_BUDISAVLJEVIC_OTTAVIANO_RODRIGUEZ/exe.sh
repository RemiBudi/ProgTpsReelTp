rec -t raw -r 44100 -e signed -b 16 -c 2 - | ./myprog | play -t raw -r 44100 -e signed -b 16 -c 2 -
