/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:58:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 22:45:55 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_combn(int n);

int main(void){
	ft_print_combn(32);
}
void ft_print_combn(int n){
	char virgule = ',';
	char espace = ' ';
	int i = 0;
	int iRef, i2Ref;
	 while (i <= 9){
	     int i2 = i + 1;
	     while(i2 <= 9 ){
			 	iRef = i + 48;
				i2Ref = i2 + 48;
	             write(1, &i, 1);
	             write(1, &i2, 1);
	             write(1, &virgule, 1);
	             write(1, &espace, 1);
	             i2++;
	     }
	     i++;
	 }
}




