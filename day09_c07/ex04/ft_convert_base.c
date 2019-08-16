/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlainduPavillon <AlainduPavillon@student.42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:38:02 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 01:45:33 by AlainduPavillon  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"

long long int	fetch_dec_val(char *str, char *base)
{
	int i1;
	int i2;
	int pos;
	long long int result;

	result = 0;
	i1 = 0;
	pos = 1;
	if (str[i1] == '-')
	{
		i1++;
		pos = -1;
	}
		
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
	int pos_int; 
	int i2;

	i = 0;
	pos_int = 1;
	while (nbr[i] == '\t' || nbr[i] == '\n' || nbr[i] == '\v' 
		|| nbr[i] == '\r' || nbr[i] == ' ' || nbr[i] == '\f')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			pos_int *= -1;
		i++;
	}
	if (pos_int == -1)
		pos = '-';
	else 
		pos = (char)0;
	// allocates memrory for the 
	ret_val = malloc(sizeof(char) * (ft_strlen(nbr) - i) + 1);
	i2 = 0;
	if (pos == '-')
		ret_val[i2++] = pos;
	while (nbr[i])
	{
		if (!is_in_base(nbr[i], base))
			return (0);
		ret_val[i2++] = nbr[i++];
	}
	return (ret_val);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long int value_in_dec;
	int i;
	char *ret_val;
	printf("STAGE -- 1 --- FUNCTION ft_convert_base\n");
	if(!(check_base(base_from) && check_base(base_to)))
		return (NULL);
	i = 0;
	while (nbr[i])
	{
		printf("%s at Status - %d, checking if %c is in %s\n", "stable = princip check", i, nbr[i], base_from);
		if (!is_in_base(nbr[i++], base_from))
			return (NULL);
	}
	printf("STAGE -- 2 --- FUNCTION ft_convert_base\n");

	value_in_dec = fetch_dec_val(nbr, base_from);
	printf("result = '%lld'\n", value_in_dec);
	printf("STAGE -- 2 --- FUNCTION ft_convert_base\n");
	ret_val = convert_dec_to_base(value_in_dec, base_to);
	printf("NO _SEG_FAULT _____ CHECK ____ POSITIV\n");

		printf("%s\n", ret_val);
	return  (ret_val);
}
