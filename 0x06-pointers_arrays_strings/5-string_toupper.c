#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str && str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
