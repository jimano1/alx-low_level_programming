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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
