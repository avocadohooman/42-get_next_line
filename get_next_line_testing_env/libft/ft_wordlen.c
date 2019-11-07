/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:07:22 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/04 16:09:43 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] && ft_checkc(str[i], c))
		i++;
	while (str[i] && (!(ft_checkc(str[i], c))))
	{
		len++;
		i++;
	}
	return (len);
}
