/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:03:36 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/25 16:34:13 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (j > i && ft_strrchr(set, s1[j - 1]))
		j --;
	cp = malloc (j - i + 1);
	if (!cp)
		return (NULL);
	ft_strlcpy(cp, s1 + i, j - i + 1);
	return (cp);
}
/*
int	main(void)
{
	char *s1 = "aaaaabzasaadg";
	char *set = "basdf";
	char * res = ft_strtrim(s1, set);
	printf("%s ", res);
	return (0);
}*/