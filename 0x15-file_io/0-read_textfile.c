#include "main.h"

/**
 * ft_print_buffer - Prints the contents of a buffer to the standard output.
 * @buffer: The buffer to print.
 * Return: The number of characters written.
 */
int ft_print_buffer(char *buffer)
{
	int i;

	i = 0;
	while (buffer && buffer[i])
		write(1, &buffer[i++], 1);
	return (i);
}

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The number of characters written, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, len, rd;

	if (!filename)
		return (0);
	len = 1;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(letters + 1);
	rd = read(fd, buffer, letters);
	if (rd < 0)
		return (0);
	buffer[letters] = 0;
	return (ft_print_buffer(buffer));
}
