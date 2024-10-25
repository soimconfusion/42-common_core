/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:27:10 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/25 16:02:01 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j ++;
		}
		i ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	char *ptrn;
	char *ptrb;
	ptr = ft_strnstr(largestring, smallstring, 11);
	ptrn = ft_strnstr(largestring, smallstring, 4);
	ptrb = ft_strnstr(largestring, "\0", 11);
	printf("%s %s %s", ptr, ptrn, ptrb);
}*/
