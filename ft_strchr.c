/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:06:39 by aarts             #+#    #+#             */
/*   Updated: 2021/04/21 16:21:32 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == (char) c)
			return (pointer);
		pointer++;
	}
	if (*pointer == 0 && (char) c == 0)
		return (pointer);
	return (0);
}
