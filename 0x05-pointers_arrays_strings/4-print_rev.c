#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 *
 * Description: This function determines the length of the string using
 *              the _strlen function, then iterates backwards from the
 *              last character of the string to the first character,
 *              printing each character using the _putchar function.
 *              Finally, a new line character is printed to move the
 *              cursor to the next line.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (s && i > -1)
		_putchar(s[i--]);
	_putchar('\n');
}
