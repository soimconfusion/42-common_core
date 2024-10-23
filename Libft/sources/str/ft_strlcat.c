#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	while(*src  && i + 1 < size)
	{
		dst[i] = *src;
		src ++;
		i ++;
	}
	dst[i] = '\0';
	return(ft_strlen(dst));
}
