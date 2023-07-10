#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * ft_count_c - Counts the number of characters until a specified
 * character is encountered.
 * @s: The input string.
 * @c: The specified character.
 *
 * Return: The number of characters until the specified
 * character is encountered.
 */
size_t	ft_count_c(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}


/**
 * ft_countit - Counts the number of substrings in a string based
 * on a delimiter character.
 * @s: The input string.
 * @c: The delimiter character.
 *
 * Return: The number of substrings in the string.
 */
size_t	ft_countit(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			j++;
		i++;
	}
	return (j);
}

/**
 * ft_substr - Extracts a substring from a given string.
 * @s: The input string.
 * @start: The starting index of the substring.
 * @len: The length of the substring.
 *
 * Return: The extracted substring.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	if (start >= ft_strlen(s))
	{
		arr = malloc(2);
		arr[0] = 0;
		arr[1] = 0;
		return (arr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (s[start] != 0)
	{
		arr = malloc(len + 1);
		if (!arr)
			return (0);
		i = 0;
		while (len)
		{
			arr[i++] = s[j++];
			len--;
		}
		arr[i] = 0;
		return (arr);
	}
	return (0);
}

/**
 * strtow - Splits a string into an array of substrings based
 * on a delimiter character.
 * @str: The input string.
 *
 * Return: The array of substrings.
 */
char **strtow(char *str)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = ft_countit(str, ' ');
	arr = malloc(sizeof(char *) * (j + 1));
	if (!arr)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			len = ft_count_c(str, ' ');
			arr[i] = ft_substr(str, 0, len);
			str += len;
			i++;
		}
		else
			str++;
	}
	arr[i] = 0;
	return (arr);
}
