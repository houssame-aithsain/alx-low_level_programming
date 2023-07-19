Task 0: What's my name

In this task, you need to implement a C function called print_name, which takes two parameters:

    char *name: A pointer to a string representing a name.
    void (*f)(char *): A function pointer that points to a function that takes a char* argument and returns void.

The print_name function should print the name using the provided function pointer f.
Task 1: If you spend too much time thinking about a thing, you'll never get it done

For this task, you need to implement a C function called array_iterator, which takes three parameters:

    int *array: A pointer to an integer array.
    size_t size: The size of the array.
    void (*action)(int): A function pointer that points to a function that takes an int argument and returns void.

The array_iterator function should iterate through each element of the array and apply the function action to each element.
Task 2: To hell with circumstances; I create opportunities

In this task, you need to implement a C function called int_index, which takes three parameters:

    int *array: A pointer to an integer array.
    int size: The number of elements in the array.
    int (*cmp)(int): A function pointer that points to a function that takes an int argument and returns int.

The int_index function should search for the first element in the array for which the cmp function does not return 0. It should return the index of that element. If no element matches the condition or if size is less than or equal to 0, the function should return -1.
Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

For this task, you need to create a C program called calc, which performs simple operations on integers.

Usage:

arduino

calc num1 operator num2

    num1 and num2 are integers.
    operator is one of the following: +, -, *, /, %.

The program should print the result of the operation, followed by a new line. You can assume that the result of all operations can be stored in an int.

If the number of arguments is wrong, print Error, followed by a new line, and exit with status 98.
If the operator is none of the above, print Error, followed by a new line, and exit with status 99.
If the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with status 100.

This task requires four files:

3-calc.h: This file contains all the function prototypes and data structures used by the program.

3-op_functions.c: This file contains five functions for each of the operations: op_add, op_sub, op_mul, op_div, and op_mod.

3-get_op_func.c: This file contains a function get_op_func that selects the correct function to perform the operation based on the operator given as a parameter.

3-main.c: This file contains the main function of the program.

Compilation and examples:

bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
2
./calc 97 + 1
98
./calc 1024 / 10
102
./calc 1024 '*' 98
100352
./calc 1024 '\*' 98
Error
./calc 1024 - 98
926
./calc 1024 '%' 98
44
