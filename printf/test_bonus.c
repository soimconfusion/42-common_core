#include <stdio.h>
#include "ft_printf.h" // Replace with the actual header file for your ft_printf

int main(void)
{
    int orig;
    int ft;

    // Testing field width
    orig = printf("Orig: %10d\n", 42);
    ft = ft_printf("FT  : %10d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing left alignment (- flag)
    orig = printf("Orig: %-10d\n", 42);
    ft = ft_printf("FT  : %-10d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing zero padding (0 flag)
    orig = printf("Orig: %010d\n", 42);
    ft = ft_printf("FT  : %010d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing precision for integers
    orig = printf("Orig: %.5d\n", 42);
    ft = ft_printf("FT  : %.5d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing precision for strings
    orig = printf("Orig: %.5s\n", "Hello, world!");
    ft = ft_printf("FT  : %.5s\n", "Hello, world!");
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing # flag for hex
    orig = printf("Orig: %#x\n", 255);
    ft = ft_printf("FT  : %#x\n", 255);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing space flag
    orig = printf("Orig: % d\n", 42);
    ft = ft_printf("FT  : % d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing + flag
    orig = printf("Orig: %+d\n", 42);
    ft = ft_printf("FT  : %+d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing combinations: field width, precision, and flags
    orig = printf("Orig: %+10.5d\n", 42);
    ft = ft_printf("FT  : %+10.5d\n", 42);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    // Testing for edge cases
    orig = printf("Orig: %#+10.0x\n", 0);
    ft = ft_printf("FT  : %#+10.0x\n", 0);
    printf("Return values: Orig = %d, FT = %d\n\n", orig, ft);

    return 0;
}