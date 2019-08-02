/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:08:35 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 11:22:57 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void){
	int a = 33;
	void *ptr_1 = &a;
	void *ptr_2 = &ptr_1;
	void *ptr_3 = &ptr_2;
	void *ptr_4 = &ptr_3;
	void *ptr_5 = &ptr_4;
	void *ptr_6 = &ptr_5;
	void *ptr_7 = &ptr_6;
	void *ptr_8 = &ptr_7;
	void *ptr_9 = &ptr_8;
	ft_ultimate_ft(ptr_9);
	printf("%d\n", a);
}

void ft_ultimate_ft(int *********nbr){
	*********nbr = 42;	

}

