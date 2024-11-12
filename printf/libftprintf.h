#ifdef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h> // for the variadic functions
#include <stdio.h> // to test with original
#include <unistd.h> // write function
#include <stdlib.h> // malloc and free functions
//ft_printf
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_nbr(int nb);

//print hex
//print ptr
//others....
#endif
