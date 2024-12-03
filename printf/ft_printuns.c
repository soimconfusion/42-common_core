#include "libftprintf.h"

int ft_print_unsigned(unsigned int n){
    char    *nb;
    int len;

    len = 0;
    if (n < 0){
        len = ft_printc(n + 48);
    }
    else{
        nb = ft_uitoa(n);
        len = ft_printstr(nb);
        free(nb);
    }
    return (len);
}