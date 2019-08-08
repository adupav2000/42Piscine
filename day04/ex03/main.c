/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:36:37 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 11:29:07 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

int main()
{
	char *x = "123456!@^";
	// char y[12] = "France";
	printf("%d\n", ft_str_is_numeric(x));
}
