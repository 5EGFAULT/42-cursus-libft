/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:31:45 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/16 00:31:46 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	tmp = lst;
	(void)del;
	while (tmp)
	{
		new = ft_lstnew(f(tmp->content));
		new->next = tmp->next;
		tmp = tmp->next;
	}
	return (new);
}
