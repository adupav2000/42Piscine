/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 12:14:46 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 12:58:04 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(char x)
{
	if (x == 127 || x < 32)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	convert_dec_to_hex_under_16(int ref)
{
	char ret;

	if (ref < 10)
	{
		ret = ref + 48;
		return (ret);
	}
	else
	{
		ret = ref + 97 - 10;
		return (ret);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i[2];
	char	not_printable;

	i[0] = 0;
	while (str[i[0]])
	{
		if (!is_printable(str[i[0]]))
		{
			not_printable = 92;
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i[0]] / 16);
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i[0]] % 16);
			write(1, &not_printable, 1);
		}
		else
		{
			write(1, &str[i[0]], 1);
		}
		i[0]++;
	}
}
