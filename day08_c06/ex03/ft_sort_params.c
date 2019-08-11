/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:54:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/10 23:29:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
	write(1, &"\n", 1);
}

int	ft_strcmp_evo(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	while (s2[i] || s1[i])
	{
		if ((s1[i] - s2[i]))
			x += (s1[i] - s2[i]);
		i++;
	}
	return (x);
}

int main(int argc, char *argv[])
{
	char **argv_copy = argv;
	int i;
	int i_2;
	char *extract;

	i = 0;
	while (i++ < argc )
	{
		i_2 = 1;
		while (i_2 < (argc - 1))
		{
			printf("%s\n", argv_copy[i_2 + 1]);
			if (0 < ft_strcmp_evo(argv_copy[i_2 + 1], argv_copy[i_2]))
			{
				extract = argv_copy[i_2 + 1];
				argv_copy[i_2 + 1] = argv_copy[i_2];
				argv_copy[i_2] = extract;
			}
			i_2++;
		}
	}
	i = 1;
	while (argv_copy[i])
		ft_putstr(argv_copy[i++]);
	return (0);
}
