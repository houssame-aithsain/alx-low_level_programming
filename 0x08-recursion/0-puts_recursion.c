#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		_putchar(s[i++]);
	_putchar('\n');
}
