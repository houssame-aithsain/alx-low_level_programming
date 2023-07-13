#include "main.h"

/**
 * malloc_checked - Allocates memory and checks if allocation was successful
 * @b: Size of the memory to allocate
 *
 * This function uses the malloc function to allocate memory of size 'b'.
 * If the allocation is successful,
 * a pointer to the allocated memory is returned.
 * If the allocation fails (malloc returns a null pointer),
 * the function exits with status code 98.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
