/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:08:50 by aarts             #+#    #+#             */
/*   Updated: 2021/04/19 16:42:51 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 && !s2)
		return (0);
	while (n--)
	{
		if (*s1 == *s2 && s1 && s2)
		{
			s1++;
			s2++;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
