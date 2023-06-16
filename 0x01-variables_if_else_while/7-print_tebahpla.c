#include <stdio.h>

/**
	* main - is the main "function"
	* @a:
	* Return: it  return "0"
*/
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
