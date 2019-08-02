/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:35:18 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 11:46:11 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void){
	int a;
	int b;
	a = 33;
	b = 12;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);

}

void ft_ultimate_div_mod(int *a, int *b){
	int first_result;
	int second_result;
	first_result = *a / *b;
	second_result = *a % *b;
	*a = first_result;
	*b = second_result;

}
