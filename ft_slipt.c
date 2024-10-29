#include "libft.h"

//if allocations goes wrong free all the char ** 
//called in fill
static int	safe_malloc_free(char **res, int i, size_t buffer)
{
	
}

// if mallocs went fine : 0 and asignned in each array the words, else 1
// only calls ft_srlcpy if its not necessary the to free, in the call of safe_malloc_free
int	fill (char **res, char const s, char c) 
{

}
//count the numer of char* necessary aka words; called in split
size_t	count_words(char const *s, char c)
{

}

char	**split(char const *s, char c)
{
	size_t	words;
	char	**res;

	if ( s == NULL)
		return (NULL);
	words = 0;
	words = count_words(s, c);
	res = malloc ((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (fill(res, s, c))
		return (NULL);
	return (res);
}
