/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:59:11 by aarts             #+#    #+#             */
/*   Updated: 2021/04/12 14:03:37 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp;

	temp = s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return(temp)
		*temp++;
	}
	return(0);
}