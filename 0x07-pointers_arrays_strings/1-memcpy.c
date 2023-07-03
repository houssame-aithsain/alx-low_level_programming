#include "main.h"

/**
 * _memcpy - Copies a block of memory from source 'src' to destination 'dest'
 * up to the specified length 'n'. Returns a pointer to the destination block.
 *
 * Parameters:
 *     @dest: Pointer to the destination memory block
 *     @src: Pointer to the source memory block
 *     @n: Number of bytes to be copied
 *
 * Return:
 *     Pointer to the destination memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
