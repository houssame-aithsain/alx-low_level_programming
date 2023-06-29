#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	int i;
	int j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (leet_letters[j])
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
