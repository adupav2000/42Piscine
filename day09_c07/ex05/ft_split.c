/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:51:44 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/15 00:20:55 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int return_charset_pos(int index, char *str, char *charset)
{
	int index_pos;
	int pos_in_char;
	int pos_in_charset;

	index_pos = 0;
	pos_in_char = 0;
	while (str[pos_in_char])
	{
		pos_in_charset = 0;
		while (charset[pos_in_charset])
		{
			if (charset[pos_in_charset] == str[pos_in_char])
			{
				if (index_pos++ == index)
					return (pos_in_char);
			}
			pos_in_charset++;
		}
		pos_in_char++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}
/*returns a string between the two index wich are considered as char pos in the string
index_begin and index_end are both included 

*/
char *return_split_string_part(int index_begin, int index_end, char *full_char)
{
	char *str;
	int i;

	i = 0;
	if ((index_end - index_begin) <= 0 || ft_strlen(full_char) <= 1)
		return (NULL);
	str = malloc(sizeof(str)*(index_end - index_begin) + 1);
	while (index_begin <= index_end)
		str[i++] = full_char[index_begin++];
	str[i] = 0;
	return (str);
}

char **ft_split(char *str, char *charset)
{
	int i;
	char **ret_val;
	int pos_0;
	int pos_1;

	i = 0;
	ret_val = NULL;
	pos_1 = 0;
	pos_0 = 0;
	while (return_charset_pos(i, str, charset))
	{
		pos_0 = return_charset_pos(i, str, charset);
		pos_1 = return_charset_pos((i + 1), str, charset);
		if (pos_1 == -1)
		{
			pos_1 = ft_strlen(str);
			*ret_val[i] = malloc(sizeof(char)*(pos_1 - pos_0) + 1);
			ret_val[i] = return_split_string_part((pos_0 + 1), (pos_1), str);
			ret_val[i][pos_1 - pos_0 + 1] = 0;
			break;
		}
		if (i == 0)
		{
			pos_1 = ft_strlen(str);
			printf("%s\n", "position - 1");
			ret_val[i] = malloc(sizeof(char)*(pos_1 - pos_0) + 1);
			printf("%s\n", "position - 1");
			ret_val[i] = return_split_string_part((pos_0), (pos_1 - 1), str);//changed the position of pos_0
			printf("%s\n", "position - 1");
			ret_val[i][pos_1 - pos_0 + 1] = 0;
		}
		else 
		{
			ret_val[i] = malloc(sizeof(char)*(pos_1 - pos_0) + 1);
			ret_val[i] = return_split_string_part((pos_0 + 1), (pos_1 - 1), str);
			ret_val[i][pos_1 - pos_0 + 1] = 0;
		}
	}
	return (ret_val);
}