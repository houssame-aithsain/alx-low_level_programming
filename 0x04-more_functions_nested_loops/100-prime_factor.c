#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (factor);
}


/**
 * main - the main function.
 * Return: "0".
*/
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor = largest_prime_factor(number);

	printf("%lu\n", largest_factor);

	return (0);
}
