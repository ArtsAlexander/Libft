/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:17:07 by aarts             #+#    #+#             */
/*   Updated: 2021/04/13 18:13:44 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;

	b = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack++)
	{
		b = 0;
		while (*(haystack++ + b) == *(needle + b) && len--)
			if (!*(needle + b++ + 1))
				return ((char *)haystack + 1);
	}
	return (0);
}
