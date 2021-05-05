/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:33:42 by aarts             #+#    #+#             */
/*   Updated: 2021/04/29 15:17:21 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strcat_join(char *str, char const*s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	t_len;

	t_len = 0;
	if (!s1 || !s2)
		return (NULL);
	if (s1 && s2)
	{
		t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
		str = malloc(sizeof(char) * t_len);
		if (!str)
			return (NULL);
		strcat_join(str, s1, s2);
		return (str);
	}
	return (NULL);
}
