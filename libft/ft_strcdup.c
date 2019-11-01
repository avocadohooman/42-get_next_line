/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 14:11:17 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/01 14:32:29 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *src, int c)
{
	int		i;
	char	*dst;
	int		len;

	len = 0;
	while (src[len] != c)
		len++;
	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
