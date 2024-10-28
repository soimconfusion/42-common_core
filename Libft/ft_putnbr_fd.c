#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483647)
		ft_putstr_fd("2147483647", fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
		n = -n;
	else if ( n > 9)
		ft_putnbr_fd(n / 10, fd);
		ft_char_fd(n % 10 + '0', fd);
	else
		ft_putchar_fd(n + '0', fd);
}
