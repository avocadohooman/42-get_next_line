/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:37:06 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 18:28:45 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i] != '\0')
		i++;
	write(fd, s, i);
	ft_putchar_fd('\n', fd);
}
