#include "search_algos.h"

/**
 * binary_search_print - Prints an array
 * @array: Pointer to the first element of the array
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 */
void binary_search_print(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%d, ", array[left]);
		left++;
	}
	printf("%d\n", array[left]);
}

/**
 * binary_search_algo - Searches for a value using the Binary search algorithm
 * @array: Pointer to the first element of the array
 * @left: Left index of the subarray
 * @right: Right index of the subarray
 * @value: Value to search for
 * Return: Index where value is located or -1
 */
int binary_search_algo(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		binary_search_print(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);

	return (binary_search_algo(array, bound / 2, min(bound, size - 1), value));
}

/**
 * min - Returns the minimum of two size_t values
 * @a: First value
 * @b: Second value
 * Return: Minimum value
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}
