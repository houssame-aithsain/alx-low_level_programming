#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function calculates the length of a string by
 *              iterating through the characters until it reaches
 *              the null terminator ('\0').
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
