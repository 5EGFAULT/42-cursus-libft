/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:50:03 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/15 23:50:04 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst)
		return ;
	tmp1 = *lst;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		ft_lstdelone(tmp2, del);
	}
	free(lst);
}
