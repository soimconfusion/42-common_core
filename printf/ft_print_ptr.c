/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:52:41 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 16:55:35 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

static int	ft_put_hex(unsigned long nb, int fd)
{
	char	*sym;
	int		length;

	length = 0;
	sym = "0123456789abcdef";
	if (nb >= 16)
		length += ft_put_hex(nb / 16, fd);
	length += ft_print_char(sym[nb % 16], fd);
	return (length);
}

int	ft_print_ptr(void *ptr, int fd)
{
	int				length;
	unsigned long	address;

	length = 0;
	if (!ptr)
		return (ft_print_str("(nil)", fd));
	address = (unsigned long)ptr;
	length += ft_print_str("0x", fd);
	length += ft_put_hex(address, fd);
	return (length);
}
