/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:36:37 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/08 11:36:23 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_str_is_lowercase.c"

int main()
{
	char *x = "asdgfdshgetshgdsgfdshytshgfdhtrsthgfdshtrgfjhrtgsjghfsurtsjgfsurtsjgf";
	// char y[12] = "France";
	printf("%d\n", ft_str_is_lowercase(x));
}




