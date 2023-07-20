Variadic Functions

This repository contains C programs that demonstrate the concept of variadic functions. Variadic functions are functions that can take a variable number of arguments. The programs in this repository implement different variadic functions with specific functionalities.
0-sum_them_all.c

This program contains a function sum_them_all that calculates the sum of a variable number of integers. The function takes the number of integers to sum (n) as its first argument, followed by the integers to be summed. If n is 0, the function returns 0.
1-print_numbers.c

The program defines a function print_numbers that prints a variable number of integers. The function takes a separator string (separator) as its first argument and the number of integers to be printed (n) as the second argument. The integers to be printed follow the n argument. If the separator is NULL, it is not printed. A new line is printed at the end of the function.
2-print_strings.c

This program implements a function print_strings that prints a variable number of strings. The function takes a separator string (separator) as its first argument and the number of strings to be printed (n) as the second argument. The strings to be printed follow the n argument. If a string is NULL, "(nil)" is printed instead. A new line is printed at the end of the function.
3-print_all.c

The program defines a function print_all that prints anything based on the given format. The format is a list of characters representing different types of arguments to be printed. The supported format characters are:

    c: char
    i: integer
    f: float
    s: char * (if the string is NULL, "(nil)" is printed instead)

The function takes the format as the first argument, followed by the corresponding arguments based on the format. It can handle up to 9 variables in total. The function uses two while loops and two if statements to process the format and arguments, and printf to print the values. A new line is printed at the end of the function.

Each program is compiled and tested with a main function provided in separate files (0-main.c, 1-main.c, 2-main.c, and 3-main.c). After compilation, the corresponding executables (a, b, c, and d) are created, and their output is tested with different inputs to ensure their correctness.

This repository is part of the alx-low_level_programming and can be found in the 0x10-variadic_functions directory.
