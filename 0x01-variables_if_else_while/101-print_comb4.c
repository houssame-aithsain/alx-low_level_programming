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
	while (a <= 7)
	{
		while (i <= 8)
		{
			while(d <= 9)
			{
				putchar(a + 48);
				putchar(i + 48);
				putchar(d + 48);
				if (a != 7 || i != 8 || d != 9)
				putchar(',');
				putchar(' ');
				d++;
			}
			i++;
			d = i;
		}
		a++;
		i = a;
	}
	putchar('\n');
	return (0);
}
