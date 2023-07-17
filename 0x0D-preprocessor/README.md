Preprocessor Macros

This repository contains a collection of programs that demonstrate the usage of preprocessor macros in the C programming language. Each program focuses on a specific task related to preprocessor macros.
Task 0: Object-like Macro

The program in 0-main.c demonstrates the usage of an object-like macro. The header file 0-object_like_macro.h defines a macro named SIZE, which is an abbreviation for the token 1024. The program uses this macro in an expression to perform arithmetic operations. When compiled and executed, the program will output the result of the arithmetic operation.
Task 1: Pi

The program in 1-main.c demonstrates the usage of a macro for defining a constant value. The header file 1-pi.h defines a macro named PI as an abbreviation for the token 3.14159265359. The program uses this macro to calculate the area of a circle. When compiled and executed, the program will output the calculated area.
Task 2: File name

The program in 2-main.c prints the name of the file it was compiled from. It utilizes the __FILE__ macro, which is predefined by the compiler and expands to a string literal containing the current source file name. The program simply prints this name to the console. When compiled and executed, the program will output the name of the file.
Task 3: Function-like Macro

The program in 3-main.c demonstrates the usage of a function-like macro. The header file 3-function_like_macro.h defines a macro named ABS(x) that computes the absolute value of a number x. The program uses this macro to calculate the absolute values of different integers. When compiled and executed, the program will output the calculated absolute values.
Task 4: SUM

The program in 4-main.c showcases the usage of a function-like macro for performing arithmetic operations. The header file 4-sum.h defines a macro named SUM(x, y) that computes the sum of the numbers x and y. The program uses this macro to calculate the sum of two integers. When compiled and executed, the program will output the calculated sum.

Each task provides an example of using preprocessor macros for various purposes, including defining constants, performing arithmetic operations, and manipulating code at compile-time. These examples serve to illustrate the power and flexibility of macros in C programming.

Please refer to the respective files in this repository for the complete implementation of each task.
