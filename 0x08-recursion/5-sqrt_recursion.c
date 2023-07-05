#include "main.h"

/**
 * actual_sqrt_recursion - Helper function.
 * @n: The number for which to find the square root.
 * @i: The current value to check for the square root.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
