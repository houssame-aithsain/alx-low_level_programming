#include "main.h"

/**
 * len_counter - Recursive function to count the length of a string.
 * @len: Pointer to the length counter variable.
 * @s: The string to be counted.
 */
void len_counter(int *len, char *s)
{
	if (*s)
	{
		(*len)++;
		len_counter(len, s + 1);
	}
}

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	len_counter(&len, s);
	return (len);
}
