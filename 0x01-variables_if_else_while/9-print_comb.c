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
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
