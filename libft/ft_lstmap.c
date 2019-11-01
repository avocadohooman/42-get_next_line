/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:25:35 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/24 09:53:03 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*begin_list;

	if (lst)
	{
		new = f(lst);
		lst = lst->next;
		begin_list = new;
		while (lst)
		{
			new->next = f(lst);
			new = new->next;
			lst = lst->next;
		}
		return (begin_list);
	}
	return (NULL);
}
