#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: name of file
 * @letters: letters to printed
 * Return: number of bytes
 * 1 on success and 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t pdf;
	ssize_t n;
	ssize_t t;

	pdf = open(filename, O_RDONLY);
	if (pdf == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(pdf, buf, letters);
	n = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(pdf);
	return (n);
}

