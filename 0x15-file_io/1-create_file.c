#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written to the file created
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t bytes_written = 0;
	ssize_t i = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;
	i++;

	buffer = malloc(i);
	if (buffer == NULL)
		return (-1);

	if (text_content == NULL)
	{
		open(filename, O_CREAT | O_TRUNC, 0600);
		free(buffer);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}

	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	return (1);
}
