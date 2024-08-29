#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of file
 * @filename: file to be appended
 * @text_content: text to be added
 * Return: 1 on success and -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;
	ssize_t i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
