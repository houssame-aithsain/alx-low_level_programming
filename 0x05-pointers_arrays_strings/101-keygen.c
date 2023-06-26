#include "main.h"

/**
 * main - Generates a random valid password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
	int passwordLength = 15;
	char password[passwordLength + 1];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < passwordLength - 1; i++)
	{
		password[i] = rand() % 78 + '0';
		sum += password[i] - '0';
		putchar(password[i]);
	}
	n = 2772 - sum;
	password[passwordLength - 1] = n + '0';
	putchar(n + '0');
	password[passwordLength] = '\0';
	putchar('\n');
	return (0);
}
