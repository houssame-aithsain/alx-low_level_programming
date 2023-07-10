# ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);

#endif /*MAIN_H*/