/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:31:03 by aarts             #+#    #+#             */
/*   Updated: 2021/04/12 15:02:54 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!size)
		return(ft_strlen(src));
	while (--size)
	{
		*dst = *src;
		*dst++;
		*src++;
	}
	*dst = 0;
	return(ft_strlen(src));
}