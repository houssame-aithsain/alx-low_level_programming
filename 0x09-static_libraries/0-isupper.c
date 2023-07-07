#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: Returns 1 if the character is a digit, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
