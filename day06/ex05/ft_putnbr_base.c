/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 23:43:57 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 23:48:33 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_rev_int_tab(int *tab, int size)
{
	int extract;
	int i;

	i = 0;
	while (i < (size - i))
	{
		extract = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = extract;
		i++;
	}
}

int		check_base(char *base)
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

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		write(1, &str[length], 1);
		length++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i[7];
	char	str[256];
	char	result[256];

	i[0] = 0;
	i[2] = ft_strlen(base);
	if (check_base(base))
	{
		i[1] = nbr < 0 ? 45 : 0;
		while (nbr)
		{
			i[4] = nbr < 0 ? (nbr % i[2]) * -1 : (nbr % i[2]);
			str[i[0]] = base[i[4]];
			nbr = nbr / i[2];
			i[0]++;
		}
		i[0] = 0;
		if (i[1])
			write(1, &i[1], 1);
		while (str[ft_strlen(str) - 1 - i[0]])
			write(1, &str[ft_strlen(str) - 1 - i[0]++], 1);
	}
}
