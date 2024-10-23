/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:05:14 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/22 18:12:17 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((unsigned char *) s + i);
		i ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "baaa";
	char *strf = "baaa";
	char *res = (char *)memchr(str, 'a', 2);
	char *resft = (char *)ft_memchr(strf, 'a', 3);
	printf ("%s %s", res, resft);
	return (0);
}*/
