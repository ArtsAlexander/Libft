/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:06:48 by aarts             #+#    #+#             */
/*   Updated: 2021/05/04 19:44:09 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*string1;
	unsigned const char	*string2;

	string1 = (unsigned const char *)s1;
	string2 = (unsigned const char *)s2;
	while (n--)
	{
		if (*string1 == *string2)
		{
			string1++;
			string2++;
		}
		else
			return (*string1 - *string2);
	}
	return (0);
}
