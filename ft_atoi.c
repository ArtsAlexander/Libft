/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:30 by aarts             #+#    #+#             */
/*   Updated: 2021/04/21 16:01:06 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\r'
		|| c == '\n' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_check(const char *str)
{
	int	i;

	i = 0;
	while (ft_space(str[i]) == 1)
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
		i++;
	if ((str[i] >= '0') && (str[i] <= '9'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	a;

	sign = 1;
	a = 0;
	while (ft_check(str) == 0)
		return (0);
	while (ft_space(*str) == 1)
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
		str++;
	str--;
	while ((*str >= '0') && (*str <= '9'))
	{
		a += (*str - '0') * sign;
		str--;
		sign *= 10;
	}
	return (a);
}
