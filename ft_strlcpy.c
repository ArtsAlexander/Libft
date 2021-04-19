/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:31:03 by aarts             #+#    #+#             */
/*   Updated: 2021/04/19 16:58:25 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (--size && *src)
		{
			*dst = *src;
			dst++;
			src++;
		}
	}
	*dst = 0;
	return (ft_strlen(src));
}

int main()
{
	
}
