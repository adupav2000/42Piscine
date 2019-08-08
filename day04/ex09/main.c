/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 15:36:37 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/07 19:21:14 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "ft_strcapitalize.c"

int main()
{
	char x[] = "je a;dljk;ae;iaefn a;lcpecw65wf65wr. wg4g6wgw ";
	printf("%s\n", ft_strcapitalize(x));

}




