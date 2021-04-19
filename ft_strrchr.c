/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:14:32 by aarts             #+#    #+#             */
/*   Updated: 2021/04/19 16:29:15 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	char *pointer;
// 	char	*t;

// 	pointer = (char *)s;
// 	t = (char *)s;
// 	while (*pointer)
// 	{
// 		if (*pointer == c)
// 			t = (char *)pointer;
// 		pointer++;
// 	}
// 	if (*pointer == c)
// 		return ((char *)pointer);
// 	return (t);
// }

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		s_len;

	s_len = ft_strlen(s);
	pointer = (char *)s + s_len - 1;
	if (c == '\0')
	{
		pointer++;
		return (pointer);
	}
	while (s_len != 0)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		s_len--;
		pointer--;
	}
	return (NULL);
}
