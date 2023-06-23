#include "main.h"

/**
 * print_triangle - Prints a triangle using the # character
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		spaces = size - i - 1;

		for (j = 0; j < spaces; j++)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
