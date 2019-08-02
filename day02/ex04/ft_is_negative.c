/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:34:42 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 17:48:34 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer_1;
	char	answer_2;

	answer_1 = 'N';
	answer_2 = 'P';
	if (n >= 0)
	{
		write(1, &answer_2, 1);
	}
	else if (n < 0)
	{
		write(1, &answer_1, 1);
	}
}
