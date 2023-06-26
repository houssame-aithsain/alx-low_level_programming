#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers by
 *              modifying the memory locations they point to.
 */
void swap_int(int *a, int *b)
{
	int *s;

	s = a;
	a = b;
	b = a;
}
