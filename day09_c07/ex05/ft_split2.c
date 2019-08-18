/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:09:24 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/18 14:59:24 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char *str, char *charset)
{
	char **ret_val;

}


int mem_alloc(char *str, char *charset, int pos)
{
	int i;
	int	i_1;
	int malloc_table;
	int malloc_char;
	int trace;


	malloc_table = 0;
	while (str[i])
	{
		i_1 = 0;
		trace = 0;
		while (charset[i_1])
		{
			if (charset[i_1] == str[i] && i != (0 | ft_strlen(str)))
			{
				trace++;
				malloc_table++;
			}
			if (charset[i_1] == str[i - 1])
			{
				trace--;
				malloc_table--;
			}
			if (malloc_table == pos && trace == 1)
				return ();				
			i_1++;
		}
	}
}