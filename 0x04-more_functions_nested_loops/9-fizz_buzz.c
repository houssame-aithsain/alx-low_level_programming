# include "main.c"

/**
 * main - Entry point for the FizzBuzz program
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		if ((i % 3) && (i % 5))
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
}
