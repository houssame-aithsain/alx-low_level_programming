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
	i = 0;
	d = 1;
	while (a <= 9)
	{
		i = a + 1;
		while (i <= 9)
		{
			d = i + 1;
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
		}
		a++;
	}
	putchar('\n');
	return (0);
}
