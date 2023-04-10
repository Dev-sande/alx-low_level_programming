#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *allo(char *filename);
void close_fd(int fd);

char *allo(char *filename)
{
     char *count;
     count = malloc(sizeof(char) * 1024);
     if (count == NULL) {
        fprintf(stderr, "Error: can't allocate count for %s\n", filename);
	exit(EXIT_FAILURE);
}

return (count);
}

void close_fd(int fd)
{ if (close(fd) == -1) {
     fprintf(stderr, "Error: can't shut down file %d\n", fd);
     exit(EXIT_FAILURE);
}
}

int main(int argc, char *argv[])
{
    int from_fd, to_fd, r, w;
    char *count;

    if (argc != 3) {
       fprintf(stderr, "Use: cp source_file destination_file\n");
       exit(EXIT_FAILURE);
    } 
count = allo(argv[2]);

from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1) {
    fprintf(stderr, "error: can't read file %s\n", argv[1]);
    free(count);
    exit(EXIT_FAILURE);
}

to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (to_fd == -1) {
   fprintf(stderr, "error: %s\n", argv[2]);
   free(count);
   close_fd(from_fd);
   exit(EXIT_FAILURE);
}

do {
   r = read(from_fd, count, 1024);
   if (r == -1) {
	fprintf(stderr, "error: %s\n", argv[1]);
     free (count);
     close_fd(from_fd);
     close_fd(to_fd);
     exit(EXIT_FAILURE);
   }

w = write(to_fd, count, r);
if (w == -1) {
	fprintf(stderr, "error: %s\n", argv[2]);
	free(count);
	close_fd(from_fd);
	close_fd(to_fd);
	exit (EXIT_FAILURE);
}

} while (r > 0);
free (count);
close_fd(from_fd);
close_fd(to_fd);

return (0);

}
