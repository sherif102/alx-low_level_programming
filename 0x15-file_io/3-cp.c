#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>



int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t read1, write2 = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(2, "Error: Can't read from the %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}

	while ((read1 = read(fd1, buffer, 1024)) > 0)
	{
		write2 = write(fd2, buffer, read1);
		if (write2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (read1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd1);
		close(fd2);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}

	return (read1);
}
