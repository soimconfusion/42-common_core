#include "libftprintf.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) *(ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}