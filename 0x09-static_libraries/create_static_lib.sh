#!/bin/bash

# Compile each .c file into .o object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
