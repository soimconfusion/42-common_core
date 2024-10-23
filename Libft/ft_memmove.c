/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:18:46 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/22 17:23:25 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i ++;
		}
	}
	else
	{
		while (n --)
			d[n] = s[n];
	}
	return (dest);
}
