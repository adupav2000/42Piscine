/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:27:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 18:23:12 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int i_2;
	int extract;

	i = 0;
	while (i < size)
	{
		i_2 = 0;
		while (i_2 < (size - 1))
		{
			if (tab[i_2] > tab[i_2 + 1])
			{
				extract = tab[i_2 + 1];
				tab[i_2 + 1] = tab[i_2];
				tab[i_2] = extract;
			}
			i_2++;
		}
		i++;
	}
}
