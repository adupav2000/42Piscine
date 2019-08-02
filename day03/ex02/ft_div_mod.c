/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:25:17 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 11:34:28 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void){
	int a = 32;
	int b = 12;
	int c;
	int d;
	ft_div_mod(a, b, &c, &d);	
	printf("%d %d\n", c, d );
}
void ft_div_mod(int a, int b, int *div, int *mod){
	*mod = a/b;
	*div = a%b;	
}
