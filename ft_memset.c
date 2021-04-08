/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:00:15 by aarts             #+#    #+#             */
/*   Updated: 2021/04/08 15:00:46 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n);
{
	int i;
	unsigned char *dest

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return(dest);
}
