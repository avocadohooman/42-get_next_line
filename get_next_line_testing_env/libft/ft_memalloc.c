/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 08:50:43 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 15:49:27 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	mem = (char*)malloc(sizeof(char) * (size));
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
