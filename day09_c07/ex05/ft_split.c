/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:51:44 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/16 00:02:42 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*
En fonction de l'index donné, la fonction renvoie une position qui correspond 
a un element du charset 
exemple: 
	str = "abc;efg,abc/efg;abc;efg"
	charset = ";,/"
	avec index = 0 -> return = 4 car str[4] = ';' qui se trouve dans le charset
si l'index est trop haut la fonction renverra -1
*/
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int length;

	length = 0;
	while (str[length] != 0)
	{
		ft_putchar(str[length]);
		length++;
	}
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




char *replace_charset(char *str, char *charset)
{
	char *ret_val;
	int i;
	int i1;
	int charset_pos;
	int check;

	ret_val = malloc(sizeof(char)*(ft_strlen(str) + 1));
	i = 0;
	i1 = 0;
	while(str[i])
	{
		charset_pos = 0;
		check = 0;
		while (charset[charset_pos])
		{
			if (charset[charset_pos] == str[i])
				check = 1;
			if (str[i + 1] == charset[charset_pos] && str[i] == charset[charset_pos])
				i++;
			charset_pos++;
		}
		if (check == 1)
			ret_val[i1] = charset[0];
		else 
			ret_val[i1] = str[i];
		i1++;
		i++;
	}
	ret_val[i1] = 0;
	return (ret_val);
}


int return_count_of_words(char *str, char *charset)
{
	int word_num = 0;
	int charset_pos;
	int str_pos;

	return (word_num);
}


char **ft_split(char *str, char *charset)
{
	int i;
	char *ret_val;
	char *ip;
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
			ip = malloc(sizeof(char)*(pos_1 - pos_0) + 1);
			ip = return_split_string_part((pos_0 + 1), (pos_1), str);
			ip[pos_1 - pos_0 + 1] = 0;
			ret_val[i] = &ip;
			break;
		}
		if (i == 0)
		{
			pos_1 = return_charset_pos((i + 1), str, charset);
			ft_putstr("position 1\n");
			printf("%d, pos_0, %d, pos_1, %d\n", (pos_1 - pos_0 + 1), pos_0, pos_1);
			// ret_val[i] = malloc(sizeof(char)*(pos_1 - pos_0 + 1));
			ip = malloc(sizeof(char)*(pos_1 - pos_0 + 1));
			ft_putstr("IP a ete assigné\n");

			// printf("%s\n", "position - 1");
			ip = return_split_string_part((pos_0), (pos_1 - 1), str);//changed the position of pos_0
			// printf("%s\n", "position - 1");
			ip[pos_1 - pos_0 + 1] = 0;
			ft_putstr(ip);
			ret_val[i] = &ip;
		}
		else 
		{
			ip = malloc(sizeof(char)*(pos_1 - pos_0 + 1));
			ip = return_split_string_part((pos_0 + 1), (pos_1 - 1), str);
			ip[pos_1 - pos_0 + 1] = 0;
			ret_val[i] = &ip;
		}
		i++;
	}
	return (ret_val);
}