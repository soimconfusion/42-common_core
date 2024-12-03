#include "libftprintf"

int ft_printstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr_fd(("null", 1)); // its this necessary? edge case? 
        return (6); // why 6 not 5?
    }
    while (str[i] != '\0')
    {
        ft_putchar_fd(str[i], 1);
        i ++;
    }
    return (i);
}