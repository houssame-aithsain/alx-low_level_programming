#include "main.h"

/**
 * if_str_matches_any_of_accept - Checks if the character at index `i`
 * in string `s` matches accept.
 *
 * @s:      The input string to check.
 * @i:     The index of the character to check.
 * @accept: The string containing characters to compare against.
 * Return:       Returns 1 if there is a match, 0 otherwise.
 */
int if_str_matches_any_of_accept(char *s, unsigned int i, char *accept)
{
	unsigned int index;

	index = -1;
	while (accept && accept[++index])
		if (accept[index] == s[i])
			return (1);
	return (0);
}

/**
 * _strspn - Calculates the string `s` that consists
 * only of bytes from accept.
 *
 * @s:      The input string to analyze.
 * @accept: The string containing characters to compare against.
 * Return:       Returns the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	unsigned int i;

	len = 0;
	i = -1;
	while (s && s[++i])
	{
		if (if_str_matches_any_of_accept(s, i, accept))
			len++;
		else
			break;
	}
	return (len);
}
