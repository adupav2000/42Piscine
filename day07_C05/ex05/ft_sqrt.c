/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:02:34 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/11 21:02:43 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int test_num;

	if (nb <= 0)
		return (0);
	test_num = 0;
	while (test_num <= 46340)
	{
		if ((test_num * test_num) == nb)
			return (test_num);
		test_num++;
	}
	return (0);
}
