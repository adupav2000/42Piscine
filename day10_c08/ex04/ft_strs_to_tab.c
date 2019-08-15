/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:05:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/14 22:50:44 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *tab;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * ac)))
		return (NULL);
	while ((i + 1) < ac)
	{
		tab[i].size  = ft_strlen(av[i + 1]);
		if (!(tab[i].str = (char *)malloc(sizeof(char) * ft_strlen(av[i + 1]) + 1)))
			return (NULL);
		tab[i].str = av[i + 1];
		if (!(tab[i].copy = (char *)malloc(sizeof(char) * ft_strlen(av[i]) + 1)))
			return (NULL);
		tab[i].copy = ft_strcpy(tab[i].copy, av[i + 1]);
		i++;
	}

	tab[i].size = 0;
	if (!(tab[i].str = (char *)malloc(sizeof(char))))
		return (NULL);
	tab[i].str = NULL;
	if (!(tab[i].copy = (char *)malloc(sizeof(char))))
		return (NULL);
	tab[i].copy = NULL;

	return (tab);
}