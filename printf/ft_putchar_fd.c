#include "libftprintf"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

//used in printstr