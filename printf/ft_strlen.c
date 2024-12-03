#include "libftprintf.c"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}
// diferença com strlen de libft size_t -> int, saber explicar pq