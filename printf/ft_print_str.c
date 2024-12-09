/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:56:35 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 16:56:37 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_print_str(char *str, int fd)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	if (!str)
		return (ft_print_str("(null)", fd));
	while (str[i])
	{
		ft_print_char(str[i], fd);
		length++;
		i ++;
	}
	return (length);
}
