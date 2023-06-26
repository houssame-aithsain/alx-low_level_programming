README for Pointers, Arrays, and Strings Tasks

This repository contains solutions to various tasks related to pointers, arrays, and strings. Each task focuses on a specific concept and provides a function implementation to solve the problem.
Task 0: 98 Battery st.

This task involves implementing a function reset_to_98 that takes a pointer to an integer and updates the value it points to 98. The function is defined as follows:

c

void reset_to_98(int *n);

Task 1: Don't swap horses in crossing a stream

The objective of this task is to write a function swap_int that swaps the values of two integers. The function has the following prototype:

c

void swap_int(int *a, int *b);

Task 2: This report, by its very length, defends itself against the risk of being read

In this task, the goal is to implement a function _strlen that returns the length of a string. The function is defined as follows:

c

int _strlen(char *s);

Task 3: I do not fear computers. I fear the lack of them

The task involves writing a function _puts that prints a string, followed by a new line. The function has the following prototype:

c

void _puts(char *str);

Task 4: I can only go one way. I've not got a reverse gear

The objective of this task is to implement a function print_rev that prints a string in reverse, followed by a new line. The function has the following prototype:

c

void print_rev(char *s);

Task 5: A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

This task requires implementing a function rev_string that reverses a string. The function has the following prototype:

c

void rev_string(char *s);

Task 6: Half the lies they tell about me aren't true

The task involves writing a function puts2 that prints every other character of a string, starting with the first character, followed by a new line. The function has the following prototype:

c

void puts2(char *str);

Task 7: Winning is only half of it. Having fun is the other half

The objective of this task is to implement a function puts_half that prints the second half of a string, followed by a new line. If the number of characters is odd, the function prints the last n characters of the string, where n = (length_of_the_string - 1) / 2. The function is defined as follows:

c

void puts_half(char *str);

Task 8: Arrays are not pointers

This task requires implementing a function print_array that prints n elements of an array of integers, followed by a new line. The function has the following prototype:

c

void print_array(int *a, int n);

Task 9: strcpy

The goal of this task is to implement a function _strcpy that copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest. The function returns a pointer to dest. The function is defined as follows:

c

char *_strcpy(char *dest, char *src);

Each task is implemented in a separate C file and can be compiled and executed individually. The repository structure and file names correspond to the task numbers.
