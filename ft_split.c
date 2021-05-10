/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:09:18 by aarts             #+#    #+#             */
/*   Updated: 2021/05/10 14:46:05 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_malloc(char **tab)
{
	unsigned int	i;
	
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return(NULL);
}

static unsigned int	word_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;
	
	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] && s[i] == c)
				i++;
			continue;
		}
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

static void	next_word(char **next_str, unsigned int *next_len, char c)
{
	unsigned int i;

	*next_str += *next_len;
	*next_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	next_len;
	unsigned int	i;
	unsigned int	words;
	char			**tab;
	char			*next_str;
	
	if (!s)
		return(NULL);
	words = word_count(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return(NULL);
	i = 0;
	next_str = (char *)s;
	next_len = 0;
	while (i < words)
	{
		get_next_str(&next_str, &next_len, c);
		tab[i] = malloc(sizeof(char) * (next_len + 1));
		if (!tab[i])
			return(free_malloc(tab));
		ft_strlcpy(tab[i], next_str, next_len + 1);
		i++;
	}
	tab[i] = NULL;
	return(tab);
}
