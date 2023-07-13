#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of characters to concatenate from s2.
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, concat_len = 0;
	unsigned int i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;

	concat = malloc(sizeof(char) * (concat_len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
