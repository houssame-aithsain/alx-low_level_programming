#include "main.h"

/**
 * factorial - Computes the factorial of a number using recursion.
 * @n: The number to compute the factorial of.
 * Return: The factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
