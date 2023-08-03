#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		r = (r << 1) + (*b - 48);
		b++;
	}
	return (r);
}
