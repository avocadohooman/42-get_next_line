/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:23:04 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 13:54:52 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmps1;
	unsigned char	*tmps2;

	if ((!s1 && !s2) || n <= 0)
		return (0);
	i = 0;
	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tmps1[i] != tmps2[i])
			return ((int)(tmps1[i] - tmps2[i]));
		i++;
	}
	return (0);
}
