ALX Low Level Programming - argc and argv

This repository contains C programs that demonstrate the usage of argc and argv in command-line arguments handling. Each program serves a specific purpose as described below.
Table of Contents

    Programs
        Program 0: What's My Name
        Program 1: Number of Arguments
        Program 2: Print Arguments
        Program 3: Multiplication
        Program 4: Addition of Positive Numbers
    Compilation
    Usage
    Contributing
    License

Programs
Program 0: What's My Name

File: 0-whatsmyname.c

This program prints the name of the program itself, as obtained from argv[0], followed by a new line.

shell

$ ./mynameis
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis
./mynewnameis

Program 1: Number of Arguments

File: 1-args.c

This program prints the number of arguments passed into it, excluding the program name. If no arguments are passed, it prints 0.

shell

$ ./nargs
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2

Program 2: Print Arguments

File: 2-args.c

This program prints all the arguments it receives, one argument per line, including the program name.

shell

$ ./args
./args
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.

Program 3: Multiplication

File: 3-mul.c

This program multiplies two numbers passed as arguments and prints the result. If the program does not receive two arguments, it prints Error and returns 1.

shell

$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 0
0
$ ./mul 245 3245342
795108790
$ ./mul
Error

Program 4: Addition of Positive Numbers

File: 4-add.c

This program adds positive numbers passed as arguments and prints the result. If no numbers are passed, it prints 0. If any of the arguments contains symbols that are not digits, it prints Error and returns 1.

shell

$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0

Compilation

To compile the programs, use the following command format:

shell

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_file.c> -o <output_file>

Replace <source_file.c> with the name of the source file and <output_file> with the desired name for the compiled program.
Usage

After compilation, you can run the programs by executing the generated executable files. Follow the usage examples mentioned for each program above.
Contributing

Contributions to this repository are welcomed. If you find any issues or want to contribute enhancements or new programs, please feel free to open an issue or a pull request.
License

This repository is licensed under the MIT License.
