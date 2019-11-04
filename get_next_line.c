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
	char			buf[BUF_SIZE + 1];
	int 			ret;
	char			*tmp;
	static char		*pos[FD_MAX];

	if (fd < 0 || !line)
		return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (pos[fd] == '\0')
			pos[fd] = ft_strcdup(buf, '\n');
		else
		{
			tmp = ft_strjoin(pos[fd], buf);
			free(pos[fd]);
			pos[fd] = tmp;
		}
		if (ft_strchr(buf, '\n') > 0)
			break ;
	}
	*line = ft_strdup(pos[fd]);
	if (ret <= 0 || pos[fd] == NULL || pos[fd][0] == '\0')
		return (0);
	return (1);
}
