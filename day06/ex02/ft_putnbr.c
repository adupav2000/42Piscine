/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:30:16 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 15:28:18 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr1(int nb)
{
	int		divider;
	int		extract;
	int		check;
	char	dec_val;

	check = 0;
	divider = 1000000000;
	while (divider >= 1)
	{
		extract = nb / divider;
		nb = nb - extract * divider;
		if (extract > 0 || check == 1)
		{
			check = 1;
			dec_val = extract + 48;
			write(1, &dec_val, 1);
		}
		divider = divider / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			nb = nb * -1;
		}
		ft_putnbr1(nb);
	}
}
