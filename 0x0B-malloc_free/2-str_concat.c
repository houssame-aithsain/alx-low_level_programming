#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If successful, a pointer to the newly allocated concatenated string.
 *         If memory allocation fails or if s1 or s2
 **/
char *str_concat(char *s1, char *s2)
{
	size_t	j;
	size_t	i;
	size_t	b;
	char	*arr;

	i = 0;
	j = ft_strlen(s1) + ft_strlen(s2);
	b = ft_strlen(s1);
	arr = malloc(j + 1);
	if (!arr)
		return (0);
	arr = _strcpy(arr, s1);
	while (b < j)
	{
		arr[b++] = s2[i++];
	}
	arr[b] = 0;
	return (arr);
}
