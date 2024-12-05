#include "ft_printf.h"

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
//istead of calling print_char we could have a aux.function str_len
//and then call directly write