#include "main.h"

/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++; /* For newline character */
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[index] = av[i][j];
			index++;
			j++;
		}
		str[index] = '\n';
		index++;
	}

	str[index] = '\0';

	return (str);
}
