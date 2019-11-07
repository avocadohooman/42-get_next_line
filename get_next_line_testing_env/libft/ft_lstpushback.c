/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:16:45 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/24 09:53:22 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstpushback(t_list **begin_list, t_list *new)
{
	t_list	*current;

	current = *begin_list;
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*begin_list = new;
}
