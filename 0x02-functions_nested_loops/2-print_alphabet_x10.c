#include "main.h"

/**
	* print_alphabet_x10 - is the main "function"
	* @j:
	* @i:
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
			_putchar(i++);
		_putchar('\n');
		j++;
	}
}
