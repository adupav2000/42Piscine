/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:22:51 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 17:50:16 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int
	main(int ac, char **av)
{
	t_list *index;

	if (ac == 2)
	{
		if (!(index = parse("numbers.dict")))
			return (-1);
		print_num(index, av[1]);
	}
	if (ac == 3)
	{
		if (!(index = parse(av[1])))
			return (-1);
		print_num(index, av[2]);
	}
	else
	{
		return (-1);
	}
}
