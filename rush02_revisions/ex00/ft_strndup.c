/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 21:15:38 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 17:50:46 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_strnedup(char **str, unsigned int n)
{
	char			*out;
	unsigned int	i;

	if (!(out = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		out[i] = **str;
		(*str)++;
		i++;
	}
	out[i] = '\0';
	(*str)++;
	return (out);
}

char	*ft_strndup(char *src, int n)
{
	char	*dup;
	int		i;

	i = -1;
	if (!(dup = malloc(sizeof(char) * n)))
		return (NULL);
	while (++i < n)
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}
