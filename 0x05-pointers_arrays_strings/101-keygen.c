#include "main.h"

/**
 * main - Generates a random valid password for 101-crackme program
 *
 * Return: Always 0
 */

int main(void)
{
	int pass[200];
	int i;
	int s;
	int g;

	s = 0;
	srad(time(0));
	for (i = 0; i < 200; i++)
	{
		pass[i] = rand() % 78;
		s += (pass[i] + 48);
		putchar(pass[i] + 48);
		if ((2772 - s) - 48 < 78)
		{
			g = 2772 - s - 48;
			s += g;
			putchar(g + 48);
			break;
		}
	}
	return (0);
}
