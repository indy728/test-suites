/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:14:48 by kmurray           #+#    #+#             */
/*   Updated: 2017/01/14 19:08:08 by kmurray          ###   ########.fr       */
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
		int tab[ac];
//		static int p = 0;
		int i = 0;
		int n = 1;

		while (i < ac)
		{
			tab[i] = open(av[i + 1], O_RDONLY);
			++i;
		}
		i = 0;
		while (n > 0)
		{
			n = 0;
			while (i < ac)
			{
				if ((gnl = get_next_line(tab[i], &line)) > 0)
				{
					printf("%d\t", tab[i]);
					printf("%s\n", line);
					++n;
				}
				++i;
			}
			i = 0;
		}
		while (i < ac)
			close(tab[i++]);	
	}
	return (0);
}
