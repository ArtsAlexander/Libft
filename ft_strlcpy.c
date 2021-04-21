/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:31:03 by aarts             #+#    #+#             */
/*   Updated: 2021/04/21 16:51:08 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (0);
	while (i < dstsize - 1 && src[i] && dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = 0;
	return (ft_strlen(src));
}
