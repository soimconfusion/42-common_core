/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:39:25 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/10 23:18:29 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define MAX_FD 1024

# include <unistd.h> //read()
# include <stdlib.h> //malloc() free()
# include <fcntl.h> //open() main

char	*get_next_line(int fd);
char	*ft_free(char *ptr);
char	*read_and_save(int fd, char *stored, char *buffer);
char	*extract_line(char *stored);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *init, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

typedef struct s_list
{
	int				fd;
	char			*stored;
	struct s_list	*next;
}	t_list;

#endif
