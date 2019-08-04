/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 17:16:20 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 18:41:01 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int half_length;
	int extract;
	int i;

	half_length = size / 2;
	i = 0;
	while (i <= half_length)
	{
		extract = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = extract;
		i++;
	}
}
