#include "main.h"

/**
	* print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4
	* Description: This function prints a sequence of numbers from 0 to 9,
	* excluding 2 and 4. It uses a loop and the _putchar function for printing.
	*/
void print_most_numbers(void)
{
	int i;

	i = -1;
	while (++i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48);
	}
	_putchar('\n');
}
