#include <fcntl.h>
#include <unistd.h>

/**
 * @filename: is the name of the file we are working with
 * @text_content: is the NULL terminated string to add at the end of the file
 */

int append_text_to_file(const char *filename, const char *text)
{
	int taps, length = 0;

	if (filename == NULL)
	    return (-1);

	if (text != NULL) {
	    for (length = 0; text[length]; length++);
	}

taps = open(filename, O_WRONLY | O_APPEND);

if (taps == -1)
   return (-1);

if (write(taps, text, length) != length) {
   close(taps);
   return (-1);
}

close(taps);
return (1);

}	
