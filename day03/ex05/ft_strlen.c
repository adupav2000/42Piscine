/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 12:27:35 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/02 13:03:38 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void){
	char *str;
	str = "slkfh;ajf;sjfh";
	int x = ft_strlen(str);	
	printf("%d\n", x);

}

int ft_strlen(char *str){
	int length;
	length = 0;
	while(str[length] != 0){
		length++;
	}
	return length;
}
