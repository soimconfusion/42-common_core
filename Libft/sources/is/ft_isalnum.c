include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c)) //vem testando como unisgned char
		return (1);
	return (0);
}

int	main (void)
{
	
}
