#include "get_next_line_bonus.h"
#include <stdio.h>

int main()
{
	int fd1 = open("file1.txt", O_RDONLY);
	int fd2 = open("file2.txt", O_RDONLY);
	int fd3 = open("file3.txt", O_RDONLY);
	//int fd4 = 0;
	char *line;

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        printf("Error opening files\n");
        return (1);
    }
	for(int i = 0; i < 2; i ++)
	{
		line = get_next_line(fd1);
	    printf("%s", line);
        free(line);

        line = get_next_line(fd2);
        printf("%s",line);
        free(line);

        line = get_next_line(fd3);
        printf("%s",line);
        free(line);
		
//		line = get_next_line(fd4);
//		printf("%s", line);
//		free(line);
	}
	close(fd1);
	close(fd2);
	close(fd3);

	return (0);
}
