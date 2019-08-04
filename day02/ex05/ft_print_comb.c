/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:49:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 12:53:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i, char i2, char i3)
{
	char	virgule;
	char	espace;

	virgule = ',';
	espace = ' ';
	write(1, &i, 1);
	write(1, &i2, 1);
	write(1, &i3, 1);
	if (i != (7 + 48))
	{
		write(1, &virgule, 1);
		write(1, &espace, 1);
	}
}

void	ft_print_comb(void)
{
	int i;
	int i2;
	int i3;

	i = 48;
	while (i <= 57)
	{
		i2 = i + 1;
		while (i2 <= 57)
		{
			i3 = i2 + 1;
			while (i3 <= 57)
			{
				print(i, i2, i3);
				i3++;
			}
			i2++;
		}
		i++;
	}
}
