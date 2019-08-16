/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:39:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 16:07:32 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*st;
	int		i;
	int		len;

	len = ft_strlen(src) + 1;
	st = malloc(len);
	if (st == NULL)
		return (NULL);
	while (src[i] == '\0')
	{
		st[i] = src[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}
