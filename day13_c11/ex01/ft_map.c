/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:23:56 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/20 17:31:39 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *ret_val;

	ret_val = malloc(sizeof(int) * length);
	while (i < length)
		ret_val[i] = (*f)(tab[i++]);
	return (ret_val);
}