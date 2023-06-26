#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 1)
		length = (length - 1) / 2;
	else
		length /= 2;

	for (i = length; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
