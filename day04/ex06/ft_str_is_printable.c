/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:37:55 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/08/04 19:38:03 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str);
int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while(str[length] != 0)
    {
        length++;
    }
    return (length);
}

int is_printable(char x)
{
    if (x > 126 || x < 32)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int ft_str_is_printable(char *str){
	int i;
    int ret = 1;
    
    i = -1;
    if(!ft_strlen(str))
       ret = 1; 
    while(str[++i])
    {
        if(!is_printable(str[i]))
            ret = 0;
    }
    return (ret);
}
