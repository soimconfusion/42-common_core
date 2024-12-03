#include "libftprintf.h"

int ft_printnbr(int nb){
    char *str;
    int len;

    len = 0;
    str = ft_itoa(nb);
    len = ft_printstr(str);
    free(str); // alocação atraves da chamada de strdup em itoa
    return (len);
}