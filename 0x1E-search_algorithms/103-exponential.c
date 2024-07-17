#include "search_algos.h"

/**
 * print_arrayx - Prints an array of integers from index `start` to `end`.
 * @array: The array to be printed.
 * @start: The start index of the range to print.
 * @end: The end index of the range to print.
 */
void print_arrayx(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		print_arrayx(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left;
	size_t right;
	int result;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	result = binary_search(array + left, right - left + 1, value);
	return ((result != -1) ? (int)(left + result) : -1);
}
