#include "libftprintf.h"

static int	ft_format(const char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_nbr((long)va_arg(ap, int));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, void *));
	else if (specifier == 'x' || sppecifier == 'X')
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
			count += write(STDOUT_FILENO, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
