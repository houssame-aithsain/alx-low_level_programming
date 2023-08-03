#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, Or 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int n;
	char *b;

	n = 1;
	b = (char *)&n;
	return (*b);
}
