/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 21:38:45 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/29 15:06:52 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s) - 1;
	while (*s && ft_isspace(s[i]))
		i++;
	while (len >= 0 && ft_isspace(s[len]))
		len--;
	if (i >= len)
		return ((str = ft_strnew(0)));
	if (!(str = (char*)malloc(sizeof(char) * (len - i + 2))))
		return (NULL);
	j = 0;
	while (i <= len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
