/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:52:41 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/19 18:33:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *)malloc((max - min + 1) * sizeof(int))))
		return (-1);
	i = 0;
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return ((max - min));
}
