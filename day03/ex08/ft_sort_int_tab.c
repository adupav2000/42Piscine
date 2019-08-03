/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:27:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/03 16:09:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int test[10] = {1,2,33,42,12,22,11,33,16, 3};
	ft_sort_int_tab(test, 10);
		
}

void ft_sort_int_tab(int *tab, int size)
{
	int const_size = size;
	int x;
	while(size >= 0)
	{
		int size_1 = const_size - 1;
		while (size_1 > 1)
		{
			if (tab[size-1] > tab[size])
			{
				x = tab[size];
				tab[size] = tab[size - 1];
				tab[size - 1] = x;
				for(int i = 0; i <= const_size ; i++)
				{
				printf("%d ", tab[i]);
				}
				printf("\n");
			}
			 size_1--;
		}
		size--;
	}
}

