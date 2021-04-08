/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:24:33 by aarts             #+#    #+#             */
/*   Updated: 2021/04/08 14:11:47 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	int u;
	void *temp;

	i = 0;
	u = n;
	while (n > 0)
	{
		*temp = *src;
		*temp++;
		*src++;
		n--;
	}
	n = u;
	while (n > 0)
		*dest = *temp;
		*dest++;
		*temp++;
		n--;
	}
	
	
	return(dst);
}