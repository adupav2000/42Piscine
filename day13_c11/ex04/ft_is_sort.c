/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:45:48 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 18:15:36 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	haut;
	int	bas;

	haut = 0;
	bas = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i], tab[i]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i]) <= 0)
			bas++;
		i++;
	}
	if (i == haut || i == bas)
		return (1);
	return (0);
}
