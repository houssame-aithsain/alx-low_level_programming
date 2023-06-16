#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* print_last - is the "function that prints the last digit of n"
	* @n: is a number
	* Return: if 0 "return 0"
*/
void print_last(int n)
{
	if (!(n % 10))
	{
		printf("Last digit of %d is %d and is 0", n, (n % 10));
		return;
	}
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5", n, (n % 10));
	if ((n % 10) < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, (n % 10));
}

/**
	* main - is the main function "that gives the n to print_last"
	* Return: is "returns 0"
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	print_last(n);
	return (0);
}
