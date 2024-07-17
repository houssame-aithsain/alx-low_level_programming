#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int binary_search_print(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if value
 * is not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		bound / 2, bound < size ? bound : size - 1);
	return (binary_search_print(array, bound / 2, min(bound, size - 1), value));
}

/**
 * binary_search_print - Searches for a value in a sorted array of integers
 * using the Binary search algorithm, with printing.
 * @array: Pointer to the first element of the array to search in.
 * @low: Lower bound of the search range.
 * @high: Upper bound of the search range.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if value
 * is not present in array or if array is NULL.
 */
int binary_search_print(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * min - Returns the minimum of two size_t values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The minimum value.
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}
