#include "main.h"

/**
 * ft_bzero - Sets the first 'n' bytes of the memory pointed to by 's' to zero.
 * @s: Pointer to the memory to be set.
 * @n: Number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_const;

	s_const = (char *)s;
	i = 0;
	while (i < n)
	{
		s_const[i] = 0;
		i++;
	}
}

/**
 * _calloc - Allocates memory for an array
 * of 'count' elements, each of 'size' bytes.
 * The allocated memory is initialized to zero.
 * @nmemb: Number of elements to allocate.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char	*arr;

	if (nmemb == 2147483647 || size == 2147483647 || !size)
		return (0);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}
