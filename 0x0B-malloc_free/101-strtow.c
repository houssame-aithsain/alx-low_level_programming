#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for words and copies them.
 * @str: The input string.
 * @words: The array of words to be filled.
 * @count: The number of words.
 *
 * Return: The array of words, or NULL if memory allocation fails.
 */
char **allocate_words(char *str, char **words, int count)
{
	int i, j, k, len;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;

			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}

			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
				return (NULL);

			for (k = 0; k < len; k++)
				words[j][k] = str[i++];

			words[j][k] = '\0';
			j++;
		}
		else
		{
			i++;
		}
	}

	words[j] = NULL;
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words)
 * or NULL if str is NULL or empty.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int count = count_words(str);

	char **words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	return (allocate_words(str, words, count));
}
