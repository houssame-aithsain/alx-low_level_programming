#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Description: This function prints the numbers from 0 to 9 using the
 *              _putchar function and a loop.
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
		_putchar((i++) + 48);
	_putchar('\n');
}
