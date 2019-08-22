/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:58:49 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 14:02:08 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_advanced_sort_string_tab.c"
#include <stdio.h>


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

int main(int argc, char const *argv[])
{
	(void)argc;
	int (*s)(char *, char *);
	s = &ft_strcmp;
	char **t = (char **)argv;
	ft_advanced_sort_string_tab(t, s);
	int i = 0;
	while (t[i])
	{
		printf("%s\n", t[i++]);
	}
	return (0);
}