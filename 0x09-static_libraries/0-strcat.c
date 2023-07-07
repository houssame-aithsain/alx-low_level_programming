#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int end;
	int i;

	end = -1;
	i = 0;
	while (dest && dest[++end])
		;
	while (src && src[i])
		dest[end++] = src[i++];
	dest[end] = 0;
	return (dest);
}
