/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 11:24:07 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 11:55:04 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int ft_list_size(t_list *begin_list)
{
	unsigned int i;

	i = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}


void ft_struc_swap(t_list *first, t_list *last)
{
	t_list *change;

	change = first;
	first = last;
	last = change;
}

void ft_list_reverse(t_list **begin_list)
{
	unsigned int i[4];
	t_list *first;
	t_list *last;

	i[3] = ft_list_size(*begin_list);
	i[0] = 0;
	while (i[0] < i[3] / 2)
	{
		first = *begin_list;
		last = *begin_list;
		i[1] = 0;
		while (i[1] < i[0])
		{
			first = first->next;
			i[1]++;
		}
		i[1] = 0;
		while (i[1] < i[3] - i[0])
		{
			first = first->next;
			i[1]++;
		}
		ft_struc_swap(first, last);
	}
}
