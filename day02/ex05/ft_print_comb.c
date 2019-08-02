/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:49:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 22:46:02 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void){
	char	virgule;
	char	espace;
	int	i;

	virgule = ',';
	espace = ' ';
	i = 48;
	while (i <= 57){
		int i2 = i + 1;
		while (i2 <= 57 ){
			int i3 = i2 + 1;
			while (i3 <= 57){
				write(1, &i, 1);
				write(1, &i2, 1);
				write(1, &i3, 1);
				write(1, &virgule, 1);
				write(1, &espace, 1);
				i3++;
			}
			i2++;
		}
		i++;
	}
}
