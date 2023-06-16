#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * check_and_print - is the function "that check numb and print its status"
 */

/**
 * @n: the number "n"
 */
void check_and_print(int n)
{
	if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is positive\n");
}

/**
 * main - the main function "that sent the number to the check function"
 * Return: return "0"
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check_and_print(n);
	return (0);
}

