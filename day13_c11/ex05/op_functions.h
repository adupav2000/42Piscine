/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:27:16 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/21 00:48:54 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_FUNCTIONS
 #define OP_FUNCTIONS


long long int division(long long int num_1, long long int num_2)
{
	return (num_1 / num_2);
}

long long int addition(long long int num_1, long long int num_2)
{
	return (num_1 + num_2);
}

long long int modulo(long long int num_1, long long int num_2)
{
	return (num_1 % num_2);
}

long long int multiplication(long long int num_1, long long int num_2)
{
	return (num_1 * num_2);
}

long long int substraction(long long int num_1, long long int num_2)
{
	return (num_1 - num_2);
}


 #endif 