/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:51:44 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/13 21:42:03 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EVEN(x) (!((x) % 2))
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
#include <unistd.h>
typedef int t_bool;
enum { FALSE, TRUE };