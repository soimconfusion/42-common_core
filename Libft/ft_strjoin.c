/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:55:15 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/25 15:22:13 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;
	int		ls1;
	int		ls2;

	i = 0;
	j = 0;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	join = (char *)malloc((sizeof(char) * (ls1 + ls2 + 1)));
	if (!join)
		return (NULL);
	while (i < ls1)
	{
		join[i] = s1[i];
		i++;
	}
	while (j < ls2)
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
/*
int	main(void)
{
	char *s1 = "aa";
	char *s2 = "";
	char *s3 = "kk";

	printf("%s ",ft_strjoin(ft_strjoin(s1, s3), s2));
	return (0);
}*/
