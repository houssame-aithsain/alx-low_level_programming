#include <stdio.h>

/**
	* main - is the main "function"
	* @a:
	* Return: it  return "0"
*/
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
