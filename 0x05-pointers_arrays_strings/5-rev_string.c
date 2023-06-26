#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string.
 *
 * Description: This function takes a string as input and reverses its
 *              order in place. It uses two variables, `i` and `len`, to
 *              iterate through the string from both ends towards the
 *              middle. The characters at corresponding positions are
 *              swapped until the midpoint is reached. The function does
 *              not return a value.
 */
void rev_string(char *s)
{
	int i;
	int ll;
	int len;
	char tmp;

	i = 0;
	len = 0;
	while (s && s[len])
		len++;
	ll = len;
	while (s && i < (ll / 2))
	{
		len--;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
	}
}
