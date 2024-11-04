#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	char			*str;

	//necessario verificar que f e s nao sao nulos ?
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return NULL;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}
