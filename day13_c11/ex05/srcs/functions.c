/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:53:25 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 20:07:26 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int					return_null(int n, int n2)
{
	(void)n;
	(void)n2;
	return (0);
}

void				*ret_good_f_name(char *operator)
{
	if (operator[0] == '+')
		return (&addition);
	else if (operator[0] == '-')
		return (&substraction);
	else if (operator[0] == '/')
		return (&division);
	else if (operator[0] == '%')
		return (&modulo);
	else if (operator[0] == '*')
		return (&multiplication);
	else
		return (&return_null);
}

void				ft_putnbr(int nb)
{
	char				c;
	int					nb22;

	nb22 = nb;
	if (nb22 == 0)
		write(1, &"0", 1);
	if (nb22 < 0)
	{
		nb22 = nb22 * -1;
		write(1, &"-", 1);
	}
	if (nb22 >= 10)
	{
		ft_putnbr(nb22 / 10);
		ft_putnbr(nb22 % 10);
	}
	else if (nb22 != 0)
	{
		c = nb22 + 48;
		write(1, &c, 1);
	}
}

int					main(int argc, char const *argv[])
{
	int num_1;
	int num_2;
	int (*operator)(int, int);

	if (argc != 4)
		return (-1);
	num_1 = ft_atoi((char *)argv[1]);
	num_2 = ft_atoi((char *)argv[3]);
	if (num_2 == 0 && argv[2][0] == '/')
		write(1, &"Stop : division by zero\n", 25);
	if (num_2 == 0 && argv[2][0] == '%')
		write(1, &"Stop : modulo by zero\n", 23);
	if (num_2 == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
		return (-1);
	operator = ret_good_f_name((char *)argv[2]);
	ft_putnbr((*operator)(num_1, num_2));
	write(1, &"\n", 1);
	return (0);
}
