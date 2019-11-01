/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:31:21 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 13:07:16 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = i;
		k = 0;
		while (haystack[j] == needle[k] && haystack[j] && j < n)
		{
			j++;
			k++;
			if (needle[k] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
