/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:14:02 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/21 17:37:35 by adu-pavi         ###   ########.fr       */
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

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *t;

	t = ft_create_elem(data);
	t->next = *begin_list;
	*begin_list = t;
}
