/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:49:11 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 16:33:28 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_list
	*create_elem(char *nb, char *str)
{
	t_list *elem;

	elem = NULL;
	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->nbr = nb;
	elem->value = str;
	elem->next = NULL;
	return (elem);
}
