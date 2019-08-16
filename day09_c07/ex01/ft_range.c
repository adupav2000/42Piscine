/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:53:44 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 16:01:42 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *list;
	int size;
	int i;

	list = 0;
	size = max - min;
	if (size <= 0)
		return (list);
	list = malloc(size * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		list[i] = min + i;
		i++;
	}
	return (list);
}
