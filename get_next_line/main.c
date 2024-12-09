#include <stdio.h>    // For printf and perror
#include <fcntl.h>    // For open()
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    // Open a specific file for testing
	//fd = open("input.txt", O_RDONLY);
	fd= open("input.txt", O_RDONLY);
	//fd = 0;
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }

    // Read and print lines using get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line); // Free the memory allocated for the line
    }

    // Close the file descriptor
    close(fd);

    return 0;
}
