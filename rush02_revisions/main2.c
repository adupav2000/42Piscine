/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:43:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/18 14:50:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_split split (char *num, int n);
t_list *find_greater_low(t_list *index, char *num);

int main(int argc, char **argv)
{
	(void)argc;

	t_list *index;
	index = parse(argv[1]);
	print_num(index, argv[2]);
}

