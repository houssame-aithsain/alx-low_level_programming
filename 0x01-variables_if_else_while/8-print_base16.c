#include <stdio.h>

/**
	* main - is the main "function"
	* @a:
	* Return: it  return "0"
*/
int main(void)
{
	char a;

	a = '0';
	while (a <= '9')
		putchar(a++);
	a = 'a';
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
