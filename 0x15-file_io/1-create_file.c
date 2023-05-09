#include "file.h"
#include <stdio.h>

/**
 * create_file - Create a new file and write text to it.
 * @filename: The name of the file to create.
 * @text_content: The text to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		num_bytes_written = write(fd, text_content, strlen(text_content));
		if (num_bytes_written == -1 || num_bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
