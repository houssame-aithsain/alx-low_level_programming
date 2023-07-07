#!/bin/bash

SRC=$(ls | grep "\.c" | tr '\n' ' ')

FLAGS='-Wall -Werror -Wextra -pedantic -std=gnu89'

NAME='ibmy.a'

CC='gcc'

OBJ=$($CC $FLAGS -c $SRC)

ar rcs $NAME $OBJ
