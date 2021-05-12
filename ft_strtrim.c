/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:53:11 by aarts             #+#    #+#             */
/*   Updated: 2021/05/12 18:41:40 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		str_start;
	size_t		str_size;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && char_in_set(s1[i], set))
		i++;
	str_start = i;
	i = ft_strlen(s1) - 1;
	while ((int)i >= 0 && char_in_set(s1[i], set))
		i--;
	str_size = 1;
	if (str_start != i && *s1)
		str_size = (i - str_start) + 1;
	return (ft_substr(s1, str_start, str_size));
}
