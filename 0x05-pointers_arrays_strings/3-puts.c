#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function prints each character of the string
 *              until it reaches the null terminator ('\0'), and
 *              then prints a new line character ('\n') to move
 *              the cursor to the next line.
 *
 * Return: None.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
