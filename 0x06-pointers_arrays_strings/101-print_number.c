#include "main.h"

/**
 * print_number - Prints an integer to the standard output
 * @n: The integer to be printed
 *
 * Description: This function prints an integer, handling both positive and
 * negative numbers, including the special case of the minimum value of an
 * integer (-2147483648). It uses recursion to break down the number into its
 * individual digits and prints them one by one.
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar(45);
		_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		_putchar(45);
		print_number(n * -1);
	}
	if (n >= 0 && n <= 9)
		_putchar(n + 48);
	if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
