/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:38:59 by aarts             #+#    #+#             */
/*   Updated: 2021/05/05 19:17:12 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int		size;
	long	nb;

	nb = n;
	size = 1;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ft_size(n) + 1);
	if (!str)
		return (NULL);
	nbr = n;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[ft_size(n)] = '\0';
	while (nbr >= 10)
	{
		str[ft_size(n) - ++i] = (nbr % 10) + 48;
		nbr /= 10;
	}
	str[ft_size(n) - ++i] = nbr + 48;
	return (str);
}
