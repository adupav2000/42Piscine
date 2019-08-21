/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:29:14 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/21 12:16:16 by adu-pavi         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		i2;
	char	*ret;

	ret = dest;
	i2 = -1;
	i = ft_strlen(ret);
	while (src[++i2])
	{
		ret[i] = src[i2];
		i++;
	}
	i--;
	while (ret[++i])
	{
		ret[i] = '\0';
	}
	return (ret);
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
	if (!(ret_val = (char *)malloc(size_malloc * (sizeof(char) + 1) + 1)))
		return (0);
	i[0] = 0;
	while (i[0] <= size)
	{
		ft_strcat(ret_val, strs[i[0]]);
		if (i[0] + 1 <= size)
			ft_strcat(ret_val, sep);
		i[0]++;
	}
	return (ret_val);
}
