#include "libft.h"

// senao funçao ficava demasiado grande
static int	safe_free(char **split, int i, size_t buffer)
{
	int	j;

	j = 0;
	split[i] = malloc(buffer);
	if (!split)
	{
		while (j < i)
			free(split[j ++]);
		free(split);
		return (1);
	}
	return (0);
}

static int	fill(char **split, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] == c)
			i ++;
		while (s[i] !=c)
		{
			len ++;
			i ++;
		}
		if (len)
		{
			if (safe_free(split, i, len + 1))
				return (1);
			ft_strlcpy(split[i], s - len, len + 1);
		}
		i ++;
	}
	return (0);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;
	int		first;

	i = 0;
	words = 0;
	first = 1;	
	while (s[i] != '\0')
	{
		first = 1;
		while (s[i] == c)
			i ++;
		while (s[i] != c)
		{
			if (first == 1)
			{
				words ++;
				first = 0;
			}
			i ++;
		}
	}
	return (words);
}

char **ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	words = 0;
	words = count_words(s, c);
	if ( s == NULL)
		return (NULL);
	split = malloc((words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	split[words] = NULL;
	if (fill(split, s, c))
		return NULL;
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
