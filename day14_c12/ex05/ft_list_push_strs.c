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

t_list *ft_create_elem(str *data)
{
	t_list *s;
	
	if (!(s = malloc(sizeof(struct s_list))))
		return (NULL);
	if(!(s->data = malloc(sizeof(data))))
		return (NULL);
	s->data = data;
	s->next = 0;
	return (s);
}

t_list 	*ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *begin; 


	i = 0;
	t_list *st_begin = st[0]; 	
	while (i < size)
	{
		st[i]
		i++;
	}
}
