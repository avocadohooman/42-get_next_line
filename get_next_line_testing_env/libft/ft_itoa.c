/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:22:03 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 18:24:02 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	int		neg;
	long	tmp;

	neg = 0;
	tmp = n;
	if (n < 0)
	{
		tmp *= -1;
		neg = 1;
	}
	n_len = ft_countdigit(n);
	if (!(str = ft_strnew(n_len + neg)))
		return (NULL);
	str[n_len + neg] = '\0';
	while (n_len)
	{
		n_len--;
		str[n_len + neg] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
