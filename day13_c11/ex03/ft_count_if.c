/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:39:12 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/20 17:45:26 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int ret_val;

	i = 0;
	ret_val = 0;
	while (i < length)
	{
		if ((*f)(tab[i++]))
			ret_val++;
	}
	return (ret_val);
}