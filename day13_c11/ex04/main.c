/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:15:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 18:20:47 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_sort.c"

int main(int argc, char const *argv[])
{
	int *i = {1, 2, 3, 4, 3, 4, 5, 6 };
	int *i1= {1, 2, 3, 4, 5, 6, 7, 8 };
	int *i2 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	printf("%d\n", ft_is_sort(i));
	printf("%d\n", ft_is_sort(i1));
	printf("%d\n", ft_is_sort(i2));
	return 0;
}
