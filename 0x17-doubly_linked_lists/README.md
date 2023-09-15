alx-low_level_programming

This repository contains solutions to various low-level programming tasks.
Tasks
0. Preprocessor

    Write a script that runs a C file through the preprocessor and saves the result into another file.
    The C file name will be saved in the variable $CFILE.
    The output should be saved in the file c.
    Example usage:

    bash

    $ export CFILE=main.c
    $ ./0-preprocessor


1. Compiler

    Write a script that compiles a C file but does not link.
    The C file name will be saved in the variable $CFILE.
    The output file should be named the same as the C file, but with the extension .o instead of .c.
    Example usage:

    bash

    $ export CFILE=main.c
    $ ./1-compiler

2. Assembler

    Write a script that generates the assembly code of a C code and saves it in an output file.
    The C file name will be saved in the variable $CFILE.
    The output file should be named the same as the C file, but with the extension .s instead of .c.
    Example usage:

    bash

    $ export CFILE=main.c
    $ ./2-assembler

Repository

    GitHub repository: alx-low_level_programming
    Directory: 0x00-hello_world
    Files: 0-preprocessor, 1-compiler, 2-assembler, c, main.c, main.s, Makefile

