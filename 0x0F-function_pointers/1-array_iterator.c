#include "function_pointers.h"

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to a function that takes an integer argument
 * and returns void.
 *
 * Return: None.
 *
 * Description: This function applies the function pointed to by 'action'
 * to each element of the 'array'.
 * If any of the input arguments is NULL or size is 0,
 * the function returns without performing any action.
 * Otherwise, it iterates through the array and applies the 'action'
 * function to each element of the array.
 * The 'action' function will determine what operation is performed
 * on each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = -1;
	if (!array || !action || !size)
		return;

	while (++i < size)
		action(array[i]);
}
