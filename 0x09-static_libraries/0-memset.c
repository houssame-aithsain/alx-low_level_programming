#include "main.h"

/**
 * _memset - Fills a memory block pointed to by 's' with the byte value 'b'.
 * The filling is done up to the specified length 'n'.
 * Returns a pointer to the modified memory block.
 *
 * Parameters:
 *     @s: Pointer to the memory block to be filled
 *     @b: Byte value used to fill the memory block
 *     @n: Number of bytes to be filled
 *
 * Return:
 *     Pointer to the modified memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s && i < n)
		s[i++] = b;
	return (s);
}
