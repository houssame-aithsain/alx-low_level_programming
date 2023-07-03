#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _strstr - Locates the first occurrence of the substring.
 *
 * @haystack: The string to search in.
 * @needle:   The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t j;
	size_t i;
	size_t h;

	h = 0;
	i = 0;
	j = 0;
	while (needle[j] && haystack[i])
	{
		if (needle[j] == haystack[i])
			j++;
		else
		{
			j = 0;
			i = 0 + h;
			h++;
		}
		i++;
	}
	if (ft_strlen(needle) == j)
		return (&haystack[i - ft_strlen(needle)]);
	return (0);
}
