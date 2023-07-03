README

This repository contains the implementation of several functions in the C programming language. Each function performs a specific task related to pointers, arrays, and strings.
Function List

    char *_memset(char *s, char b, unsigned int n): This function fills the first n bytes of the memory area pointed to by s with the constant byte b. It returns a pointer to the memory area s.

    char *_memcpy(char *dest, char *src, unsigned int n): The _memcpy() function copies n bytes from the memory area src to the memory area dest. It returns a pointer to dest.

    char *_strchr(char *s, char c): This function locates the first occurrence of the character c in the string s. It returns a pointer to the first occurrence of c in s, or NULL if the character is not found.

    unsigned int _strspn(char *s, char *accept): The _strspn() function gets the length of a prefix substring in s that consists only of bytes from accept. It returns the number of bytes in the initial segment of s that match any byte from accept.

    char *_strpbrk(char *s, char *accept): This function searches a string s for any of the bytes in the string accept. It returns a pointer to the first byte in s that matches one of the bytes in accept, or NULL if no such byte is found.

Usage

To use these functions, include the corresponding header file in your C program:

c

#include "main.h"

Compile your program along with the source file that contains the implementation of the desired function. For example, to compile a program that uses _memset(), use the following command:

c

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 your_program.c 0-memset.c -o your_program

Replace 0-memset.c with the appropriate source file name for the desired function.
Examples

Here are a few examples demonstrating the usage of the functions:

c

#include "main.h"
#include <stdio.h>

int main(void)
{
    char buffer[98] = {0x00};

    _memset(buffer, 0x01, 95);
    for (int i = 0; i < 98; i++)
    {
        printf("0x%02x ", buffer[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    
    return 0;
}

This example demonstrates the usage of _memset() function to fill the buffer with the constant byte 0x01.

c

#include "main.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest[50];

    _memcpy(dest, src, 7);
    printf("Copied string: %s\n", dest);
    
    return 0;
}

This example demonstrates the usage of _memcpy() function to copy the first 7 bytes from src to dest.
Additional Information

For more details on each function, including function prototypes and return values, please refer to the corresponding source code files in this repository.

Note: These functions have been implemented for learning purposes and may not provide the same level of robustness and efficiency as their standard library counterparts.
