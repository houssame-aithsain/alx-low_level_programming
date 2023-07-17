#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function is the entry point of the program.
 * It prints the name of the current source file
 * using the predefined macro __FILE__.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
