/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:58:38 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/01 18:39:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_print_alphabet(void);

void ft_print_alphabet()
{
	int i = 97; 
	while(i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
