/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:54:06 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/12 23:19:39 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strcmp(char *s1, char *s2)
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

int		main(int argc, char *argv[])
{
	char	**argv_copy;
	int		i[3];
	char	*extract;

	if (argc < 2)
		return (1);
	i[0] = 0;
	argv_copy = argv;
	while (i[0]++ < (argc * 2))
	{
		i[1] = 0;
		while (argv_copy[++i[1] + 1])
		{
			if (0 < ft_strcmp(argv_copy[i[1]], argv_copy[i[1] + 1]))
			{
				extract = argv_copy[i[1] + 1];
				argv_copy[i[1] + 1] = argv_copy[i[1]];
				argv_copy[i[1]] = extract;
			}
		}
	}
	i[0] = 1;
	while (argv_copy[i[0]])
		ft_putstr(argv_copy[i[0]++]);
	return (0);
}
