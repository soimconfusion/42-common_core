/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:55:15 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/05 14:44:31 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc((sizeof(char) * (ls1 + ls2 + 1)));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ls1 + 1);
	ft_strlcat(join, s2, ls1 + ls2 + 1);
	join[ls1 + ls2] = '\0';
	return (join);
}
