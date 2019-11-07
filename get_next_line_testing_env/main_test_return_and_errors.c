/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_return_and_errors.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:55:56 by tdawson           #+#    #+#             */
/*   Updated: 2019/11/06 10:08:51 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	//int		ret;
	char	*line;

	fd = 0;
	line = NULL;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		for (int i = 0; i < 8; i++)
			ft_putnbr(get_next_line(fd, &line));
	}

	ft_putchar('\n');
	ft_putnbr(get_next_line(1, NULL));
	ft_putnbr(get_next_line(0, NULL));
	ft_putnbr(get_next_line(1000, NULL));
	ft_putnbr(get_next_line(-1, NULL));

	ft_putnbr(get_next_line(1000, &line));
	ft_putnbr(get_next_line(-1, &line));
	ft_putnbr(get_next_line(-1000, &line));

	ft_putnbr(get_next_line(42, &line));
	return (0);
}

