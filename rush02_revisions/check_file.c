/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:01:42 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/18 17:58:29 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.c"


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

int is_valid(char *buffer, char *word, int status)
{
	int i_limit;
	char str_check[12];

	i_limit 
	while (i_limit <= status)
	{
		i_1 = 0;
		while (buffer[i_limit] == (' ' | '\n'))
			i_limit++;
		while (buffer[i_limit] >= '0' && buffer[i_limit] <= '9')
			i_limit++;
		while (buffer[i_limit] == (' ' | '\n'))
			i_limit++;
		if (buffer[i_limit] == ':')
			i_limit++;
		while (buffer[i_limit] == (' ' | '\n'))
			i_limit++;
		while (buffer[i_limit] >= 'a' && buffer[i_limit] <= 'z' 
			|| buffer[i_limit] >= 'A' && buffer[i_limit++] <= 'Z')
			str_check[i_1++] = buffer[i_limit++];
		str_check[i_1] = 0;
		if (ft_strcmp(str_check, word))
			return (0);
		i_limit++;
	}
	return (1);
}


int check_file(char *buffer)
{
	char check[12];
	int i;
	int i_1;

	while (buffer[i])
	{
		check = 0;
		while (buffer[i] >= '0' && buffer[i] <= '9')
		{
			check = 1;
			i++;
		}
		while (buffer[i] == (' ' | '\n'))
		{
			i++;
		}
		while (buffer[i] >= 'a' && buffer[i] <= 'z' 
			|| buffer[i] >= 'A' && buffer[i++] <= 'Z')
			check[i_1++] = buffer[i];
		check[i_1] = 0;
		is_valid(buffer, check, i);
		buffer = NULL;
		while (buffer[i] == )

	}
	
}