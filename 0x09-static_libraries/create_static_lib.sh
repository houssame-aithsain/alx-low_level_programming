#!/bin/bash

SRC=$(ls | grep "\.c" | tr '\n' ' ')

FLAGS='-Wall -Werror -Wextra -pedantic -std=gnu89'

NAME='liball.a'

CC='gcc'

OBJ=""
for file in $SRC; do
  $CC $FLAGS -c "$file"
  OBJ+=" ${file%.c}.o"
done

ar rcs "$NAME" $OBJ
