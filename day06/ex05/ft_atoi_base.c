/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:07:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/09 15:53:37 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

int	check_base(char *base)
{
	int i;
	int j;
	int base_num;

	base_num = ft_strlen(base);
	if (base_num == 0 || base_num == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_white_space(char x)
{
	if (x == '\t')
		return (1);
	if (x == '\n')
		return (1);
	if (x == '\v')
		return (1);
	if (x == '\f')
		return (1);
	if (x == '\r')
		return (1);
	if (x == ' ')
		return (1);
	return (0);
}


int	ft_atoi_base(char *str, char *base)
{
	int i1;
	int i2;
	int result;

	i1 = 0;
	result = 0;
	if (check_base(base))
	{
		while (str[i1])
		{
			i2 = 0;
			while (!(str[i1] == base[i2]))
				i2++;
			result = (result * ft_strlen(base)) + i2;
			i1++;
		}
	}
	return (result);
}
