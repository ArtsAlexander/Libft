/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarts <aarts@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 18:48:24 by aarts             #+#    #+#             */
/*   Updated: 2021/05/12 16:51:51 by aarts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
#if 0
#include <stdio.h>

int main(int argc, char **argv)
{
	int		i;
	t_list	*tmp;
	t_list	*add;
	t_list	*original;
	
	original = ft_lstnew("et je suis trop cool");
	if (!original)
		return (1);
	i = 1;
	while (i < argc)
	{
		add = ft_lstnew(argv[i]);
		if (!add)
			return (1);
		ft_lstadd_front(&original, add);
		i++;
	}
	i = 0;
	tmp = original;
	while (tmp)
	{
		printf("%d tmp %p tmp next %p %s\n", i, tmp, tmp->next, (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
}
#endif