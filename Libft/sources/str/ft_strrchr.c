/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:40:54 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/22 17:40:59 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && s[i] != (char)c)
		i --;
	if (s[i] == (char)c || !c)
		return ((char *)s + i);
	return (NULL);
}
