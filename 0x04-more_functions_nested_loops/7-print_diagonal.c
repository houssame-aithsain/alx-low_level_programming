#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: The number of times the backslash should be printed
 */
void print_diagonal(int n)
{
	int index, g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 0; index < n; index++)
		{
			for (g = 0; g < index; g++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
