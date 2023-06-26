#include "main.h"

/**
 * main - Generates a random valid password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int passwordLength = 12;
	char *password = malloc((passwordLength + 1) * sizeof(char));

	srand(time(0));
	for (i = 0; i < passwordLength; i++)
	{
		int randomCharType = rand() % 3;

		if (randomCharType == 0)
			password[i] = 'A' + rand() % 26;
		else if (randomCharType == 1)
			password[i] = 'a' + rand() % 26;
		else
			password[i] = '0' + rand() % 10;
	}
	password[passwordLength] = 0;
	printf("%s\n", password);
	free(password);
	return (0);
}
