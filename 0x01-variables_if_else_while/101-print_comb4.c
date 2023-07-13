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
	int i;
	int a;

	i = 0;
	while (i < 99)
	{
		a = i;
		while (i < 9)
		{
			putchar(i + 48);
			putchar(a + 48);
			if (a == 9 && i == 9)
				break;
		}
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
