#include "get_next_line.h"

static char *ft_free(char *ptr)
{
    if (ptr)
    {
        free(ptr);
    }
    return NULL;
}

static char *read_and_save(int fd, char *stored, char *buffer)
{
	int	byt_read;
	char	*temp;
	byt_read = 1;
	while (byt_read > 0 && !ft_strchr(stored, '\n'))
	{
		byt_read = read(fd, buffer, BUFFER_SIZE);
		if (byt_read == -1)
		{
			stored = ft_free(stored);
			return (NULL);
		}
		buffer[byt_read] = '\0';
		if (!stored)
			stored = ft_strdup("");
		temp = stored;
		stored = ft_strjoin(temp, buffer);
		temp = ft_free(temp);
	}
	return (stored);
}

static char *extract_line(char *stored)
{
	char	*updated;
	int	i;

	i = 0;
	while (stored[i] && stored[i] != '\n')
		i++;
	if (!stored || !*stored)
        	return (NULL);
        updated = ft_substr(stored, i + 1, (ft_strlen(stored) - i));
	if (*updated == 0)
	{
		ft_free(updated);
		updated = NULL;
	}
	stored[i + 1] = '\0';
	return (updated);
}

char *get_next_line(int fd)
{
	static char	*stored;
	char		*line;
	char		*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = read_and_save(fd, stored, buffer);
	ft_free(buffer);
	if (!line)
		return (NULL);
	stored = extract_line(line);
	return (line);
}
