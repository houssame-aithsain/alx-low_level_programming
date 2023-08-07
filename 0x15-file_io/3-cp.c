# include "main.h"

/**
 * print_error - Print error message and optionally exit.
 * @str: The error message prefix.
 * @file: The filename associated with the error.
 * @exit_code: The exit code to use if exit is called.
 * @flag: If 0, print error message; if 1, print error and exit.
 */
void print_error(char *str, char *file, int exit_code, int flag)
{
	if (!flag)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", exit_code);
		exit(100);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s %s\n", str, file);
		exit(exit_code);
	}
}

/**
 * main - Entry point. Copies content from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, rd = 1;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file", argv[1], 98, -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error("Error: Can't write to", argv[2], 99, -1);
	while (rd > 0)
	{
		rd = read(fd_from, buffer, BUFFER_SIZE);
		if (rd == -1)
			print_error("Error: Can't read from file", argv[1], 98, -1);
		buffer[rd] = 0;
		if (write(fd_to, buffer, rd) == -1)
			print_error("Error: Can't write to", argv[2], 99, -1);
	}
	if (close(fd_from) == -1)
		print_error("Error: Can't close fd", NULL, fd_from, 0);
	if (close(fd_to) == -1)
		print_error("Error: Can't close fd", NULL, fd_to, 0);
	return (0);
}
