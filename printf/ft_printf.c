/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:01:40 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/12 19:05:19 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_format(const char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_prin_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_nbr((long)va_arg(ap, int));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, void *));
	else if (specifier == 'x' || specifier == 'X')
		count += print_hex((long)va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		return (-1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while(*format)
	{
		if(*format =='%')
			count += ft_format(*++formart, ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
