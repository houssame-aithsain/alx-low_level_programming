#include "main.h"

/**
	* print_alphabet - is the main "function"
	* @i:
*/
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
		_putchar(i++);
	_putchar('\n');
}
