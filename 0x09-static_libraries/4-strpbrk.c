#include "main.h"

/**
 * if_c - ->
 * Checks if the character at index `i` in string `s` matches.
 *
 * @s:      The input string to check.
 * @i:      The index of the character to check.
 * @accept: The string containing characters to compare against.
 * Return:       Returns 1 if there is a match, 0 otherwise.
 */
int if_c(char *s, unsigned int i, char *accept)
{
	unsigned int index;

	index = -1;
	while (accept && accept[++index])
		if (accept[index] == s[i])
			return (1);
	return (0);
}

/**
 * _strpbrk - ->
 * Searches the string `s` for the first occurrence.
 *
 * @s:      The input string to search.
 * @accept: The string containing characters to search for.
 * Return:  Returns a pointer to the first occurrence of a matching character,
 *               or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = -1;
	while (accept && s && s[++i])
	{
		if (if_c(s, i, accept))
			return (s + i);
	}
	return (NULL);
}
