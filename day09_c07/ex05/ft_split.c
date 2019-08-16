/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:51:44 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 15:53:21 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


int return_charset_pos(int index, char *str, char *charset)
{
	int index_pos;// index en fonction du nombre de caractere present 
	//dans la charset découvert
	int pos_in_char;// position a un moment donné dans str (donné en argument)
	// pos_in_char est la valeur renvoyé
	int pos_in_charset;// sert a scanner le charset 

	index_pos = 0;
	pos_in_char = 0;
	while (str[pos_in_char])
	{
		pos_in_charset = 0;// pour bien passer dans toute la charset
		while (charset[pos_in_charset]) // tant qu'il y a des element dans la charset 
		{
			if (charset[pos_in_charset] == str[pos_in_char]) // est ce que l'element est dans la charset
			{
				if (index_pos++ == index) // on a trouvé un charset, incrementation de index_pos
					return (pos_in_char);// si index_pos 
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

int return_count_of_words(char *str, char *charset)
{
	int word_num;
	int charset_pos;
	int str_pos;

	word_num = 1;
	str_pos = 0;
	while (str[str_pos])
	{
		charset_pos = 0;
		while(charset[charset_pos])
		{
			// printf("%c - %c - %d\n", charset[charset_pos], str[str_pos], word_num);
			if (charset[charset_pos] == str[str_pos] 
				&& str_pos != ((ft_strlen(str) - 1) | 0))
				word_num++;
			if (charset[charset_pos] == str[str_pos - 1]
				&& charset[charset_pos] == str[str_pos])
				word_num--;
			charset_pos++;
		}
		str_pos++;
	}
	return (word_num);
}


char **ft_split(char *str, char *charset)
{
	int i;
	char **ret_val;
	int pos_0;
	int pos_1;

	i = 0;
	ret_val = malloc(sizeof(char **)*(return_count_of_words(str, charset) + 1));
	pos_1 = 0;
	pos_0 = 0;
	while (return_charset_pos(i, str, charset) != -1)
	{
		pos_1 = return_charset_pos(i, str, charset);
		if (pos_1 == -1)
		{
			pos_1 = ft_strlen(str);
			break;
		}
		pos_1--;
		ret_val[i] = (char *)malloc(sizeof(char)*(pos_1 - pos_0 + 4));
		ret_val[i] = return_split_string_part((pos_0), (pos_1), str);
		ret_val[pos_1 - pos_0 + 1] = 0;
		printf("pos_0 = %d || pos_1 = %d || i = %d || ret_val[i] = %s\n\n", pos_0, pos_1, i , ret_val[i]);
		pos_0 = return_charset_pos(i, str, charset) + 1;	
		i++;
	}
	return (ret_val);
}