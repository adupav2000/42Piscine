/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:23:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/19 18:35:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_range.c"

#include <unistd.h>

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

int	main()
{
	int **range;
	int x;

	x = ft_ultimate_range(range, 2, 666);
	int i = 0;
	printf("==%d==\n", x);
	while (i <666-2)
	{
		ft_putnbr(range[0][i]);
		printf("\n");
		i++;
	}
}


