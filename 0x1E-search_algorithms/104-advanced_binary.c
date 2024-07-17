#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @left: The starting index of the array to print
 * @right: The ending index of the array to print
 */
void print_arrays(int *array, size_t left, size_t right)
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
 * binary_search_rec - Helper function to perform recursive binary search
 * @array: Pointer to the first element of the array to search in
 * @left: The starting index of the subarray to search in
 * @right: The ending index of the subarray to search in
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int binary_search_rec(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	print_arrays(array, left, right);
	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_rec(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (binary_search_rec(array, mid + 1, right, value));
	else
		return (binary_search_rec(array, left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));
}
