README

This repository contains solutions to various tasks related to pointers, arrays, and strings. Each task is implemented in a separate file, and the corresponding test programs are provided as well.
Task 0: strcat

Implement the function _strcat that concatenates two strings. The function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. The function returns a pointer to the resulting string dest.
Task 1: strncat

Implement the function _strncat that concatenates two strings. The function is similar to _strcat, except that it will use at most n bytes from src. The src string does not need to be null-terminated if it contains n or more bytes. The function returns a pointer to the resulting string dest.
Task 2: strncpy

Implement the function _strncpy that copies a string. The function should work exactly like strncpy. It copies at most n characters from the string src to dest. If src is less than n characters long, the remaining characters in dest are filled with null bytes (\0) until a total of n characters have been written. The function returns a pointer to the resulting string dest.
Task 3: strcmp

Implement the function _strcmp that compares two strings. The function should work exactly like strcmp. It compares the strings s1 and s2 character by character until it finds a difference or reaches the end of either string. The function returns an integer value less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.
Task 4: reverse_array

Implement the function reverse_array that reverses the content of an array of integers. The function takes an array a and the number of elements n in the array. It reverses the order of the elements in the array.
Task 5: string_toupper

Implement the function string_toupper that changes all lowercase letters of a string to uppercase. The function takes a string as an argument and returns a pointer to the resulting string.
Task 6: cap_string

Implement the function cap_string that capitalizes all words of a string. The function takes a string as an argument and capitalizes the first letter of each word. The words are separated by spaces, tabs, new lines, commas, semicolons, periods, exclamation marks, question marks, double quotes, parentheses, and braces. The function returns a pointer to the resulting string.
Task 7: leet

Implement the function leet that encodes a string into 1337. The function replaces certain letters with their corresponding numerical representations according to the following rules:

    Letters 'a' and 'A' should be replaced by '4'.
    Letters 'e' and 'E' should be replaced by '3'.
    Letters 'o' and 'O' should be replaced by '0'.
    Letters 't' and 'T' should be replaced by '7'.
    Letters 'l' and 'L' should be replaced by '1'.
    The function takes a string as an argument and returns a pointer to the resulting string.

How to Test the Solutions

Each task has its own test program, named main.c, that includes the necessary headers and calls the corresponding function. To test a task solution, follow these steps:

    Compile the source code and the
    