/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:07:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/12 15:16:26 by adu-pavi         ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\r' || base[i] == ' ' || base[i] == '\f')
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

int	is_in_base(char letter, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base2(int status, char *str, char *base)
{
	int i1;
	int i2;
	int result;

	result = 0;
	i1 = status;
	while (str[i1])
	{
		if (!is_in_base(str[i1], base))
			return (0);
		i2 = 0;
		while (!(str[i1] == base[i2]))
			i2++;
		result = (result * ft_strlen(base)) + i2;
		i1++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int i1;
	int result;
	int pos;
	int status;

	i1 = 0;
	result = 0;
	pos = 1;
	status = 0;
	if (!check_base(base))
		return (0);
	while (str[i1] == '\t' || str[i1] == '\n' || str[i1] == '\v')
		i1++;
	while (str[i1] == '\r' || str[i1] == ' ' || str[i1] == '\f')
		i1++;
	while (str[i1] == '-' || str[i1] == '+')
	{
		if (str[i1] == '-')
			pos *= -1;
		status = i1 + 1;
		i1++;
	}
	result = ft_atoi_base2(status, str, base);
	return (result * pos);
}
