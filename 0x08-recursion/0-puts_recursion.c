#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	*s++;
	_puts_recursion(s);
}
