/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:15:24 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 01:12:03 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*st;
	int		i;
	int		len;

	len = ft_strlen(src) + 1;
	st = malloc(len);
	if (st == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		st[i] = src[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

t_list *ft_create_elem(char *data)
{
	t_list *s;
	
	if (!(s = malloc(sizeof(t_list))))
		return (NULL);
	if(!(s->str = malloc(sizeof(data))))
		return (NULL);
	s->str = data;
	s->next = 0;
	return (s);
}

t_list 	*ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *begin;
    t_list *s;
    i = 0;
    begin = s;
    while (i < size)
    {
        s->next = ft_create_elem(strs[i]);
        i++;
    }
    return (begin);
}
