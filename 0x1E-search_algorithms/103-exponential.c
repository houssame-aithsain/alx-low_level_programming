#include "search_algos.h"

/**
 * print_arrayx - Prints elements of an array from index l to r.
 * @array: The array to be printed.
 * @l: The left index of the range to print.
 * @r: The right index of the range to print.
 * Description: This function iterates over a portion of an array and prints
 *              each element. It's used to show which part of the array is
 *              currently being searched.
 */
void print_arrayx(int *array, int l, int r)
{
	for (int i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - Searches for a value using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located
 * Description: This function searches for a value by doubling the index until
 *              the value at the index is greater
 *              exceeds the array bounds
 */
int exponential_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	int bound = 1;

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	int left = bound / 2;
	int right = min(bound, (int)size - 1);

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (binary_search(array + left, right - left + 1, value) + left);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the sub-array to search in.
 * @size: Number of elements in the sub-array.
 * @value: The value to search for.
 * Return: The index where value is located within the sub-array
 * Description: This function divides the search interval in half
 *              with the middle element
 *              or the right half of the array
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		print_arrayx(array, left, right);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
