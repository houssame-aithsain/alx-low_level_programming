#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of string arguments.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		str = va_arg(args, char *);
		printf("%s", (!str) ? "(nil)" : str);
	}
	printf("\n");
	va_end(args);
}
