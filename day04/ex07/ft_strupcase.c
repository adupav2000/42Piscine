/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:38:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 19:38:11 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strupcase(char *str);


char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		printf("%c\n", str[i]);
		if (str[i] < 123 && str[i] > 96){
			str[i] = str[i] - ('a' - 'A');
		}
		printf("%c\n", str[i]);
		i++;
	}
	return str;
}

int main()
{
	char *str;
	str = "azertyuiofff U 4567890p";
	ft_strupcase(str);
	return 0;
}