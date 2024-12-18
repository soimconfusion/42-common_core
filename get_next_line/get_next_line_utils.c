/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:42:29 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 17:54:29 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = 0;
	if (s1)
		len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		res[i] = s1[i];
		i ++;
	}
	while (*s2)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char const *init, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!init)
		return (NULL);
	if (start >= ft_strlen(init))
		return (ft_strdup(""));
	if (len > ft_strlen(init) - start)
		len = ft_strlen(init) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = init[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (dup - len);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
