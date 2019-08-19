/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lothieve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:52:04 by lothieve          #+#    #+#             */
/*   Updated: 2019/08/18 17:51:11 by lothieve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include "list.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_split
{
	char *left;
	char *right;
}				t_split;

int				ft_strlen(char *str);
t_list			*create_elem(char *nb, char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
t_list			*parse(char *path);
char			*ft_strnedup(char **str, unsigned int n);
char			*ft_strndup(char *str, int n);
void			ft_putstr(char *str);
int				print_num(t_list *index, char *num);
#endif
