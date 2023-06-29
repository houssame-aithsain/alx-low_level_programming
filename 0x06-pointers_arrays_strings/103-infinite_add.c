#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 *
 * @n1: First number string
 * @n2: Second number string
 * @r: Buffer to store the result
 * @size_r: Size of the result buffer
 *
 * Return: Pointer to the result string, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0;
	char temp;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	len1--;
	len2--;
	for (; len1 >= 0 || len2 >= 0; len1--, len2--, i++)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		carry = sum / 10;
		if (i >= size_r)
			return (0);
		r[i] = (sum % 10) + '0';
	}
	if (carry && i < size_r)
		r[i++] = carry + '0';
	if (i >= size_r)
		return (0);
	r[i] = 0;
	for (int j = 0, k = i - 1; j < k; j++, k--)
	{
		temp = r[j];
		r[j] = r[k];
		r[k] = temp;
	}
	return (r);
}
