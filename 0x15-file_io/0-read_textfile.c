#include "main.h"

/**
 * read_textfile - returns the number of
 * bytes written to standard output
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: 0 is returned on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pdf;
	ssize_t hold, fac;
	char *buf;

	if (!filename)
		return (0);

	pdf = open(filename, O_RDONLY);

	if (pdf == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	hold = read(pdf, buf, letters);
	fac = write(STDOUT_FILENO, buf, hold);

	close(pdf);

	free(buf);

	return (fac);
}
