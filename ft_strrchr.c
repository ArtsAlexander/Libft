/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:14:32 by aarts             #+#    #+#             */
/*   Updated: 2021/04/14 15:17:43 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char *t;
	
	while (*s)
	{
		if (*s == c)
			t = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (t);
}
