#include <stdio.h>

/**
	* main - is the main "function"
	* @a:
	* @i:
	* @d:
	* Return: it  return "0"
*/
int main(void)
{
	int d;
	int i;
	int a;

	a = 0;
	i = 1;
	d = 2;
	while (a < 9)
	{
		if (d == 9)
		{
			if (i == a)
				i++;
		}
		if (d != i)
		{
			putchar(a + 48);
			putchar(i + 48);
			putchar(d + 48);
			if (a != 7 || i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (d == 9)
		{
			if (i == 9)
			{
				i = a;
				a++;
			}
			d = i;
			i++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
