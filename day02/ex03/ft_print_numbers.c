/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:19:19 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 18:38:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int main(void){
	 ft_print_numbers();	
}

void ft_print_numbers(void)
{
	int i = 48; 
	while(i <= 57)
	{
		write(1, &i, 1);
		i++;
	}

}



