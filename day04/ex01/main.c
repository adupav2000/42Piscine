/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:36:37 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 18:37:58 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <stdio.h>
#include <string.h>
int main()
{
	char x[12] = "Australie";
	char y[12] = "Fance";
	printf("%s\n", ft_strncpy(x, y, 5));
	printf("%s\n", x);
	printf("%s\n", strncpy(x, y, 5));
	printf("%s\n", x);
}




