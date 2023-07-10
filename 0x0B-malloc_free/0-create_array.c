#include "main.h"

/**
 * create_array - Creates and initializes an array of characters.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Return: If successful, a pointer to the allocated memory for the array.
 *         If size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = NULL;
	arr = malloc(size);
	if (!arr)
		return (NULL);
	if (!size)
	{
		arr[0] = c;
		return (arr);
	}
	for (; i < size; i++)
		arr[i] = c;
	arr[i] = 0;
	return (arr);
}
