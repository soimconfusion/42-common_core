#include "get_next_line.h"

static char *ft_free(char *ptr)
{
    if (ptr)
    {
        free(ptr);
    }
    return NULL;
}

static char *read_and_save(int fd, char *stored)
{
    char *buffer;
    int byt_read;

    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return ft_free(stored);

    byt_read = 1;
    while (byt_read > 0 && !ft_strchr(stored, '\n'))
    {
        byt_read = read(fd, buffer, BUFFER_SIZE);
        if (byt_read == -1)
        {
            ft_free(buffer);
            return ft_free(stored);
        }
        buffer[byt_read] = '\0';
        stored = ft_strjoin(stored, buffer);
    }
    ft_free(buffer);
    return stored;
}

static char *extract_line(char *stored)
{
    char *line;
    char *temp;
    int i;

    if (!stored || !*stored)
        return ft_free(stored);

    i = 0;
    while (stored[i] && stored[i] != '\n')
        i++;
    if (stored[i] == '\n')
    {
        line = ft_substr(stored, 0, i + 1);
        temp = ft_strdup(stored + i + 1);
        stored = ft_free(stored);
        stored = temp;
    }
    else
    {
        line = ft_strdup(stored);
        stored = ft_free(stored);
    }

    return line;
}

char *get_next_line(int fd)
{
    static char *stored;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    stored = read_and_store(fd, stored);
    if (!stored)
        return NULL;

    line = extract_line(stored);
    return line;
}