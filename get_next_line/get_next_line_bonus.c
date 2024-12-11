/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:13:01 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/08 17:07:44 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_free(char *ptr)
{
	if (ptr)
	{
		free(ptr);
	}
	return (NULL);
}

char	*read_and_save(int fd, char *stored, char *buffer)
{
	int		byt_read;
	char	*temp;

	byt_read = 1;
	while (byt_read > 0 && !ft_strchr(stored, '\n'))
	{
		byt_read = read(fd, buffer, BUFFER_SIZE);
		if (byt_read == -1)
		{
			stored = ft_free(stored);
			return (NULL); // and freeing the buffer?
		}
		if (byt_read == 0)
			break ;
		buffer[byt_read] = '\0';
		if (!stored)
			stored = ft_strdup("");
		temp = stored;
		stored = ft_strjoin(temp, buffer);
		temp = ft_free(temp);
	}
	return (stored);
}

char	*extract_line(char *stored)
{
	char	*line;
	int		i;

	if (!stored || !*stored)
		return (NULL);
	i = 0;
	while (stored[i] && stored[i] != '\n')
		i++;
	line = ft_substr(stored, 0, i + 1);
	return (line);
}

char *update_stored(char *stored)
{
    int i;
    char *new_stored;

    i = 0;
    while (stored[i] && stored[i] != '\n')
        i++;
    if (!stored[i])
    {
        free(stored);
        return (NULL);
    }
    new_stored = ft_substr(stored, i + 1, ft_strlen(stored) - i);
    free(stored);
    return (new_stored);
}

char	*get_next_line(int fd)
{
	static char		*stored[MAX_FD];
	char			*line;
	char			*buffer;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	stored[fd] = read_and_save(fd, stored[fd], buffer);
	ft_free(buffer);
	if (!stored[fd])
		return (NULL);
	line = extract_line(stored[fd]);
	stored[fd] = update_stored(stored[fd]);
	return (line);
}