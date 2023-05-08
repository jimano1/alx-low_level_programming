#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints its contents to stdout.
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read and print.
 *
 * Return: The number of bytes read and printed on success, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		close(fd);
		return (0);
	}

	num_bytes_read = read(fd, buf, letters);
	if (num_bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[num_bytes_read] = '\0';
	num_bytes_written =
}
