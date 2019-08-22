/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:58:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 14:25:59 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		s;
	char	*change;

	s = 0;
	while (tab[s])
	{
		i = 0;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) < 0)
			{
				change = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = change;
			}
			i++;
		}
		s++;
	}
}
