/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 09:40:19 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 17:52:22 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int
	compare(char *nb1, char *nb2)
{
	int i;
	int n1l;
	int n2l;

	i = 0;
	n1l = ft_strlen(nb1);
	n2l = ft_strlen(nb2);
	if (n1l != n2l)
		return (n1l > n2l ? 1 : 0);
	while (nb1[i] && nb2[i])
	{
		if (nb1[i] < nb2[i])
			return (0);
		if (nb1[i] > nb2[i])
			return (1);
		i++;
	}
	return (2);
}

t_list
	*find_greater_low(t_list *index, char *num)
{
	t_list *save;

	save = index;
	while (index)
	{
		if (compare(index->nbr, save->nbr) && compare(num, index->nbr))
			save = index;
		index = index->next;
	}
	return (save);
}

t_split
	split(char *num, int n)
{
	t_split	parts;

	parts.left = ft_strndup(num, n);
	parts.right = num + n;
	return (parts);
}

void
	write_output(t_list *index, char *nb, char *value)
{
	static int iteru;

	if (iteru != 0)
		write(1, " ", 1);
	else if (ft_strlen(nb) > 2)
	{
		ft_putstr(find_greater_low(index, "1")->value);
		write(1, " ", 1);
	}
	ft_putstr(value);
	iteru++;
}

int
	print_num(t_list *index, char *num)
{
	t_split parts;
	t_list	*greater;

	while (*num == '0')
		num++;
	if (!*num)
		return (0);
	greater = find_greater_low(index, num);
	if (compare(greater->nbr, num) != 2)
	{
		parts = split(num, ft_strlen(num) - ft_strlen(greater->nbr) + 1);
		if (ft_strlen(num) != 2)
			print_num(index, parts.left);
	}
	write_output(index, num, greater->value);
	if (compare(greater->nbr, num) != 2)
		print_num(index, parts.right);
	return (0);
}
