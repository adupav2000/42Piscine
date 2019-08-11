/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:31:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/09 12:42:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int ft_is_prime(int nb)
{
	unsigned long int i[3];

	
	if (nb < 2)
		return (0);
	i[0] = 2;
	while (i[0] <= nb)
	{
		i[1] = 2;
		while (i[1] <= nb)
		{
			if ((i[0] * i[1]) == nb)
				return (0);
			if ((i[0] * i[1]) > nb)
				break;
			i[1]++;
		}
		i[0]++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(60));
	return 0;
}