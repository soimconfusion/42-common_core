#include "ft_printf.h"

int ft_print_nbr(int nb, int fd){
    int length;

    length = 0;
    if (nb == -2147483648)
        return (write(fd, "–2147483648", 11));
    if (nb < 0){
        length += ft_print_char('-', fd);
        nb = -nb;
    }
    if (nb > 9){
        length += ft_print_nbr(nb / 10, fd);
    }
    length += ft_print_char(((nb % 10)+'0'), fd);
    return (length);
}
//aplly logic of atoi 