/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:51:15 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 00:32:14 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
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

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *pointer;
	t_list *last_el;

	last_el = ft_create_elem(data);
	pointer  = *begin_list;
	while (pointer)
		pointer = pointer->next;
	pointer = last_el;
}
