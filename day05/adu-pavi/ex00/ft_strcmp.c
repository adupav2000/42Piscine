/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:33:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/07 21:03:19 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
}
