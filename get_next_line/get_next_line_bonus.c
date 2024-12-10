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
#include <limits.h>

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
			return (NULL);
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
	char	*updated;
	int		i;

	i = 0;
	while (stored[i] && stored[i] != '\n')
		i++;
	if (!stored[i])
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
	line = ft_strdup(stored[fd]);
	stored[fd] = extract_line(stored[fd]);
	return (line);
}
