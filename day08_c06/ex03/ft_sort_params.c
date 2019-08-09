/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:54:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/09 16:56:22 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		ft_putchar(str[length]);
		length++;
	}
}

int get_case_in_ascii_order(int case_to_get, char *str)
{
	int i[4];

	i[0] = 32;
	i[1] = 0;
	i[3] = 0;
	while (i[0] < case_to_get)
	{
		while (str[i[3]] != i[0])
		{
			i[3]++;
		}
		i[0]++;
		i[1]++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc[i])
	{
		get_case_in_ascii_order(i, *argv);
		i++;
	}
	return 0;
}