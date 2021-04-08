/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:53:49 by aarts             #+#    #+#             */
/*   Updated: 2021/04/08 16:22:30 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n--)
		*dest++ = *source++;
	return(dst);
}
