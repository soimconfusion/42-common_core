/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:24:21 by anferrei          #+#    #+#             */
/*   Updated: 2024/11/05 15:18:30 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;
	int		in_w;

	i = 0;
	words = 0;
	in_w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!in_w)
			{
				words++;
				in_w = 1;
			}
		}
		else
			in_w = 0;
		i ++;
	}
	return (words);
}

static size_t	get_next_word(const char *s, char c, const char **start_w)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	*start_w = &s[i];
	while (s[i] && s[i] != c)
	{
		len ++;
		i ++;
	}
	return (len);
}

static int	fill_split(char **split, const char *s, char c)
{
	const char	*start_w;
	size_t		len;
	int			i;

	i = 0;
	while (*s)
	{
		len = get_next_word(s, c, &start_w);
		if (len > 0)
		{
			split[i] = malloc(sizeof(char) * (len + 1));
			if (!split[i])
			{
				free_split(split);
				return (1);
			}
			ft_strlcpy(split[i], start_w, len + 1);
			i ++;
		}
		s = start_w + len;
	}
	split[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	if (word_count == 0)
	{
		split[0] = NULL;
		return (split);
	}
	if (fill_split(split, s, c))
		return (NULL);
	return (split);
}

/*
int	main(void)
{
	char *s = "aabaa";
	char c = 'b';
	char **res = ft_split(s, c);
	printf("%s ", res[0]);
	return (0);
}*/
