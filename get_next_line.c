/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:34:44 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/01 17:31:51 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <stdio.h> //delete before submitting

int		get_next_line(const int fd, char **line)
{
	char		buf[BUF_SIZE + 1];
	int 		ret;
	char		*tmp;
	int			i;

	i = 0;
	if (fd < 0 || !line)
		return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (i == 0)
		{
			*line = ft_strcdup(buf, '\n');
		}
		else 
		{
			we need to use strjoin and a tmp string to store each letter.
			strjoin to append each byte to the previos one until we reach \n
			(this is not necessary if byte size is big enough, but not with only 1 byte in the BUF)
		}
	}
	return (0);
}
