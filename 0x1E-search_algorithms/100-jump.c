#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if value
 * is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t step = jump;

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += jump;
		if (prev >= size)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - jump, prev);

	step = prev < size ? prev : size - 1;
	for (prev -= jump; prev <= step && prev < size; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
