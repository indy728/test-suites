/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 18:19:47 by kmurray           #+#    #+#             */
/*   Updated: 2016/12/21 11:26:00 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_base(int n, int base)
{
	size_t count;

	count = 0;
	if (base < 2)
		return (0);
	if (n < 0 && base == 10)
		count++;
	while (n / base != 0)
	{
		n = n / base;
		count++;
	}
	return (count + 1);
}
