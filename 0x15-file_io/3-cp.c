#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>



int main(int argc, char **argv)
{
	int fd1;
	int fd2;
	ssize_t read1 = 0;
	ssize_t write2 = 0;
	ssize_t i = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
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
		dprintf(fd1, "Error: Can't read from the %s\n", argv[1]);
		exit(98);
	}

	read1 = read(fd1, buffer, 1024);
	if (read1 == -1)
	{
		dprintf(fd1, "Error: Can't read from the %s\n", argv[1]);
		exit(98);
	}

	while (buffer[i] != '\0')
		i++;

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(fd2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	write2 = write(fd2, buffer, i);
	if (write2 == -1)
	{
		dprintf(fd2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (!close(fd2))
	{
		dprintf(fd2, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	if (!close(fd1))
	{
		dprintf(fd1, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}

	close(fd2);
	close(fd1);
	return (0);
}
