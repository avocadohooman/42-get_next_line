/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:50:24 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/01 14:14:05 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	int		i;
	char	*dst;

	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (src[i] != '\0' && n > 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	dst[i] = '\0';
	return (dst);
}
