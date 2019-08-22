/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:27:11 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/22 20:19:24 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>

int		read_num(char *char_num);
int		ft_atoi(char *str);
int		puissance(int nb, int mult, int fois);
int		is_white_space(char x);
int		return_null(int n, int n2);
void	*ret_good_f_name(char *operator);
void	ft_putnbr(int nb);
int		main(int argc, char const *argv[]);
int		division(int num_1, int num_2);
int		addition(int num_1, int num_2);
int		modulo(int num_1, int num_2);
int		multiplication(int num_1, int num_2);
int		substraction(int num_1, int num_2);

#endif
