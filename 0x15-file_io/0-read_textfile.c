#include "main.h"

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The number of characters written, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rd;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	buffer[rd] = 0;
	if (write(STDOUT_FILENO, &buffer, rd) < 0)
	{
		free(buffer);
		return (0);
	}
	return (rd);
}
