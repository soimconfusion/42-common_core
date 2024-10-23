/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:37:45 by anferrei          #+#    #+#             */
/*   Updated: 2024/10/23 15:43:42 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		i -= 32;
	return ((unsigned char)i);
}
/*
//if not uns char behaviour undefined
int	main (void)
{
	char ch = toupper(125);
	char ch_ft = ft_toupper('x');
	printf ("%c", ch);
	printf ("%c", ch_ft);
}*/
