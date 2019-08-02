/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:10:05 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 22:45:38 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int main(){
	       ft_print_comb2();
}      

void ft_print_comb2(void){
    char virgule = ',';
    char espace = ' ';
    int i;
	int i2;
	int i3; 
	int i4;
	int iRef;
	iRef = 57;
	i = 48;
   while(i <= 57){
        i2 = i;
	   	while(i2 <= 57){
			i3 = i;
			while(i3 <= 57){
	          	i4 = i3 + 1;
				while(i4 <= 57){
					if(!(i == i3 && i2 == i4)){
						write(1, &i, 1);
	         	 		write(1, &i2, 1);
	         	 		write(1, &espace, 1);
						write(1, &i3, 1);
						write(1, &i4, 1);
						write(1, &virgule, 1);
					}
					i4++;
				}
					if(i4 > 57){
						if(!(i == i3 && i2 == iRef)){
				          write(1, &i, 1);
				          write(1, &i2, 1);
				          write(1, &espace, 1);
				          write(1, &i3, 1);
				          write(1, &iRef, 1);
				          write(1, &virgule, 1);
						 }
				}
				i3++;
			}
		  i2++;
		    }
		i++;
	}
}               
