#include "main.h"

/**
 * print_square - Prints a square of '#' characters
 * @size: The size of the square
 */
void print_square(int size)
{
	int index, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			for (h = 0; h < size; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
