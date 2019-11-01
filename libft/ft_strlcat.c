/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:30:37 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/30 09:49:39 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i] && i < size)
		i++;
	if (s1[i] == '\0')
	{
		while (s2[j] && i < size - 1)
		{
			s1[i] = s2[j];
			i++;
			j++;
		}
		s1[i] = '\0';
	}
	while (s2[j])
	{
		i++;
		j++;
	}
	return (i);
}
