#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 *
 * Description: This function takes a string as input and prints the second
 *              half of the string. It calculates the length of the string
 *              by counting the number of characters until the null terminator.
 *              Then it determines the starting index `i` for printing the
 *              second half based on whether the length is odd or even. If the
 *              length is odd, `i` is set to len / 2, otherwise, it is set to
 *              (len - 1) / 2. Finally, it uses a loop to print the characters
 *              from index `i` until the end of the string.
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str && str[len])
		len++;
	if (len % 2)
	{
		i = (len / 2) + 1;
		len++;
	}
	else
		i = (len / 2);
	while (str && i <= len)
		_putchar(str[i++]);
	_putchar('\n');
}
