#include "main.h"

/**
	* _isalpha - is the main "function"
	* @c: var
	* Return: it  return "0" or "1" if c is lower
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
