#include "lists.h"

/**
 * generate_key - Generate a key based on the provided username.
 * @username: String representing the username.
 *
 * This function generates a key based on the length
 * of the username and a predefined character set.
 * It XORs the length of the username with 59,
 * then performs a bitwise AND operation with
 * 63 to get an index in the character set.
 * Return: the generated key character.
 */
char generate_key(char *username)
{
	unsigned int i, b;
	size_t len, add;
	char l[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key_char;

	len = strlen(username);
	key_char = l[(len ^ 59) & 63];
	return (key_char);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * This function is the entry point of the program.
 * It validates the number of command-line arguments,
 * generates a key using the provided username, and prints the key.
 * Return: 0 on success, 1 on incorrect usage.
 */
int main(int argc, char *argv[])
{
	char key;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	key = generate_key(argv[1]);
	printf("%c\n", key);
	return (0);
}
