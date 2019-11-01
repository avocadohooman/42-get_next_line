/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:05:44 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/30 09:53:33 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	if (dst == src || n <= 0)
		return (NULL);
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (src_c[i] == (unsigned char)c)
		{
			dst_c[i] = src_c[i];
			return (dst + i + 1);
		}
		dst_c[i] = src_c[i];
		i++;
	}
	return (NULL);
}
