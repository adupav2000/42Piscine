/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:30:16 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 19:32:57 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putnbr(int nb);


int main(void){
	ft_putnbr(44);
}
void ft_putnbr(int nb){
	int divider;
	int extract;
	char decVal;
	divider = 10000;

	while(divider >= 1){
			extract = nb / divider;
			nb = nb - extract * divider;
			if (extract > 0){
				decVal = extract + 48;
				write(1, &decVal, 1);
			}
			divider = divider / 10;
		}
	}

