/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:53:25 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/21 14:36:20 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "op_functions.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

long long int read_num(char *char_num)
{
	long long int ret_val;
	int i;
	int len;

	len = ft_strlen(char_num);
	ret_val = 0;
	i = 0;
	while (len - i)
		ret_val = (ret_val * 10) + ((char)char_num[i++] - 48);
	return (ret_val);
}

long long int return_null(long long int n, long long int n2)
{
	(void)n;
	(void)n2;
	return (0);
}

void *ret_good_f_name(char *operator)
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

void	ft_putnbr(long long int nb)
{
	char c;
	long long int  nb22;

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

int main(int argc, char const *argv[])
{
	long long int num_1;
	long long int num_2;
	long long int (*operator)(long long int, long long int);

	if (argc != 4)
		return (-1);
	num_1 = read_num((char *)argv[1]);
	num_2 = read_num((char *)argv[3]);
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
