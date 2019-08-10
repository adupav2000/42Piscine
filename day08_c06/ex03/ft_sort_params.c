/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:54:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/10 15:36:01 by adu-pavi         ###   ########.fr       */
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
	i[3] = 1;
	while (i[0] < case_to_get)
	{
		while (str[i[3]] != i[0])
		{
			i[3]++;
		}
		i[0]++;
		i[1]++;
		
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;
	int case_fol;


	i = 0;
	while (argv[i])
	{
		case_fol = get_case_in_ascii_order(i, *argv);
		write(1, argv[case_fol], 1);
		i++;
	}
	return 0;
}