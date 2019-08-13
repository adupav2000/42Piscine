/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:38:02 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/13 19:52:10 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"

// long int read_nbr_in_base_ret_dec_val(char *nbr, char *base_from)
// {
// 	long int ret_val;

// 	ret_val = 0;
	

// }

int	fetch_dec_val(int status, char *str, char *base)
{
	int i1;
	int i2;
	int result;

	result = 0;
	i1 = status;
	while (str[i1])
	{
		if (!is_in_base(str[i1], base))
			return (0);
		i2 = 0;
		while (!(str[i1] == base[i2]))
			i2++;
		result = (result * ft_strlen(base)) + i2;
		i1++;
	}
	return (result);
}

char *fetch_real_val(char *nbr, char *base)
{
	int i;
	char *ret_val;
	char pos;
	int i2;

	i = 0;
	while (nbr[i] == '\t' || nbr[i] == '\n' || nbr[i] == '\v' 
		|| nbr[i] == '\r' || nbr[i] == ' ' || nbr[i] == '\f')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-' && pos == '-')
			pos = '';
		else if (nbr[i] == '-' && pos == '')
			pos = '-';
		i++;
	}
	// allocates memrory for the 
	ret_val = malloc(sizeof(char) * (ft_strlen(nbr) - i) + 1);
	i2 = 0;
	if (pos == '-')
		ret_val[i2++] = pos;
	while (nbr[i])
	{
		if (!is_in_base(nbr[i]))
			return (0);
		ret_val[i2++] = nbr[i++];
	}
	return (ret_val);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int value_at_point;
	int i;

	if(check_base(base_from) && check_base(base_to))
		return (0);
	i = 0;

	while (nbr[i])
	{
		get_dec
	}

}


"01"
"0123456789abcdef"

"10000"