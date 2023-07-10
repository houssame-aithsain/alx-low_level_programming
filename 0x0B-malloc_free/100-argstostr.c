#include "main.h"

/**
 * ft_p_strlen - Calculates the total length of all strings in an array.
 * @av: The array of strings.
 *
 * Return: The total length of all strings.
 */
int ft_p_strlen(char **av)
{
	int len = 0;
	int i = 1;
	int n;

	while (av[i])
	{
		n = 0;
		while (av[i][n])
			n++;
		len += n;
		i++;
	}
	return (len);
}

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t ft_strlen(char *s)
{
	size_t i = 0;

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
	int i = 0;

	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - Concatenates all command line arguments into a single string.
 * @ac: The number of command line arguments.
 * @av: The array of command line arguments.
 *
 * Return: The concatenated string of all arguments, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	size_t j, i, b;
	int in;
	char *arr;

	if (!ac || !av)
		return (NULL);

	arr = malloc(ft_p_strlen(av) + ac + 1);
	if (!arr)
		return (NULL);

	in = 1;
	arr[0] = '\0';
	while (in < ac)
	{
		i = 0;
		j = ft_strlen(av[in]);
		b = ft_strlen(arr);
		while (i < j)
			arr[b++] = av[in][i++];
		arr[b++] = '\n';
		in++;
	}
	arr[b] = '\0';

	return (arr);
}
