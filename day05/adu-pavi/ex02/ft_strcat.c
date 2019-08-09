/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:50:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/07 12:41:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
