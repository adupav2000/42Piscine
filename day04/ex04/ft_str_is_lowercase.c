/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:36 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 11:36:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

int	ft_str_is_lowercase(char *str)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	if (!ft_strlen(str))
		return (1);
	while (str[i] != 0)
	{
		if (str[i] < 97 || str[i] > 122)
			ret = 0;
		i++;
	}
	return (ret);
}
