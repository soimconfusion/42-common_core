/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:34:02 by anferrei          #+#    #+#             */
/*   Updated: 2024/12/07 17:01:52 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_form(va_list args, const char format, int fd)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_print_char(va_arg(args, int), fd);
	else if (format == 's')
		length += ft_print_str(va_arg(args, char *), fd);
	else if (format == 'd' || format == 'i')
		length += ft_print_nbr(va_arg(args, int), fd);
	else if (format == 'u')
		length += ft_print_uns(va_arg(args, unsigned int), fd);
	else if (format == 'x' || format == 'X')
		length += ft_print_hex(format, va_arg(args, unsigned int), fd);
	else if (format == 'p')
		length += ft_print_ptr(va_arg(args, void *), fd);
	else
		length += write(fd, &format, 1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		fd;
	va_list	args;
	int		length;

	fd = 1;
	va_start(args, str);
	length = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (-1);
			length += ft_form(args, *str, fd);
			str++;
		}
		else
		{
			length += ft_print_char(*str, fd);
			str++;
		}
	}
	va_end(args);
	return (length);
}
