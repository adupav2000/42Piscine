/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:35:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/19 14:37:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_ultimate_range.c"

int main()
{
	int *range; 
	int x;
	x = ft_ultimate_range(&range, 2, 900);
	printf("%d\n", x);
	int i = 0;
	while (range[i])
	{
		printf("%d\n", range[i++]);
	}
	
}