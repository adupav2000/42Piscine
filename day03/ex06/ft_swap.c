/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 13:05:08 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 13:10:02 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void){
	int a = 4;
	int b = 3;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);	


}


void ft_swap(int *a, int *b){
	int value_a; 
	value_a = *a;
	*a = *b;
	*b = value_a;
	
}
