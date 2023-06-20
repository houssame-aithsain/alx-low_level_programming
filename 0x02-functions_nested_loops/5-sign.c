#include "main.h"

/**
	* print_sign - is the main "function"
	* @n: var
	* Return: it  return "0" or "1" if c is lower
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
