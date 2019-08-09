/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:26:59 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/06 20:26:35 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i_max;
	int i;
	int ret;
	int s;

	i_max = size - ft_strlen(dest);
	i = 0;
	ret = ft_strlen(dest) + ft_strlen(src) - 1;
	while (src[i] && i < i_max)
	{
		s = ft_strlen(dest) + 1;
		dest[s] = src[i];
		i++;
	}
	return (ret);
}
