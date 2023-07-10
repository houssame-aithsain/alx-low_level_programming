#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * @c: The delimiter character.
 *
 * Return: The number of words.
 */
static int count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

/**
 * word_dup - Duplicates a word from a given string.
 * @str: The input string.
 * @start: The starting index of the word.
 * @finish: The ending index of the word.
 *
 * Return: The duplicated word.
 */
static char *word_dup(const char *str, int start, int finish)
{
	char *word;
	int i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
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
	size_t i;
	size_t j;
	int index;
	char **split;

	if (!str)
		return (0);
	split = malloc((count_words(str, ' ') + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != ' ' && index < 0)
			index = i;
		else if ((str[i] == ' ' || i == ft_strlen(str)) && index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
