/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:24:33 by aarts             #+#    #+#             */
/*   Updated: 2021/04/13 15:47:58 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == 0)
		return (0);
	if (src <= dst)
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
