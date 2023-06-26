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
	int i, sum, randomChar;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < passwordLength - 1; i++)
	{
		randomChar = rand() % 94 + 33;
		password[i] = randomChar;
		sum += randomChar;
		putchar(randomChar);
	}
	password[passwordLength - 1] = 2772 - sum;
	putchar(2772 - sum);
	password[passwordLength] = '\0';
	putchar('\n');
	return (0);
}
