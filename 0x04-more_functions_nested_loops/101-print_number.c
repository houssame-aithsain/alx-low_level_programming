#include "main.h"

/**
 * print_number - Prints an integer
 * @nb: The integer to print
 */
void	print_number(int nb)
{
	int	numb;

	numb = nb;
	if (numb == -2147483648)
	{
		_putchar('-');
		_putchar(2 + '0');
		numb = 147483648;
	}
	if (numb < 0)
	{
		_putchar('-');
		print_number(numb * -1);
	}
	if (numb >= 0 && numb <= 9)
		_putchar(numb + '0');
	else if (numb > 9)
	{
		print_number(numb / 10);
		print_number(numb % 10);
	}
}
