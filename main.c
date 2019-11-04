/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 09:59:20 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/04 17:57:23 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int				fd1;
	int				fd2;
	int				gnl;
	char			*line;

	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	if (argc > 5)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	
	/*if (fd1 == -1)
	{
		ft_putstr("File name missing.\n");
		return (-1);
	}*/
	
	//get_next_line(fd1, &line);
	//printf("%s\n", line);
	

	if (argc == 2)
	{

		while ((gnl = get_next_line(fd1, &line)) > 0)
		{
			printf("%d\n", gnl);
			printf("%s\n", line);
		}
	}
	
	if (argc > 2)
	{

		while ((gnl = get_next_line(fd2, &line)) > 0)
		{
			printf("%d\n", gnl);
			printf("%s\n", line);
			gnl = get_next_line(fd1, &line);
			printf("%d\n", gnl);
			printf("%s\n", line);
		}
		/*while ((gnl = get_next_line(fd1, &line)) > 0)
		{
			printf("%d\n", gnl);
			printf("%s\n", line);
		}
		printf("%d\n", gnl);
		if (argc >= 3)
		{
			while ((gnl = get_next_line(fd2, &line)) > 0)
			{
				printf("%d\n", gnl);
				printf("%s\n", line);
			}
			printf("%d\n", gnl);
		}*/
	}
	if (close(fd1) == -1)
	{
		ft_putstr("close() failed\n");
	}
	return (0);
}
