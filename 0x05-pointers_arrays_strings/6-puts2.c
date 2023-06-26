#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 *
 * Description: This function takes a string as input and prints every
 *              other character of the string. It starts from the first
 *              character and skips one character after each printed
 *              character. The function uses a loop to iterate through
 *              the characters of the string and checks if the index `i`
 *              is even before printing the character. It does not print
 *              any newline character after printing the characters.
 */
void puts2(char *str)
{
	int i;

	i = -1;
	while (str && str[++i])
	{
		if (str[i] && !(i % 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
