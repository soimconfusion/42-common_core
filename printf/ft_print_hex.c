/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:45:57 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 16:48:15 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_print_hex(char format, unsigned int nb, int fd)
{
	const char	*x_up;
	const char	*x_low;
	int			length;

	x_up = "0123456789ABCDEF";
	x_low = "0123456789abcdef";
	length = 0;
	if (nb >= 16)
	{
		length += ft_print_hex(format, nb / 16, fd);
	}
	if (format == 'X')
		length += ft_print_char(x_up[nb % 16], fd);
	else
		length += ft_print_char(x_low[nb % 16], fd);
	return (length);
}
