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

static t_list *l_stored;

static char	*ft_free(char *ptr)
{
	if (ptr)
	{
		free(ptr);
	}
	return (NULL);
}

static char	*read_and_save(int fd, char *stored, char *buffer)
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
		{
			break ;
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

static char	*extract_line(char *stored)
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

static t_list	*find_create_nd(int fd)
{
	t_list	*node;
	t_list	*new_node;

	node = l_stored;
	while (node)
	{
		if (node->fd == fd)
			return (node);
		if (!node->next)
			break ;
		node = node->next;
	}
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->fd = fd;
	new_node->stored = NULL;
	new_node->next = NULL;
	if (!l_stored)
		l_stored = new_node;
	else
		node->next = new_node;
	return (new_node);
}

char	*get_next_line(int fd)
{
	t_list			*node;
	char			*line;
	char			*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	node = find_create_nd(fd);
	if (!node)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = read_and_save(fd, node->stored, buffer);
	ft_free(buffer);
	if (!line)
		return (NULL);
	node->stored = extract_line(line);
	return (line);
}
