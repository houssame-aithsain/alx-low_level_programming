# include <stdio.h>

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
		if (!(i % 3) && !(i % 5))
			printf("Fizz Buzz\n");
		else if (!(i % 3))
			printf("Fizz\n");
		else if (!(i % 5))
			printf("Buzz\n");
		else
			printf("%d\n", i);
		i++;
	}
}
