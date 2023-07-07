#include "main.h"

/**
 * _strchr - Searches for the first character 'c' in the string 's'.
 * Returns a pointer to the located character within the string.
 * If the character is not found, it returns a null pointer.
 *
 * Parameters:
 *     @s: Pointer to the string to be searched
 *     @c: Character to be found in the string
 *
 * Return:
 *     Pointer to the located character within the string or a null pointer.
 */
char *_strchr(char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == 0)
			return (0);
		i++;
	}
	return (&((char *)s)[i]);
}
