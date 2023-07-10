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
 * ft_strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If successful, a pointer to the newly allocated duplicated string.
 *         If memory allocation fails or str is NULL, returns NULL.
 */
char	*ft_strdup(const char *str)
{
	int		i;
	char	*s_malloc;
	char	*f_str;

	f_str = (char *)str;
	i = (int)ft_strlen(f_str);
	s_malloc = (char *)malloc(sizeof(char) * i + 1);
	if (!s_malloc)
		return (NULL);
	s_malloc = ft_memcpy(s_malloc, str, i);
	s_malloc[i] = 0;
	return (s_malloc);
}
