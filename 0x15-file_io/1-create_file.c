#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * @filename: is the name of the file we are creating
 * @text_context: is a NULL terminated string to write to the file
*/

int create_file(const char *filename, char *text) {
	int taps, write_result, length = 0;

	if (filename == NULL) {
            return (-1);
}


if (text != NULL) {
    length = strlen(text);
}

taps = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (taps == -1){
    return (-1);
}

write_result = write(taps, text, length);
if (write_result == -1) {
   close(taps);
   return (-1);
}

close(taps);
return (1);
}
