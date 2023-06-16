#include <stdio.h>

/**
	* main - is the main "function"
	* @a:
	* Return: it  return "0"
*/
int main(void)
{
    int i;
	int a;

	a = 0;
    i = 1;
	while (a <= 10)
	{
		putchar(a + 48);
		putchar(i + 48);
		putchar(',');
		putchar(' ');
		if (i == 9)
        {
            i = a;
            a++;
        }
        i++;
	}
	putchar('\n');
	return (0);
}
