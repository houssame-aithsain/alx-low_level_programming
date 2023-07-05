#include "main.h"

/**
 * sqrt_recursive - Helper function to compute the square root recursively.
 * @n: The number to find the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 * Return: The square root of n, or -1.
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;
	int square;

	mid = (start + end) / 2;
	square = mid * mid;
	if (start > end)
		return (-1);
	if (square == n)
		return (mid);
	else if (square > n)
		return (sqrt_recursive(n, start, mid - 1));
	else
		return (sqrt_recursive(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The square root of n, or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 0, n));
}
