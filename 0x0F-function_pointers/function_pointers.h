#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void f(char *name);

#endif /*FUNCTION_POINTERS_H*/
