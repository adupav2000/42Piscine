/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 12:52:19 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/09 13:00:49 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	puissance(int nb, int mult, int fois)
{
	int i;

	i = 1;
	while (i++ < fois)
		nb = nb * mult;
	return (nb);
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

int	ft_atoi(char *str)
{
	int pos;
	int i;
	int result;

	pos = 1;
	result = 0;
	i = 0;
	while (is_white_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * pos);
}
