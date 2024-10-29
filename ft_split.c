#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	while (s[i] && s[i] != c)
		i ++;
	//nada disto pode haver mais que um char c na string
	split = malloc(sizeof(char *) * 2);
	split[0] = malloc (sizeof(char) * i);
	split[1] = malloc (sizeof(char) * ft_strlen(s) - i);
	if (!split)
		return (NULL);
	j = 0;
	while (s[j] && j < i)
	{
		split[0][j] = s[j];
		j ++;
	}
	//j ++;//saltar c?
	while (s[j])
	{
		split[1][j] = s[j];
		j ++;
	}
	return (split);
}

int	main(void)
{
	char *s = "aabaa";
	char c = 'b';
	char **res = ft_split(s, c);
	printf("%s ", res[0]);
	return (0);
}
