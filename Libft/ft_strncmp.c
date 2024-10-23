/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:41:15 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/23 15:24:08 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && s1[i] == s2[i] && i < (n -1))
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char *str1 = "aaaaaaa";
	char *str2 = "aaaaaa ";
	int res = strncmp(str1, str2, 13);
	int resft = ft_strncmp(str1, str2, 13);
	printf( "%d  %d", res, resft);
	return (0);
}*/
