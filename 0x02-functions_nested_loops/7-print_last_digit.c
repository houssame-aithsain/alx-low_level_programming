#include "main.h"

/**
	* print_last_digit - is the main "function"
	* @num: var
	* Return: it  return "0" or "1" if c is lower
*/
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num * -1;
		_putchar((num % 10) + 48);
		return (num % 10);
	}
	_putchar((num % 10) + 48);
	return (num % 10);
}
