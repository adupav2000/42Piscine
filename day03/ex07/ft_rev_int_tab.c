/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 17:16:20 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/03 20:28:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int ex[11] = {1,2,3,4,5,6,7,8,9,2};
		
	ft_rev_int_tab(ex, 11);
	for (int i = 0; i < 11; i++)
            printf("%d", &ex[i]);	
	return 0;
}


void ft_rev_int_tab(int *tab, int size)
{
	int half_length;
	int extract;
	int i;
	
	half_length = size / 2;
	i = 0;
	while(i <= half_length)
	{
		extract = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = extract;
		i++;
	}
}
