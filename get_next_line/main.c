#include <stdio.h>    // For printf, perror
#include "get_next_line.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;

    // Open file or use stdin
    if (argc > 1)
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            perror("Error opening file");
            return 1;
        }
    }
    else
    {
        printf("Reading from standard input. Type CTRL+D (or CTRL+Z on Windows) to exit.\n");
        fd = 0; // Standard input
    }

    // Read and print lines using get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    // Close file descriptor if it was opened
    if (fd != 0)
        close(fd);

    return 0;
}