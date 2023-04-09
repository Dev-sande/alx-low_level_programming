#include "main.h"
#include <stdlib.h>

/**
* A program that reads a text file and prints it to the POSIX standard output
* @letters: number of letter in the text file
* @filename: the text file we wish to read
* @read_textfile: function name as required
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

char *buffer;
ssize_t taps, bytes_read, bytes_written;

taps = open(filename, O_RDONLY);
  if (taps == -1)
    return (0);

buffer = malloc(sizeof(char) * letters);
bytes_read = read(taps, buffer, letters);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(taps);

return (bytes_written);
}
