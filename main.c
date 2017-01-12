/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:14:48 by kmurray           #+#    #+#             */
/*   Updated: 2017/01/10 13:53:30 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	get_next_line(const int fd, char **line);

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int	gnl;
		char *line;
		int fd;
		static int p = 0;

		fd = open(av[1], O_RDONLY);
		while ((gnl = get_next_line(fd, &line)) > 0)
		{
			ft_putnbr(++p);
			printf("%s\n", line);
			//printf("%d = gnl, %s was this line\n", gnl, line[0]);
		
		}
		close(fd);
	}
	return (0);
}
