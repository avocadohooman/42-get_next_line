/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 09:59:20 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/01 17:26:10 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int				fd;
	int				gnl;
	char			*line;

	line = NULL;
	fd = open(argv[1], O_RDONLY);
	if (fd > 3)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (fd == -1)
	{
		ft_putstr("File name missing.\n");
		return (-1);
	}
	while ((gnl = get_next_line(fd, &line)))
	{
		printf("%d\n", gnl);
	}
	printf("%s\n", line);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
	}
	return (0);
}
