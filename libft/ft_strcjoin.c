/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:06:24 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/04 16:06:38 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, int c)
{
	char	*str;
	int		i;
	int		ii;

	if (!s1 || !s2)
		return (0);
	i = 0;
	str = (char*)malloc(sizeof(char) * (ft_strclen(s1, c) +
			ft_strclen(s2, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0' && s1[i] != c)
	{
		str[i] = s1[i];
		i++;
	}
	ii = 0;
	while (s2[ii] != '\0' && s2[ii] != c)
	{
		str[i] = s2[ii];
		i++;
		ii++;
	}
	str[i] = '\0';
	return (str);
}
