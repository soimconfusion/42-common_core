/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:56:58 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 16:57:40 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_print_uns(unsigned int nb, int fd)
{
	unsigned int	length;

	length = 0;
	if (nb > 9)
	{
		length = ft_print_uns(nb / 10, fd);
	}
	length += ft_print_char((nb % 10) + '0', fd);
	return (length);
}
