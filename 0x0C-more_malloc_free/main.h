#ifndef MAIN_H
#define MAIN_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void	ft_bzero(void *s, size_t n);

#endif /*MAIN_H*/