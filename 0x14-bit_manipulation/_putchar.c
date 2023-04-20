#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

int _putchar(char c, int fd);

#endif /* MAIN_H */

/* _putchar - writes the character c to the given file descriptor
 * @c: The character to print
 * @fd: The file descriptor to write to
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int fd)
{
    if (write(fd, &c, 1) == -1) {
        errno = EIO;
        return -1;
    }
    return 1;
}

