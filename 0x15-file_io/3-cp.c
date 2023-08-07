#include "main.h"

/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_f, fd_to, br, bw;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",
			argv[0]), exit(97);
	fd_f = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			close_fd(fd_f), exit(99);

	while ((br = read(fd_f, buffer, 1024)) > 0)
	{
		bw = write(fd_to, buffer, br);
		if (bw == -1 || bw != br)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), close_fd(fd_f), close_fd(fd_to), exit(99);
	}
	if (br == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
			argv[1]), close_fd(fd_f), close_fd(fd_to), exit(98);
	close_fd(fd_f), close_fd(fd_to);
	return (0);
}
