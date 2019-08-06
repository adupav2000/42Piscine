/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:06:55 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/06 15:21:05 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		i2;
	char				*ret;

	ret = dest;
	i2 = 0;
	i = ft_strlen(ret);
	while (src[i2] && i2 <= nb)
	{
		ret[i] = src[i2];
		i++;
		i2++;
	}
	i--;
	while (ret[++i])
	{
		ret[i] = '\0';
	}
	return (ret);
}
