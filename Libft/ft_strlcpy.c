/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:26:44 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/05 11:18:19 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size <= 0)
		return (ft_strlen(src));
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dst[i] = src[i];
			i ++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
