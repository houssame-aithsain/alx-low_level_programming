#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_rec(int *array, size_t left, size_t right, int value);
void print_arrays(int *array, size_t left, size_t right);

#endif /*SEARCH_ALGOS_H*/
