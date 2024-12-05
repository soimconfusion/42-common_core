#include <unistd.h>  // For write
#include <stdarg.h>  // For va_list
#include "ft_printf.h"

int ft_form(va_list args, const char format, int fd)
{
    int length = 0;

    if (format == 'c') {
        length += ft_print_char(va_arg(args, int), fd);
    } else if (format == 's') {
        length += ft_print_str(va_arg(args, char *), fd);
    } else if (format == 'd' || format == 'i') {
        length += ft_print_nbr(va_arg(args, int), fd);
    } else if (format == 'u') {
        length += ft_print_uns(va_arg(args, unsigned int), fd);
    } else if (format == 'x' || format == 'X') {
        length += ft_print_hex(format, va_arg(args, unsigned int), fd);
    } else if (format == 'p') {
        length += ft_print_ptr(va_arg(args, void *), fd); // Removed unused format parameter
    } else {
        length += write(fd, &format, 1); // Print unrecognized specifier
    }
    
    return length;
}

int ft_printf(const char *str, ...)
{
    int fd = 1; // File descriptor for stdout
    va_list args;
    int length = 0;

    va_start(args, str);
    
    while (*str) {
        if (*str == '%') {
            str++;
            if (*str == '\0') {
                return -1; // Error: incomplete format specifier
            }
            length += ft_form(args, *str, fd);
            str++;
        } else {
            length += ft_print_char(*str, fd); // Print regular characters
            str++;
        }
    }
    
    va_end(args);
    return length;
}
