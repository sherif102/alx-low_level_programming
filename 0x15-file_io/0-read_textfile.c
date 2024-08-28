#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read a text files and print to POSIX STDIN
 * @filename: filename
 * @letters: number of letters to read
 * Return: number of letter able to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read;

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1 || bytes_read < letters)
	{
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bytes_read);

	return (bytes_read);
}
