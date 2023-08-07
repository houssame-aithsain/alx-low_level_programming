#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bd, bw;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	bd = read(fd, buffer, letters);
	if (bd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bw = write(STDOUT_FILENO, buffer, bd);
	if (bw == -1 || bw != bd)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bw);
}
