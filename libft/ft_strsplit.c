/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:12:40 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 10:13:36 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check_c(char const s, char c)
{
	if (c == s)
		return (1);
	return (0);
}

static	int		ft_row_count(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(ft_check_c(str[i], c)))
			count++;
		while (str[i + 1] && !(ft_check_c(str[i], c)))
			i++;
		i++;
	}
	return (count);
}

static int		ft_rowl(char const *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] && ft_check_c(str[i], c))
		i++;
	while (str[i] && (!(ft_check_c(str[i], c))))
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**w;
	int		i;
	int		k;
	int		j;

	i = -1;
	k = 0;
	j = 0;
	if (!str || !c)
		return (0);
	if (!(w = (char**)malloc(sizeof(char*) * (ft_row_count(str, c) + 1))))
		return (NULL);
	while (++i < ft_row_count(str, c))
	{
		if (!(w[i] = (char*)malloc(sizeof(char) * (ft_rowl(&str[k], c) + 1))))
			return (NULL);
		j = 0;
		while (str[k] == c)
			k++;
		while (str[k] && !(ft_check_c(str[k], c)))
			w[i][j++] = str[k++];
		w[i][j] = '\0';
	}
	w[i] = NULL;
	return (w);
}
