/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:20:55 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 16:58:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "tail.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] && s1[i])
	{
		if ((s1[i] - s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_str_is_numeric(char *str)
{
	int i;
	int ret;

	ret = 1;
	i = 1;
	if (!ft_strlen(str))
		return (0);
	while (str[i] != 0)
	{
		if ((str[i] < 48 || str[i] > 57))
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}

int	read_num(char *char_num)
{
	int		ret_val;
	int		i;
	int		len;

	len = ft_strlen(char_num);
	ret_val = 0;
	i = 0;
	while (len - i)
		ret_val = (ret_val * 10) + ((char)char_num[i++] - 48);
	return (ret_val);
}

int	check_if_opt_c(char *argv_2, char *argv_3)
{
	if (!ft_strcmp(argv_2, "-c") && ft_str_is_numeric(argv_3))
		return (read_num(argv_3));
	else 
		return (0);
}

int main(int argc, char const *argv[])
{
	int i;
	int c_opt;

	c_opt = -2;
	i = 1;
	if (argc < 2)
	{
		return(read_output());
	}
	else
	{
		printf("asdasdh\n");
		if (argc > 3)
			if (c_opt == check_if_opt_c((char *)argv[2], (char *)argv[3]))
				i = i + 2;
		while (i < argc)
		{
			if (argc > 2)
				ft_putstr((char *)argv[i]);
			read_file((char *)argv[i], c_opt);
			i++;
		}
	}
	return (0);
}
