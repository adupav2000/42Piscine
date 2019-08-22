/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:36:47 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 13:44:46 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_string_tab.c"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	(void)argc;

	char **t = (char **)argv;
	ft_sort_string_tab(t);
	int i = 0;
	while (t[i])
	{
		printf("%s\n", t[i++]);
	}
	return (0);
}