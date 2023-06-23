#include "main.h"

/**
 * print_line - Prints a line of underscores
 * @n: The number of times the underscore should be printed
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (l = 0; l < n; l++)
			_putchar('_');
		_putchar('\n');
	}
}
