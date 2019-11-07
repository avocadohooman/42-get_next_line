/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:19:12 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 17:20:53 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	c;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	len = len - 1;
	while (str[i] != '\0' && i < len)
	{
		c = str[len];
		str[len] = str[i];
		str[i] = c;
		len--;
		i++;
	}
	return (str);
}
