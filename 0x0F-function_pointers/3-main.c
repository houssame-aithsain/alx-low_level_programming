#include "3-calc.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return (result * sign);
}

/**
 * main - Entry point of the program
 * @ac: The number of command-line arguments
 * @av: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2] && av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*'
		&& av[2][0] != '/' && av[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && av[3][0] == 48)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(av[2]);
	printf("%d\n", func(_atoi(av[1]), _atoi(av[3])));
	return (0);
}
