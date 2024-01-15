#!bin/bash
gcc -Wall -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o