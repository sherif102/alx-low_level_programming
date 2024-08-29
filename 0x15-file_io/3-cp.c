#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - copy file from and to
 * @c: number of argument supplied
 * @v: argument parsed
 * Return: success
 */

int main(int c, char **v)
{
	int fd1, fd2;
	ssize_t read1, write2 = 0;
	char buffer[1024];

	if (c != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(v[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);

	fd2 = open(v[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]);
		close(fd1);
		exit(99);
	}

	while ((read1 = read(fd1, buffer, 1024)) > 0)
	{
		write2 = write(fd2, buffer, read1);
		if (write2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", v[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (read1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", v[1]), exit(98);
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);

	return (0);
}
