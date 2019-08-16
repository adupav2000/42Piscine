/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:29:14 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 16:03:56 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i[3];
	int		size_malloc;
	char	*ret_val;

	ret_val = NULL;
	if (size == 0)
		return (ret_val);
	i[0] = 0;
	size_malloc = 0;
	while (i[0] <= size)
		size_malloc += ft_strlen(strs[i[0]++]);
	ret_val = malloc(size_malloc * (sizeof(char) + 1) + 1);
	i[0] = 0;
	i[2] = 0;
	while (i[0] <= size)
	{
		i[1] = 0;
		while (i[1] < ft_strlen(strs[i[0]]))
			ret_val[i[2]++] = strs[i[0]][i[1]++];
		if (i[0]++ <= size)
			ret_val[i[2]++] = *sep;
	}
	return (ret_val);
}
