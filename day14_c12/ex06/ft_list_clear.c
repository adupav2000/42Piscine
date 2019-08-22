/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 11:08:31 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 11:17:05 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_clear(t_list *begin_list,void(*free_fct)(void*))
{
	t_list *s;
	
    while (begin_list->next)
    {
    	(*free_fct)(begin_list->next->data);
    	s = begin_list;
    	begin_list = begin_list->next;
    	free(s);
    }

}

