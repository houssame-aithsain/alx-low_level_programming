#include "main.h"

/**
	* print_last_digit - is the main "function"
	* @num: var
	* Return: it  return "0" or "1" if c is lower
*/
int print_last_digit(int num)
{
	long n;

	n = num;
	if (n < 0)
	{
		n = n * -1;
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	_putchar((n % 10) + 48);
	return (n % 10);
}
