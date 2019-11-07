/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:31:21 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 15:04:26 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] && haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
