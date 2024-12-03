#include "libftprintf.h"

int	ft_form(va_list args, const char format)
{
	int	length;

	length = 0;
	if(format == 'c'){
		length += ft_printchar(va_arg(args, int));
	}
	else if (format == 's'){
		length += ft_printstr(va_args(args, char *));
	}
	else if (format == 'd' || format == 'i'){
		length += ft_printnbr(va_args(args, int));
	}
	else if (format == 'u'){
		length += ft_print_uns(va_args(args, unsigned int));
	}
	else if (format == 'x' || format == 'X'){
		length += ft_print_hex(va_args(args, unsigned int), form);
	}
	else if (format == 'p'){

	}
	else if (format == '%'){
		length += ft_printc('%');
	}
	return (length);

}
// handles the format specifier in the format string
// va_args retrieves the next args int the va_list


int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	int	length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0'){
		if(str[i] == '%'){
			length += ft_form(args, str[i +1]);
			i ++;
		}
		else
			length += ft_printc(str[i]); // bonus entra nesta parte...
		i ++;
	}
	va_end(args);
	return(length);
}
//va_start point to the first variable arg va_end(args) cleans va_list (no more memory allocatte?)