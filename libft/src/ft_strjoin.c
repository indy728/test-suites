/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:57:20 by kmurray           #+#    #+#             */
/*   Updated: 2017/01/14 16:54:51 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	get_lengths(char *s1, char *s2, size_t *len1, size_t *len2)
{
	if (s1 == NULL)
		*len1 = 0;
	else
		*len1 = ft_strlen(s1);
	if (s2 == NULL)
		*len2 = 0;
	else
		*len2 = ft_strlen(s2);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;
	size_t	len1;
	size_t	len2;

	i = 0;
	j = 0;
	get_lengths((char *)s1, (char *)s2, &len1, &len2);
	if (len1 + len2 == 0)
		return (NULL);
	join = (char *)malloc(len1 + len2 + 1);
	if (!join)
		return (NULL);
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
