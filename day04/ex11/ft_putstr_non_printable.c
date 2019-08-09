<<<<<<< HEAD
#include <unistd.h>
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> 877f5d719c7fd8f0f9475316bdb3923d3656e39c
=======
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
>>>>>>> 25322072e3f3570cf836711e32897c1a9f048bac

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
<<<<<<< HEAD
		ret = ref + 87;
=======
		ret = ref + 97 - 10;
>>>>>>> 25322072e3f3570cf836711e32897c1a9f048bac
		return (ret);
	}
	return (0);
}

<<<<<<< HEAD
<<<<<<< HEAD
void ft_putstr_non_printable(char *str){
	int i;
	char not_printable;
=======
char *convert_dec_to_hex(int dec)
{
	int first;
	int last; 
	char qwert[4];
	int i;


	qwert[0] = 92;
	i = 1;
	qwert[1] =  convert_dec_to_hex_under_16(dec / 16);
	qwert[2] = convert_dec_to_hex_under_16(dec % 16);

	return (qwert);
}

void ft_putstr_non_printable(char *str){
	int i[2];
	char *not_printable;
>>>>>>> 877f5d719c7fd8f0f9475316bdb3923d3656e39c
=======
void	ft_putstr_non_printable(char *str)
{
	int		i[2];
	char	not_printable;
>>>>>>> 25322072e3f3570cf836711e32897c1a9f048bac

	i[0] = 0;
	while (str[i[0]])
	{
<<<<<<< HEAD
<<<<<<< HEAD
		if(!is_printable(str[i]))
		{ 
			not_printable = 92;
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i] / 16);
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i] % 16);
			write(1, &not_printable, 1);
			write(1, 0, 1);
=======
		if(!is_printable(str[i[0]]))
		{
			// printf("%s", convert_dec_to_hex((int)str[i[0]]));
			not_printable = convert_dec_to_hex((int)str[i[0]]);
			i[1] = 0;
			while (not_printable[i[1]])
			{
				write(1, &not_printable[i[1]], 4);
				i[1]++;
			}

>>>>>>> 877f5d719c7fd8f0f9475316bdb3923d3656e39c
		}	
=======
		if (!is_printable(str[i[0]]))
		{
			not_printable = 92;
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i[0]] / 16);
			write(1, &not_printable, 1);
			not_printable = convert_dec_to_hex_under_16(str[i[0]] % 16);
			write(1, &not_printable, 1);
		}
>>>>>>> 25322072e3f3570cf836711e32897c1a9f048bac
		else
		{
			write(1, &str[i[0]], 1);
		}
<<<<<<< HEAD
		i++;
=======
		i[0]++;
>>>>>>> 877f5d719c7fd8f0f9475316bdb3923d3656e39c
	}
}
<<<<<<< HEAD
<<<<<<< HEAD
=======

int main(void)
{
	char *str;
	str = "azer\ntyuio";
	printf("%s\n", convert_dec_to_hex(36));

	ft_putstr_non_printable(str);
	return 0;
}
>>>>>>> 877f5d719c7fd8f0f9475316bdb3923d3656e39c
=======
>>>>>>> 25322072e3f3570cf836711e32897c1a9f048bac
