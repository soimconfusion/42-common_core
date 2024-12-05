#include "ft_printf.h"

int ft_print_char(int c, int fd){
    return(write(fd, &c, 1));
}
//1 if sucessful, -1 if not