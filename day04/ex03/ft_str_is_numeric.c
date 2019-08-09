/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 17:02:15 by adu-pavi         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	if (!ft_strlen(str))
		return (1);
	while (str[i] != 0)
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}
