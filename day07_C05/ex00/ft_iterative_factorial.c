/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:57:35 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/12 22:12:23 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb--;
	while (nb)
		res *= nb--;
	return (res);
}
