/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:08:50 by aarts             #+#    #+#             */
/*   Updated: 2021/04/13 19:10:47 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(*s1 && *s2 && n--)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_strncmp("Hi my name is Jeff", "Hi my name is jeff", 20));
	printf("%d", strncmp("Hi my name is Jeff", "Hi my name is jeff", 20));
}
