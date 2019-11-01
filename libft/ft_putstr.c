/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:49:52 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 18:28:24 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *c)
{
	int i;

	if (!c)
		return ;
	i = 0;
	while (c[i] != '\0')
		i++;
	write(1, c, i);
}