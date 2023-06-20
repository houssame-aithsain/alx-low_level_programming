#include "main.h"

/**
	* _islower - is the main "function"
	* @c: var
	* Return: it  return "0" or "1" if c is lower
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
