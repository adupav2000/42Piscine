/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:52:55 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/19 18:31:28 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split.c"
int main(int argc, char **argv)
{
	(void)argc;
	int i = 0;
	char **s = ft_split(argv[1], argv[2]);
	ft_putstr("--%d\n", count_words(argv[1], argv[2]));
}
