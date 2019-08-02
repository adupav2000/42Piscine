/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:46:52 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 12:26:18 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

void ft_putchar(char c)
{
		write( 1, &c, 1);
}

int main(void){
	char *str;
	str = "lol;skeufj..olol";
	ft_putstr(str);
}

void ft_putstr(char *str){
	int length;
	length = 0;
	while(str[length] != 0){
		ft_putchar(str[length]);
		length++;
	}

}
