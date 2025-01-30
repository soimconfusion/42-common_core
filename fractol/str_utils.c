#include "fractol.h"

//!!istead of having this file a can call the libft

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}
void    ft_putstr_fd(char *str, int fd)
{
    if (str == NULL || fd <0)
        return ;
    write(fd, str, ft_strlen(str));
}

int ft_strncmp(char *s1, char *s2, int len)
{
    if (s1 == NULL || s2== NULL || len <= 0)
        return (0);
     while(len > 0 && *s1 == *s2 && (*s1 || *s2))
     {
        ++s1;
        ++s2;
        --len;
     }
     return (*s1- *s2);
}
