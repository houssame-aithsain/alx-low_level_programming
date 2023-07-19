#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the cmp
 *			function does not return 0.
 *         If no element matches or size is less than or equal to 0, return -1.
 *
 * Description: This function searches for an integer in the 'array'
 * by applying the 'cmp' function
 * to each element. The 'cmp' function should return 0
 * if the element does not match the desired value
 * and a non-zero value if it matches. If the 'array' or 'cmp' is NULL,
 * or if the 'size' is less than
 * or equal to 0, the function returns -1. Otherwise,
 * it iterates through the 'array', applies the 'cmp'
 * function to each element, and returns the index
 * of the first element for which 'cmp' does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	i = -1;
	if (!array || size <= 0 || !cmp)
		return (-1);

	while (++i < (size_t)size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
