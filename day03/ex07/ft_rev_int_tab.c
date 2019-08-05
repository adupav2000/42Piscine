/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 17:16:20 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/05 21:00:55 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int extract;
	int i;

	i = 0;
	while (i < (size - i))
	{
		extract = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = extract;
		i++;
	}
}
