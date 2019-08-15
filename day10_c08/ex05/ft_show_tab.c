/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:27:07 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/14 19:14:17 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_s_stock_str.h"

void	ft_putnbr(int nb)
{
	char c;
	long nb22;

	nb22 = nb;
	if (nb22 == 0)
		write(1, &"0", 1);
	if (nb22 < 0)
	{
		nb22 = nb22 * -1;
		write(1, &"-", 1);
	}
	if (nb22 >= 10)
	{
		ft_putnbr(nb22 / 10);
		ft_putnbr(nb22 % 10);
	}
	else if (nb22 != 0)
	{
		c = nb22 + 48;
		write(1, &c, 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		ft_putchar(str[length]);
		length++;
	}
}


void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i])
	{
		ft_putstr(par[i].str);
		write(1, &"\n", 1);
		ft_putnbr(par[i].size);
		write(1, &"\n", 1);
		ft_putstr(par[i].copy);
		write(1, &"\n", 1);
		i++;
	}
}