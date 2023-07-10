#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int	ft_strlen(const	char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * ft_strdup - Duplicates a given string.
 * @s1: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s_malloc;
	char	*f_str;

	f_str = (char *)s1;
	i = (int)ft_strlen(f_str);
	s_malloc = (char *)malloc(sizeof(char) * i + 1);
	if (!s_malloc)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
		s_malloc[i] = s1[i];
	s_malloc[i] = 0;
	return (s_malloc);
}

/**
 * ft_countit - Counts the number of substrings in a string based
 * on a delimiter character.
 * @s: The input string.
 * @c: The delimiter character.
 * @flag: swetch the function ps.
 * Return: The number of substrings in the string.
 */
int	ft_countit(char const *s, char c, int flag)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (flag)
	{
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		return (i);
	}
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
char	*ft_substr(char const *s, int start, int len)
{
	char	*arr;
	int	i;
	int	j;

	i = 0;
	j = start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
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
	int	i;
	int	j;
	int	len;

	i = 0;
	j = ft_countit(str, ' ', 0);
	arr = malloc(sizeof(char *) * (j + 1));
	if (!arr)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			len = ft_countit(str, ' ', 1);
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
