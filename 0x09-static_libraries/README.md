Project Title

Static Libraries - ALX Low Level Programming
Description

This project involves creating a static library called libmy.a and a script called create_static_lib.sh to manipulate the library files.
Table of Contents

    Installation
    Usage
    Project Structure
    Contributing
    License

Installation

To use the static library libmy.a, follow these steps:

    Clone the GitHub repository alx-low_level_programming to your local machine.
    Navigate to the 0x09-static_libraries directory.

Usage
Creating the Static Library

    Open a terminal and navigate to the 0x09-static_libraries directory.

    Compile all the source files (*.c) in the current directory using the script create_static_lib.sh by running the following command:

    shell

    ./create_static_lib.sh

    The script will create a static library file named liball.a containing all the compiled object files (*.o) from the source files.

Using the Static Library

    To use the static library libmy.a in your own program, include the header file main.h in your source code:

    c

#include "main.h"

When compiling your program, link it with the static library libmy.a by adding the -L flag to specify the library directory and the -l flag to specify the library name:

shell

gcc -std=gnu89 main.c -L. -lmy -o my_program

Replace main.c with your source code file name and my_program with your desired executable name.

Run the compiled program by executing the generated executable:

shell

    ./my_program

    The program should now execute successfully, utilizing the functions from the static library.

Project Structure

The project directory structure is as follows:

c

alx-low_level_programming/
└── 0x09-static_libraries/
    ├── libmy.a
    ├── main.h
    ├── create_static_lib.sh
    ├── 0-isupper.c
    ├── 0-memset.c
    ├── 0-strcat.c
    ├── 1-isdigit.c
    ├── 1-memcpy.c
    ├── 1-strncat.c
    ├── 100-atoi.c
    ├── 2-strchr.c
    ├── 2-strlen.c
    ├── 2-strncpy.c
    ├── 3-islower.c
    ├── 3-puts.c
    ├── 3-strcmp.c
    ├── 3-strspn.c
    ├── 4-isalpha.c
    ├── 4-strpbrk.c
    ├── 5-strstr.c
    ├── 6-abs.c
    └── 9-strcpy.c

    libmy.a: Static library file containing the compiled object files.
    main.h: Header file containing the function prototypes used in the static library.
    create_static_lib.sh: Script to create the static library from the source files.
    Source files (*.c): Contains the implementation of the functions listed in the task.

Contributing

Contributions to this project are welcome. If you have any suggestions, please open an issue or a pull request in the GitHub repository.
License

This project is licensed under the MIT License.
