#!/bin/bash
echo '8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity' | gcc -Wall -Werror -Wextra -pedantic -std=c89 -xc - -o quote && ./quote 1>&2
