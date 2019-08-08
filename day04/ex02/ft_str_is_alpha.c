/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:56:41 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 12:56:32 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	if (!ft_strlen(str))
		return (1);
	while (str[i] != 0)
	{
		if (!((str[i] < 91 && str[i] > 64) || (str[i] < 123 && str[i] > 96)))
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}
