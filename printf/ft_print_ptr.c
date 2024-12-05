#include "ft_printf.h"

static int ft_put_hex(unsigned long nb, int fd)
{
    char *sym;
    int length = 0;

    sym = "0123456789abcdef";

    if (nb >= 16)
        length += ft_put_hex(nb / 16, fd);
    
    length += ft_print_char(sym[nb % 16], fd);
    return length;
}

int ft_print_ptr(void *ptr, int fd)
{
    int length = 0;
    unsigned long address;

    if (!ptr)
        return ft_print_str("(nil)", fd); // Handle NULL pointer

    address = (unsigned long)ptr; // Convert pointer to unsigned long
    length += ft_print_str("0x", fd); // Print "0x" prefix
    length += ft_put_hex(address, fd); // Pass 'x' for lowercase hex
    return length;
}